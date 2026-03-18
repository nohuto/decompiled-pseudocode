/*
 * XREFs of ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C016B3E0
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C016ADCC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::HandleResultFromUserMode(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2,
        void *a3,
        const struct CInputDest *a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 WindowDetails; // rax
  int v11; // r10d
  __int64 v12; // rax
  HWND WindowHandle; // rax
  int v14; // r9d
  int v15; // r10d
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  HWND v19; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR v20[2]; // [rsp+50h] [rbp-B0h]
  LPCWSTR pwsz[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  char v23[40]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+CCh] [rbp-34h]
  __int64 *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  char *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  char *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  void **v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+10Ch] [rbp+Ch]
  HWND *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  LPCWSTR *v44; // [rsp+130h] [rbp+30h]
  int v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+13Ch] [rbp+3Ch]
  char *v47; // [rsp+140h] [rbp+40h]
  int v48; // [rsp+148h] [rbp+48h]
  int v49; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v50; // [rsp+150h] [rbp+50h]
  int v51; // [rsp+158h] [rbp+58h]
  int v52; // [rsp+15Ch] [rbp+5Ch]
  int *v53; // [rsp+160h] [rbp+60h]
  int v54; // [rsp+168h] [rbp+68h]
  int v55; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+180h] [rbp+80h] BYREF
  void *v58; // [rsp+1D0h] [rbp+D0h] BYREF

  v58 = a3;
  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020CB50, 0, 0LL) )
    return;
  v7 = *((_DWORD *)a4 + 23);
  if ( v7 == 1 )
  {
    v8 = *((_QWORD *)a4 + 10);
LABEL_4:
    v9 = 0LL;
    goto LABEL_5;
  }
  v8 = 0LL;
  if ( v7 != 2 )
    goto LABEL_4;
  v9 = *((_QWORD *)a4 + 10);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v23, v9, v8);
  *(_OWORD *)v20 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v22 = *(_QWORD *)(WindowDetails + 32);
  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x20uLL) )
    {
      v12 = *((_QWORD *)a1 + 13);
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v17 = v12;
      v25 = &v17;
      v18 = *((_QWORD *)a1 + 9);
      v28 = &v18;
      v31 = (char *)a1 + 40;
      v34 = (char *)a2 + 12;
      v37 = &v58;
      v26 = v11 + 4;
      v29 = v11 + 4;
      v32 = v11;
      v35 = v11;
      v38 = v11 + 4;
      WindowHandle = CInputDest::GetWindowHandle(a4);
      v42 = 0;
      v19 = WindowHandle;
      v40 = &v19;
      v41 = v14;
      TlgCreateWsz(&pDesc, pwsz[0]);
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v47 = (char *)&pwsz[1] + 4;
      v50 = &v22;
      v16 = HIDWORD(v22);
      v44 = &pwsz[1];
      v53 = &v16;
      v45 = v15;
      v48 = v15;
      v51 = v15;
      v54 = v15;
      TlgCreateWsz(&v56, v20[1]);
      TlgCreateSz(&v57, (LPCSTR)v20[0]);
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E4B32, 0LL, 0LL, 0xFu, &pData);
    }
  }
}
