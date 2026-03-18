/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C001499C
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0010018 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0001DDC (SetPrpFromBuffer.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a4 || !a3 || !a5 )
    return 3238002694LL;
  *a4 = 0;
  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 872) = *(_QWORD *)(a1 + 904);
  *(_DWORD *)(a1 + 808) = 1;
  NVMeAllocateDmaBuffer(a1, 2 * a3 + 2);
  return 3238002691LL;
}
