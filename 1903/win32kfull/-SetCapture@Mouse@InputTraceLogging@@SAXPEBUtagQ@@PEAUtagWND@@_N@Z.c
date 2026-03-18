/*
 * XREFs of ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E46C
 * Callers:
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     LockCaptureWindow @ 0x1C001E3A4 (LockCaptureWindow.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C001E6A4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E2244 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SetCapture(const struct tagQ *a1, struct tagWND *a2, unsigned __int8 a3)
{
  __int64 WindowDetails; // rax
  int v7; // edx
  int v8; // r10d
  __int64 v9; // rax
  int v10; // r10d
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  const struct tagQ *v13; // [rsp+40h] [rbp-C8h] BYREF
  __int64 psz; // [rsp+48h] [rbp-C0h] BYREF
  LPCSTR psz_8[2]; // [rsp+50h] [rbp-B8h]
  LPCWSTR pwsz_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v18[48]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  const struct tagQ **v20; // [rsp+C8h] [rbp-40h]
  int v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+D4h] [rbp-34h]
  int *v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+E0h] [rbp-28h]
  int v25; // [rsp+E4h] [rbp-24h]
  __int64 *p_psz; // [rsp+E8h] [rbp-20h]
  int v27; // [rsp+F0h] [rbp-18h]
  int v28; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  LPCWSTR *v30; // [rsp+108h] [rbp+0h]
  int v31; // [rsp+110h] [rbp+8h]
  int v32; // [rsp+114h] [rbp+Ch]
  char *v33; // [rsp+118h] [rbp+10h]
  int v34; // [rsp+120h] [rbp+18h]
  int v35; // [rsp+124h] [rbp+1Ch]
  __int64 *v36; // [rsp+128h] [rbp+20h]
  int v37; // [rsp+130h] [rbp+28h]
  int v38; // [rsp+134h] [rbp+2Ch]
  int *v39; // [rsp+138h] [rbp+30h]
  int v40; // [rsp+140h] [rbp+38h]
  int v41; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+158h] [rbp+50h] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v18, a2);
    *(_OWORD *)psz_8 = *(_OWORD *)WindowDetails;
    *(_OWORD *)pwsz_8 = *(_OWORD *)(WindowDetails + 16);
    v17 = *(_QWORD *)(WindowDetails + 32);
    if ( dword_1C03222C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x40uLL) )
      {
        v22 = 0;
        v25 = 0;
        v20 = &v13;
        v11 = a3;
        v23 = &v11;
        v13 = a1;
        v21 = v7 - 56;
        v24 = v8;
        if ( a2 )
          v9 = *(_QWORD *)a2;
        else
          v9 = 0LL;
        v28 = 0;
        psz = v9;
        v27 = v7 - 56;
        p_psz = &psz;
        TlgCreateWsz(&pDesc, pwsz_8[0]);
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v33 = (char *)&pwsz_8[1] + 4;
        v36 = &v17;
        v12 = HIDWORD(v17);
        v30 = &pwsz_8[1];
        v39 = &v12;
        v31 = v10;
        v34 = v10;
        v37 = v10;
        v40 = v10;
        TlgCreateWsz(&v42, (LPCWSTR)psz_8[1]);
        TlgCreateSz(&v43, psz_8[0]);
        TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E839A, 0LL, 0LL, 0xCu, &pData);
      }
    }
  }
}
