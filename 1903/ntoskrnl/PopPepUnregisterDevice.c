/*
 * XREFs of PopPepUnregisterDevice @ 0x14076EC08
 * Callers:
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PopPepProcessEvent @ 0x1400B1E84 (PopPepProcessEvent.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14017B8B8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1401911EC (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x140191458 (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *P)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(P + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)P);
  PopPepRemoveDevice(P);
  v3 = *((int *)P + 42);
  v4 = 0LL;
  if ( (_DWORD)v3 != 4 )
    v4 = *((unsigned int *)P + v3 + 35);
  PopPepUpdateIdleStateRefCount(v4, 0, 0);
  if ( *((_DWORD *)P + 45) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(unsigned int *)(P[25 * v2++ + 47] + 16), 0, 0);
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
