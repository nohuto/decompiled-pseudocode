/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180025420
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180025498 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180025690 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx

  updated = CAtlasedRectsVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC1u);
  else
    CButton::UpdateAtlasPositionAndSize(this);
  return v4;
}
