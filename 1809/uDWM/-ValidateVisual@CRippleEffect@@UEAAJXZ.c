/*
 * XREFs of ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x180090540
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180014C30 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x1800904B0 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::ValidateVisual(CRippleEffect *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CRippleEffect::UpdateTransition(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xECu);
  return v3;
}
