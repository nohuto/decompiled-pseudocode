/*
 * XREFs of GreDwmCreatedBitmapRemotingOutput @ 0x1C0138D0C
 * Callers:
 *     NtGdiDwmCreatedBitmapRemotingOutput @ 0x1C0138CF0 (NtGdiDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     DrvModeChangeCompleteNotify @ 0x1C0138DA0 (DrvModeChangeCompleteNotify.c)
 */

void GreDwmCreatedBitmapRemotingOutput()
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v0, ghsemDynamicModeChange);
  GreAcquireSemaphoreSharedInternal(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() && (unsigned int)UserIsRemoteConnection() )
    DrvModeChangeCompleteNotify();
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v0);
}
