/*
 * XREFs of TppWorkerThread @ 0x180016320
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     TppCheckForTransactions @ 0x180015BA4 (TppCheckForTransactions.c)
 *     TppWorkerFindTask @ 0x180015BF4 (TppWorkerFindTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001725C (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x180017430 (TppPrepareDirectParams.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     TppAllocThreadData @ 0x18007AC70 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007D040 (TppPoolAddWorker.c)
 *     TppPoolRemoveWorker @ 0x18007F0B0 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007F638 (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeDirectParamsCache @ 0x180080AD8 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180081198 (TppFreeThreadData.c)
 *     RtlRegisterThreadWithCsrss @ 0x180081390 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolpFree @ 0x180082A9C (TppPoolpFree.c)
 *     TppCritResetThread @ 0x18008464C (TppCritResetThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800846E0 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A0320 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A04A0 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35F0 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A3C70 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DFABC (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 *     TppETWWorkerNodeSwitch @ 0x180111220 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1801112D0 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180111354 (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  __int64 v3; // rdx
  _RTL_SRWLOCK *v4; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rbx
  PPORT_MESSAGE v7; // rdi
  ULONG DoNotUseThisField_high; // edi
  ULONG *p_AlpcSendMessageFlags; // rbx
  NTSTATUS v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 AlpcSendMessagePort_low; // rsi
  int v14; // eax
  signed __int64 v15; // rax
  char v16; // r8
  signed __int64 v17; // rtt
  ULONG v18; // edx
  int v19; // edx
  ULONG *Heap; // rax
  _PORT_MESSAGE *v21; // rax
  NTSTATUS v22; // ecx
  NTSTATUS v23; // ecx
  __int64 v24; // rcx
  unsigned __int16 v25; // r14
  unsigned __int16 v26; // r15
  __int64 v27; // rcx
  ULONG v28; // edx
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  _RTL_SRWLOCK *v35; // rbx
  PVOID AlpcSendMessagePort; // rax
  PPORT_MESSAGE v37; // rcx
  char v38; // [rsp+31h] [rbp-2B7h] BYREF
  char v39; // [rsp+32h] [rbp-2B6h]
  char v40; // [rsp+33h] [rbp-2B5h]
  char v41; // [rsp+34h] [rbp-2B4h]
  char v42; // [rsp+35h] [rbp-2B3h]
  char v43; // [rsp+36h] [rbp-2B2h]
  char v44; // [rsp+37h] [rbp-2B1h]
  bool v45; // [rsp+38h] [rbp-2B0h]
  int v46; // [rsp+3Ch] [rbp-2ACh]
  NTSTATUS v47; // [rsp+40h] [rbp-2A8h]
  int v48; // [rsp+44h] [rbp-2A4h]
  ULONG PacketsReturned; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-298h]
  struct _PEB *v51; // [rsp+58h] [rbp-290h]
  signed __int64 v52; // [rsp+60h] [rbp-288h]
  PVOID BaseAddress; // [rsp+68h] [rbp-280h] BYREF
  signed __int64 v54; // [rsp+70h] [rbp-278h]
  ULONG *v55; // [rsp+78h] [rbp-270h]
  int v56; // [rsp+80h] [rbp-268h] BYREF
  int WorkerFactoryInformation; // [rsp+88h] [rbp-260h] BYREF
  __int64 v58; // [rsp+90h] [rbp-258h] BYREF
  void (__fastcall ***v59)(PVOID *); // [rsp+98h] [rbp-250h] BYREF
  ULONG v60; // [rsp+A0h] [rbp-248h]
  __int64 v61; // [rsp+B8h] [rbp-230h]
  HANDLE v62; // [rsp+C0h] [rbp-228h]
  HANDLE v63; // [rsp+C8h] [rbp-220h]
  struct _TEB *v64; // [rsp+E0h] [rbp-208h]
  struct _TEB *v65; // [rsp+E8h] [rbp-200h]
  struct _TEB *v66; // [rsp+F0h] [rbp-1F8h]
  struct _TEB *v67; // [rsp+100h] [rbp-1E8h]
  struct _TEB *v68; // [rsp+108h] [rbp-1E0h]
  struct _TEB *v69; // [rsp+110h] [rbp-1D8h]
  HANDLE v70; // [rsp+128h] [rbp-1C0h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+2A0h] [rbp-48h] BYREF

  v52 = a1;
  v58 = 0LL;
  v50 = a1;
  v39 = 0;
  v40 = 0;
  v43 = 0;
  v41 = 0;
  v38 = 0;
  v44 = 0;
  v42 = 0;
  BaseAddress = 0LL;
  v46 = 0;
  RtlRegisterThreadWithCsrss();
  v51 = NtCurrentPeb();
  TppCritSetThread(&v58);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v47 = -1073741558;
  }
  else
  {
    v62 = *(HANDLE *)(a1 + 56);
    v47 = NtWorkerFactoryWorkerReady(v62);
    if ( v47 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v43;
LABEL_8:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_99;
      TppPoolAddWorker(a1, DeferredWork);
      v41 = 1;
      v4 = (_RTL_SRWLOCK *)v51;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v51->TppWorkerpListLock);
      Blink = (struct _PEB **)v51->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v51->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v51->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)DeferredWork;
      v4[115].Value = (unsigned __int64)DeferredWork;
      v40 = 1;
      RtlReleaseSRWLockExclusive(v4 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v39 = 1;
      TppGetCurrentThreadNumaNode(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
LABEL_12:
      while ( 1 )
      {
        v46 = 0;
        memset(&DeferredWork[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        v48 = 16;
        if ( !DeferredWork[14].AlpcSendMessage )
          break;
        if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_80;
        v7 = DeferredWork[14].AlpcSendMessage;
        memset(
          *(void **)DeferredWork[14].AlpcSendMessage,
          0,
          56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v7->DoNotUseThisField);
        v48 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_15:
        v55 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v63 = *(HANDLE *)(a1 + 56);
        v10 = ZwWaitForWorkViaWorkerFactory(
                v63,
                (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
                DoNotUseThisField_high,
                &PacketsReturned,
                &DeferredWork[11]);
        v47 = v10;
        if ( v10 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v10 = v47;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v55;
          DoNotUseThisField_high = v48;
        }
        if ( v10 )
        {
          v22 = v10 - 128;
          if ( !v22 )
            goto LABEL_99;
          v23 = v22 - 64;
          if ( v23 )
          {
            if ( v23 == 66 )
            {
              v42 = 1;
              goto LABEL_99;
            }
          }
          else
          {
            TppCallbackCheckThreadAfterCallback(0LL);
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)p_AlpcSendMessageFlags,
                                  PacketsReturned,
                                  DoNotUseThisField_high,
                                  a1,
                                  (__int64)&v38) )
            goto LABEL_99;
          if ( !v38 )
          {
            v11 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
            {
              v61 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
              DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags
                                                                 + 56LL);
              DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
              v56 = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
              v12 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v14 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v12 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v14 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v12));
                }
              }
              else
              {
                if ( v14 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v12));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v12;
                v24 = *(_QWORD *)(a1 + 48);
                v25 = *(_WORD *)(16 * v12 + v24 + 8);
                v26 = *(_WORD *)(v24 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v27 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v27 = 2147353478LL;
                if ( *(_BYTE *)v27 )
                  TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v12, v26, v25);
                if ( v26 != v25 )
                {
                  ThreadInformation[1] = v25;
                  ThreadInformation[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v56, 4u);
                }
              }
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                v28 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v64 = NtCurrentTeb();
                if ( v64->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags = v28 | 4;
                if ( TppCheckForTransactions() )
                {
                  v32 = v29 | 0x10;
                  DeferredWork[6].AlpcSendMessageFlags = v29 | 0x10;
                  v31 = v29 | 0x10;
                  v30 = v29 | 0x10;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v31 = v32 | 0x20;
                  DeferredWork[6].AlpcSendMessageFlags = v32 | 0x20;
                  v30 = v32 | 0x20;
                }
                v65 = NtCurrentTeb();
                if ( v65->PreferredLanguages )
                {
                  v30 = v31 | 0x40;
                  DeferredWork[6].AlpcSendMessageFlags = v31 | 0x40;
                }
                v66 = NtCurrentTeb();
                if ( v66->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags = v30 | 0x80;
              }
              (*(void (__fastcall **)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))(v11 + 56))(
                &DeferredWork[2].AlpcSendMessagePort,
                v61,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
              goto LABEL_29;
            }
            while ( 1 )
            {
              if ( !(unsigned int)TppWorkerFindTask(a1, (__int64)DeferredWork, &v59) )
                goto LABEL_99;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v3);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v59;
              DeferredWork[6].AlpcSendMessage = (PPORT_MESSAGE)**v59;
              DeferredWork[6].AlpcSendMessagePort = v59;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                v18 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v67 = NtCurrentTeb();
                if ( v67->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags = v18 | 4;
                if ( TppCheckForTransactions() )
                  DeferredWork[6].AlpcSendMessageFlags = v19 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v68 = NtCurrentTeb();
                if ( v68->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v69 = NtCurrentTeb();
                if ( v69->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              (**v59)(&DeferredWork[2].AlpcSendMessagePort);
LABEL_29:
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v44 = 1;
              v45 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v44 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v15 = *(_QWORD *)(a1 + 8);
              v54 = v15;
              do
              {
                v3 = (unsigned __int16)v15;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_99;
                if ( HIDWORD(v15) && ((v15 & 0x8000u) == 0LL || v45) )
                {
                  v16 = 0;
                  HIDWORD(v54) = HIDWORD(v15) - 1;
                }
                else
                {
                  v16 = 1;
                  LODWORD(v54) = v15 ^ (unsigned __int16)(v15 ^ (v15 + 1));
                }
                v17 = v15;
                v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v54, v15);
                v54 = v15;
              }
              while ( v17 != v15 );
              v38 = v16;
              if ( v16 )
                goto LABEL_12;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v33 = *(_QWORD *)(a1 + 8);
            v52 = v33;
            do
            {
              LODWORD(v52) = v33 ^ (unsigned __int16)(v33 ^ (v33 + 1));
              v34 = v33;
              v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v52, v33);
              v52 = v33;
            }
            while ( v34 != v33 );
            WorkerFactoryInformation = 3;
            v70 = *(HANDLE *)(a1 + 56);
            NtSetInformationWorkerFactory(v70, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_99:
            if ( (DeferredWork[11].Flags & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v3);
              DeferredWork[11].Flags &= ~1u;
            }
            if ( v39 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v40 )
            {
              v35 = (_RTL_SRWLOCK *)v51;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v51->TppWorkerpListLock);
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              v37 = DeferredWork[0].AlpcSendMessage;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v37->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v35 + 113);
            }
            if ( v41 )
            {
              TppPoolRemoveWorker(DeferredWork, v3);
              if ( v42 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v58, v3);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache(DeferredWork);
            v47 = 0;
            RtlExitUserThread(0);
          }
        }
      }
      v60 = TppHeapTag + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v21 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v21->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v21->DoNotUseThisField) = 1;
        HIDWORD(v21->DoNotUseThisField) = 16;
        DeferredWork[14].AlpcSendMessage = v21;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_80:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &DeferredWork[12].AlpcSendMessageFlags;
      }
      v48 = DoNotUseThisField_high;
      goto LABEL_15;
    }
  }
  v2 = 1;
  v43 = 1;
  goto LABEL_8;
}
