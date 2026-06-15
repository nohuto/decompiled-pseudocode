/*
 * XREFs of ?IsInActiveVoipCall@CApplication@@UEAA_NXZ @ 0x18001A1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CApplication::IsInActiveVoipCall(CApplication *this)
{
  return (*((_DWORD *)this + 52) & 0x10) != 0;
}
