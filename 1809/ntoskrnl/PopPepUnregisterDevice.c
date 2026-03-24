/*
 * XREFs of PopPepUnregisterDevice @ 0x14086DF1C
 * Callers:
 *     PopFxUnregisterDevice @ 0x14086A7AC (PopFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopPepProcessEvent @ 0x1400FF5B4 (PopPepProcessEvent.c)
 *     DbgPrintEx @ 0x140160460 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401724A8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1402DDCC8 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x1402DE1A4 (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
  PopPepUpdateIdleStateRefCount(v4, 0, 0LL);
  if ( *((_DWORD *)P + 45) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(unsigned int *)(P[25 * v2++ + 47] + 16), 0, 0LL);
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
