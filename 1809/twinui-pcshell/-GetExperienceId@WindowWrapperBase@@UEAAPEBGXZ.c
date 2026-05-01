/*
 * XREFs of ?GetExperienceId@WindowWrapperBase@@UEAAPEBGXZ @ 0x18007B970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall WindowWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[37], 0LL);
}
