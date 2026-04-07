/*
 * XREFs of ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x18008FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180014C30 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008FC00 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::ValidateVisual(CAnimatedGlassSheet *this, __int64 a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CAnimatedGlassSheet::UpdateTransition(this, a2, a3);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v4 = CVisual::ValidateVisual(this);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x268u);
  return v5;
}
