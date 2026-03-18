/*
 * XREFs of ?AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z @ 0x1801A77C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x1801A8DCC (-AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddMoveOptimizationNode(CDesktopRenderTarget *this, struct CWindowNode *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  signed int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v6 = CHwndRenderTarget::AddMoveOptimizationNode(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8 * v3), a2);
      v2 = v6;
      if ( v6 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 8) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x73Au, 0LL);
  }
  return v2;
}
