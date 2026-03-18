/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C008893C (ApiSetEditionPostEventMessage.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01312B8 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01374A8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01378E0 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0138404 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C013CC44 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C013E0C4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C013E308 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C013E8A4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C013EE9C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C013F070 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C013F548 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C013F5EC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C013F684 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C013FF10 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01426CC (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0142C7C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0143DD4 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0144B2C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01451DC (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C014561C (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0145968 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerActivate @ 0x1C01628D4 (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C0162B3C (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  __int64 v9; // r8
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  const struct CPointerInputFrame *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned int v17; // ebx
  void *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  struct tagTHREADINFO *v34; // r8
  unsigned __int64 v35; // r15
  unsigned int v36; // ecx
  unsigned __int64 v37; // rcx
  CPointerInfoNode *v38; // rcx
  int IsTargetSetForRetrieval; // eax
  int v40; // r9d
  int v41; // eax
  __int64 v42; // rcx
  CTouchProcessor *v43; // rcx
  CInputDest *Queue; // rax
  __int64 v45; // r8
  CTouchProcessor *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  bool v61; // al
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  CTouchProcessor *v72; // rcx
  CTouchProcessor *v73; // rcx
  struct CPointerInfoNode *v74; // rax
  __int64 v75; // r8
  __int128 v76; // xmm1
  __int64 v77; // r8
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned int v91; // eax
  CTouchProcessor *v92; // r12
  char *v93; // rcx
  int v94; // r15d
  __int64 v95; // rcx
  __int64 v96; // r8
  struct CPointerInputFrame *v97; // rax
  struct tagQ *v99; // [rsp+20h] [rbp-E0h]
  unsigned int v100; // [rsp+50h] [rbp-B0h]
  int v101; // [rsp+54h] [rbp-ACh] BYREF
  CTouchProcessor *v102; // [rsp+58h] [rbp-A8h]
  struct tagTHREADINFO *v103; // [rsp+60h] [rbp-A0h]
  unsigned int v104; // [rsp+68h] [rbp-98h]
  int v105; // [rsp+6Ch] [rbp-94h]
  int IsMessageDelegated; // [rsp+70h] [rbp-90h]
  unsigned int v107; // [rsp+74h] [rbp-8Ch]
  struct tagQ *QueueForCurrentNode; // [rsp+78h] [rbp-88h]
  struct tagPOINT v109; // [rsp+80h] [rbp-80h] BYREF
  int *v110; // [rsp+88h] [rbp-78h]
  CInputDest *v111; // [rsp+90h] [rbp-70h]
  int v112; // [rsp+98h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v114; // [rsp+A8h] [rbp-58h]
  struct CInputDest *v115; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v116[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct CInputDest *v117; // [rsp+C0h] [rbp-40h] BYREF
  struct CInputDest *v118; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-30h]
  _BYTE v120[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v121[32]; // [rsp+F0h] [rbp-10h] BYREF
  CInpLockGuard *v122[8]; // [rsp+110h] [rbp+10h] BYREF
  CInpLockGuard *v123[6]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v124[64]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v125[11]; // [rsp+1C0h] [rbp+C0h] BYREF
  _OWORD v126[11]; // [rsp+270h] [rbp+170h] BYREF
  _OWORD v127[11]; // [rsp+320h] [rbp+220h] BYREF
  char v128; // [rsp+3D0h] [rbp+2D0h] BYREF
  _QWORD v129[24]; // [rsp+480h] [rbp+380h] BYREF

  v110 = a5;
  v104 = a4;
  v103 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Au,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v109 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v123,
    (CTouchProcessor *)((char *)this + 56),
    (void *)a3);
  *a5 = 0;
  if ( a4 == 595 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 91;
LABEL_15:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if ( !a3 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 92;
LABEL_20:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_21;
    }
    goto LABEL_21;
  }
  v14 = CTouchProcessor::ReferenceFrame((struct _KTHREAD **)this, *(unsigned int *)(a3 + 28), v9);
  v16 = (__int64)v14;
  if ( !v14 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 93;
      goto LABEL_20;
    }
LABEL_21:
    v17 = 0;
    goto LABEL_137;
  }
  if ( (*((_DWORD *)v14 + 23) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v14, v15);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 94;
      goto LABEL_15;
    }
LABEL_16:
    v17 = 1;
    goto LABEL_137;
  }
  v18 = (void *)Win32AllocPool(184LL, 0x70697355u);
  v20 = (__int64)v18;
  if ( !v18 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, v16, v19);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 95;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  memset(v18, 0, 0xB8uLL);
  *(_BYTE *)(v20 + 176) = 0;
  PushW32ThreadLock(v20, v121, lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v24 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v24 >= *(_DWORD *)(v16 + 48) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    v24 = *(unsigned int *)(a3 + 32);
  }
  v25 = *(_QWORD *)(v16 + 104) + 576 * v24;
  v119 = v25;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v25) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  if ( *(_WORD *)(v25 + 236) != *(_WORD *)(a3 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v25 & 0x800000) != 0 )
      goto LABEL_40;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v25 & 0x8000000) != 0 )
      goto LABEL_40;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v25 < 0 )
      goto LABEL_40;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  }
  if ( a4 == 594 && (*(_DWORD *)(v25 + 4) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
LABEL_40:
  if ( (*(_DWORD *)v25 & 0x100) == 0 && !*(_QWORD *)(v25 + 256) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  v17 = 1;
  v29 = (*((_DWORD *)a2 + 302) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v25, a4);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          (struct _KTHREAD **)this,
                          v103,
                          v29,
                          a4,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v25);
  if ( !QueueForCurrentNode )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
  PushW32ThreadLock(v16, v120, CTouchProcessor::DereferencePointerInputFrame);
  v35 = *(_QWORD *)(v16 + 104);
  v36 = *(_DWORD *)(v16 + 48);
  v114 = v35;
  v105 = 1;
  v100 = 0;
  if ( v36 )
  {
    v102 = (CTouchProcessor *)(v35 + 24);
    do
    {
      v37 = *(_QWORD *)(v16 + 104) + 576LL * v36;
      if ( v35 >= v37 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v33, v34);
      CInputDest::SetEmpty((CInputDest *)v20);
      if ( v29 && (*((_DWORD *)v103 + 302) & 0x2000) == 0 )
        break;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v35) )
        goto LABEL_124;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v38, v34);
      v40 = 0;
      if ( IsTargetSetForRetrieval )
      {
        v41 = CTouchProcessor::HandlePointerNodeWithTarget((struct _KTHREAD **)this, (CPointerInfoNode *)v25, v104, v35);
        if ( v41 == 1 )
        {
          *v110 = 1;
          v17 = 0;
          break;
        }
        if ( (v41 & 0xFFFFFFFD) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v33, v34);
        goto LABEL_124;
      }
      v43 = v102;
      if ( *((_DWORD *)v102 - 4) != *(_DWORD *)(v25 + 8) )
      {
LABEL_57:
        v105 = v40;
        goto LABEL_124;
      }
      if ( v35 != v25 )
      {
        if ( !v29 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v35) )
          goto LABEL_57;
        Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v35, &v112);
        v40 = 0;
        v111 = Queue;
        if ( v112 || Queue && CInputDest::GetQueue(Queue, 2) && !CInputDest::UsesQueue(v111, QueueForCurrentNode) )
          goto LABEL_57;
        v43 = v102;
      }
      if ( (*((_DWORD *)v103 + 302) & 0x2000) != 0 )
      {
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                             (struct _KTHREAD **)this,
                             *((_QWORD *)v43 - 1),
                             v29,
                             &v115,
                             &v101) )
        {
          CInputDest::operator=(v20, (__int64)v115);
        }
        else
        {
          v46 = v102;
          v101 = 1;
          if ( *(_DWORD *)v102 )
          {
            if ( !CInputDest::IsEqualByWindowHandle((__int64)v102, *((void **)v102 + 29), 0) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49);
            CInputDest::operator=(v20, (__int64)v102);
            v46 = v102;
          }
          if ( !*(_DWORD *)v20 )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v122,
              (CTouchProcessor *)((char *)v46 + 368),
              v45);
            v50 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v128, (int)v102 + 208, 0, 0, 0LL, 0LL, 0LL);
            v51 = v50[1];
            v125[0] = *v50;
            v52 = v50[2];
            v125[1] = v51;
            v53 = v50[3];
            v125[2] = v52;
            v54 = v50[4];
            v125[3] = v53;
            v55 = v50[5];
            v125[4] = v54;
            v56 = v50[6];
            v125[5] = v55;
            v57 = v50[7];
            v125[6] = v56;
            v58 = v50[8];
            v125[7] = v57;
            v59 = v50[9];
            v125[8] = v58;
            v60 = v50[10];
            v125[9] = v59;
            v125[10] = v60;
            CInputDest::CInputDest((CInputDest *)v129, (const struct tagINPUTDEST *)v125);
            CInputDest::operator=(v20, v129);
            CInputDest::~CInputDest((CInputDest *)v129);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v122);
          }
        }
        v43 = (CTouchProcessor *)(unsigned int)(*(_DWORD *)(v20 + 84) - 1);
        if ( *(_DWORD *)(v20 + 84) == 1 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v20 + 72) + 64LL) )
            goto LABEL_81;
          v61 = 0;
          goto LABEL_80;
        }
        if ( *(_DWORD *)(v20 + 84) == 2 )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(v20 + 72) + 248LL) != 0LL;
