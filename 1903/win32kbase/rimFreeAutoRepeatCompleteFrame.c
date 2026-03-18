/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C00BAD10
 * Callers:
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     rimDispatchCompleteFrame @ 0x1C0153044 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0153230 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 */

void __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 408);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 17, (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 408);
    }
    *(_DWORD *)(a1 + 184) &= ~0x80000000;
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
}
