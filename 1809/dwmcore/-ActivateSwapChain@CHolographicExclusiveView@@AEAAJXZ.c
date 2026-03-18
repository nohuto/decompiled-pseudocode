/*
 * XREFs of ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x18020C718
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x18020C7B8 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x18020CAA0 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 74) && !*((_BYTE *)this + 73) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v3 )
      v3 = (_QWORD *)v3[11];
    if ( v3 )
    {
      v4 = v3[4];
      *((_QWORD *)this + 17) = v4;
      *((_QWORD *)this + 15) = v3[21];
      v6 = NtSetCompositionSurfaceAnalogExclusive(v4, 1LL);
      if ( v6 >= 0 )
      {
        v7 = CHolographicExclusiveView::OpenSurfaceHandles(this);
        v1 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x154u);
        else
          *((_BYTE *)this + 72) = 1;
      }
      else
      {
        v1 = v6 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v1, 0x153u);
      }
    }
  }
  return v1;
}
