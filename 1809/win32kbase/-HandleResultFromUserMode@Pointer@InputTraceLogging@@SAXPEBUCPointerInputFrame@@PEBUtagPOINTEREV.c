/*
 * XREFs of ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C013EABC
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C013E49C (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::HandleResultFromUserMode(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2,
        void *a3,
        const struct CInputDest *a4)
{
  int v7; // eax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 WindowDetails; // rax
  int v11; // r10d
  __int64 v12; // rax
  HWND WindowHandle; // rax
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  HWND v18; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR v19[2]; // [rsp+48h] [rbp-B8h]
  LPCWSTR pwsz[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  char v22[48]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+CCh] [rbp-34h]
  __int64 *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  char *v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  char *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]
  void **v36; // [rsp+100h] [rbp+0h]
  int v37; // [rsp+108h] [rbp+8h]
  int v38; // [rsp+10Ch] [rbp+Ch]
  HWND *v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  LPCWSTR *v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]
  char *v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+148h] [rbp+48h]
  int v48; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v49; // [rsp+150h] [rbp+50h]
  int v50; // [rsp+158h] [rbp+58h]
  int v51; // [rsp+15Ch] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+170h] [rbp+70h] BYREF
  void *v54; // [rsp+1C0h] [rbp+C0h] BYREF

  v54 = a3;
  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL) )
    return;
  v7 = *((_DWORD *)a4 + 21);
  if ( v7 == 1 )
  {
    v8 = *((_QWORD *)a4 + 9);
LABEL_4:
    v9 = 0LL;
    goto LABEL_5;
  }
  v8 = 0LL;
  if ( v7 != 2 )
    goto LABEL_4;
  v9 = (_QWORD *)*((_QWORD *)a4 + 9);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v22, v9, v8);
  *(_OWORD *)v19 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v21 = *(_QWORD *)(WindowDetails + 32);
  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
    {
      v12 = *((_QWORD *)a1 + 10);
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v16 = v12;
      v24 = &v16;
      v17 = *((_QWORD *)a1 + 9);
      v27 = &v17;
      v30 = (char *)a1 + 40;
      v33 = (char *)a2 + 12;
      v36 = &v54;
      v25 = v11 + 4;
      v28 = v11 + 4;
      v31 = v11;
      v34 = v11;
      v37 = v11 + 4;
      WindowHandle = CInputDest::GetWindowHandle(a4);
      v41 = 0;
      v18 = WindowHandle;
      v39 = &v18;
      v40 = v14;
      TlgCreateWsz(&pDesc, pwsz[0]);
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v46 = (char *)&pwsz[1] + 4;
      v43 = &pwsz[1];
      v49 = &v21;
      v44 = v15;
      v47 = v15;
      v50 = v15;
      TlgCreateWsz(&v52, v19[1]);
      TlgCreateSz(&v53, (LPCSTR)v19[0]);
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0599, 0LL, 0LL, 0xEu, &pData);
    }
  }
}
