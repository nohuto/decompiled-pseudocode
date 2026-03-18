/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00381D8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004C06C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C004C184 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0080170 (ApiSetEditionPostEventMessage.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C015B910 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015B95C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C015BBB0 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01635DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01639E8 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164518 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0169398 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016AA38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C016AC40 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C016B1CC (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C016B7C8 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C016B9D0 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C016BE70 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF14 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C016BF70 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C016C758 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016F27C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C016F930 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0170AA0 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C017184C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0171F34 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0172374 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0172704 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01734BC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C019AFD8 (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C019B258 (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  CInpLockGuard *v8; // rbx
  int v9; // edx
  __int64 v10; // r8
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  const struct CPointerInputFrame *v15; // rax
  const struct CPointerInputFrame *v16; // r15
  unsigned int v17; // edi
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  struct tagTHREADINFO *v32; // r8
  CPointerInfoNode *v33; // r13
  unsigned int v34; // ecx
  unsigned __int64 v35; // rcx
  CPointerInfoNode *v36; // rcx
  int IsTargetSetForRetrieval; // eax
  int v38; // r9d
  int v39; // eax
  __int64 v40; // rcx
  CTouchProcessor *v41; // rcx
  CInputDest *Queue; // rax
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r8
  char HasDelegationThread; // al
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int64 v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  CTouchProcessor *v66; // rcx
  __int64 v67; // r8
  CTouchProcessor *v68; // rcx
  struct CPointerInfoNode *v69; // rax
  __int64 v70; // r8
  __int128 v71; // xmm1
  __int64 v72; // r8
  __int64 v73; // rdx
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int v83; // eax
  __int64 v84; // rbx
  char *v85; // rcx
  int v86; // r13d
  int v87; // edx
  int v88; // r9d
  __int64 v89; // rcx
  __int64 v90; // r8
  struct CPointerInputFrame *v91; // rax
  int v92; // edx
  unsigned int v94; // [rsp+50h] [rbp-B0h]
  int v95; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v96; // [rsp+58h] [rbp-A8h]
  unsigned int v97; // [rsp+60h] [rbp-A0h]
  struct tagTHREADINFO *v98; // [rsp+68h] [rbp-98h]
  int v99; // [rsp+70h] [rbp-90h]
  int IsMessageDelegated; // [rsp+74h] [rbp-8Ch]
  unsigned int v101; // [rsp+78h] [rbp-88h]
  struct tagQ *QueueForCurrentNode; // [rsp+80h] [rbp-80h]
  struct CPointerInfoNode *v103; // [rsp+88h] [rbp-78h]
  struct tagPOINT v104; // [rsp+90h] [rbp-70h] BYREF
  CInputDest *v105; // [rsp+98h] [rbp-68h] BYREF
  int *v106; // [rsp+A0h] [rbp-60h]
  int v107; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-50h]
  CPointerInfoNode *v109; // [rsp+B8h] [rbp-48h]
  struct CInputDest *v110; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v111[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct CInputDest *v112; // [rsp+D0h] [rbp-30h] BYREF
  struct CInputDest *v113; // [rsp+D8h] [rbp-28h] BYREF
  CInpLockGuard *v114; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v115[3]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v116[4]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v117[7]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v118; // [rsp+190h] [rbp+90h]
  _OWORD v119[7]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v120; // [rsp+210h] [rbp+110h]
  _OWORD v121[7]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v122; // [rsp+290h] [rbp+190h]
  _BYTE v123[64]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v124; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v125[16]; // [rsp+360h] [rbp+260h] BYREF

  v106 = a5;
  v97 = a4;
  v98 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      94,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v8 = (CInpLockGuard *)(this + 6);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v114, (struct CInpLockGuard *)(this + 6));
  v104 = 0LL;
  memset(v115, 0, sizeof(v115));
  memset(v116, 0, 24);
  *a5 = 0;
  if ( a4 == 595 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v12 = 95;
LABEL_20:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v9, 7, v12, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_21:
    v17 = 1;
    goto LABEL_141;
  }
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v14 = 96;
LABEL_26:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v9, 7, v14, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_27:
    v17 = 0;
    goto LABEL_141;
  }
  v15 = CTouchProcessor::ReferenceFrame(this, *(unsigned int *)(a3 + 28), v10);
  v16 = v15;
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v14 = 97;
    goto LABEL_26;
  }
  if ( (*((_DWORD *)v15 + 28) & 0x20) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v12 = 98;
    goto LABEL_20;
  }
  v18 = (_DWORD *)Win32AllocPool(128LL, 0x70697355u);
  if ( !v18 )
  {
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v16);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v14 = 99;
    goto LABEL_26;
  }
  *(_DWORD *)((char *)v18 + 121) = 0;
  *(_WORD *)((char *)v18 + 125) = 0;
  *((_BYTE *)v18 + 127) = 0;
  memset(v18, 0, 0x78uLL);
  *((_BYTE *)v18 + 120) = 0;
  PushW32ThreadLock(v18, v116, lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v22 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v22 >= *((_DWORD *)v16 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    v22 = *(unsigned int *)(a3 + 32);
  }
  v23 = *((_QWORD *)v16 + 16) + 496 * v22;
  v103 = (struct CPointerInfoNode *)v23;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  if ( *(_WORD *)(v23 + 180) != *(_WORD *)(a3 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v23 & 0x800000) != 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v23 & 0x8000000) != 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v23 < 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  }
  if ( a4 == 594 && (*(_DWORD *)(v23 + 4) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
LABEL_46:
  if ( (*(_DWORD *)v23 & 0x100) == 0 && !*(_QWORD *)(v23 + 200) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  v17 = 1;
  v27 = (*((_DWORD *)v98 + 306) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v23, v97);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          this,
                          v98,
                          v27,
                          v97,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v23);
  if ( !QueueForCurrentNode )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
  PushW32ThreadLock(v16, v115, CTouchProcessor::DereferencePointerInputFrame);
  v33 = (CPointerInfoNode *)*((_QWORD *)v16 + 16);
  v34 = *((_DWORD *)v16 + 12);
  v109 = v33;
  v99 = 1;
  v94 = 0;
  if ( v34 )
  {
    v96 = (__int64)v33 + 24;
    while ( 1 )
    {
      v35 = *((_QWORD *)v16 + 16) + 496LL * v34;
      if ( (unsigned __int64)v33 >= v35 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v31, v32);
      CInputDest::SetEmpty((CInputDest *)v18, v31, (__int64)v32);
      if ( v27 && (*((_DWORD *)v98 + 306) & 0x2000) == 0 )
        goto LABEL_132;
      if ( !(unsigned int)CPointerInfoNode::IsValid(v33) )
        goto LABEL_127;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v36, v32);
      v38 = 0;
      if ( IsTargetSetForRetrieval )
      {
        v39 = CTouchProcessor::HandlePointerNodeWithTarget(this, v103, v97, (__int64)v33);
        if ( v39 == 1 )
        {
          *v106 = 1;
          v17 = 0;
          goto LABEL_132;
        }
        if ( (v39 & 0xFFFFFFFD) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v31, v32);
        goto LABEL_127;
      }
      v41 = v103;
      v31 = v96;
      if ( *(_DWORD *)(v96 - 16) != *((_DWORD *)v103 + 2) )
        break;
      if ( v33 != v103 )
      {
        if ( !v27 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated(v33) )
          break;
        Queue = CPointerInfoNode::GetQueue(v33, &v107);
        v38 = 0;
        v105 = Queue;
        if ( v107 || Queue && CInputDest::GetQueue(Queue, 2LL) && !CInputDest::UsesQueue(v105, QueueForCurrentNode) )
          break;
        v31 = v96;
      }
      if ( (*((_DWORD *)v98 + 306) & 0x2000) != 0 )
      {
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *(_QWORD *)(v31 - 8), v27, &v110, &v95) )
        {
          CInputDest::operator=((__int64)v18, (__int64)v110, v43);
        }
        else
        {
          v44 = v96;
          v95 = 1;
          if ( *(_DWORD *)v96 )
          {
            if ( !CInputDest::IsEqualByWindowHandle(v96, *(_QWORD *)(v96 + 176), 0) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47);
            CInputDest::operator=((__int64)v18, v96, v47);
            v44 = v96;
          }
          if ( !*v18 )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v123,
              (struct CInputDest *)(v44 + 336),
              v43);
            v48 = ApiSetEditionPointerSpeedHitTest((unsigned int)&v124, (int)v96 + 152, 0, 0, 0LL, 0LL);
            v49 = *(_OWORD *)(v48 + 16);
            v117[0] = *(_OWORD *)v48;
            v50 = *(_OWORD *)(v48 + 32);
            v117[1] = v49;
            v51 = *(_OWORD *)(v48 + 48);
            v117[2] = v50;
            v52 = *(_OWORD *)(v48 + 64);
            v117[3] = v51;
            v53 = *(_OWORD *)(v48 + 80);
            v117[4] = v52;
            v54 = *(_OWORD *)(v48 + 96);
            v117[5] = v53;
            *(_QWORD *)&v53 = *(_QWORD *)(v48 + 112);
            v117[6] = v54;
            v118 = v53;
            CInputDest::CInputDest((CInputDest *)v125, (const struct tagINPUTDEST *)v117);
            CInputDest::operator=((__int64)v18, v125, v55);
            CInputDest::SetEmpty((CInputDest *)v125, v56, v57);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v123);
          }
        }
        HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v18);
        v41 = 0LL;
        if ( HasDelegationThread )
        {
          CTouchProcessor::SetPointerInfoNodeTarget(
            (CTouchProcessor *)this,
            v16,
            v94,
            (const struct CInputDest *)v18,
            v95,
            &v104,
            0,
            0,
            1,
            1);
          v99 = 0;
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(v33) )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v111);
            v59 = *((_OWORD *)v18 + 1);
            v119[0] = *(_OWORD *)v18;
            v60 = *((_OWORD *)v18 + 2);
            v61 = *(_QWORD *)(v96 - 8);
            v119[1] = v59;
            v62 = *((_OWORD *)v18 + 3);
            v119[2] = v60;
            v63 = *((_OWORD *)v18 + 4);
            v119[3] = v62;
            v64 = *((_OWORD *)v18 + 5);
            v119[4] = v63;
            v65 = *((_OWORD *)v18 + 6);
            v119[5] = v64;
            *(_QWORD *)&v64 = *((_QWORD *)v18 + 14);
            v119[6] = v65;
            v120 = v64;
            ApiSetEditionPostEventMessage((__int64)v119, 0x14u, 0, 0LL, v61);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v111);
          }
          goto LABEL_127;
        }
      }
      v66 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(v41, v16, v33) + 37);
      if ( ((unsigned __int8)v66 & 1) != 0 && (*((_DWORD *)v98 + 306) & 0x2000) == 0 )
        CTouchProcessor::SetQFrameNonCoalescable(v66, v16, v33);
      v95 = 1;
      if ( (unsigned int)CPointerInfoNode::IsTouchpad(v33) )
      {
        CTouchProcessor::DetermineTouchpadPointerTargetWindow(
          (CTouchProcessor *)this,
          v98,
          v16,
          v33,
          QueueForCurrentNode,
          v94,
          v27,
          &v95,
          &v104,
          (struct CInputDest *)v18);
        if ( !*v18 )
          goto LABEL_127;
      }
      else
      {
        CTouchProcessor::DeterminePointerTargetWindow(
          (CTouchProcessor *)this,
          v98,
          v33,
          QueueForCurrentNode,
          v27,
          &v95,
          &v104,
          (struct CInputDest *)v18);
      }
      QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v98, v27, v97, IsMessageDelegated, v103);
      if ( !QueueForCurrentNode )
        goto LABEL_131;
      if ( CTouchProcessor::RevalidateFrameProcessing(0LL, v98, v27, v33, 0) )
      {
        if ( *v18 )
        {
          if ( (*(_DWORD *)(v96 + 164) & 0x10000) != 0
            && !(unsigned int)CPointerInfoNode::IsTouchpad(v33)
            && (*(_DWORD *)(v96 - 20) & 0x80u) == 0 )
          {
            CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v18, v33);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v98, v27, v97, IsMessageDelegated, v103);
            if ( !QueueForCurrentNode )
              goto LABEL_131;
            if ( !CTouchProcessor::RevalidateFrameProcessing(0LL, v98, v27, v33, 0) )
              goto LABEL_127;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *(_QWORD *)(v96 - 8), v27, &v112, &v95) )
              CInputDest::operator=((__int64)v18, (__int64)v112, v67);
          }
          if ( *v18 && (unsigned int)CPointerInfoNode::ShouldForegroundActivate(v33) )
          {
            v69 = CTouchProcessor::LookupNode(v68, v16, v94);
            *((_DWORD *)v69 + 38) = v95;
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v123, (struct CInputDest *)v18, v70);
            CInpLockGuard::UnLock(v8);
            v71 = *((_OWORD *)v18 + 1);
            v72 = *(_QWORD *)(v96 - 8);
            v73 = *(unsigned __int16 *)(v96 + 128);
            v121[0] = *(_OWORD *)v18;
            v74 = *((_OWORD *)v18 + 2);
            v121[1] = v71;
            v75 = *((_OWORD *)v18 + 3);
            v121[2] = v74;
            v76 = *((_OWORD *)v18 + 4);
            v121[3] = v75;
            v77 = *((_OWORD *)v18 + 5);
            v121[4] = v76;
            v78 = *((_OWORD *)v18 + 6);
            v121[5] = v77;
            *(_QWORD *)&v77 = *((_QWORD *)v18 + 14);
            v121[6] = v78;
            v122 = v77;
            ApiSetEditionPointerActivate(v121, v73, v72, v96 + 144);
            CInpLockGuard::LockExclusive(v8, (struct CLockListEntryStack *)&v105);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v123);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v98, v27, v97, IsMessageDelegated, v103);
            if ( !QueueForCurrentNode )
            {
LABEL_131:
              *v106 = 1;
              v17 = 0;
              goto LABEL_132;
            }
            if ( !CTouchProcessor::RevalidateFrameProcessing(0LL, v98, v27, v33, 0) )
              goto LABEL_127;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *(_QWORD *)(v96 - 8), v27, &v113, &v95) )
              CInputDest::operator=((__int64)v18, (__int64)v113, v79);
          }
        }
        if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v33, v98) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v81, v80, v82);
        CTouchProcessor::SetPointerInfoNodeTarget(
          (CTouchProcessor *)this,
          v16,
          v94,
          (const struct CInputDest *)v18,
          v95,
          &v104,
          0,
          0,
          1,
          0);
        if ( *v18 )
        {
          if ( (*(_DWORD *)(v96 + 164) & 0x10000) != 0 )
          {
            CTouchProcessor::SetPointerImplicitCapture(
              (CTouchProcessor *)this,
              *(_QWORD *)(v96 - 8),
              (const struct CInputDest *)v18,
              v95,
              v27);
          }
          else if ( v97 == 593 )
          {
            CTouchProcessor::SetPointerExplicitCapture(
              (struct _DEVICE_OBJECT *)this,
              *(_QWORD *)(v96 - 8),
              (const struct CInputDest *)v18,
              v95,
              v27);
          }
        }
        if ( (unsigned int)CPointerInfoNode::IsTouchpad(v33) )
        {
          v83 = v94;
          if ( (*(_DWORD *)(v96 + 164) & 0x2000) == 0 )
            goto LABEL_128;
          v101 = 0;
          if ( !v94 )
            goto LABEL_128;
          v84 = v96;
          v85 = 0LL;
          v86 = v95;
          v105 = 0LL;
          v108 = 0LL;
          do
          {
            if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)&v85[*((_QWORD *)v16 + 16)]) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v87) = 4;
                WPP_RECORDER_SF_(
                  (_DWORD)gBaseLog,
                  v87,
                  7,
                  100,
                  (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
                v88 = 0;
              }
              CTouchProcessor::SetPointerInfoNodeTarget(
                (CTouchProcessor *)this,
                v16,
                v101,
                (const struct CInputDest *)v18,
                v86,
                &v104,
                v88,
                v88,
                1,
                v88);
              if ( *v18 )
              {
                v89 = *((_QWORD *)v16 + 16);
                if ( (*(_DWORD *)(v108 + v89 + 188) & 0x10000) != 0 )
                {
                  CTouchProcessor::SetPointerImplicitCapture(
                    (CTouchProcessor *)this,
                    *(_QWORD *)(v108 + v89 + 16),
                    (const struct CInputDest *)v18,
                    v86,
                    v27);
                }
                else if ( v97 == 593 )
                {
                  CTouchProcessor::SetPointerExplicitCapture(
                    (struct _DEVICE_OBJECT *)this,
                    *(_QWORD *)(v84 - 8),
                    (const struct CInputDest *)v18,
                    v86,
                    v27);
                }
              }
            }
            v31 = 496LL;
            v108 += 496LL;
            v85 = (char *)v105 + 496;
            ++v101;
            v105 = (CInputDest *)((char *)v105 + 496);
          }
          while ( v101 < v94 );
          v33 = v109;
          v8 = (CInpLockGuard *)(this + 6);
        }
      }
LABEL_127:
      v83 = v94;
LABEL_128:
      v34 = *((_DWORD *)v16 + 12);
      v96 += 496LL;
      v33 = (CPointerInfoNode *)((char *)v33 + 496);
      v109 = v33;
      v94 = v83 + 1;
      if ( v83 + 1 >= v34 )
        goto LABEL_132;
    }
    v99 = v38;
    goto LABEL_127;
  }
LABEL_132:
  PopW32ThreadLock(v115);
  PopAndFreeAlwaysW32ThreadLock(v116);
  if ( v17 )
  {
    if ( (*((_DWORD *)v16 + 28) & 0x20) == 0 )
    {
      if ( v99 )
      {
        if ( !v27 )
        {
          v91 = CTouchProcessor::FindAndReferenceFrameById(this, *((unsigned int *)v16 + 10), v90);
          if ( v91 )
          {
            *((_DWORD *)v91 + 28) |= 0x20u;
            CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v91);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v92) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v92,
      7,
      101,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
LABEL_141:
  CInpLockGuard::UnLock(v114);
  return v17;
}
