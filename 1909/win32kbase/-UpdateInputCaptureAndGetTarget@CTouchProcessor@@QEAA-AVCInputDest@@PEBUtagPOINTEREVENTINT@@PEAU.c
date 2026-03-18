/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C017386C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00494FC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     SendMessageTo @ 0x1C004A490 (SendMessageTo.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C004C148 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C015B820 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C015E10C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C015E130 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C0167480 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01727AC (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C0177270 (-EnterGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01772C0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C0178890 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C019A844 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C019B258 (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        struct _KTHREAD **a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        CInputDest *a6,
        _WORD *a7,
        int *a8,
        unsigned int a9)
{
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r12d
  int IsPointerInputRedirected; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  struct DEVICEINFO *v27; // rax
  struct CPTPProcessor *Processor; // rax
  int v29; // esi
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int16 v42; // si
  struct _KTHREAD **v43; // r8
  int v44; // edx
  int v45; // ecx
  int v46; // ecx
  _WORD *v47; // r8
  __int64 v48; // rdx
  __int16 v49; // cx
  bool v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+38h] [rbp-C8h]
  unsigned int v53; // [rsp+3Ch] [rbp-C4h]
  struct CInpLockGuard *InputProcessContext; // [rsp+48h] [rbp-B8h]
  CInpLockGuard *v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int *v57; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD **v58; // [rsp+60h] [rbp-A0h]
  CInpLockGuard *v59; // [rsp+68h] [rbp-98h] BYREF
  _WORD *v60; // [rsp+70h] [rbp-90h]
  _QWORD v61[2]; // [rsp+78h] [rbp-88h] BYREF
  int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h]
  struct _KTHREAD *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  _OWORD v66[7]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+110h] [rbp+10h]
  char v68; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v69[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v70[16]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v71[16]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v72; // [rsp+3A0h] [rbp+2A0h]

  v58 = a1;
  v60 = a7;
  v57 = a8;
  memset(a2, 0, 0x78uLL);
  v14 = 0;
  *((_BYTE *)a2 + 120) = 0;
  v53 = 0;
  v15 = a5 & 0x10000;
  v72 = a5 & 0x40000;
  v16 = 0;
  IsPointerInputRedirected = 0;
  v52 = v15;
  if ( a1[10] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, 0LL, v13);
    v14 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      7,
      71,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 64), v18, v19);
  }
  CInputDest::operator=((__int64)a2, a4 + 64, v19);
  if ( *a2 )
  {
    v53 = 1;
    v16 = -__CFSHR__(*(_DWORD *)(a4 + 288), 5);
    IsPointerInputRedirected = -__CFSHR__(*(_DWORD *)(a4 + 288), 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(0LL, *(_QWORD *)(a3 + 24));
    if ( InputProcessContext )
    {
      memset(v69, 0, 0x78uLL);
      IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                   InputProcessContext,
                                   *(unsigned int *)(a4 + 56),
                                   v69);
      CInputDest::CInputDest((CInputDest *)v70, (const struct tagINPUTDEST *)v69);
      CInputDest::operator=((__int64)a2, v70, v22);
      CInputDest::~CInputDest((CInputDest *)v70, v23, v24);
      v25 = *a2;
      v16 = IsPointerInputRedirected;
      if ( IsPointerInputRedirected )
      {
        if ( v25 )
          goto LABEL_17;
      }
      else if ( !v25 )
      {
        goto LABEL_17;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v20, v21);
    }
  }
