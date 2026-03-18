/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     rimPassivateSecondaryRims @ 0x1C00FD684 (rimPassivateSecondaryRims.c)
 *     rimDispatchCompleteFrame @ 0x1C00FE4B0 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 408) )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x12u,
      (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
      a1);
    v2 = *(_QWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 184) &= ~0x80000000;
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  return result;
}
