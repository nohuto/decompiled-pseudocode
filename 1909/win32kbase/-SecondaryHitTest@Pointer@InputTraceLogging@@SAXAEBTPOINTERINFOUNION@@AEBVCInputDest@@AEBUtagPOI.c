/*
 * XREFs of ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C016FA68
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01635DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
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

void __fastcall InputTraceLogging::Pointer::SecondaryHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rdx
  __int64 WindowDetails; // rax
  int v8; // r10d
  __int64 v9; // rax
  HWND WindowHandle; // rax
  int v11; // r9d
  int v12; // r10d
  LONG x; // ecx
  int v14; // r10d
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  LONG v16; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  HWND psz; // [rsp+50h] [rbp-B8h] BYREF
  LPCSTR psz_8[2]; // [rsp+58h] [rbp-B0h]
  LPCWSTR pwsz_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  char v23[40]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v25; // [rsp+C8h] [rbp-40h]
  int v26; // [rsp+D0h] [rbp-38h]
  int v27; // [rsp+D4h] [rbp-34h]
  char *v28; // [rsp+D8h] [rbp-30h]
  int v29; // [rsp+E0h] [rbp-28h]
  int v30; // [rsp+E4h] [rbp-24h]
  HWND *p_psz; // [rsp+E8h] [rbp-20h]
  int v32; // [rsp+F0h] [rbp-18h]
  int v33; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  LPCWSTR *v35; // [rsp+108h] [rbp+0h]
  int v36; // [rsp+110h] [rbp+8h]
  int v37; // [rsp+114h] [rbp+Ch]
  char *v38; // [rsp+118h] [rbp+10h]
  int v39; // [rsp+120h] [rbp+18h]
  int v40; // [rsp+124h] [rbp+1Ch]
  __int64 *v41; // [rsp+128h] [rbp+20h]
  int v42; // [rsp+130h] [rbp+28h]
  int v43; // [rsp+134h] [rbp+2Ch]
  int *v44; // [rsp+138h] [rbp+30h]
  int v45; // [rsp+140h] [rbp+38h]
  int v46; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+158h] [rbp+50h] BYREF
  LONG *v49; // [rsp+168h] [rbp+60h]
  int v50; // [rsp+170h] [rbp+68h]
  int v51; // [rsp+174h] [rbp+6Ch]
  __int64 *v52; // [rsp+178h] [rbp+70h]
  int v53; // [rsp+180h] [rbp+78h]
  int v54; // [rsp+184h] [rbp+7Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020CB50, 0, 0LL) )
  {
    if ( *((_DWORD *)a2 + 23) == 2 )
      v6 = *((_QWORD *)a2 + 10);
    else
      v6 = 0LL;
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v23, v6, 0LL);
    *(_OWORD *)psz_8 = *(_OWORD *)WindowDetails;
    *(_OWORD *)pwsz_8 = *(_OWORD *)(WindowDetails + 16);
    v22 = *(_QWORD *)(WindowDetails + 32);
    if ( dword_1C020CB50 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x20uLL) )
      {
        v9 = *((_QWORD *)a1 + 10);
        v27 = 0;
        v30 = 0;
        v18 = v9;
        v25 = &v18;
        v28 = (char *)a1 + 4;
        v26 = v8 + 4;
        v29 = v8;
        WindowHandle = CInputDest::GetWindowHandle(a2);
        v33 = 0;
        psz = WindowHandle;
        p_psz = &psz;
        v32 = v11;
        TlgCreateWsz(&pDesc, pwsz_8[0]);
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v46 = 0;
        v38 = (char *)&pwsz_8[1] + 4;
        v41 = &v22;
        v15 = HIDWORD(v22);
        v35 = &pwsz_8[1];
        v44 = &v15;
        v36 = v12;
        v39 = v12;
        v42 = v12;
        v45 = v12;
        TlgCreateWsz(&v47, (LPCWSTR)psz_8[1]);
        TlgCreateSz(&v48, psz_8[0]);
        v51 = 0;
        x = a3->x;
        v54 = 0;
        v49 = &v16;
        LODWORD(v17) = a3->y;
        v52 = &v17;
        v16 = x;
        v50 = v14;
        v53 = v14;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E42DA, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
}
