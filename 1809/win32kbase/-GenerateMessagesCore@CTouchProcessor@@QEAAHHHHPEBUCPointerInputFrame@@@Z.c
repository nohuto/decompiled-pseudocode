/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0137CA8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0141D28 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00E5FE0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00E63A0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00E63D0 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C00E6710 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0136708 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01384F8 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0138920 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0139268 (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013978C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013991C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0139B30 (-GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C013A970 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C013DFE0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C013EF38 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F628 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C013F7C8 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0142064 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01459B4 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C0148154 (WPP_RECORDER_SF_LLL.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C0162230 (ApiSetEditionIsGpqForegroundAccessible.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C01631D4 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  int v7; // r12d
  unsigned int v8; // r13d
  PDEVICE_OBJECT v9; // rcx
  int v10; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  CInputThread *v15; // rdi
  bool v16; // bl
  CTouchProcessor *v17; // rcx
  const GUID *v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // ebx
  const struct CPointerInfoNode *i; // rbp
  unsigned __int64 v22; // rcx
  BOOL v23; // ebx
  int v24; // edx
  const GUID *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  CTouchProcessor *v29; // rcx
  unsigned __int64 *v30; // rbx
  int v31; // edi
  int v32; // r13d
  unsigned int v33; // r12d
  CTouchProcessor *v34; // rcx
  int MessagesForNode; // eax
  unsigned __int64 PrevMsgId; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 *v41; // rbx
  unsigned int v42; // edi
  CTouchProcessor *v43; // rcx
  int v44; // eax
  __int64 *v45; // rbx
  unsigned int j; // edi
  int v47; // r8d
  unsigned int v48; // ebx
  unsigned int v49; // ecx
  int v50; // r12d
  unsigned int v51; // edi
  int v52; // ebp
  int v53; // r13d
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  unsigned __int64 v57; // rbx
  unsigned int v58; // edi
  CTouchProcessor *v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // edi
  __int64 *k; // rbx
  CTouchProcessor *v63; // rcx
  const GUID *v64; // r8
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  CTouchProcessor *v66; // rcx
  const struct CPointerInfoNode *v67; // rdi
  _DWORD *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  unsigned __int16 v71; // bx
  int v73; // [rsp+20h] [rbp-C8h]
  unsigned int v74; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+48h] [rbp-A0h]
  int v76; // [rsp+50h] [rbp-98h]
  int v77; // [rsp+54h] [rbp-94h]
  LPCWSTR *v78; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v79[24]; // [rsp+60h] [rbp-88h] BYREF
  CInpLockGuard *v80[14]; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v81; // [rsp+F0h] [rbp+8h]
  int v82; // [rsp+F8h] [rbp+10h]
  int v83; // [rsp+100h] [rbp+18h]
  int v84; // [rsp+110h] [rbp+28h]

  v83 = a3;
  v82 = a2;
  v7 = a3;
  v8 = a2;
  v75 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = WPP_GLOBAL_Control;
  v10 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x49u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  v15 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15, 0LL);
  v16 = CInputThread::_CalledOnInputThread(v15);
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 && gptiManipulationThread )
  {
    if ( !a4 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v17, a5) )
      {
        EtwTraceDwmManipulationFrameStart(
          (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
          *((_DWORD *)a5 + 12),
          v18);
        PushW32ThreadLock(a5, v79, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)this, a5);
        PopW32ThreadLock(v79);
      }
      goto LABEL_18;
    }
LABEL_13:
    v19 = 0;
    v20 = 0;
    for ( i = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 13); v20 < *((_DWORD *)a5 + 12); ++v20 )
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v17, a5, i, a4) )
        ++v19;
      i = (const struct CPointerInfoNode *)((char *)i + 576);
    }
    EtwTraceDwmManipulationFrameRouted((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10), v19, v18);
    v10 = 0;
    goto LABEL_18;
  }
  if ( a4 )
    goto LABEL_13;
