/*
 * XREFs of CreateScaledFont @ 0x1C0197B88
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C00142A4 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C0197934 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C0197A4C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00CA7E0 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C00FABFC (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(
        HBRUSH a1,
        __int64 *a2,
        __int64 a3,
        INT a4,
        _DWORD *a5,
        int *a6,
        struct tagTEXTMETRICW *a7)
{
  unsigned __int8 v9; // di
  __int64 FontIndirectW; // rax
  int CharDimensionsInternal; // eax
  INT a; // [rsp+20h] [rbp-98h] BYREF
  INT v14; // [rsp+24h] [rbp-94h]

  *a2 = 0LL;
  v9 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (char *)&a) )
  {
    a = EngMulDiv(a, a4, 96);
    v14 = EngMulDiv(v14, a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v9 = 1;
      if ( a5 || a6 || a7 )
      {
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
        CharDimensionsInternal = GetCharDimensionsInternal(
                                   *(_QWORD *)(gpDispInfo + 64LL),
                                   a7,
                                   a6,
                                   (unsigned int)gbGreTextReady);
        if ( a5 )
          *a5 = CharDimensionsInternal;
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
      }
    }
  }
  return v9;
}
