/*
 * XREFs of TppWorkerThread @ 0x180033CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolAddWorker @ 0x18002FFB0 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x180030030 (RtlRegisterThreadWithCsrss.c)
 *     TppCritSetThread @ 0x1800300DC (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x180030178 (TppAllocThreadData.c)
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180035510 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x1800356E0 (TppPrepareDirectParams.c)
 *     TppCheckForTransactions @ 0x180035B5C (TppCheckForTransactions.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180035E30 (RtlpWakeSRWLock.c)
 *     RtlBackoff @ 0x1800365A0 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180036790 (RtlpWaitCouldDeadlock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 *     RtlpOptimizeSRWLockList @ 0x180078328 (RtlpOptimizeSRWLockList.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007939C (TppPoolUpdateTrimmedWorker.c)
 *     TppPoolRemoveWorker @ 0x1800798CC (TppPoolRemoveWorker.c)
 *     TppFreeDirectParamsCache @ 0x18007AE38 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x18007C410 (TppFreeThreadData.c)
 *     TppCritResetThread @ 0x18007EEC0 (TppCritResetThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007F204 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x180081CD0 (TppPoolpFree.c)
 *     TppAreNodeWorkersSteadyState @ 0x180088108 (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x18009CEB0 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01A0 (NtSetInformationWorkerFactory.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A0820 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DD728 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18010EC4C (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x18010FA10 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18010FB24 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18010FBA8 (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  int v3; // eax
  signed __int64 v4; // rax
  unsigned __int64 i; // rdx
  char v6; // bl
  signed __int64 v7; // rtt
  _RTL_SRWLOCK *v8; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rdi
  PPORT_MESSAGE v11; // rbx
  char *Heap; // rax
  NTSTATUS v13; // ecx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 AlpcSendMessagePort_low; // r14
  int v18; // eax
  unsigned __int8 Number; // di
  unsigned __int16 Group; // r14
  unsigned int v21; // r15d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // eax
  int v27; // r14d
  unsigned __int64 v28; // rcx
  __int64 v29; // r13
  __int64 **v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rcx
  signed __int64 v33; // rax
  void (__fastcall ***v34)(PVOID *); // rbx
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // r15
  int v38; // eax
  ULONG v39; // ecx
  struct _TEB *v40; // rcx
  unsigned int v41; // r13d
  int v42; // r14d
  __int64 v43; // rdi
  __int64 *v44; // rbx
  __int64 v45; // rax
  NTSTATUS v46; // ecx
  NTSTATUS v47; // ecx
  __int64 v48; // rcx
  unsigned __int16 v49; // di
  unsigned __int16 v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int16 v53; // r15
  unsigned __int16 v54; // r12
  __int64 v55; // rcx
  unsigned __int64 v56; // rdi
  bool v57; // zf
  signed __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int16 v61; // di
  unsigned __int16 v62; // r14
  __int64 v63; // rcx
  signed __int64 v64; // rcx
  __int64 v65; // rdx
  signed __int64 v66; // rtt
  ULONG v68; // edx
  ULONG v69; // edi
  unsigned __int64 v70; // rax
  signed __int64 v71; // rax
  signed __int64 v72; // rtt
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // r9
  _RTL_SRWLOCK *v75; // rbx
  PVOID AlpcSendMessagePort; // rax
  PPORT_MESSAGE v77; // rdx
  PWORKER_FACTORY_DEFERRED_WORK DeferredWork; // [rsp+20h] [rbp-398h]
  char v79; // [rsp+31h] [rbp-387h] BYREF
  char v80; // [rsp+32h] [rbp-386h]
  char v81; // [rsp+33h] [rbp-385h]
  char v82; // [rsp+34h] [rbp-384h]
  char v83; // [rsp+35h] [rbp-383h]
  char v84; // [rsp+36h] [rbp-382h]
  char v85; // [rsp+37h] [rbp-381h]
  bool v86; // [rsp+38h] [rbp-380h]
  unsigned __int8 v87; // [rsp+39h] [rbp-37Fh]
  char v88; // [rsp+3Ah] [rbp-37Eh]
  int v89; // [rsp+3Ch] [rbp-37Ch]
  NTSTATUS v90; // [rsp+40h] [rbp-378h]
  ULONG Count; // [rsp+44h] [rbp-374h]
  signed __int64 v92; // [rsp+48h] [rbp-370h]
  char v93; // [rsp+50h] [rbp-368h]
  ULONG PacketsReturned; // [rsp+54h] [rbp-364h] BYREF
  int j; // [rsp+58h] [rbp-360h]
  unsigned int v96; // [rsp+5Ch] [rbp-35Ch]
  signed __int64 v97; // [rsp+60h] [rbp-358h]
  __int64 v98; // [rsp+68h] [rbp-350h]
  struct _PEB *v99; // [rsp+70h] [rbp-348h]
  signed __int64 v100; // [rsp+78h] [rbp-340h]
  int v101; // [rsp+80h] [rbp-338h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-330h] BYREF
  PFILE_IO_COMPLETION_INFORMATION MiniPackets; // [rsp+90h] [rbp-328h]
  _DWORD v104[4]; // [rsp+98h] [rbp-320h] BYREF
  int v105; // [rsp+A8h] [rbp-310h] BYREF
  int k; // [rsp+B0h] [rbp-308h]
  unsigned int v107; // [rsp+B4h] [rbp-304h]
  int v108[4]; // [rsp+B8h] [rbp-300h] BYREF
  HANDLE v109; // [rsp+C8h] [rbp-2F0h] BYREF
  int WorkerFactoryInformation; // [rsp+D0h] [rbp-2E8h] BYREF
  void (__fastcall ***v111)(PVOID *); // [rsp+D8h] [rbp-2E0h]
  unsigned __int64 v112; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int64 *v113; // [rsp+E8h] [rbp-2D0h]
  __int64 v114; // [rsp+F0h] [rbp-2C8h]
  void *UniqueThread; // [rsp+F8h] [rbp-2C0h]
  int v116; // [rsp+100h] [rbp-2B8h]
  signed __int32 v117[4]; // [rsp+104h] [rbp-2B4h] BYREF
  __int64 v118; // [rsp+128h] [rbp-290h]
  __int64 **v119; // [rsp+130h] [rbp-288h]
  HANDLE v120; // [rsp+138h] [rbp-280h]
  struct _TEB *v121; // [rsp+150h] [rbp-268h]
  struct _TEB *v122; // [rsp+158h] [rbp-260h]
  struct _TEB *v123; // [rsp+160h] [rbp-258h]
  struct _TEB *v124; // [rsp+168h] [rbp-250h]
  struct _TEB *v125; // [rsp+178h] [rbp-240h]
  struct _TEB *v126; // [rsp+180h] [rbp-238h]
  struct _TEB *v127; // [rsp+188h] [rbp-230h]
  __int64 v128; // [rsp+190h] [rbp-228h]
  struct _TEB *v129; // [rsp+198h] [rbp-220h]
  struct _TEB *v130; // [rsp+1A0h] [rbp-218h]
  struct _TEB *v131; // [rsp+1A8h] [rbp-210h]
  struct _TEB *v132; // [rsp+1B0h] [rbp-208h]
  HANDLE v133; // [rsp+1C8h] [rbp-1F0h]
  HANDLE v134; // [rsp+1D0h] [rbp-1E8h]
  _WORKER_FACTORY_DEFERRED_WORK v135[15]; // [rsp+1E0h] [rbp-1D8h] BYREF
  _QWORD v136[2]; // [rsp+350h] [rbp-68h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+360h] [rbp-58h] BYREF
  _QWORD v138[2]; // [rsp+370h] [rbp-48h] BYREF

  v100 = a1;
  v109 = 0LL;
  v98 = a1;
  v80 = 0;
  v81 = 0;
  v84 = 0;
  v82 = 0;
  v79 = 0;
  v85 = 0;
  v83 = 0;
  BaseAddress = 0LL;
  v89 = 0;
  RtlRegisterThreadWithCsrss();
  v99 = NtCurrentPeb();
  TppCritSetThread(&v109);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = v135;
  memset(v135, 0, sizeof(v135));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v90 = -1073741558;
  }
  else
  {
    v134 = *(HANDLE *)(a1 + 56);
    v90 = NtWorkerFactoryWorkerReady(v134);
    if ( v90 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v84;
LABEL_18:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_233;
      TppPoolAddWorker((_RTL_SRWLOCK *)a1, (__int64)v135);
      v82 = 1;
      v8 = (_RTL_SRWLOCK *)v99;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v99->TppWorkerpListLock);
      Blink = (struct _PEB **)v99->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v99->TppWorkerpList )
        __fastfail(3u);
      v135[0].AlpcSendMessage = (PPORT_MESSAGE)&v99->TppWorkerpList;
      v135[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)v135;
      v8[115].Value = (unsigned __int64)v135;
      v81 = 1;
      RtlReleaseSRWLockExclusive(v8 + 113);
      memset(&v135[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v80 = 1;
      TppGetCurrentThreadNumaNode(a1, &v135[14].AlpcSendMessagePort, 0LL);
      while ( 1 )
      {
LABEL_22:
        v89 = 0;
        memset(&v135[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = v135[14].AlpcSendMessage;
        Count = 16;
        if ( v135[14].AlpcSendMessage )
        {
          if ( LODWORD(v135[14].AlpcSendMessage->DoNotUseThisField) != 1 )
            goto LABEL_178;
          v11 = v135[14].AlpcSendMessage;
          memset(*(void **)v135[14].AlpcSendMessage, 0, 56LL * HIDWORD(v135[14].AlpcSendMessage->DoNotUseThisField));
          Count = HIDWORD(v11->DoNotUseThisField);
          Heap = *(char **)&AlpcSendMessage->u1.s1.DataLength;
        }
        else
        {
          v117[3] = TppHeapTag + 3145728;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
          if ( !Heap )
          {
LABEL_178:
            Count = 1;
            Heap = (char *)&v135[12].AlpcSendMessageFlags;
            goto LABEL_25;
          }
          *((_QWORD *)Heap + 112) = Heap;
          *((_DWORD *)Heap + 226) = 1;
          *((_DWORD *)Heap + 227) = 16;
          v135[14].AlpcSendMessage = (PPORT_MESSAGE)(Heap + 896);
          Count = 16;
        }
LABEL_25:
        MiniPackets = (PFILE_IO_COMPLETION_INFORMATION)Heap;
        PacketsReturned = 0;
        v120 = *(HANDLE *)(a1 + 56);
        v13 = ZwWaitForWorkViaWorkerFactory(
                v120,
                (PFILE_IO_COMPLETION_INFORMATION)Heap,
                Count,
                &PacketsReturned,
                &v135[11]);
        v90 = v13;
        if ( v13 )
          PacketsReturned = 0;
        if ( (v135[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v135[11].AlpcSendMessage);
          v135[11].Flags &= ~1u;
          v13 = v90;
        }
        if ( v13 )
        {
          v46 = v13 - 128;
          if ( !v46 )
            goto LABEL_233;
          v47 = v46 - 64;
          if ( v47 )
          {
            if ( v47 == 66 )
            {
              v83 = 1;
              goto LABEL_233;
            }
          }
          else
          {
            TppCallbackCheckThreadAfterCallback(0LL);
          }
        }
        else
        {
          if ( !a1 || (v14 = *(_DWORD *)(a1 + 440)) == 0 )
            v14 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(a1 + 424) != v14 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)v135,
                                  (_DWORD)MiniPackets,
                                  PacketsReturned,
                                  Count,
                                  a1,
                                  (__int64)&v79) )
          {
LABEL_233:
            if ( (v135[11].Flags & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage(&v135[2].AlpcSendMessagePort, i);
              v135[11].Flags &= ~1u;
            }
            if ( v80 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v81 )
            {
              v75 = (_RTL_SRWLOCK *)v99;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v99->TppWorkerpListLock);
              AlpcSendMessagePort = v135[0].AlpcSendMessagePort;
              v77 = v135[0].AlpcSendMessage;
              if ( v135[0].AlpcSendMessage->ClientId.UniqueProcess != v135
                || *(_WORKER_FACTORY_DEFERRED_WORK **)v135[0].AlpcSendMessagePort != v135 )
              {
                __fastfail(3u);
              }
              *(_QWORD *)v135[0].AlpcSendMessagePort = v135[0].AlpcSendMessage;
              v77->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v75 + 113);
            }
            if ( v82 )
            {
              TppPoolRemoveWorker(v135, i);
              if ( v83 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v109, i);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache(v135);
            v90 = 0;
            RtlExitUserThread(0);
          }
          if ( !v79 )
          {
            v15 = *(_QWORD *)&v135[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&v135[12].AlpcSendMessageFlags )
            {
              v118 = *(_QWORD *)&v135[12].AlpcSendMessageFlags;
              v135[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&v135[12].AlpcSendMessageFlags + 56LL);
              v135[6].AlpcSendMessagePort = *(PVOID *)&v135[12].AlpcSendMessageFlags;
              v104[0] = *(unsigned __int8 *)(*(_QWORD *)&v135[12].AlpcSendMessageFlags + 68LL);
              v16 = *(unsigned int *)(*(_QWORD *)&v135[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(v135[14].AlpcSendMessagePort);
              v18 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v16 == LODWORD(v135[14].AlpcSendMessagePort) )
              {
                if ( v18 == -1 && !LOBYTE(v135[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(v135[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v16));
                }
              }
              else
              {
                if ( v18 == -1 )
                {
                  if ( LOBYTE(v135[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL * LODWORD(v135[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(v135[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v16));
                }
                LODWORD(v135[14].AlpcSendMessagePort) = v16;
                v52 = *(_QWORD *)(a1 + 48);
                v53 = *(_WORD *)(16 * v16 + v52 + 8);
                v54 = *(_WORD *)(v52 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v55 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v55 = 2147353478LL;
                if ( *(_BYTE *)v55 )
                  TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v16, v54, v53);
                if ( v54 != v53 )
                {
                  v138[1] = v53;
                  v138[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v138, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v104, 4u);
                }
              }
              v121 = NtCurrentTeb();
              *(_GUID *)&v135[12].AlpcSendMessage = v121->ActivityId;
              if ( *(_QWORD *)&v135[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&v135[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                v68 = v135[6].AlpcSendMessageFlags | 8;
                v135[6].AlpcSendMessageFlags |= 8u;
                v122 = NtCurrentTeb();
                if ( v122->IsImpersonating )
                {
                  v68 |= 4u;
                  v135[6].AlpcSendMessageFlags = v68;
                }
                v69 = v68;
                if ( (unsigned __int8)TppCheckForTransactions() )
                {
                  v69 |= 0x10u;
                  v135[6].AlpcSendMessageFlags = v69;
                }
                if ( RtlIsCriticalSectionLockedByThread(NtCurrentPeb()->LoaderLock) )
                  v135[6].AlpcSendMessageFlags = v69 | 0x20;
                v123 = NtCurrentTeb();
                if ( v123->PreferredLanguages )
                  v135[6].AlpcSendMessageFlags |= 0x40u;
                v124 = NtCurrentTeb();
                if ( v124->SavedPriorityState )
                  v135[6].AlpcSendMessageFlags |= 0x80u;
              }
              (*(void (__fastcall **)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))(v15 + 56))(
                &v135[2].AlpcSendMessagePort,
                v118,
                v135[13].AlpcSendMessage,
                &v135[13].AlpcSendMessagePort);
              goto LABEL_41;
            }
            while ( 1 )
            {
              v125 = NtCurrentTeb();
              Number = v125->CurrentIdealProcessor.Number;
              v126 = v125;
              Group = v125->CurrentIdealProcessor.Group;
              v21 = TppNumberNodes;
              LODWORD(v92) = TppNumberNodes;
              v22 = *(_DWORD *)(a1 + 440);
              if ( !v22 )
                v22 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v22 )
              {
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
                TppAdjustRunningThreadGoalWithLock(a1);
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
              }
              for ( i = 0LL; ; i = (unsigned int)(i + 1) )
              {
                v104[2] = i;
                if ( (unsigned int)i >= TppNumberNodes )
                  goto LABEL_56;
                v23 = 16LL * (unsigned int)i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v23 + 8) == Group )
                {
                  v24 = *(_QWORD *)v23;
                  if ( _bittest64(&v24, Number) )
                    break;
                }
              }
              v21 = i;
              LODWORD(v92) = i;
LABEL_56:
              if ( v21 >= TppNumberNodes )
              {
                v21 = 0;
                LODWORD(v92) = 0;
              }
              v96 = v21;
              v87 = Number;
              v105 = Number;
              v25 = LODWORD(v135[14].AlpcSendMessagePort);
              v26 = *(_DWORD *)(a1 + 428);
              if ( v21 == LODWORD(v135[14].AlpcSendMessagePort) )
              {
                if ( v26 == -1 && !LOBYTE(v135[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(v135[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v21));
                }
              }
              else
              {
                if ( v26 == -1 )
                {
                  if ( LOBYTE(v135[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL * LODWORD(v135[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(v135[14].AlpcSendMessageFlags) = 1;
                  v59 = v21;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v21));
                }
                else
                {
                  v59 = v21;
                }
                LODWORD(v135[14].AlpcSendMessagePort) = v21;
                v60 = *(_QWORD *)(a1 + 48);
                v61 = *(_WORD *)(v60 + 16 * v59 + 8);
                v62 = *(_WORD *)(v60 + 16 * v25 + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v63 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v63 = 2147353478LL;
                if ( *(_BYTE *)v63 )
                  TppETWWorkerNodeSwitch(a1, v25, v21, v62, v61);
                if ( v62 != v61 )
                {
                  v136[1] = v61;
                  v136[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v136, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v105, 4u);
                }
              }
              v107 = v21;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(v135[14].AlpcSendMessagePort) < 0x10
                || (unsigned int)TppAreNodeWorkersSteadyState(a1) )
              {
                break;
              }
LABEL_105:
              v41 = v96;
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                  goto LABEL_233;
                v42 = 0;
                j = 0;
LABEL_108:
                if ( v42 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v43 = *(_QWORD *)(a1 + 8LL * v42 + 16) + 24LL * v21;
                v128 = v43;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v43 + 16));
                v44 = *(__int64 **)v43;
                v45 = **(_QWORD **)v43;
                if ( *(_QWORD *)(*(_QWORD *)v43 + 8LL) != v43 || *(__int64 **)(v45 + 8) != v44 )
                  __fastfail(3u);
                *(_QWORD *)v43 = v45;
                *(_QWORD *)(v45 + 8) = v43;
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v43 + 16));
                if ( v44 == (__int64 *)v43 )
                  v44 = 0LL;
                if ( v44 )
                  break;
                v21 = v92 + 1;
                if ( (int)v92 + 1 >= (unsigned int)TppNumberNodes )
                  v21 = 0;
                LODWORD(v92) = v21;
                v107 = v21;
                if ( v21 == v41 )
                {
                  j = ++v42;
                  goto LABEL_108;
                }
              }
              v34 = (void (__fastcall ***)(PVOID *))(v44 - 2);
LABEL_76:
              v111 = v34;
              v108[0] = *((unsigned __int8 *)v34 + 12);
              v35 = LODWORD(v135[14].AlpcSendMessagePort);
              v36 = *(_DWORD *)(a1 + 428);
              v37 = (unsigned int)v92;
              if ( (_DWORD)v92 == LODWORD(v135[14].AlpcSendMessagePort) )
              {
                if ( v36 == -1 && !LOBYTE(v135[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(v135[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * (unsigned int)v92));
                }
              }
              else
              {
                if ( v36 == -1 )
                {
                  if ( LOBYTE(v135[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL * LODWORD(v135[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(v135[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v37));
                }
                LODWORD(v135[14].AlpcSendMessagePort) = v37;
                v48 = *(_QWORD *)(a1 + 48);
                v49 = *(_WORD *)(v48 + 16 * v37 + 8);
                v50 = *(_WORD *)(v48 + 16 * v35 + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v51 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v51 = 2147353478LL;
                if ( *(_BYTE *)v51 )
                  TppETWWorkerNodeSwitch(a1, v35, v37, v50, v49);
                if ( v50 != v49 )
                {
                  ThreadInformation[1] = v49;
                  ThreadInformation[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v108, 4u);
                }
              }
              if ( (_DWORD)v37 == v96 )
              {
                if ( HIDWORD(v135[14].AlpcSendMessagePort) < 0x10 )
                  v38 = HIDWORD(v135[14].AlpcSendMessagePort) + 1;
                else
                  v38 = 16;
              }
              else
              {
                v38 = 0;
              }
              HIDWORD(v135[14].AlpcSendMessagePort) = v38;
              if ( (v135[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&v135[2].AlpcSendMessagePort, i);
                v135[11].Flags &= ~1u;
              }
              v135[1].AlpcSendMessagePort = v111;
              v135[6].AlpcSendMessage = (PPORT_MESSAGE)**v111;
              v135[6].AlpcSendMessagePort = v111;
              *(_QWORD *)&v135[7].AlpcSendMessageFlags = v135[2].AlpcSendMessage;
              v129 = NtCurrentTeb();
              *(_GUID *)&v135[12].AlpcSendMessage = v129->ActivityId;
              if ( v135[2].AlpcSendMessage && (*(_BYTE *)(&v135[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                v39 = v135[6].AlpcSendMessageFlags | 8;
                v135[6].AlpcSendMessageFlags |= 8u;
                v130 = NtCurrentTeb();
                if ( v130->IsImpersonating )
                  v135[6].AlpcSendMessageFlags = v39 | 4;
                v40 = NtCurrentTeb();
                if ( (((unsigned __int64)v40->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
                  || v40->TxnScopeEnterCallback
                  || v40->TxnScopeExitCallback
                  || v40->TxnScopeContext
                  || v40->TxFsContext != 65534 )
                {
                  v135[6].AlpcSendMessageFlags |= 0x10u;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  v135[6].AlpcSendMessageFlags |= 0x20u;
                v131 = NtCurrentTeb();
                if ( v131->PreferredLanguages )
                  v135[6].AlpcSendMessageFlags |= 0x40u;
                v132 = NtCurrentTeb();
                if ( v132->SavedPriorityState )
                  v135[6].AlpcSendMessageFlags |= 0x80u;
              }
              (**v111)(&v135[2].AlpcSendMessagePort);
LABEL_41:
              if ( (BYTE4(v135[5].AlpcSendMessagePort) & 4) != 0 )
                v85 = 1;
              v86 = LODWORD(v135[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&v135[2].AlpcSendMessagePort);
              v135[1].AlpcSendMessagePort = 0LL;
              if ( v85 )
              {
                _m_prefetchw((const void *)(a1 + 8));
                v71 = *(_QWORD *)(a1 + 8);
                v92 = v71;
                do
                {
                  LODWORD(v92) = v71 ^ (unsigned __int16)(v71 ^ (v71 + 1));
                  v72 = v71;
                  v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v92, v71);
                  v92 = v71;
                }
                while ( v72 != v71 );
                WorkerFactoryInformation = 3;
                v133 = *(HANDLE *)(a1 + 56);
                NtSetInformationWorkerFactory(v133, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
                goto LABEL_233;
              }
              if ( !a1 || (v3 = *(_DWORD *)(a1 + 440)) == 0 )
                v3 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v3 )
              {
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
                TppAdjustRunningThreadGoalWithLock(a1);
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
              }
              _m_prefetchw((const void *)(a1 + 8));
              v4 = *(_QWORD *)(a1 + 8);
              v100 = v4;
              do
              {
                i = (unsigned __int16)v4;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_233;
                if ( HIDWORD(v4) && ((v4 & 0x8000u) == 0LL || v86) )
                {
                  v6 = 0;
                  HIDWORD(v100) = HIDWORD(v4) - 1;
                }
                else
                {
                  v6 = 1;
                  LODWORD(v100) = v4 ^ (unsigned __int16)(v4 ^ (v4 + 1));
                }
                v7 = v4;
                v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v100, v4);
                v100 = v4;
              }
              while ( v7 != v4 );
              v79 = v6;
              if ( v6 )
                goto LABEL_22;
            }
            v27 = 0;
            for ( j = 0; ; j = v27 )
            {
              if ( v27 > 2 )
              {
                v21 = v92;
                goto LABEL_105;
              }
              i = v27;
              v28 = 3LL * v96;
              v29 = *(_QWORD *)(a1 + 8LL * v27 + 16) + 24LL * v96;
              v119 = (__int64 **)v29;
              v101 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 16), 0LL) )
                break;
LABEL_64:
              v30 = v119;
              v31 = *v119;
              v32 = **v119;
              if ( (__int64 **)(*v119)[1] != v119 || *(__int64 **)(v32 + 8) != v31 )
                __fastfail(3u);
              *v119 = (__int64 *)v32;
              *(_QWORD *)(v32 + 8) = v30;
              v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 16), 0LL, 1LL);
              if ( v33 != 1 )
              {
                v73 = -1LL;
                do
                {
                  v64 = v33 & 6;
                  v65 = 3LL;
                  if ( v64 != 2 )
                    v65 = -1LL;
                  i = v33 + v65;
                  v66 = v33;
                  v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 16), i, v33);
                }
                while ( v66 != v33 );
                if ( v64 == 2 )
                  RtlpWakeSRWLock(v29 + 16, i, 0LL);
              }
              if ( v31 == (__int64 *)v29 )
                v31 = 0LL;
              if ( v31 )
              {
                v34 = (void (__fastcall ***)(PVOID *))(v31 - 2);
                goto LABEL_76;
              }
              ++v27;
            }
            v56 = *(_QWORD *)(v29 + 16);
            while ( 2 )
            {
              while ( (v56 & 1) != 0 )
              {
                if ( (unsigned __int8)RtlpWaitCouldDeadlock(v28, i, v73, v74, DeferredWork) )
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
                v127 = NtCurrentTeb();
                UniqueThread = v127->ClientId.UniqueThread;
                v117[0] = 3;
                v114 = 0LL;
                LOBYTE(v28) = 0;
                v88 = 0;
                if ( (v56 & 2) != 0 )
                {
                  v113 = 0LL;
                  v112 = v56 & 0xFFFFFFFFFFFFFFF0uLL;
                  v116 = -1;
                  i = (unsigned __int64)&v112 | v56 & 8 | 7;
                  v97 = i;
                  if ( (v56 & 4) == 0 )
                  {
                    LOBYTE(v28) = 1;
                    v88 = 1;
                  }
                }
                else
                {
                  v113 = &v112;
                  v116 = v56 >> 4;
                  if ( v116 > 1 )
                    i = (unsigned __int64)&v112 | 0xB;
                  else
                    i = (unsigned __int64)&v112 + 3;
                  v97 = i;
                  if ( !(unsigned int)(v56 >> 4) )
                    v116 = -2;
                }
                v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 16), i, v56);
                v57 = v56 == v58;
                v56 = v58;
                v97 = v58;
                if ( !v57 )
                  goto LABEL_164;
                if ( (_BYTE)v28 )
                  RtlpOptimizeSRWLockList(v29 + 16);
                if ( MEMORY[0x7FFE036A] > 1u )
                {
                  v93 = MEMORY[0x7FFE0297];
                  if ( MEMORY[0x7FFE0297] )
                  {
                    v73 = __rdtsc();
                    v74 = v73 + (unsigned int)SRWLockSpinCycleCount;
                    while ( 1 )
                    {
                      i = 0LL;
                      __asm { monitorx rax, rcx, rdx }
                      v28 = (unsigned int)v117[0];
                      if ( (v117[0] & 2) == 0 )
                        break;
                      v28 = v73;
                      v70 = __rdtsc();
                      i = (unsigned __int64)HIDWORD(v70) << 32;
                      v73 = v70;
                      if ( v70 <= v28 || v70 >= v74 )
                        break;
                      __asm { mwaitx  rax, rcx, rbx }
                    }
                  }
                  else
                  {
                    i = 0LL;
                    for ( k = 0; ; k = i )
                    {
                      v28 = (unsigned int)v117[0];
                      if ( (v117[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                        break;
                      _mm_pause();
                      i = (unsigned int)(i + 1);
                    }
                  }
                }
                if ( _interlockedbittestandreset(v117, 1u) )
                {
                  do
                    NtWaitForAlertByThreadId((PVOID)(v29 + 16), 0LL);
                  while ( (v117[0] & 4) == 0 );
                }
              }
              v97 = v56 + 1;
              v97 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 16), v56 + 1, v56);
              if ( v56 == v97 )
                goto LABEL_64;
LABEL_164:
              RtlBackoff(&v101);
              _m_prefetchw((const void *)(v29 + 16));
              v56 = *(_QWORD *)(v29 + 16);
              v97 = v56;
              continue;
            }
          }
        }
      }
    }
  }
  v2 = 1;
  v84 = 1;
  goto LABEL_18;
}