LABEL_18:
  v22 = *((unsigned int *)a5 + 23);
  v23 = (*((_DWORD *)a5 + 23) & 1) == 0;
  v24 = v23;
  if ( (*((_DWORD *)a5 + 23) & 1) == 0 && (v22 & 8) != 0 && !a4 )
  {
    PushW32ThreadLock(a5, v79, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)this, a5);
    PopW32ThreadLock(v79);
    v24 = (unsigned int)ApiSetEditionIsGpqForegroundAccessible(v8) != 0 && v23;
  }
  if ( !v24 )
    goto LABEL_102;
  if ( (*((_DWORD *)a5 + 23) & 2) != 0 )
  {
    v22 = (unsigned int)-(a4 != 0);
    v24 &= v22;
  }
  if ( !v24 )
    goto LABEL_102;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v78, L"GenerateFrameMessages", 0LL);
  EtwTraceBeginPointerFrameMessageGeneration(
    (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
    *((_DWORD *)a5 + 12),
    v25);
  v28 = *((unsigned int *)a5 + 12);
  v29 = 0LL;
  v30 = (unsigned __int64 *)*((_QWORD *)a5 + 13);
  v31 = 0;
  v81 = 0;
  v32 = 0;
  v74 = 0;
  v33 = 0;
  v76 = 0;
  v84 = 0;
  v77 = 0;
  if ( !(_DWORD)v28 )
    goto LABEL_52;
  do
  {
    v34 = (CTouchProcessor *)(*((_QWORD *)a5 + 13) + 576 * v28);
    if ( v30 >= (unsigned __int64 *)v34 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v26, v27);
    MessagesForNode = CTouchProcessor::ShouldGenerateMessagesForNode(v34, a5, (const struct CPointerInfoNode *)v30, a4);
    v29 = 0LL;
    if ( MessagesForNode )
    {
      PrevMsgId = CTouchProcessor::GetPrevMsgId(0LL, v30[2]);
      CTouchProcessor::ProcessAndUnreferencePreviousInput(
        (CTouchProcessor *)this,
        (const struct CPointerInfoNode *)v30,
        PrevMsgId,
        v75,
        v82,
        v83);
      v37 = *(unsigned int *)v30;
      if ( (v37 & 0x1000) == 0 )
      {
        if ( (v37 & 8) != 0 )
        {
          if ( __CFSHR__(v37, 7) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v26, v27);
          ++v10;
        }
        else if ( __CFSHR__(v37, 7) )
        {
          ++v32;
        }
        v38 = v31 + 1;
        v39 = *((unsigned int *)v30 + 61);
        if ( (v39 & 1) == 0 )
          v38 = v31;
        v31 = v38;
        v40 = v81 + 1;
        if ( (v39 & 2) != 0 )
          v40 = v81;
        v81 = v40;
        v26 = v40;
        if ( (v39 & 0x10000) != 0 )
        {
          ++v74;
        }
        else if ( (v39 & 0x40000) != 0 )
        {
          ++v84;
          v81 = v40;
        }
        else
        {
          if ( (v39 & 0x20000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v40, v27);
            v26 = v81;
          }
          ++v76;
          v81 = v26;
        }
      }
      v29 = 0LL;
    }
    v28 = *((unsigned int *)a5 + 12);
    v30 += 72;
    ++v33;
  }
  while ( v33 < (unsigned int)v28 );
  v77 = v32;
  if ( !v10 && !v32 )
  {
LABEL_52:
    if ( !v31 )
      goto LABEL_70;
  }
  v41 = (__int64 *)*((_QWORD *)a5 + 13);
  v42 = 0;
  if ( !(_DWORD)v28 )
    goto LABEL_62;
  do
  {
    v43 = (CTouchProcessor *)(*((_QWORD *)a5 + 13) + 576 * v28);
    if ( v41 >= (__int64 *)v43 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v26, v27);
    if ( (*(_DWORD *)v41 & 0x1000) == 0 )
    {
      v44 = CTouchProcessor::ShouldGenerateMessagesForNode(v43, a5, (const struct CPointerInfoNode *)v41, a4);
      v29 = 0LL;
      if ( !v44 )
        goto LABEL_60;
      v73 = v75;
      CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v42, v41[2]);
    }
    v29 = 0LL;
LABEL_60:
    v28 = *((unsigned int *)a5 + 12);
    v41 += 72;
    ++v42;
  }
  while ( v42 < (unsigned int)v28 );
  v32 = v77;
