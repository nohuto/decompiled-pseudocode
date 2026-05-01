/*
 * XREFs of ?RuntimeClassInitialize@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800120F4
 * Callers:
 *     ??$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UIAppDisplayInfo@ApplicationModel@5@PEAUHSTRING__@@PEAU8@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppDisplayInfo@ApplicationModel@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18002C0E0 (--$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::RuntimeClassInitialize(
        HSTRING *this,
        HSTRING a2,
        HSTRING a3)
{
  HSTRING *v3; // rbx
  HRESULT v7; // ebx
  __int64 v8; // rdx
  HSTRING *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 8;
  if ( !a3 || a3 != *v3 )
  {
    WindowsDeleteString(*v3);
    *v3 = 0LL;
    v7 = WindowsDuplicateString(a3, v3);
    if ( v7 < 0 )
    {
      v8 = 210LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  v10 = this + 9;
  if ( !a2 || a2 != *v10 )
  {
    WindowsDeleteString(*v10);
    *v10 = 0LL;
    v7 = WindowsDuplicateString(a2, this + 9);
    if ( v7 < 0 )
    {
      v8 = 211LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
