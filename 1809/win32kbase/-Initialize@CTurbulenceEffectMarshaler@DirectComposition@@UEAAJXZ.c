/*
 * XREFs of ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C017F300
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0173F10 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::Initialize(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 12) = 0LL;
    *((_DWORD *)this + 26) = 1008981770;
    result = 0LL;
    *(_QWORD *)((char *)this + 108) = 1008981770LL;
    *((_DWORD *)this + 29) = 0;
  }
  *((_QWORD *)this + 15) = 1LL;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
