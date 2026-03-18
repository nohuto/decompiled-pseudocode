/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C00150B8
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00112E4 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002AF4 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a4 || !a3 || !a5 )
    return 3238002694LL;
  *a4 = 0;
  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 864) = *(_QWORD *)(a1 + 896);
  *(_DWORD *)(a1 + 800) = 1;
  NVMeAllocateDmaBuffer(a1, 2 * a3 + 2);
  return 3238002691LL;
}
