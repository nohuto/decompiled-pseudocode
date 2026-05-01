/*
 * XREFs of ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x18004BE14
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__&_::Run @ 0x18004BBB0 (wil--details--functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__-_--Run.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D610 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18031D500 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetArgsSubstring@ViewModeHelpers@Cortana@@YAJPEBG0IPEAPEBGPEA_K@Z @ 0x18004BEEC (-GetArgsSubstring@ViewModeHelpers@Cortana@@YAJPEBG0IPEAPEBGPEA_K@Z.c)
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEBG_K01@Z @ 0x18004BFB4 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEBG_K01@Z.c)
 */

__int64 __fastcall Cortana::ViewModeHelpers::GetMainViewMode(HSTRING a1)
{
  Cortana::ViewModeHelpers *StringRawBuffer; // rsi
  __int64 v2; // rbx
  wchar_t **v4; // rdi
  __int64 v5; // r8
  unsigned __int64 *v6; // [rsp+28h] [rbp-18h]
  unsigned __int64 *v7; // [rsp+28h] [rbp-18h]
  unsigned int v8[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 *v9; // [rsp+78h] [rbp+38h] BYREF
  const WCHAR *v10; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 *v11; // [rsp+88h] [rbp+48h] BYREF

  StringRawBuffer = (Cortana::ViewModeHelpers *)WindowsGetStringRawBuffer(a1, 0LL);
  if ( wcsstr((const wchar_t *)StringRawBuffer, L"ms-cortana://")
    || wcsstr((const wchar_t *)StringRawBuffer, L"ms-search") )
  {
    v4 = &`Cortana::ViewModeHelpers::GetMainViewMode'::`5'::searchViewModeProtocolPrefix;
    while ( 1 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( (*v4)[v5] );
      if ( !(unsigned int)_o__wcsnicmp(StringRawBuffer) )
        break;
      if ( ++v4 == &off_180487D88 )
        return 1LL;
    }
    return 2LL;
  }
  else
  {
    v11 = 0LL;
    *(_QWORD *)v8 = &szAgent;
    v2 = -1LL;
    v10 = &szAgent;
    v9 = 0LL;
    do
      ++v2;
    while ( *((_WORD *)StringRawBuffer + v2) );
    Cortana::ViewModeHelpers::GetArgsSubstring(
      StringRawBuffer,
      L"QuerySource=",
      (const unsigned __int16 *)(unsigned int)v2,
      (unsigned int)v8,
      (const unsigned __int16 **)&v11,
      v6);
    Cortana::ViewModeHelpers::GetArgsSubstring(
      StringRawBuffer,
      L"StartMode=",
      (const unsigned __int16 *)(unsigned int)v2,
      (unsigned int)&v10,
      (const unsigned __int16 **)&v9,
      v7);
    return Cortana::ViewModeHelpers::GetMainViewMode(*(_QWORD *)v8, v11, v10, v9);
  }
}
