/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x180024DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180014C30 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800781EC (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x10000) != 0 )
  {
    if ( (v1 & 0x8000) == 0 )
    {
      CButton::UpdateCrossfade(this);
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x10000u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x8000) != 0 )
  {
    v3 = CButton::RedrawVisual(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB3u);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v5 = CVisual::ValidateVisual(this);
  v4 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB7u);
  return v4;
}
