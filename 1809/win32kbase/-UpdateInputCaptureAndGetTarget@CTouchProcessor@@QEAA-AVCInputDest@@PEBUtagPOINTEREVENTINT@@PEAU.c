/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0146A94 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     SendMessageTo @ 0x1C0038AE0 (SendMessageTo.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006F410 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00887D8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00AD460 (-GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z @ 0x1C0145A10 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C014AB10 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C0162398 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C0162B3C (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BYTE *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        CInputDest *a6,
        _WORD *a7,
        _DWORD *a8,
        unsigned int a9)
{
  struct _KTHREAD **v9; // rbx
  __int16 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdx
  CTouchProcessor *v15; // rcx
  __int64 v16; // r8
  int v17; // r15d
  int IsPointerInputRedirected; // esi
  unsigned int InputProcessContext; // ebx
  CInputDest *v20; // rax
  struct DEVICEINFO *v21; // rax
  struct CPTPProcessor *Processor; // rax
  int v23; // ebx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // edx
  __int16 v36; // bx
  int v37; // edx
  int v38; // ecx
  int v39; // ecx
  _WORD *v40; // rdx
  __int16 v41; // r12
  __int16 v42; // cx
  _BYTE *v43; // rbx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  int v56; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v57; // [rsp+4Ch] [rbp-B4h]
  int v58; // [rsp+50h] [rbp-B0h]
  CInputDest *v59; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v61; // [rsp+68h] [rbp-98h]
  _WORD *v62; // [rsp+70h] [rbp-90h]
  void *v63; // [rsp+78h] [rbp-88h]
  _QWORD v64[5]; // [rsp+80h] [rbp-80h] BYREF
  CInpLockGuard *v65[7]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v66[11]; // [rsp+E0h] [rbp-20h] BYREF
  char v67; // [rsp+190h] [rbp+90h] BYREF
  _OWORD v68[12]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v69[176]; // [rsp+300h] [rbp+200h] BYREF
  _QWORD v70[24]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _QWORD v71[24]; // [rsp+470h] [rbp+370h] BYREF
  int v72; // [rsp+5B0h] [rbp+4B0h]

  v9 = (struct _KTHREAD **)a1;
  v59 = a6;
  v63 = a2;
  v62 = a7;
  v61 = a8;
  v57 = a9;
  memset(v68, 0, 177);
  v12 = 0;
  v13 = a5 & 0x10000;
  v72 = a5 & 0x40000;
  v58 = v13;
  if ( v9[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x43u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 48), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 48), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 48));
  }
  CInputDest::operator=((__int64)v68, a4 + 48);
  if ( !LODWORD(v68[0]) )
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v15, *(_QWORD *)(a3 + 24));
    memset(v69, 0, sizeof(v69));
    IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                 InputProcessContext,
                                 *(unsigned int *)(a4 + 40),
                                 v69);
    CInputDest::CInputDest((CInputDest *)v70, (const struct tagINPUTDEST *)v69);
    CInputDest::operator=((__int64)v68, v70);
    CInputDest::~CInputDest((CInputDest *)v70);
    v17 = IsPointerInputRedirected;
    if ( IsPointerInputRedirected )
    {
      if ( !LODWORD(v68[0]) )
LABEL_14:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    }
    else if ( LODWORD(v68[0]) )
    {
      goto LABEL_14;
    }
    v9 = (struct _KTHREAD **)a1;
    goto LABEL_16;
  }
  v12 = 16;
  v17 = -__CFSHR__(*(_DWORD *)(a4 + 328), 5);
  IsPointerInputRedirected = -__CFSHR__(*(_DWORD *)(a4 + 328), 6);
