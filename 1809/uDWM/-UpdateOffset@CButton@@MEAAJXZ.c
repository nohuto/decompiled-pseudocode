/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180025460
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180025498 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180025570 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CVisual::UpdateOffset(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xCDu);
  else
    CButton::UpdateAtlasPositionAndSize(this);
  return v3;
}
