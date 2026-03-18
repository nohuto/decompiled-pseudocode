/*
 * XREFs of ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C017499C
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0175FC8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C017AAF4 (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0032B80 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C016CFCC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0171B78 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SpeedHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        int a3,
        char a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 WindowDetails; // rax
  __int64 v11; // r10
  HWND WindowHandle; // rax
  int v13; // ecx
  __int64 v14; // r10
  const char *v15; // rax
  __int64 v16; // r10
  __int64 v17; // r10
  HWND v18; // rax
  int v19; // ecx
  __int64 v20; // r10
  const char *v21; // rax
  __int64 v22; // r10
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  HWND v24; // [rsp+38h] [rbp-C8h] BYREF
  HWND v25; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR v26[2]; // [rsp+48h] [rbp-B8h]
  LPCWSTR pwsz[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  char v29[48]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  HWND *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  HWND *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  LPCWSTR *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  char *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  __int64 *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  int v51; // [rsp+1D0h] [rbp+D0h] BYREF

  v51 = a3;
  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020FB50, 0, 0LL) )
    return;
  v7 = *((_DWORD *)a2 + 23);
  if ( v7 == 1 )
  {
    v8 = *((_QWORD *)a2 + 10);
LABEL_4:
    v9 = 0LL;
    goto LABEL_5;
  }
  v8 = 0LL;
  if ( v7 != 2 )
    goto LABEL_4;
  v9 = *((_QWORD *)a2 + 10);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v29, v9, v8);
  *(_OWORD *)v26 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v28 = *(_QWORD *)(WindowDetails + 32);
  if ( a4 )
  {
    if ( dword_1C020FB50 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
      {
        v24 = (HWND)*((_QWORD *)a1 + 10);
        v31 = &v24;
        v33 = (char *)a1 + 4;
        v32 = 8LL;
        v34 = v11;
        WindowHandle = CInputDest::GetWindowHandle(a2);
        v13 = *((_DWORD *)a2 + 1);
        v25 = WindowHandle;
        v35 = &v25;
        v37 = &v51;
        v36 = 8LL;
        v38 = v14;
        v15 = InputTraceLogging::RoutingModeToString(v13);
        TlgCreateSz(&pDesc, v15);
        TlgCreateWsz(&v40, pwsz[0]);
        v43 = (char *)&pwsz[1] + 4;
        v41 = &pwsz[1];
        v45 = &v28;
        v23 = HIDWORD(v28);
        v47 = &v23;
        v42 = v16;
        v44 = v16;
        v46 = v16;
        v48 = v16;
        TlgCreateWsz(&v49, v26[1]);
        TlgCreateSz(&v50, (LPCSTR)v26[0]);
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6C8E, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
  {
    v25 = (HWND)*((_QWORD *)a1 + 10);
    v31 = &v25;
    v33 = (char *)a1 + 4;
    v32 = 8LL;
    v34 = v17;
    v18 = CInputDest::GetWindowHandle(a2);
    v19 = *((_DWORD *)a2 + 1);
    v24 = v18;
    v35 = &v24;
    v37 = &v51;
    v36 = 8LL;
    v38 = v20;
    v21 = InputTraceLogging::RoutingModeToString(v19);
    TlgCreateSz(&pDesc, v21);
    TlgCreateWsz(&v40, pwsz[0]);
    v43 = (char *)&pwsz[1] + 4;
    v41 = &pwsz[1];
    v45 = &v28;
    v23 = HIDWORD(v28);
    v47 = &v23;
    v42 = v22;
    v44 = v22;
    v46 = v22;
    v48 = v22;
    TlgCreateWsz(&v49, v26[1]);
    TlgCreateSz(&v50, (LPCSTR)v26[0]);
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6D55, 0LL, 0LL, 0xEu, &pData);
  }
}
