/*
 * XREFs of ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01BF900
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01AE940 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::Initialize(
        DirectComposition::CShadowEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 22) = 1077936128;
    *(_OWORD *)((char *)this + 92) = xmmword_1C01ED000;
  }
  *((_DWORD *)this + 27) = 0;
  return result;
}
