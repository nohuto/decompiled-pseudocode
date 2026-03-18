/*
 * XREFs of ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0046234
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

__int64 __fastcall LEAVE_GRE_DWM_CRIT(__int64 a1, int a2)
{
  __int64 result; // rax

  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48));
  GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 48));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *(_QWORD *)(a1 + 64));
  GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 64));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  result = GreReleaseSemaphoreInternal(ghsemGreLock);
  if ( a2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return result;
}