LABEL_80:
          if ( v61 )
          {
LABEL_81:
            CTouchProcessor::SetPointerInfoNodeTarget(
              this,
              (const struct CPointerInputFrame *)v16,
              v100,
              (const struct CInputDest *)v20,
              v101,
              &v109,
              0,
              0,
              1,
              1);
            v105 = 0;
            if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v35) )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v116);
              v62 = *(_OWORD *)(v20 + 16);
              v126[0] = *(_OWORD *)v20;
              v63 = *(_OWORD *)(v20 + 32);
              v99 = (struct tagQ *)*((_QWORD *)v102 - 1);
              v126[1] = v62;
              v64 = *(_OWORD *)(v20 + 48);
              v126[2] = v63;
              v65 = *(_OWORD *)(v20 + 64);
              v126[3] = v64;
              v66 = *(_OWORD *)(v20 + 80);
              v126[4] = v65;
              v67 = *(_OWORD *)(v20 + 96);
              v126[5] = v66;
              v68 = *(_OWORD *)(v20 + 112);
              v126[6] = v67;
              v69 = *(_OWORD *)(v20 + 128);
              v126[7] = v68;
              v70 = *(_OWORD *)(v20 + 144);
              v126[8] = v69;
              v71 = *(_OWORD *)(v20 + 160);
              v126[9] = v70;
              v126[10] = v71;
              ApiSetEditionPostEventMessage(v126, 0x14u, 0, 0LL, (__int64)v99);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v116);
            }
            goto LABEL_124;
          }
        }
      }
      v72 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                   v43,
                                                   (const struct CPointerInputFrame *)v16,
                                                   (const struct CPointerInfoNode *)v35)
                               + 51);
      if ( ((unsigned __int8)v72 & 1) != 0 && (*((_DWORD *)v103 + 302) & 0x2000) == 0 )
        CTouchProcessor::SetQFrameNonCoalescable(
          v72,
          (const struct CPointerInputFrame *)v16,
          (const struct CPointerInfoNode *)v35);
      v101 = 1;
      if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v35) )
      {
        CTouchProcessor::DetermineTouchpadPointerTargetWindow(
          this,
          v103,
          (const struct CPointerInputFrame *)v16,
          (struct CPointerInfoNode *)v35,
          QueueForCurrentNode,
          v100,
          v29,
          &v101,
          &v109,
          (struct CInputDest *)v20);
        if ( !*(_DWORD *)v20 )
          goto LABEL_124;
      }
      else
      {
        CTouchProcessor::DeterminePointerTargetWindow(
          this,
          v103,
          (struct CPointerInfoNode *)v35,
          QueueForCurrentNode,
          v29,
          &v101,
          &v109,
          (struct CInputDest *)v20);
      }
      QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                              (struct _KTHREAD **)this,
                              v103,
                              v29,
                              v104,
                              IsMessageDelegated,
                              (const struct CPointerInfoNode *)v25);
      if ( !QueueForCurrentNode )
        goto LABEL_128;
      if ( CTouchProcessor::RevalidateFrameProcessing(0LL, v103, v29, (const struct CPointerInfoNode *)v35, 0) )
      {
        if ( *(_DWORD *)v20 )
        {
          if ( (*((_DWORD *)v102 + 55) & 0x10000) != 0
            && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v35)
            && (*((_DWORD *)v102 - 5) & 0x80u) == 0 )
          {
            CTouchProcessor::PointerParentNotify((struct _KTHREAD **)this, (struct CInputDest *)v20, (void **)v35);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                    (struct _KTHREAD **)this,
                                    v103,
                                    v29,
                                    v104,
                                    IsMessageDelegated,
                                    (const struct CPointerInfoNode *)v25);
            if ( !QueueForCurrentNode )
              goto LABEL_128;
            if ( !CTouchProcessor::RevalidateFrameProcessing(0LL, v103, v29, (const struct CPointerInfoNode *)v35, 0) )
              goto LABEL_124;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                                 (struct _KTHREAD **)this,
                                 *((_QWORD *)v102 - 1),
                                 v29,
                                 &v117,
                                 &v101) )
              CInputDest::operator=(v20, (__int64)v117);
          }
          if ( *(_DWORD *)v20 && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v35) )
          {
            v74 = CTouchProcessor::LookupNode(v73, (const struct CPointerInputFrame *)v16, v100);
            *((_DWORD *)v74 + 52) = v101;
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v124, (struct CInputDest *)v20, v75);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v122,
              (CTouchProcessor *)((char *)this + 56),
              *((void **)v102 - 1));
            v76 = *(_OWORD *)(v20 + 16);
            v77 = *((_QWORD *)v102 - 1);
            v127[0] = *(_OWORD *)v20;
            v78 = *(_OWORD *)(v20 + 32);
            v127[1] = v76;
            v79 = *(_OWORD *)(v20 + 48);
            v127[2] = v78;
            v80 = *(_OWORD *)(v20 + 64);
            v127[3] = v79;
            v81 = *(_OWORD *)(v20 + 80);
            v127[4] = v80;
            v82 = *(_OWORD *)(v20 + 96);
            v127[5] = v81;
            v83 = *(_OWORD *)(v20 + 112);
            v127[6] = v82;
            v84 = *(_OWORD *)(v20 + 128);
            v127[7] = v83;
            v85 = *(_OWORD *)(v20 + 144);
            v127[8] = v84;
            v86 = *(_OWORD *)(v20 + 160);
            v87 = *((unsigned __int16 *)v102 + 92);
            v127[9] = v85;
            v127[10] = v86;
            ApiSetEditionPointerActivate(v127, v87, v77, (char *)v102 + 200);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v122);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v124);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                    (struct _KTHREAD **)this,
                                    v103,
                                    v29,
                                    v104,
                                    IsMessageDelegated,
                                    (const struct CPointerInfoNode *)v25);
            if ( !QueueForCurrentNode )
            {
LABEL_128:
              *v110 = 1;
              v17 = 0;
              break;
            }
            if ( !CTouchProcessor::RevalidateFrameProcessing(0LL, v103, v29, (const struct CPointerInfoNode *)v35, 0) )
              goto LABEL_124;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                                 (struct _KTHREAD **)this,
                                 *((_QWORD *)v102 - 1),
                                 v29,
                                 &v118,
                                 &v101) )
              CInputDest::operator=(v20, (__int64)v118);
          }
        }
        if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v35, v103) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v89, v88, v90);
        CTouchProcessor::SetPointerInfoNodeTarget(
          this,
          (const struct CPointerInputFrame *)v16,
          v100,
          (const struct CInputDest *)v20,
          v101,
          &v109,
          0,
          0,
          1,
          0);
        if ( *(_DWORD *)v20 )
        {
          if ( (*((_DWORD *)v102 + 55) & 0x10000) != 0 )
          {
            CTouchProcessor::SetPointerImplicitCapture(
              this,
              *((_QWORD *)v102 - 1),
              (const struct CInputDest *)v20,
              v101,
              v29);
          }
          else if ( v104 == 593 )
          {
            CTouchProcessor::SetPointerExplicitCapture(
              this,
              *((_QWORD *)v102 - 1),
              (const struct CInputDest *)v20,
              v101,
              v29);
          }
        }
        if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v35) )
        {
          v91 = v100;
          if ( (*((_DWORD *)v102 + 55) & 0x2000) == 0 )
            goto LABEL_125;
          v107 = 0;
          if ( !v100 )
            goto LABEL_125;
          v92 = v102;
          v93 = 0LL;
          v94 = v101;
          v111 = 0LL;
          v113 = 0LL;
          do
          {
            if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)&v93[*(_QWORD *)(v16 + 104)]) )
            {
              WPP_RECORDER_SF_(
                *((_QWORD *)this + 1),
                4u,
                0xBu,
                0x60u,
                (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
              CTouchProcessor::SetPointerInfoNodeTarget(
                this,
                (const struct CPointerInputFrame *)v16,
                v107,
                (const struct CInputDest *)v20,
                v94,
                &v109,
                0,
                0,
                1,
                0);
              if ( *(_DWORD *)v20 )
              {
                v95 = *(_QWORD *)(v16 + 104);
                if ( (*(_DWORD *)(v113 + v95 + 244) & 0x10000) != 0 )
                {
                  CTouchProcessor::SetPointerImplicitCapture(
                    this,
                    *(_QWORD *)(v113 + v95 + 16),
                    (const struct CInputDest *)v20,
                    v94,
                    v29);
                }
                else if ( v104 == 593 )
                {
                  CTouchProcessor::SetPointerExplicitCapture(
                    this,
                    *((_QWORD *)v92 - 1),
                    (const struct CInputDest *)v20,
                    v94,
                    v29);
                }
              }
            }
            v33 = 576LL;
            v113 += 576LL;
            v93 = (char *)v111 + 576;
            ++v107;
            v111 = (CInputDest *)((char *)v111 + 576);
          }
          while ( v107 < v100 );
          v35 = v114;
          v25 = v119;
        }
      }
LABEL_124:
      v91 = v100;
LABEL_125:
      v36 = *(_DWORD *)(v16 + 48);
      v102 = (CTouchProcessor *)((char *)v102 + 576);
      v35 += 576LL;
      v114 = v35;
      v100 = v91 + 1;
    }
    while ( v91 + 1 < v36 );
  }
  PopW32ThreadLock(v120);
  PopAndFreeAlwaysW32ThreadLock(v121);
  if ( v17 )
  {
    if ( (*(_DWORD *)(v16 + 92) & 0x10) == 0 )
    {
      if ( v105 )
      {
        if ( !v29 )
        {
          v97 = CTouchProcessor::FindAndReferenceFrameById((struct _KTHREAD **)this, *(unsigned int *)(v16 + 40), v96);
          if ( v97 )
          {
            *((_DWORD *)v97 + 23) |= 0x10u;
            CTouchProcessor::UnreferenceFrameInt(this, (__int64)v97, v96);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v16, v96);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x61u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_137:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v123);
  return v17;
}
