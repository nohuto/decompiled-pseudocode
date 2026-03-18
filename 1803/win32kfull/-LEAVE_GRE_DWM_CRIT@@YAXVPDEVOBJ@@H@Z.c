/*
 * XREFs of ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C5C7C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000A474 (GreTransferDwmStateToSpriteState.c)
 *     GreDwmStartup @ 0x1C00B4988 (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00B5278 (GreDwmShutdown.c)
 *     GreDesktopSwitch @ 0x1C00BCDD0 (GreDesktopSwitch.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C5B50 (GreSfmCloseCompositorRef.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
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
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *(_QWORD *)(a1 + 56));
  GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 56));
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
