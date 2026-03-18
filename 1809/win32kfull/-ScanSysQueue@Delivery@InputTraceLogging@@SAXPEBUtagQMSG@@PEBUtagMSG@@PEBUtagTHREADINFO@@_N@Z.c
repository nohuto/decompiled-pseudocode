/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00D4768
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D4820 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::ScanSysQueue(
        const struct tagQMSG *a1,
        const struct tagMSG *a2,
        const struct tagTHREADINFO *a3,
        unsigned __int8 a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ecx
  int v9; // r11d
  __int16 v10; // di
  __int64 v11; // r9
  __int64 *v12; // r10
  int v13; // r11d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 *v17; // r10
  int v18; // r11d
  int v19; // eax
  __int64 v20; // r9
  __int64 *v21; // r10
  int v22; // r11d
  int v23; // eax
  __int64 v25; // r9
  __int64 *v26; // r10
  __int64 v27; // rdx
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  int *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  int *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  int *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  int *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  __int64 *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]

  if ( IsPointerInputMessage(*((_DWORD *)a2 + 2)) )
  {
    v10 = *(_WORD *)(v7 + 16);
    if ( v10 == 1 )
    {
      if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
      {
        v14 = v12[2];
        v34 = *((_QWORD *)a1 + 17);
        v39 = &v34;
        v41 = &v32;
        v43 = &v33;
        v35 = *v12;
        v45 = (int *)&v35;
        v47 = (int *)&v36;
        v49 = (int *)(v12 + 3);
        v28 = *((_DWORD *)v12 + 8);
        v51 = &v28;
        v36 = v14;
        v29 = WORD1(v14);
        v53 = &v29;
        v15 = (*((_DWORD *)a3 + 302) >> 13) & 1;
        v40 = 8LL;
        v30 = v15;
        v55 = &v30;
        v31 = a4;
        v57 = &v31;
        v32 = v13;
        v42 = v11;
        v33 = v13;
        v44 = v11;
        v46 = 8LL;
        v48 = 8LL;
        v50 = 8LL;
        v52 = v11;
        v54 = v11;
        v56 = v11;
        v58 = v11;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4BB7, 0LL, 0LL, 0xCu, &pData);
      }
    }
    else if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
    {
      v36 = *((_QWORD *)a1 + 17);
      v39 = &v36;
      v41 = &v32;
      v43 = (int *)((char *)a1 + 40);
      v31 = *((unsigned __int16 *)v17 + 9);
      v45 = &v31;
      v47 = &v30;
      v49 = &v29;
      v35 = *v17;
      v51 = (int *)&v35;
      v37[0] = v17[2];
      v53 = (int *)v37;
      v55 = (int *)(v17 + 3);
      v28 = *((_DWORD *)v17 + 8);
      v57 = &v28;
      v19 = (*((_DWORD *)a3 + 302) >> 13) & 1;
      v40 = 8LL;
      v33 = v19;
      v59 = &v33;
      LODWORD(v34) = a4;
      v61 = &v34;
      LOWORD(v32) = v10;
      v42 = 2LL;
      v44 = 8LL;
      v46 = v16;
      v30 = v18;
      v48 = v16;
      v29 = v18;
      v50 = v16;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = v16;
      v60 = v16;
      v62 = v16;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4C62, 0LL, 0LL, 0xEu, &pData);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v8) )
  {
    if ( dword_1C030D340 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
      {
        v37[0] = *((_QWORD *)a1 + 17);
        v39 = v37;
        v41 = (int *)&v34;
        v43 = &v31;
        v36 = *v21;
        v45 = (int *)&v36;
        v35 = v21[2];
        v47 = (int *)&v35;
        v49 = (int *)(v21 + 3);
        v30 = *((_DWORD *)v21 + 8);
        v51 = &v30;
        v23 = (*((_DWORD *)a3 + 302) >> 13) & 1;
        v40 = 8LL;
        v29 = v23;
        v53 = &v29;
        v28 = a4;
        v55 = &v28;
        LODWORD(v34) = v22;
        v42 = v20;
        v31 = v22;
        v44 = v20;
        v46 = 8LL;
        v48 = 8LL;
        v50 = 8LL;
        v52 = v20;
        v54 = v20;
        v56 = v20;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4D2A, 0LL, 0LL, 0xBu, &pData);
      }
    }
  }
  else if ( v9 == 255 && dword_1C030D340 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
    {
      v27 = v26[2];
      v37[0] = *((_QWORD *)a1 + 17);
      v40 = 8LL;
      v39 = v37;
      LODWORD(v34) = (_BYTE)v27 == 1;
      v41 = (int *)&v34;
      v43 = &v31;
      v45 = &v30;
      v36 = *v26;
      v47 = (int *)&v36;
      v49 = (int *)&v35;
      v51 = (int *)(v26 + 3);
      v29 = *((_DWORD *)v26 + 8);
      v53 = &v29;
      v28 = a4;
      v55 = &v28;
      v42 = v25;
      v31 = 255;
      v44 = v25;
      v30 = 255;
      v46 = v25;
      v48 = 8LL;
      v35 = v27;
      v50 = 8LL;
      v52 = 8LL;
      v54 = v25;
      v56 = v25;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4DC9, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
