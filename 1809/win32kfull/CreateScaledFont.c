/*
 * XREFs of CreateScaledFont @ 0x1C01B8B58
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C00AB0C0 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01B88F8 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01B8A18 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C007DE28 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(
        HSURF a1,
        __int64 *a2,
        __int64 a3,
        INT a4,
        _DWORD *a5,
        int *a6,
        struct tagTEXTMETRICW *a7)
{
  unsigned int v8; // ebx
  __int64 FontIndirectW; // rax
  int CharDimensionsInternal; // eax
  INT a; // [rsp+20h] [rbp-98h] BYREF
  INT v14; // [rsp+24h] [rbp-94h]

  *a2 = 0LL;
  v8 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (char *)&a) )
  {
    a = EngMulDiv(a, a4, 96);
    v14 = EngMulDiv(v14, a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
    v8 = 0;
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v8 = 1;
      if ( a5 || a6 || a7 )
      {
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
        CharDimensionsInternal = GetCharDimensionsInternal(*(_QWORD *)(gpDispInfo + 64LL), a7, a6, gbGreTextReady);
        if ( a5 )
          *a5 = CharDimensionsInternal;
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
      }
    }
  }
  return v8;
}
