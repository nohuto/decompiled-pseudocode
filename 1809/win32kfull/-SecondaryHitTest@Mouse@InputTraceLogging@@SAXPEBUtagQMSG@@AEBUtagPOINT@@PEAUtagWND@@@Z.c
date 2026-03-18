/*
 * XREFs of ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00AE764
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00AE850 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01CDCD8 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
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
  LONG x; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 psz; // [rsp+58h] [rbp-B0h] BYREF
  LPCSTR psz_8[2]; // [rsp+60h] [rbp-A8h]
  LPCWSTR pwsz_8[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v24[48]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+E0h] [rbp-28h]
  int v28; // [rsp+E4h] [rbp-24h]
  int *v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+F0h] [rbp-18h]
  int v31; // [rsp+F4h] [rbp-14h]
  __int64 *p_psz; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h]
  int v34; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  LPCWSTR *v36; // [rsp+118h] [rbp+10h]
  int v37; // [rsp+120h] [rbp+18h]
  int v38; // [rsp+124h] [rbp+1Ch]
  char *v39; // [rsp+128h] [rbp+20h]
  int v40; // [rsp+130h] [rbp+28h]
  int v41; // [rsp+134h] [rbp+2Ch]
  __int64 *v42; // [rsp+138h] [rbp+30h]
  int v43; // [rsp+140h] [rbp+38h]
  int v44; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+158h] [rbp+50h] BYREF
  int *v47; // [rsp+168h] [rbp+60h]
  int v48; // [rsp+170h] [rbp+68h]
  int v49; // [rsp+174h] [rbp+6Ch]
  int *v50; // [rsp+178h] [rbp+70h]
  int v51; // [rsp+180h] [rbp+78h]
  int v52; // [rsp+184h] [rbp+7Ch]
  LONG *p_x; // [rsp+188h] [rbp+80h]
  int v54; // [rsp+190h] [rbp+88h]
  int v55; // [rsp+194h] [rbp+8Ch]
  __int64 *v56; // [rsp+198h] [rbp+90h]
  int v57; // [rsp+1A0h] [rbp+98h]
  int v58; // [rsp+1A4h] [rbp+9Ch]

  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v24, a3);
    *(_OWORD *)psz_8 = *(_OWORD *)WindowDetails;
    *(_OWORD *)pwsz_8 = *(_OWORD *)(WindowDetails + 16);
    v23 = *(_QWORD *)(WindowDetails + 32);
    if ( dword_1C030D340 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x40uLL) )
      {
        v9 = *((_QWORD *)a1 + 17);
        v28 = 0;
        v31 = 0;
        v19 = v9;
        v26 = &v19;
        v14 = *((_DWORD *)a1 + 6);
        v29 = &v14;
        v27 = v7 - 56;
        v30 = v8;
        if ( a3 )
          v10 = *(_QWORD *)a3;
        else
          v10 = 0LL;
        v34 = 0;
        psz = v10;
        v33 = v7 - 56;
        p_psz = &psz;
        TlgCreateWsz(&pDesc, pwsz_8[0]);
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v39 = (char *)&pwsz_8[1] + 4;
        v36 = &pwsz_8[1];
        v42 = &v23;
        v37 = v11;
        v40 = v11;
        v43 = v11;
        TlgCreateWsz(&v45, (LPCWSTR)psz_8[1]);
        TlgCreateSz(&v46, psz_8[0]);
        v49 = 0;
        v52 = 0;
        v55 = 0;
        v12 = *((_DWORD *)a1 + 20);
        v58 = 0;
        v47 = &v15;
        v16 = *((_DWORD *)a1 + 21);
        v50 = &v16;
        x = a2->x;
        p_x = &x;
        LODWORD(v18) = a2->y;
        v56 = &v18;
        v15 = v12;
        v48 = v13;
        v51 = v13;
        v54 = v13;
        v57 = v13;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4EE2, 0LL, 0LL, 0xFu, &pData);
      }
    }
  }
}
