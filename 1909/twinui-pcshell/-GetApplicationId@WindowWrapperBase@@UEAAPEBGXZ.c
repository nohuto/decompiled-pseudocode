/*
 * XREFs of ?GetApplicationId@WindowWrapperBase@@UEAAPEBGXZ @ 0x18007FD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall WindowWrapperBase::GetApplicationId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[37], 0LL);
}
