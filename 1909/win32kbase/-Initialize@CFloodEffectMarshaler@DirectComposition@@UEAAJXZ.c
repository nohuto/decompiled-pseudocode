/*
 * XREFs of ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01C0060
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01AE940 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::Initialize(DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 88) = xmmword_1C01ED000;
  }
  return result;
}
