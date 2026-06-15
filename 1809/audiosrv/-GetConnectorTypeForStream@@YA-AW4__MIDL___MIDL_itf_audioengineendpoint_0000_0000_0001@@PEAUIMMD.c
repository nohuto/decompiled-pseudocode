/*
 * XREFs of ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x18002189C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800D9F04 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetConnectorTypeForStream(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        int a5,
        const struct tWAVEFORMATEX *a6,
        struct IProcessSubmixProxy *a7)
{
  char v7; // di
  int v8; // eax
  void *v9; // rbx
  LPVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF

  pv[1] = (LPVOID)-2LL;
  v7 = a2;
  if ( (a2 & 0x400000) != 0 )
    return 3LL;
  v8 = a2 & 0x20000;
  v9 = 0LL;
  if ( a7 && v8 )
    return 0LL;
  if ( !a4 || !v8 )
  {
    if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
      pv[0] = 0LL;
      if ( a5 && a6 )
      {
        if ( !IsFormatSupportedByHwAudioEngine(a1, a2, a6, (struct tWAVEFORMATEX **)pv) )
        {
          CoTaskMemFree(pv[0]);
          return 1LL;
        }
        v9 = pv[0];
      }
      CoTaskMemFree(v9);
    }
    return (v7 & 2) == 0;
  }
  return 2LL;
}
