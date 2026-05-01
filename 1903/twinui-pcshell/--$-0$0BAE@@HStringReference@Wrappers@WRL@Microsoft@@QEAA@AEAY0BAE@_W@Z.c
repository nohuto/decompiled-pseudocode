/*
 * XREFs of ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x18033DB20
 * Callers:
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x18033E7F4 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x1800403FC (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1802B4B28 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString)
{
  unsigned __int64 v4; // rbx
  UINT32 v5; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( sourceString[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x18033DB8DLL);
  }
  v5 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v4);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v5, v4);
  return hstringHeader;
}
