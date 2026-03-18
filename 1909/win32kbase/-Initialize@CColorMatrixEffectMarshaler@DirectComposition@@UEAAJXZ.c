/*
 * XREFs of ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01BF420
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01AE940 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::Initialize(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 88) = _xmm;
    *(_OWORD *)((char *)this + 104) = _xmm;
    *(_OWORD *)((char *)this + 120) = _xmm;
    *(_OWORD *)((char *)this + 136) = _xmm;
    *(_OWORD *)((char *)this + 152) = 0LL;
  }
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 42) = 1;
  return result;
}
