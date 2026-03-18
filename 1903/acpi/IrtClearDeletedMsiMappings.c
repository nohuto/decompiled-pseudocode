/*
 * XREFs of IrtClearDeletedMsiMappings @ 0x1C009BF68
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0099C90 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     PcisuppGetBusSlotNumber @ 0x1C009BE04 (PcisuppGetBusSlotNumber.c)
 */

NTSTATUS __fastcall IrtClearDeletedMsiMappings(__int64 a1)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  NTSTATUS result; // eax
  PVOID Owner; // r10
  _DWORD *UserData; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v8[4]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v9; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v10; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF
  int v14; // [rsp+80h] [rbp+47h]

  v13 = 0LL;
  v14 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v9 = 0;
  result = RtlGetFirstRange(v2, &Iterator, &Range);
  while ( Range )
  {
    Owner = Range->Owner;
    if ( Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          if ( (UserData[1] & 8) != 0 && UserData[2] == 3 )
          {
            if ( (int)PcisuppGetBusSlotNumber((__int64)Owner, (int *)&v10, (int *)&v9, (__int64)v8, (__int64)&v13) >= 0 )
            {
              v7 = v9;
              v6 = v10;
            }
            else
            {
              v6 = 0LL;
              v7 = 0LL;
              v10 = 0;
              v9 = 0;
              v13 = 0LL;
              v14 = 0;
              v8[0] = 0;
            }
            ((void (__fastcall *)(__int64, __int64, __int64 *))HalPrivateDispatchTable[65])(v6, v7, &v13);
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
