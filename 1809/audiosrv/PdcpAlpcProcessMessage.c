/*
 * XREFs of PdcpAlpcProcessMessage @ 0x180133ED4
 * Callers:
 *     PdcpAlpcCallback @ 0x180133E70 (PdcpAlpcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     PdcpProcessMessageInternal @ 0x1801340C4 (PdcpProcessMessageInternal.c)
 *     PdcPrint @ 0x180134C6C (PdcPrint.c)
 */

__int64 __fastcall PdcpAlpcProcessMessage(RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rcx
  int v3; // ebx
  __int64 MessageAttribute; // rbp
  _BYTE v6[8]; // [rsp+48h] [rbp-3E0h] BYREF
  _BYTE v7[160]; // [rsp+50h] [rbp-3D8h] BYREF
  _BYTE v8[800]; // [rsp+F0h] [rbp-338h] BYREF

  memset_0(v7, 0, sizeof(v7));
  AlpcInitializeMessageAttribute(0x20000000LL, v7, 160LL, v6);
  AcquireSRWLockShared(a1 + 2);
  Ptr = a1[1].Ptr;
  if ( Ptr )
  {
    v3 = ZwAlpcSendWaitReceivePort(Ptr, 0LL, 0LL);
    MessageAttribute = AlpcGetMessageAttribute(v7, 0x20000000LL);
    if ( v3 == -1073741789 )
    {
      PdcPrint(1u, "%s: Error receiving message from PO %x\n");
      v3 = ZwAlpcCancelMessage(a1[1].Ptr, 0LL, MessageAttribute);
      ReleaseSRWLockShared(a1 + 2);
    }
    else
    {
      ReleaseSRWLockShared(a1 + 2);
      if ( v3 >= 0 )
        return (unsigned int)PdcpProcessMessageInternal(a1, v8, MessageAttribute);
      else
        PdcPrint(1u, "%s: Error receiving message from PO %x\n");
    }
  }
  else
  {
    ReleaseSRWLockShared(a1 + 2);
    return (unsigned int)-1073741758;
  }
  return (unsigned int)v3;
}
