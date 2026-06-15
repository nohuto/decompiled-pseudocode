/*
 * XREFs of ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800471E4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800E5134 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
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
  void *v8; // rbx
  int v9; // eax
  LPVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF

  pv[1] = (LPVOID)-2LL;
  v7 = a2;
  if ( (a2 & 0x400000) != 0 )
    return 3LL;
  v8 = 0LL;
  if ( a7 )
  {
    v9 = a2 & 0x20000;
    if ( (a2 & 0x20000) != 0 )
      return 0LL;
  }
  else
  {
    v9 = a2 & 0x20000;
  }
  if ( a4 && v9 )
    return 2LL;
  if ( a3 != AUDCLNT_SHAREMODE_EXCLUSIVE )
    return ((unsigned __int8)~v7 >> 1) & 1;
  pv[0] = 0LL;
  if ( !a5 || !a6 )
  {
LABEL_17:
    CoTaskMemFree(v8);
    return ((unsigned __int8)~v7 >> 1) & 1;
  }
  if ( IsFormatSupportedByHwAudioEngine(a1, a2, a6, (struct tWAVEFORMATEX **)pv) )
  {
    v8 = pv[0];
    goto LABEL_17;
  }
  CoTaskMemFree(pv[0]);
  return 1LL;
}