LABEL_17:
  v26 = (__int64)a6;
  if ( *(_DWORD *)(a4 + 56) != 5 && *(_DWORD *)a6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v20, v21);
    v26 = (__int64)a6;
  }
  if ( *a2 )
    goto LABEL_33;
  CInputDest::operator=((__int64)a2, v26, v21);
  v27 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*(_QWORD *)(a3 + 24), 19);
  Processor = CPTPProcessorFactory::GetProcessor(v27);
  if ( Processor && (*((_DWORD *)Processor + 139) & 1) != 0 )
  {
    v16 = 1;
    *v57 = *((_DWORD *)Processor + 138);
    *(_DWORD *)(a4 + 288) |= 0x40u;
  }
  if ( *a2 )
  {
LABEL_33:
    v41 = *(unsigned int *)(a3 + 8);
    if ( (unsigned int)(v41 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        (CSpatialProcessor *)a1,
        v41,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32),
        a9);
  }
  else
  {
    v29 = 0;
    if ( *(_DWORD *)(a4 + 56) == 3 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v29 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v29 |= 0x80u;
    }
    v55 = (CInpLockGuard *)(v58 + 6);
    CInpLockGuard::EnterGuard((CInpLockGuard *)(v58 + 6));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)&v59,
      (struct CInpLockGuard *)(v58 + 6));
    v30 = ApiSetEditionPointerSpeedHitTest((unsigned int)&v68, (int)a3 + 8, v29, a9, (__int64)&v56, (__int64)v57);
    v31 = *(_OWORD *)(v30 + 16);
    v66[0] = *(_OWORD *)v30;
    v32 = *(_OWORD *)(v30 + 32);
    v66[1] = v31;
    v33 = *(_OWORD *)(v30 + 48);
    v66[2] = v32;
    v34 = *(_OWORD *)(v30 + 64);
    v66[3] = v33;
    v35 = *(_OWORD *)(v30 + 80);
    v66[4] = v34;
    v36 = *(_OWORD *)(v30 + 96);
    v66[5] = v35;
    *(_QWORD *)&v35 = *(_QWORD *)(v30 + 112);
    v66[6] = v36;
    v67 = v35;
    CInputDest::CInputDest((CInputDest *)v71, (const struct tagINPUTDEST *)v66);
    CInputDest::operator=((__int64)a2, v71, v37);
    CInputDest::~CInputDest((CInputDest *)v71, v38, v39);
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(a3 + 8),
      (const struct CInputDest *)a2,
      *v57,
      v56 != 0);
    v51 = (unsigned int)(a2[1] - 2) <= 1;
    if ( v52 )
    {
      v40 = *((_QWORD *)a2 + 12);
      v63 = 0;
      v61[0] = v40;
      v61[1] = *(_QWORD *)(a3 + 24);
      v62 = *(_DWORD *)(a3 + 8);
      v64 = v58[2];
      v65 = *(_QWORD *)(a3 + 40);
      SendMessageTo(6LL, v61, 40LL);
    }
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(&v59);
    CInpLockGuard::LeaveGuard(v55);
    if ( v51 )
    {
      *(_DWORD *)(a4 + 288) |= 0x40u;
      v16 = 1;
    }
  }
  v42 = 32;
  if ( v52 && *a2 )
  {
    CInputDest::operator=(a4 + 64, (__int64)a2, v21);
    v43 = v58;
    v44 = *(unsigned __int16 *)(a4 + 32);
    v45 = *(_DWORD *)(a4 + 288) ^ (*(_DWORD *)(a4 + 288) ^ (16 * v16)) & 0x10;
    *(_DWORD *)(a4 + 288) = v45 ^ (v45 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v46 = *(_DWORD *)(a3 + 8);
    v43[4] = *(struct _KTHREAD **)(a3 + 88);
    *((_DWORD *)v43 + 10) = v46;
    *((_DWORD *)v43 + 11) = v44;
  }
  else if ( v72 && *(_DWORD *)(a4 + 64) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 64), v41, v21);
    *(_DWORD *)(a4 + 288) &= 0xFFFFFFCF;
  }
  v47 = v60;
  v48 = v53;
  LOWORD(v48) = *v60 | (16 * v53);
  *v60 = v48;
  if ( !v16 && (*(_DWORD *)(a4 + 288) & 0x40) == 0 )
    v42 = 0;
  v49 = v48 | v42 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v47 = v49;
  *v47 = v49 | (2 * (*(_DWORD *)(a4 + 288) & 0x40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v48) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v48,
      7,
      72,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInputDest::~CInputDest(a6, v48, (__int64)v47);
  return a2;
}
