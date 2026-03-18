/*
 * XREFs of ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180151A68
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015B5A8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x180151AB8 (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

__int64 __fastcall CDebugFrameCounter::GetCPUTimePerFrame(CDebugFrameCounter *this)
{
  unsigned int FrameCountInternal; // eax
  __int64 v2; // r9
  unsigned __int64 v3; // r10

  if ( !*((_BYTE *)this + 24) || *((_DWORD *)this + 4) == -1 )
    return 0LL;
  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  if ( FrameCountInternal )
    v3 = *(_QWORD *)(v2 + 32) / (unsigned __int64)FrameCountInternal;
  return (unsigned int)(v3 / 0x2710);
}
