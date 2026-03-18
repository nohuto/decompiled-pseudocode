/*
 * XREFs of ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0046FD0
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C0045DB0 (GreSfmCloseCompositorRef.c)
 *     GreDesktopSwitch @ 0x1C00832F8 (GreDesktopSwitch.c)
 *     GreDwmStartup @ 0x1C00DAF94 (GreDwmStartup.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 *     GreDwmShutdown @ 0x1C015EE2C (GreDwmShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENTER_GRE_DWM_CRIT(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(ghsemDynamicModeChange)
    && !ExIsResourceAcquiredSharedLite(ghsemDynamicModeChange) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *a2 = 1;
  }
  GreAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  GreAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  GreAcquireSemaphore(*(_QWORD *)(a1 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *(_QWORD *)(a1 + 64), 4LL);
  GreAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  GreAcquireSemaphore(*(_QWORD *)(a1 + 48));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
}