LABEL_16:
  v20 = v59;
  if ( *(_DWORD *)(a4 + 40) != 5 && *(_DWORD *)v59 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v20 = v59;
  }
  if ( LODWORD(v68[0]) )
    goto LABEL_32;
  CInputDest::operator=((__int64)v68, (__int64)v20);
  v21 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*(_QWORD *)(a3 + 24), 19);
  Processor = CPTPProcessorFactory::GetProcessor(v21);
  if ( Processor && (*((_DWORD *)Processor + 133) & 1) != 0 )
  {
    v17 = 1;
    *v61 = *((_DWORD *)Processor + 132);
    *(_DWORD *)(a4 + 328) |= 0x40u;
  }
  if ( LODWORD(v68[0]) )
  {
LABEL_32:
    v35 = *(_DWORD *)(a3 + 8);
    if ( (unsigned int)(v35 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        (CSpatialProcessor *)v9,
        v35,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32));
  }
  else
  {
    v56 = 0;
    v23 = 0;
    if ( *(_DWORD *)(a4 + 40) == 3 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v23 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v23 |= 0x80u;
    }
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v65,
      (struct CInpLockGuard *)(a1 + 56),
      0LL);
    v24 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                      (unsigned int)&v67,
                      (int)a3 + 8,
                      v23,
                      v57,
                      (__int64)&v60,
                      (__int64)&v56,
                      (__int64)v61);
    v25 = v24[1];
    v66[0] = *v24;
    v26 = v24[2];
    v66[1] = v25;
    v27 = v24[3];
    v66[2] = v26;
    v28 = v24[4];
    v66[3] = v27;
    v29 = v24[5];
    v66[4] = v28;
    v30 = v24[6];
    v66[5] = v29;
    v31 = v24[7];
    v66[6] = v30;
    v32 = v24[8];
    v66[7] = v31;
    v33 = v24[9];
    v66[8] = v32;
    v34 = v24[10];
    v66[9] = v33;
    v66[10] = v34;
    CInputDest::CInputDest((CInputDest *)v71, (const struct tagINPUTDEST *)v66);
    CInputDest::operator=((__int64)v68, v71);
    CInputDest::~CInputDest((CInputDest *)v71);
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(a3 + 8),
      (const struct CInputDest *)v68,
      v60 != 0);
    if ( v58 )
    {
      memset(v64, 0, sizeof(v64));
      v64[0] = *((_QWORD *)&v68[5] + 1);
      v64[1] = *(_QWORD *)(a3 + 24);
      LODWORD(v64[2]) = *(_DWORD *)(a3 + 8);
      v64[3] = *(_QWORD *)(a1 + 24);
      v64[4] = *(_QWORD *)(a3 + 40);
      SendMessageTo(6LL);
    }
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v65);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_InputVirtualization__private_propertyCache,
      0xF89686u,
      (__int64)&unk_1C01933C8,
      0,
      3u);
    if ( v56 )
    {
      *(_DWORD *)(a4 + 328) |= 0x40u;
      v17 = 1;
    }
  }
  v36 = 32;
  if ( v58 && LODWORD(v68[0]) )
  {
    CInputDest::operator=(a4 + 48, (__int64)v68);
    v37 = *(unsigned __int16 *)(a4 + 32);
    v38 = *(_DWORD *)(a4 + 328) ^ (*(_DWORD *)(a4 + 328) ^ (16 * v17)) & 0x10;
    *(_DWORD *)(a4 + 328) = v38 ^ (v38 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v39 = *(_DWORD *)(a3 + 8);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a3 + 88);
    *(_DWORD *)(a1 + 48) = v39;
    *(_DWORD *)(a1 + 52) = v37;
  }
  else if ( v72 && *(_DWORD *)(a4 + 48) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 48));
    *(_DWORD *)(a4 + 328) &= 0xFFFFFFCF;
  }
  v40 = v62;
  v41 = *v62 | v12;
  *v62 = v41;
  if ( !v17 && (*(_DWORD *)(a4 + 328) & 0x40) == 0 )
    v36 = 0;
  v42 = v36 | v41 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v40 = v42;
  *v40 = v42 | (2 * (*(_WORD *)(a4 + 328) & 0x40));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x44u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v43 = v63;
  memset(v63, 0, 0xB0uLL);
  v43[176] = 0;
  v44 = v68[1];
  *(_OWORD *)v43 = v68[0];
  v45 = v68[2];
  *((_OWORD *)v43 + 1) = v44;
  v46 = v68[3];
  *((_OWORD *)v43 + 2) = v45;
  v47 = v68[4];
  *((_OWORD *)v43 + 3) = v46;
  v48 = v68[5];
  *((_OWORD *)v43 + 4) = v47;
  v49 = v68[6];
  *((_OWORD *)v43 + 5) = v48;
  v50 = v68[7];
  *((_OWORD *)v43 + 6) = v49;
  v51 = v68[8];
  *((_OWORD *)v43 + 7) = v50;
  v52 = v68[9];
  *((_OWORD *)v43 + 8) = v51;
  v53 = v68[10];
  *((_OWORD *)v43 + 9) = v52;
  *((_OWORD *)v43 + 10) = v53;
  memset(v68, 0, 0xB8uLL);
  CInputDest::~CInputDest((CInputDest *)v68);
  CInputDest::~CInputDest(v59);
  return v43;
}
