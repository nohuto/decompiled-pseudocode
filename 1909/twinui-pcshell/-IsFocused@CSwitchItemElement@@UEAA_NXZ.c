/*
 * XREFs of ?IsFocused@CSwitchItemElement@@UEAA_NXZ @ 0x180088250
 * Callers:
 *     ?IsFocused@CSwitchItemElement@@WOI@EAA_NXZ @ 0x1800E1E50 (-IsFocused@CSwitchItemElement@@WOI@EAA_NXZ.c)
 *     ?IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ @ 0x1800E24B0 (-IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemElement::IsFocused(CSwitchItemElement *this)
{
  return *((_BYTE *)this + 176);
}
