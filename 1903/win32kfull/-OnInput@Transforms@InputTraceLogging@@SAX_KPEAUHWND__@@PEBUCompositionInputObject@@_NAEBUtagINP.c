/*
 * XREFs of ?OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000963C
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0117850 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C001E6A4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Transforms::OnInput(
        __int64 a1,
        HWND a2,
        const struct CompositionInputObject *a3,
        __int64 a4,
        const struct tagINPUT_TRANSFORM *a5)
{
  __int64 v6; // rdx
  const GUID *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  __int64 *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  const struct tagINPUT_TRANSFORM *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  char *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  char *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  char *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  char *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  char *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  char *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  char *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  char *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  char *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  char *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  char *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  char *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  char *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  char *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  char *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]

  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) && dword_1C03222C0 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 4uLL) )
    {
      v22 = v6;
      v15 = &v11;
      v17 = &v12;
      v19 = &v13;
      v21 = &v10;
      v25 = (char *)a5 + 4;
      v27 = (char *)a5 + 8;
      v29 = (char *)a5 + 12;
      v31 = (char *)a5 + 16;
      v33 = (char *)a5 + 20;
      v35 = (char *)a5 + 24;
      v37 = (char *)a5 + 28;
      v39 = (char *)a5 + 32;
      v41 = (char *)a5 + 36;
      v43 = (char *)a5 + 40;
      v45 = (char *)a5 + 44;
      v47 = (char *)a5 + 48;
      v49 = (char *)a5 + 52;
      v51 = (char *)a5 + 56;
      v53 = (char *)a5 + 60;
      v11 = a1;
      v16 = 8LL;
      v12 = v9;
      v18 = 8LL;
      v13 = v8;
      v20 = 8LL;
      v10 = (int)v7;
      v23 = a5;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E8148, 0LL, v7, 0x16u, &pData);
    }
  }
}
