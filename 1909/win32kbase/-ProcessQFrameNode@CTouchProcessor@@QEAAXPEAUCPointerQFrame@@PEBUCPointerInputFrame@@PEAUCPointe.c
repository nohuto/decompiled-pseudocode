/*
 * XREFs of ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016EE8C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01643BC (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016D0FC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C015F578 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016B83C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016DD5C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0172E08 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessQFrameNode(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4)
{
  void *v8; // rdx
  CPointerInfoNode *v9; // rcx
  int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v8 = &WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      7,
      75,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  if ( !CPointerInfoNode::IsForManipulationThread(a4) || (v10 = 1, (*((_DWORD *)a4 + 1) & 0x200) != 0) )
    v10 = 0;
  if ( ((*(_DWORD *)a4 & 4) == 0 && a3 || CPointerInfoNode::IsForManipulationThread(v9)) && !v10 )
    CTouchProcessor::ProcessEnterLeave(this, a3, a4);
  v11 = *((_DWORD *)a2 + 37);
  v12 = v11;
  if ( (v11 & 1) != 0 && v10 )
  {
    v12 = v11 & 0xFFFFFFFE;
    *((_DWORD *)a2 + 38) = 22;
    *((_DWORD *)a2 + 37) = v12;
  }
  if ( (v12 & 1) != 0 )
  {
    if ( (*(_DWORD *)a4 & 1) == 0 )
    {
      CTouchProcessor::TrackCoalesceOnArrival(v12, a2, 2LL);
      *((_DWORD *)a2 + 37) &= ~1u;
      v12 = *((unsigned int *)a2 + 37);
    }
    if ( (v12 & 1) != 0 )
    {
      v13 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 8) != 0 || (v13 & 0x10) != 0 || (v13 & 0x40) != 0 || (v13 & 0x20) != 0 )
      {
        CTouchProcessor::TrackCoalesceOnArrival(v12, a2, 16LL);
        *((_DWORD *)a2 + 37) &= ~1u;
        v12 = *((unsigned int *)a2 + 37);
      }
    }
  }
  v14 = v12;
  if ( (v12 & 8) == 0 && (*(_DWORD *)a4 & 0x100000) != 0 && !v10 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(v12, a2, 9LL);
    *((_DWORD *)a2 + 37) |= 8u;
    v14 = *((_DWORD *)a2 + 37);
  }
  if ( (v14 & 1) == 0 || (v14 & 8) != 0 )
  {
    v14 &= ~2u;
    *((_DWORD *)a2 + 37) = v14;
  }
  if ( (v14 & 2) != 0 )
  {
    v16 = 1;
    *((_DWORD *)a2 + 37) ^= (*((_DWORD *)a2 + 37) ^ (2
                                                   * CTouchProcessor::CanCoalesceNodeWithPrevious(
                                                       this,
                                                       a3,
                                                       a4,
                                                       0LL,
                                                       a2,
                                                       (enum CPointerCoalesce *)&v16))) & 2;
    if ( (*((_DWORD *)a2 + 37) & 2) == 0 )
      CTouchProcessor::TrackCoalesceOnArrival(v15, a2, v16);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        7,
        76,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
}
