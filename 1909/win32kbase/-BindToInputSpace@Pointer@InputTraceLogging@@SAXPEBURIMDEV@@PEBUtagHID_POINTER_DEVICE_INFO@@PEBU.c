/*
 * XREFs of ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1C0142F1C
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::BindToInputSpace(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        const struct INPUT_SPACE *a3,
        const struct INPUT_SPACE_REGION *a4)
{
  __int64 v6; // r9
  __int64 v7; // r10
  _DWORD *v8; // r11
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  const struct RIMDEV *v15; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  const struct RIMDEV **v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  int *v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  int *v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  _DWORD *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  _DWORD *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  _DWORD *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  _DWORD *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  _DWORD *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  _DWORD *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  _DWORD *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  _DWORD *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  int *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  int *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  __int64 v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int64 v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+1A8h] [rbp+A0h] BYREF
  const struct RIMDEV **v56; // [rsp+1C8h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+C8h]

  if ( a3 && a4 )
  {
    if ( dword_1C020CB50 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x20uLL) )
      {
        v15 = a1;
        v17 = &v15;
        v9 = v8[58];
        v19 = &v9;
        v10 = v8[57];
        v21 = &v10;
        v23 = v8 + 40;
        v25 = v8 + 41;
        v27 = v8 + 42;
        v29 = v8 + 43;
        v11 = v8[61];
        v31 = &v11;
        v12 = v8[60];
        v33 = &v12;
        v35 = v8 + 63;
        v37 = v8 + 64;
        v39 = v8 + 65;
        v41 = v8 + 66;
        v13 = *((_DWORD *)a3 + 1);
        v43 = &v13;
        v14 = *(_DWORD *)a3;
        v45 = &v14;
        v49 = v6 + 4;
        v51 = v6 + 8;
        v53 = v6 + 12;
        v18 = 8LL;
        v20 = v7;
        v22 = v7;
        v24 = v7;
        v26 = v7;
        v28 = v7;
        v30 = v7;
        v32 = v7;
        v34 = v7;
        v36 = v7;
        v38 = v7;
        v40 = v7;
        v42 = v7;
        v44 = v7;
        v46 = v7;
        v47 = v6;
        v48 = v7;
        v50 = v7;
        v52 = v7;
        v54 = v7;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2C6B, 0LL, 0LL, 0x15u, &pData);
      }
    }
  }
  else if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x20uLL) )
  {
    v15 = a1;
    v56 = &v15;
    v57 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2D95, 0LL, 0LL, 3u, &v55);
  }
}
