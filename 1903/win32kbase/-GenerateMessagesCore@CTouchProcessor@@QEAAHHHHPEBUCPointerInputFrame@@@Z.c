/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0165FC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01709BC (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     IsPTPIVEnabled @ 0x1C00421F8 (IsPTPIVEnabled.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C010D5B0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C010D930 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C010D960 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C010DCA0 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C016215C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0164794 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C0166874 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0166C90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167680 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167854 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0167A98 (-GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01688FC (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0168F8C (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C016CB58 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C016DA64 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C016E2CC (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016FA48 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0170C18 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0171290 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0174940 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C01770B4 (WPP_RECORDER_SF_LLL.c)
 *     IsTouchpadDevice @ 0x1C01844FC (IsTouchpadDevice.c)
 *     IsPenIVEnabled @ 0x1C018E1B8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018E22C (IsTouchIVEnabled.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C019DC34 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        struct _KTHREAD **this,
        int a2,
        __int64 a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r15
  unsigned int v7; // r13d
  PDEVICE_OBJECT v8; // rcx
  void *v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CInputThread *v14; // rdi
  unsigned int CurrentThreadId; // eax
  int v16; // ebx
  unsigned int v17; // esi
  CTouchProcessor *v18; // rcx
  const GUID *v19; // r8
  unsigned int v20; // ebx
  const GUID *v21; // r8
  unsigned int v22; // edi
  const struct CPointerInfoNode *v23; // rsi
  int v24; // eax
  const GUID *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // esi
  int v30; // edi
  int v31; // r13d
  unsigned int v32; // r15d
  unsigned int *v33; // rbx
  CTouchProcessor *v34; // rcx
  CTouchProcessor *v35; // rcx
  unsigned __int64 PrevMsgId; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 *v41; // rbx
  unsigned int v42; // edi
  CTouchProcessor *v43; // rcx
  unsigned __int64 *v44; // rbx
  unsigned int i; // edi
  CTouchProcessor *v46; // rcx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  unsigned int v50; // esi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ebx
  int v54; // r13d
  CTouchProcessor *v55; // rdi
  unsigned int v56; // r15d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 v60; // rbx
  unsigned int j; // edi
  CTouchProcessor *v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // edi
  __int64 *k; // rbx
  CTouchProcessor *v66; // rcx
  const GUID *v67; // r8
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v69; // rdx
  CTouchProcessor *v70; // rcx
  __int16 v71; // r10
  const struct CPointerInfoNode *v72; // rsi
  __int64 v73; // r8
  __int64 v74; // rcx
  __int16 v75; // ax
  unsigned __int16 v76; // di
  unsigned int v78; // [rsp+20h] [rbp-60h]
  unsigned int v79; // [rsp+40h] [rbp-40h]
  unsigned int v80; // [rsp+44h] [rbp-3Ch]
  unsigned int v81; // [rsp+48h] [rbp-38h]
  int v82; // [rsp+50h] [rbp-30h]
  int v83; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v84[3]; // [rsp+60h] [rbp-20h] BYREF
  LPCWSTR *v85; // [rsp+78h] [rbp-8h] BYREF
  int v88; // [rsp+D0h] [rbp+50h]
  int v89; // [rsp+E0h] [rbp+60h]

  v88 = a3;
  v5 = this;
  v7 = a2;
  v8 = (PDEVICE_OBJECT)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v81 = (unsigned int)v8;
  memset(v84, 0, sizeof(v84));
  v9 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v9,
        7,
        77,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  if ( v5[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v9, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v14, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v16 = *((_DWORD *)v14 + 10);
  v17 = CurrentThreadId;
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( v17 != v16 )
  {
    v20 = 0;
LABEL_14:
    if ( !a4 )
      goto LABEL_20;
    goto LABEL_15;
  }
  v20 = 0;
  if ( !gptiManipulationThread )
    goto LABEL_14;
  if ( !a4 )
  {
    if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v18, a5) )
    {
      EtwTraceDwmManipulationFrameStart(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v21);
      PushW32ThreadLock(a5, v84, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, a5);
      PopW32ThreadLock(v84);
    }
    goto LABEL_20;
  }
LABEL_15:
  v22 = 0;
  v23 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 16);
  if ( *((_DWORD *)a5 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v18, a5, v23, a4) )
        ++v22;
      v23 = (const struct CPointerInfoNode *)((char *)v23 + 496);
      ++v20;
    }
    while ( v20 < *((_DWORD *)a5 + 12) );
  }
  EtwTraceDwmManipulationFrameRouted((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10), v22, v19);
LABEL_20:
  v24 = *((_DWORD *)a5 + 28);
  if ( (v24 & 2) == 0 )
  {
    if ( (v24 & 0x10) != 0 && !a4 )
    {
      PushW32ThreadLock(a5, v84, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, a5);
      PopW32ThreadLock(v84);
      v24 = *((_DWORD *)a5 + 28);
    }
    if ( (v24 & 4) == 0 || a4 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v85, L"GenerateFrameMessages", 0LL);
      EtwTraceBeginPointerFrameMessageGeneration(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v25);
      if ( isRootPartition()
        && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
      {
        CTouchProcessor::CheckandDeliverContainerInput(v5, a5, v7, a4);
      }
      v28 = *((unsigned int *)a5 + 12);
      v79 = 0;
      v29 = 0;
      v80 = 0;
      v30 = 0;
      v82 = 0;
      v31 = 0;
      v89 = 0;
      v32 = 0;
      v83 = 0;
      v33 = (unsigned int *)*((_QWORD *)a5 + 16);
      if ( (_DWORD)v28 )
      {
        do
        {
          v34 = (CTouchProcessor *)(*((_QWORD *)a5 + 16) + 496 * v28);
          if ( v33 >= (unsigned int *)v34 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v26, v27);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v34, a5, (const struct CPointerInfoNode *)v33, a4) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v35, *((_QWORD *)v33 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v33,
              PrevMsgId,
              v81,
              a2,
              v88);
            v37 = *v33;
            if ( (v37 & 0x1000) == 0 )
            {
              if ( (v37 & 8) != 0 )
              {
                if ( __CFSHR__(v37, 7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v26, v27);
                ++v29;
              }
              else if ( __CFSHR__(v37, 7) )
              {
                ++v31;
              }
              v38 = v30 + 1;
              v39 = v33[47];
              if ( (v39 & 1) == 0 )
                v38 = v30;
              v30 = v38;
              v40 = v79 + 1;
              if ( (v39 & 2) != 0 )
                v40 = v79;
              v79 = v40;
              v26 = v40;
              if ( (v39 & 0x10000) != 0 )
              {
                ++v80;
              }
              else if ( (v39 & 0x40000) != 0 )
              {
                ++v89;
                v79 = v40;
              }
              else
              {
                if ( (v39 & 0x20000) == 0 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v40, v27);
                  v26 = v79;
                }
                ++v82;
                v79 = v26;
              }
            }
          }
          v28 = *((unsigned int *)a5 + 12);
          v33 += 124;
          ++v32;
        }
        while ( v32 < (unsigned int)v28 );
        v83 = v31;
        if ( v29 || v31 )
          goto LABEL_57;
      }
      if ( v30 )
      {
LABEL_57:
        v41 = (__int64 *)*((_QWORD *)a5 + 16);
        v42 = 0;
        if ( (_DWORD)v28 )
        {
          do
          {
            v43 = (CTouchProcessor *)(*((_QWORD *)a5 + 16) + 496 * v28);
            if ( v41 >= (__int64 *)v43 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v26, v27);
            if ( (*(_DWORD *)v41 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v43, a5, (const struct CPointerInfoNode *)v41, a4) )
            {
              v78 = v81;
              CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v42, v41[2]);
            }
            v28 = *((unsigned int *)a5 + 12);
            v41 += 62;
            ++v42;
          }
          while ( v42 < (unsigned int)v28 );
          v31 = v83;
        }
        if ( v31 )
        {
          v44 = (unsigned __int64 *)*((_QWORD *)a5 + 16);
          for ( i = 0; i < (unsigned int)v28; ++i )
          {
            v46 = (CTouchProcessor *)(*((_QWORD *)a5 + 16) + 496 * v28);
            if ( v44 >= (unsigned __int64 *)v46 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v26, v27);
            if ( (*(_DWORD *)v44 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v46, a5, (const struct CPointerInfoNode *)v44, a4) )
            {
              CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, i, v44[2], v81, a2, v88);
            }
            v28 = *((unsigned int *)a5 + 12);
            v44 += 62;
          }
        }
      }
      if ( (unsigned __int8)IsTouchpadDevice(*((_QWORD *)a5 + 8)) )
      {
        if ( isRootPartition() )
        {
          v50 = v80;
          if ( IsPTPIVEnabled() && v80 )
          {
            v51 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19) + 480);
            v52 = v51 ? *(_QWORD *)(v51 + 1000) : 0LL;
            if ( v52 )
            {
              *(_DWORD *)(v52 + 420) &= ~2u;
              *(_DWORD *)(v52 + 416) = 0;
            }
          }
        }
        else
        {
          v50 = v80;
        }
        v53 = 0;
        if ( (*((_DWORD *)a5 + 28) & 0x10) != 0 && v50 > 1 )
        {
          v54 = v89;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(v48, v47, v49, 78, v78, *((_DWORD *)a5 + 10), v50, v89);
          }
          v53 = 0x2000;
          v55 = (CTouchProcessor *)this;
          v56 = v81;
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v81, a2, v88, 0x2000u, 0, a4);
        }
        else
        {
          v56 = v81;
          v54 = v89;
          v55 = (CTouchProcessor *)this;
        }
        if ( !v82 && v50 && v54 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(0, v47, v49, 79, v78, *((_DWORD *)a5 + 10), v50, v54);
          }
          CTouchProcessor::GeneratePointerInputMessages(v55, a5, v56, a2, v88, 0x10000u, v53, a4);
          v53 |= 0x10000u;
        }
      }
      else
      {
        v54 = v89;
        v53 = 0;
      }
      v5 = this;
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v81, a2, v88, 0, v53, a4);
      if ( v54 )
      {
        v59 = *((unsigned int *)a5 + 12);
        v60 = *((_QWORD *)a5 + 16);
        for ( j = 0; j < (unsigned int)v59; ++j )
        {
          v62 = (CTouchProcessor *)(*((_QWORD *)a5 + 16) + 496 * v59);
          if ( v60 >= (unsigned __int64)v62 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v62, v57, v58);
          if ( (*(_DWORD *)v60 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v62, a5, (const struct CPointerInfoNode *)v60, a4)
            && (*(_DWORD *)(v60 + 188) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v60 + 180),
              1,
              a5,
              j,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v59 = *((unsigned int *)a5 + 12);
          v60 += 496LL;
        }
      }
      if ( v79 )
      {
        v63 = *((unsigned int *)a5 + 12);
        v64 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 16); v64 < (unsigned int)v63; ++v64 )
        {
          v66 = (CTouchProcessor *)(*((_QWORD *)a5 + 16) + 496 * v63);
          if ( k >= (__int64 *)v66 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v57, v58);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v66, a5, (const struct CPointerInfoNode *)k, a4) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v64, k[2]);
          v63 = *((unsigned int *)a5 + 12);
          k += 62;
        }
      }
      InputTraceLogging::Pointer::GenerateFrameMessages(a5);
      EtwTraceEndPointerFrameMessageGeneration(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v67);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v85);
      v7 = a2;
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v18, a5);
  v71 = 0;
  v72 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v70, NodeForPointerPromotion, a4) )
  {
    v74 = (*v69 & 0x8000u) >> 13;
    HIBYTE(v75) = HIBYTE(v71);
    LOBYTE(v75) = v7 != 0;
    v76 = (v88 != 0 ? 2 : 0) | v75 | v74 | ((*v69 & 0x10000u) >> 13) | ((*v69 & 0x40u) >> 2);
    if ( v69[46] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v69, v73);
    PushW32ThreadLock(a5, v84, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpLockGuard::UnLock((CInpLockGuard *)(v5 + 6));
    ApiSetEditionProcessPointerInputAsMouse((char *)v72 + 176, *((unsigned __int16 *)v72 + 84), v76);
    CInpLockGuard::LockExclusive((CInpLockGuard *)(v5 + 6), (struct CLockListEntryStack *)&v83);
    PopW32ThreadLock(v84);
    v71 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v71 )
  {
    LOBYTE(v69) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v69,
      7,
      80,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return 1LL;
}
