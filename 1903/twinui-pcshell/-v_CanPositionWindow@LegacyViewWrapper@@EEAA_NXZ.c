/*
 * XREFs of ?v_CanPositionWindow@LegacyViewWrapper@@EEAA_NXZ @ 0x180292A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall LegacyViewWrapper::v_CanPositionWindow(LegacyViewWrapper *this)
{
  return (*((_DWORD *)this + 116) & 0x10) == 0;
}
