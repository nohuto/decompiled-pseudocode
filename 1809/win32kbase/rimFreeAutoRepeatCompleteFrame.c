/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C0095490
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C012689C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 */

void __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)(a1 + 408) )
  {
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x12u, (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids, a1);
    v2 = *(_QWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 184) &= ~0x80000000;
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
}
