/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C00B7CB0
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     rimDispatchCompleteFrame @ 0x1C01509D4 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 */

void __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 408);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 17, (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 408);
    }
    *(_DWORD *)(a1 + 184) &= ~0x80000000;
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
}
