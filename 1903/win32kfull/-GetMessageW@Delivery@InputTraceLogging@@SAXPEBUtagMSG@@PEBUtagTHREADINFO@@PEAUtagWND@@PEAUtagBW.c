/*
 * XREFs of ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C009E858
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00245B0 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E2244 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Delivery::GetMessageW(
        const struct tagMSG *a1,
        const struct tagTHREADINFO *a2,
        struct tagWND *a3,
        struct tagBWND *a4,
        bool a5)
{
  __int64 v7; // r9
  __int64 WindowDetails; // rax
  unsigned int v9; // ecx
  int v10; // ecx
  BOOL v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r10
  int v15; // r9d
  __int64 v16; // r10
  __int16 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r10
  int v20; // r9d
  int v21; // r9d
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r10
  int v25; // r9d
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // r10
  int v30; // r11d
  __int64 v31; // rcx
  __int64 v32; // r10
  int v33; // r9d
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // r10
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR v46[2]; // [rsp+68h] [rbp-98h]
  LPCWSTR pwsz[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  BOOL v49; // [rsp+90h] [rbp-70h] BYREF
  BOOL v50; // [rsp+94h] [rbp-6Ch] BYREF
  char v51[40]; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  BOOL *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  BOOL *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  int *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+150h] [rbp+50h] BYREF
  LPCWSTR *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1F0h] [rbp+F0h] BYREF

  if ( dword_1C03222C0 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v51, v7);
    v9 = *((_DWORD *)a1 + 2);
    *(_OWORD *)v46 = *(_OWORD *)WindowDetails;
    *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
    v48 = *(_QWORD *)(WindowDetails + 32);
    if ( IsPointerInputMessage(v9) )
    {
      if ( *((_WORD *)a1 + 8) == 1 )
      {
        if ( dword_1C03222C0 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
          {
            v13 = *(_QWORD *)a1;
            v53 = &v49;
            v55 = &v50;
            v57 = &v41;
            v44 = *((_QWORD *)a1 + 2);
            v59 = &v44;
            v61 = (__int64 *)((char *)a1 + 24);
            v37 = *((_DWORD *)a1 + 8);
            v63 = &v37;
            v42 = *((_QWORD *)a2 + 53);
            v65 = &v42;
            v38 = *((unsigned __int16 *)a1 + 9);
            v67.Ptr = (ULONGLONG)&v38;
            v39 = a5;
            v68 = (LPCWSTR *)&v39;
            v41 = v13;
            v43 = v13;
            v70.Ptr = (ULONGLONG)&v43;
            v49 = v11;
            v54 = v12;
            v50 = v11;
            v56 = v12;
            v58 = 8LL;
            v60 = 8LL;
            v62 = 8LL;
            v64 = v12;
            v66 = 8LL;
            *(_QWORD *)&v67.Size = v12;
            v69 = v12;
            *(_QWORD *)&v70.Size = 8LL;
            TlgCreateWsz(&pDesc, pwsz[0]);
            v73.Ptr = (ULONGLONG)&pwsz[1] + 4;
            v72.Ptr = (ULONGLONG)&pwsz[1];
            v74.Ptr = (ULONGLONG)&v48;
            v40 = HIDWORD(v48);
            v75.Ptr = (ULONGLONG)&v40;
            *(_QWORD *)&v72.Size = v14;
            *(_QWORD *)&v73.Size = v14;
            *(_QWORD *)&v74.Size = v14;
            *(_QWORD *)&v75.Size = v14;
            TlgCreateWsz(&v76, v46[1]);
            TlgCreateSz(&v77, (LPCSTR)v46[0]);
            TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E77FC, 0LL, 0LL, 0x13u, &pData);
          }
        }
      }
      else if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
      {
        v18 = *(_QWORD *)a1;
        v53 = &v49;
        v55 = &v40;
        v57 = (__int64 *)&v39;
        v59 = &v43;
        v42 = *((_QWORD *)a1 + 2);
        v61 = &v42;
        v63 = (int *)((char *)a1 + 24);
        v38 = *((_DWORD *)a1 + 8);
        v65 = (__int64 *)&v38;
        v44 = *((_QWORD *)a2 + 53);
        v67.Ptr = (ULONGLONG)&v44;
        v37 = *((unsigned __int16 *)a1 + 9);
        v68 = (LPCWSTR *)&v37;
        v50 = a5;
        v70.Ptr = (ULONGLONG)&v50;
        v43 = v18;
        v45 = v18;
        pDesc.Ptr = (ULONGLONG)&v45;
        LOWORD(v49) = v17;
        v54 = 2LL;
        v40 = v15;
        v56 = v16;
        v39 = v15;
        v58 = v16;
        v60 = 8LL;
        v62 = 8LL;
        v64 = 8LL;
        v66 = v16;
        *(_QWORD *)&v67.Size = 8LL;
        v69 = v16;
        *(_QWORD *)&v70.Size = v16;
        *(_QWORD *)&pDesc.Size = 8LL;
        TlgCreateWsz(&v72, pwsz[0]);
        v74.Ptr = (ULONGLONG)&pwsz[1] + 4;
        v73.Ptr = (ULONGLONG)&pwsz[1];
        v75.Ptr = (ULONGLONG)&v48;
        LODWORD(v41) = HIDWORD(v48);
        v76.Ptr = (ULONGLONG)&v41;
        *(_QWORD *)&v73.Size = v19;
        *(_QWORD *)&v74.Size = v19;
        *(_QWORD *)&v75.Size = v19;
        *(_QWORD *)&v76.Size = v19;
        TlgCreateWsz(&v77, v46[1]);
        TlgCreateSz(&v78, (LPCSTR)v46[0]);
        TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E78FC, 0LL, 0LL, 0x14u, &pData);
      }
    }
    else if ( InputTraceLogging::IsMouseInputMessage(v10) )
    {
      if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
      {
        v23 = *(_QWORD *)a1;
        v53 = (BOOL *)&v41;
        v55 = &v40;
        v57 = &v45;
        v43 = *((_QWORD *)a1 + 2);
        v59 = &v43;
        v61 = (__int64 *)((char *)a1 + 24);
        v39 = *((_DWORD *)a1 + 8);
        v63 = &v39;
        v42 = *((_QWORD *)a2 + 53);
        v65 = &v42;
        v38 = a5;
        v67.Ptr = (ULONGLONG)&v38;
        v45 = v23;
        v44 = v23;
        v68 = (LPCWSTR *)&v44;
        LODWORD(v41) = v21;
        v54 = v22;
        v40 = v21;
        v56 = v22;
        v58 = 8LL;
        v60 = 8LL;
        v62 = 8LL;
        v64 = v22;
        v66 = 8LL;
        *(_QWORD *)&v67.Size = v22;
        v69 = 8LL;
        TlgCreateWsz(&v70, pwsz[0]);
        v72.Ptr = (ULONGLONG)&pwsz[1] + 4;
        pDesc.Ptr = (ULONGLONG)&pwsz[1];
        v73.Ptr = (ULONGLONG)&v48;
        v37 = HIDWORD(v48);
        v74.Ptr = (ULONGLONG)&v37;
        *(_QWORD *)&pDesc.Size = v24;
        *(_QWORD *)&v72.Size = v24;
        *(_QWORD *)&v73.Size = v24;
        *(_QWORD *)&v74.Size = v24;
        TlgCreateWsz(&v75, v46[1]);
        TlgCreateSz(&v76, (LPCSTR)v46[0]);
        TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E7A0B, 0LL, 0LL, 0x12u, &pData);
      }
    }
    else if ( (unsigned int)(v20 - 256) > 9 )
    {
      if ( v20 == 255 )
      {
        if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
        {
          v31 = *(_QWORD *)a1;
          v53 = (BOOL *)&v41;
          v55 = &v40;
          v57 = &v45;
          v43 = *((_QWORD *)a1 + 2);
          v59 = &v43;
          v61 = (__int64 *)((char *)a1 + 24);
          v39 = *((_DWORD *)a1 + 8);
          v63 = &v39;
          v42 = *((_QWORD *)a2 + 53);
          v65 = &v42;
          v38 = a5;
          v67.Ptr = (ULONGLONG)&v38;
          v45 = v31;
          v44 = v31;
          v68 = (LPCWSTR *)&v44;
          LODWORD(v41) = v30;
          v54 = v29;
          v40 = v30;
          v56 = v29;
          v58 = 8LL;
          v60 = 8LL;
          v62 = 8LL;
          v64 = v29;
          v66 = 8LL;
          *(_QWORD *)&v67.Size = v29;
          v69 = 8LL;
          TlgCreateWsz(&v70, pwsz[0]);
          v72.Ptr = (ULONGLONG)&pwsz[1] + 4;
          pDesc.Ptr = (ULONGLONG)&pwsz[1];
          v73.Ptr = (ULONGLONG)&v48;
          v37 = HIDWORD(v48);
          v74.Ptr = (ULONGLONG)&v37;
          *(_QWORD *)&pDesc.Size = v32;
          *(_QWORD *)&v72.Size = v32;
          *(_QWORD *)&v73.Size = v32;
          *(_QWORD *)&v74.Size = v32;
          TlgCreateWsz(&v75, v46[1]);
          TlgCreateSz(&v76, (LPCSTR)v46[0]);
          TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E7BE6, 0LL, 0LL, 0x12u, &pData);
        }
      }
      else if ( (unsigned int)(v20 - 571) <= 1
             && dword_1C03222C0 > 4u
             && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
      {
        v35 = *(_QWORD *)a1;
        v53 = (BOOL *)&v41;
        v55 = &v40;
        v57 = &v45;
        v43 = *((_QWORD *)a1 + 2);
        v59 = &v43;
        v61 = (__int64 *)((char *)a1 + 24);
        v39 = *((_DWORD *)a1 + 8);
        v63 = &v39;
        v42 = *((_QWORD *)a2 + 53);
        v65 = &v42;
        v38 = a5;
        v67.Ptr = (ULONGLONG)&v38;
        v45 = v35;
        v44 = v35;
        v68 = (LPCWSTR *)&v44;
        LODWORD(v41) = v33;
        v54 = v34;
        v40 = v33;
        v56 = v34;
        v58 = 8LL;
        v60 = 8LL;
        v62 = 8LL;
        v64 = v34;
        v66 = 8LL;
        *(_QWORD *)&v67.Size = v34;
        v69 = 8LL;
        TlgCreateWsz(&v70, pwsz[0]);
        v72.Ptr = (ULONGLONG)&pwsz[1] + 4;
        pDesc.Ptr = (ULONGLONG)&pwsz[1];
        v73.Ptr = (ULONGLONG)&v48;
        v37 = HIDWORD(v48);
        v74.Ptr = (ULONGLONG)&v37;
        *(_QWORD *)&pDesc.Size = v36;
        *(_QWORD *)&v72.Size = v36;
        *(_QWORD *)&v73.Size = v36;
        *(_QWORD *)&v74.Size = v36;
        TlgCreateWsz(&v75, v46[1]);
        TlgCreateSz(&v76, (LPCSTR)v46[0]);
        TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E7CDD, 0LL, 0LL, 0x12u, &pData);
      }
    }
    else if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
    {
      v27 = *(_QWORD *)a1;
      v53 = (BOOL *)&v41;
      v55 = &v40;
      v57 = &v45;
      v39 = *((_DWORD *)a1 + 8);
      v59 = (__int64 *)&v39;
      v43 = *((_QWORD *)a2 + 53);
      v61 = &v43;
      v38 = a5;
      v63 = &v38;
      v45 = v27;
      v42 = v27;
      v65 = &v42;
      LODWORD(v41) = v25;
      v54 = v26;
      v40 = v25;
      v56 = v26;
      v58 = 8LL;
      v60 = v26;
      v62 = 8LL;
      v64 = v26;
      v66 = 8LL;
      TlgCreateWsz(&v67, pwsz[0]);
      v70.Ptr = (ULONGLONG)&pwsz[1] + 4;
      v68 = &pwsz[1];
      pDesc.Ptr = (ULONGLONG)&v48;
      v37 = HIDWORD(v48);
      v72.Ptr = (ULONGLONG)&v37;
      v69 = v28;
      *(_QWORD *)&v70.Size = v28;
      *(_QWORD *)&pDesc.Size = v28;
      *(_QWORD *)&v72.Size = v28;
      TlgCreateWsz(&v73, v46[1]);
      TlgCreateSz(&v74, (LPCSTR)v46[0]);
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E7AFF, 0LL, 0LL, 0x10u, &pData);
    }
  }
}
