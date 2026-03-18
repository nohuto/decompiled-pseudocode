/*
 * XREFs of ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0142400
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C013826C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C013449C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C014146C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0146208 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessQFrameNode(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4)
{
  CPointerInfoNode *v8; // rcx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x47u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( !CPointerInfoNode::IsForManipulationThread(a4) || (v9 = 1, (*((_DWORD *)a4 + 1) & 0x200) != 0) )
    v9 = 0;
  if ( ((*(_DWORD *)a4 & 4) == 0 && a3 || CPointerInfoNode::IsForManipulationThread(v8)) && !v9 )
    CTouchProcessor::ProcessEnterLeave(this, a3, a4);
  v10 = *((_DWORD *)a2 + 51);
  if ( (v10 & 1) != 0 && v9 )
  {
    v10 &= ~1u;
    *((_DWORD *)a2 + 52) = 22;
    *((_DWORD *)a2 + 51) = v10;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (*(_DWORD *)a4 & 1) == 0 )
    {
      CTouchProcessor::TrackCoalesceOnArrival(this, a2, 2LL);
      *((_DWORD *)a2 + 51) &= ~1u;
      v10 = *((_DWORD *)a2 + 51);
    }
    if ( (v10 & 1) != 0 )
    {
      v11 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 8) != 0 || (v11 & 0x10) != 0 || (v11 & 0x40) != 0 || (v11 & 0x20) != 0 )
      {
        CTouchProcessor::TrackCoalesceOnArrival(this, a2, 16LL);
        *((_DWORD *)a2 + 51) &= ~1u;
        v10 = *((_DWORD *)a2 + 51);
      }
    }
  }
  v12 = v10;
  if ( (v10 & 8) == 0 && (*(_DWORD *)a4 & 0x100000) != 0 && !v9 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(this, a2, 9LL);
    *((_DWORD *)a2 + 51) |= 8u;
    v12 = *((_DWORD *)a2 + 51);
  }
  if ( (v12 & 1) == 0 || (v12 & 8) != 0 )
  {
    v12 &= ~2u;
    *((_DWORD *)a2 + 51) = v12;
  }
  if ( (v12 & 2) != 0 )
  {
    v13 = 1;
    *((_DWORD *)a2 + 51) ^= (*((_DWORD *)a2 + 51) ^ (2
                                                   * CTouchProcessor::CanCoalesceNodeWithPrevious(
                                                       this,
                                                       a3,
                                                       a4,
                                                       0LL,
                                                       a2,
                                                       (enum CPointerCoalesce *)&v13))) & 2;
    if ( (*((_DWORD *)a2 + 51) & 2) == 0 )
      CTouchProcessor::TrackCoalesceOnArrival(this, a2, v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x48u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
}
