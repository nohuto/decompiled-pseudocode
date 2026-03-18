/*
 * XREFs of ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C001E368
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C001E534 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E20C4 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SecondaryHitTest(
        const struct tagQMSG *a1,
        const struct tagPOINT *a2,
        struct tagWND *a3)
{
  __int64 WindowDetails; // rax
  int v7; // edx
  int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r10d
  int v12; // ecx
  int v13; // r10d
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  LONG x; // [rsp+48h] [rbp-C0h] BYREF
  LONG y; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 psz; // [rsp+58h] [rbp-B0h] BYREF
  LPCSTR psz_8[2]; // [rsp+60h] [rbp-A8h]
  LPCWSTR pwsz_8[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v25[48]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v27; // [rsp+D8h] [rbp-30h]
  int v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E4h] [rbp-24h]
  int *v30; // [rsp+E8h] [rbp-20h]
  int v31; // [rsp+F0h] [rbp-18h]
  int v32; // [rsp+F4h] [rbp-14h]
  __int64 *p_psz; // [rsp+F8h] [rbp-10h]
  int v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  LPCWSTR *v37; // [rsp+118h] [rbp+10h]
  int v38; // [rsp+120h] [rbp+18h]
  int v39; // [rsp+124h] [rbp+1Ch]
  char *v40; // [rsp+128h] [rbp+20h]
  int v41; // [rsp+130h] [rbp+28h]
  int v42; // [rsp+134h] [rbp+2Ch]
  __int64 *v43; // [rsp+138h] [rbp+30h]
  int v44; // [rsp+140h] [rbp+38h]
  int v45; // [rsp+144h] [rbp+3Ch]
  int *v46; // [rsp+148h] [rbp+40h]
  int v47; // [rsp+150h] [rbp+48h]
  int v48; // [rsp+154h] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+168h] [rbp+60h] BYREF
  int *v51; // [rsp+178h] [rbp+70h]
  int v52; // [rsp+180h] [rbp+78h]
  int v53; // [rsp+184h] [rbp+7Ch]
  int *v54; // [rsp+188h] [rbp+80h]
  int v55; // [rsp+190h] [rbp+88h]
  int v56; // [rsp+194h] [rbp+8Ch]
  LONG *p_x; // [rsp+198h] [rbp+90h]
  int v58; // [rsp+1A0h] [rbp+98h]
  int v59; // [rsp+1A4h] [rbp+9Ch]
  LONG *p_y; // [rsp+1A8h] [rbp+A0h]
  int v61; // [rsp+1B0h] [rbp+A8h]
  int v62; // [rsp+1B4h] [rbp+ACh]

  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v25, a3);
    *(_OWORD *)psz_8 = *(_OWORD *)WindowDetails;
    *(_OWORD *)pwsz_8 = *(_OWORD *)(WindowDetails + 16);
    v24 = *(_QWORD *)(WindowDetails + 32);
    if ( dword_1C03202C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x40uLL) )
      {
        v9 = *((_QWORD *)a1 + 17);
        v29 = 0;
        v32 = 0;
        v20 = v9;
        v27 = &v20;
        v14 = *((_DWORD *)a1 + 6);
        v30 = &v14;
        v28 = v7 - 56;
        v31 = v8;
        if ( a3 )
          v10 = *(_QWORD *)a3;
        else
          v10 = 0LL;
        v35 = 0;
        psz = v10;
        v34 = v7 - 56;
        p_psz = &psz;
        TlgCreateWsz(&pDesc, pwsz_8[0]);
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v48 = 0;
        v40 = (char *)&pwsz_8[1] + 4;
        v43 = &v24;
        v15 = HIDWORD(v24);
        v37 = &pwsz_8[1];
        v46 = &v15;
        v38 = v11;
        v41 = v11;
        v44 = v11;
        v47 = v11;
        TlgCreateWsz(&v49, (LPCWSTR)psz_8[1]);
        TlgCreateSz(&v50, psz_8[0]);
        v53 = 0;
        v56 = 0;
        v59 = 0;
        v12 = *((_DWORD *)a1 + 20);
        v62 = 0;
        v51 = &v16;
        v17 = *((_DWORD *)a1 + 21);
        v54 = &v17;
        x = a2->x;
        p_x = &x;
        y = a2->y;
        p_y = &y;
        v16 = v12;
        v52 = v13;
        v55 = v13;
        v58 = v13;
        v61 = v13;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6A5E, 0LL, 0LL, 0x10u, &pData);
      }
    }
  }
}