LABEL_62:
  if ( v32 )
  {
    v45 = (__int64 *)*((_QWORD *)a5 + 13);
    for ( j = 0; j < (unsigned int)v28; ++j )
    {
      v29 = (CTouchProcessor *)(*((_QWORD *)a5 + 13) + 576 * v28);
      if ( v45 >= (__int64 *)v29 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v26, v27);
      if ( (*(_DWORD *)v45 & 0x1000) == 0
        && CTouchProcessor::ShouldGenerateMessagesForNode(v29, a5, (const struct CPointerInfoNode *)v45, a4) )
      {
        v73 = v75;
        CTouchProcessor::GenerateCaptureAcquiredMessages((CTouchProcessor *)this, a5, j, v45[2]);
      }
      v28 = *((unsigned int *)a5 + 12);
      v45 += 72;
    }
  }
LABEL_70:
  v48 = 0;
  if ( (unsigned int)CTouchProcessor::IsTouchpadDevice(v29, *((void **)a5 + 8)) )
  {
    v49 = v74;
    if ( (*((_DWORD *)a5 + 23) & 8) != 0 && v74 > 1 )
    {
      v50 = v84;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_LLL((unsigned int)this[1], 0, v47, 74, v73, *((_DWORD *)a5 + 10), v74, v84);
      v51 = v75;
      v48 = 0x2000;
      v52 = v82;
      v53 = v83;
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v75, v82, v83, 0x2000u, 0, a4);
      v49 = v74;
    }
    else
    {
      v53 = v83;
      v52 = v82;
      v50 = v84;
      v51 = v75;
    }
    if ( !v76 && v49 && v50 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_LLL((unsigned int)this[1], 0, v47, 75, v73, *((_DWORD *)a5 + 10), v49, v50);
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v51, v52, v53, 0x10000u, v48, a4);
      v48 |= 0x10000u;
    }
  }
  else
  {
    v50 = v84;
  }
  v8 = v82;
  CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v75, v82, v83, 0, v48, a4);
  if ( v50 )
  {
    v56 = *((unsigned int *)a5 + 12);
    v57 = *((_QWORD *)a5 + 13);
    v58 = 0;
    if ( (_DWORD)v56 )
    {
      do
      {
        v59 = (CTouchProcessor *)(*((_QWORD *)a5 + 13) + 576 * v56);
        if ( v57 >= (unsigned __int64)v59 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v54, v55);
        if ( (*(_DWORD *)v57 & 0x1000) == 0
          && CTouchProcessor::ShouldGenerateMessagesForNode(v59, a5, (const struct CPointerInfoNode *)v57, a4)
          && (*(_DWORD *)(v57 + 244) & 0x40000) != 0 )
        {
          CTouchProcessor::ProcessLostCaptureList(
            (CTouchProcessor *)this,
            *(_WORD *)(v57 + 236),
            1,
            a5,
            v58,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        }
        v56 = *((unsigned int *)a5 + 12);
        v57 += 576LL;
        ++v58;
      }
      while ( v58 < (unsigned int)v56 );
      v8 = v82;
    }
  }
  if ( v81 )
  {
    v60 = *((unsigned int *)a5 + 12);
    v61 = 0;
    for ( k = (__int64 *)*((_QWORD *)a5 + 13); v61 < (unsigned int)v60; ++v61 )
    {
      v63 = (CTouchProcessor *)(*((_QWORD *)a5 + 13) + 576 * v60);
      if ( k >= (__int64 *)v63 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v63, v54, v55);
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v63, a5, (const struct CPointerInfoNode *)k, a4) )
        CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v61, k[2]);
      v60 = *((unsigned int *)a5 + 12);
      k += 72;
    }
  }
  InputTraceLogging::Pointer::GenerateFrameMessages(a5);
  EtwTraceEndPointerFrameMessageGeneration(
    (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
    *((_DWORD *)a5 + 12),
    v64);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v78);
  v7 = v83;
LABEL_102:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v22, a5, (__int64)v18);
  v67 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v66, NodeForPointerPromotion, a4) )
  {
    v70 = (*v68 & 0x8000u) >> 13;
    v71 = (v7 != 0 ? 2 : 0) | (v8 != 0) | v70 | ((*v68 & 0x10000u) >> 13) | ((*v68 & 0x40u) >> 2);
    if ( v68[60] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v68, v69);
    PushW32ThreadLock(a5, v79, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v80,
      (struct CInpLockGuard *)(this + 7),
      0LL);
    ApiSetEditionProcessPointerInputAsMouse((char *)v67 + 232, *((unsigned __int16 *)v67 + 112), v71);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v80);
    PopW32ThreadLock(v79);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Cu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return 1LL;
}
