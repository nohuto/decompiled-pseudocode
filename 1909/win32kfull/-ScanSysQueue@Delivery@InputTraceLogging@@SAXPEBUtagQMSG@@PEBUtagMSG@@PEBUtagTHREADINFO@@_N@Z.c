/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C002A940
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C002AA20 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  __int16 v10; // si
  __int64 v11; // r9
  __int64 *v12; // r10
  int v13; // r11d
  unsigned int v14; // edx
  UINT32 cData; // edx
  __int64 v16; // r9
  __int64 *v17; // r10
  int v18; // r11d
  unsigned int v19; // ecx
  int v20; // edx
  __int64 v21; // r9
  __int64 *v22; // r10
  int v23; // r11d
  unsigned int v24; // ecx
  int v26; // edx
  __int64 v27; // r9
  __int64 *v28; // r10
  int v29; // r11d
  unsigned int v30; // ecx
  __int64 v32; // r9
  __int64 *v33; // r10
  __int64 v34; // rdx
  int v35; // eax
  int v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  int *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  int *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  int *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  int *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  int *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  int *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  __int64 *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a2 + 2)) )
  {
    v10 = *(_WORD *)(v7 + 16);
    if ( v10 == 1 )
    {
      if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
      {
        v14 = *((_DWORD *)a3 + 306);
        v41 = *((_QWORD *)a1 + 17);
        v49 = &v41;
        v46 = *((_QWORD *)a3 + 53);
        v51 = &v46;
        v53 = (__int64 *)&v44;
        v55 = &v45;
        v42 = *v12;
        v57 = (int *)&v42;
        v43 = v12[2];
        v59 = (int *)&v43;
        v61 = (int *)(v12 + 3);
        v36 = *((_DWORD *)v12 + 8);
        v63 = &v36;
        v37 = *((unsigned __int16 *)v12 + 9);
        v65 = &v37;
        v38 = (v14 >> 13) & 1;
        v50 = 8LL;
        v67 = &v38;
        v39 = a4;
        v69 = &v39;
        v71 = &v40;
        v52 = 8LL;
        v44 = v13;
        v54 = v11;
        v45 = v13;
        v56 = v11;
        v58 = 8LL;
        v60 = 8LL;
        v62 = 8LL;
        v64 = v11;
        v66 = v11;
        v68 = v11;
        v70 = v11;
        v40 = (v14 >> 28) & 1;
        v72 = v11;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E65B2, 0LL, 0LL, 0xEu, &pData);
      }
    }
    else if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
    {
      v19 = *((_DWORD *)a3 + 306);
      v43 = *((_QWORD *)a1 + 17);
      v49 = &v43;
      v51 = (__int64 *)&v44;
      v53 = (__int64 *)((char *)a1 + 40);
      v40 = *((unsigned __int16 *)v17 + 9);
      v55 = &v40;
      v42 = *((_QWORD *)a3 + 53);
      v57 = (int *)&v42;
      v59 = &v39;
      v61 = &v38;
      v46 = *v17;
      v63 = (int *)&v46;
      v47[0] = v17[2];
      v65 = (int *)v47;
      v67 = (int *)(v17 + 3);
      v37 = *((_DWORD *)v17 + 8);
      v69 = &v37;
      v36 = (v19 >> 13) & 1;
      v50 = 8LL;
      v71 = &v36;
      v45 = a4;
      v73 = &v45;
      v75 = &v41;
      LOWORD(v44) = v10;
      v52 = 2LL;
      v54 = 8LL;
      v56 = v16;
      v58 = 8LL;
      v39 = v18;
      v60 = v16;
      v38 = v18;
      v62 = v16;
      v64 = 8LL;
      v66 = 8LL;
      v68 = 8LL;
      v70 = v16;
      v72 = v16;
      v74 = v16;
      LODWORD(v41) = (v19 >> 28) & 1;
      v76 = v16;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E667E, 0LL, 0LL, cData, &pData);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v8) )
  {
    if ( dword_1C03202C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
      {
        v24 = *((_DWORD *)a3 + 306);
        v47[0] = *((_QWORD *)a1 + 17);
        v49 = v47;
        v43 = *((_QWORD *)a3 + 53);
        v51 = &v43;
        v53 = &v41;
        v55 = &v40;
        v42 = *v22;
        v57 = (int *)&v42;
        v46 = v22[2];
        v59 = (int *)&v46;
        v61 = (int *)(v22 + 3);
        v39 = *((_DWORD *)v22 + 8);
        v63 = &v39;
        v38 = (v20 - 15) & (v24 >> 13);
        v50 = 8LL;
        v65 = &v38;
        v37 = a4;
        v67 = &v37;
        v69 = &v36;
        v52 = 8LL;
        LODWORD(v41) = v23;
        v54 = v21;
        v40 = v23;
        v56 = v21;
        v58 = 8LL;
        v60 = 8LL;
        v62 = 8LL;
        v64 = v21;
        v66 = v21;
        v68 = v21;
        v36 = (v20 - 15) & (v24 >> 28);
        v70 = v21;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6767, 0LL, 0LL, 0xDu, &pData);
      }
    }
  }
  else if ( (unsigned int)(v9 - 256) > 9 )
  {
    if ( v9 == 255 && dword_1C03202C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
      {
        v34 = v33[2];
        v47[0] = *((_QWORD *)a1 + 17);
        v50 = 8LL;
        v49 = v47;
        LODWORD(v41) = (_BYTE)v34 == 1;
        v51 = &v41;
        v43 = *((_QWORD *)a3 + 53);
        v53 = &v43;
        v55 = &v40;
        v57 = &v39;
        v42 = *v33;
        v59 = (int *)&v42;
        v61 = (int *)&v46;
        v63 = (int *)(v33 + 3);
        v38 = *((_DWORD *)v33 + 8);
        v65 = &v38;
        v37 = a4;
        v67 = &v37;
        v35 = (*((_DWORD *)a3 + 306) >> 28) & 1;
        v52 = v32;
        v36 = v35;
        v69 = &v36;
        v54 = 8LL;
        v40 = 255;
        v56 = v32;
        v39 = 255;
        v58 = v32;
        v60 = 8LL;
        v46 = v34;
        v62 = 8LL;
        v64 = 8LL;
        v66 = v32;
        v68 = v32;
        v70 = v32;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E68DA, 0LL, 0LL, 0xDu, &pData);
      }
    }
  }
  else if ( dword_1C03202C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
    {
      v30 = *((_DWORD *)a3 + 306);
      v47[0] = *((_QWORD *)a1 + 17);
      v49 = v47;
      v43 = *((_QWORD *)a3 + 53);
      v51 = &v43;
      v53 = &v41;
      v55 = &v40;
      v42 = *v28;
      v57 = (int *)&v42;
      v39 = *((_DWORD *)v28 + 8);
      v59 = &v39;
      v38 = (v26 - 15) & (v30 >> 13);
      v50 = 8LL;
      v61 = &v38;
      v37 = a4;
      v63 = &v37;
      v65 = &v36;
      v52 = 8LL;
      LODWORD(v41) = v29;
      v54 = v27;
      v40 = v29;
      v56 = v27;
      v58 = 8LL;
      v60 = v27;
      v62 = v27;
      v64 = v27;
      v36 = (v26 - 15) & (v30 >> 28);
      v66 = v27;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6827, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
