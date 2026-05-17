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
 *     TppAllocThreadData @ 0x18007AC60 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007D030 (TppPoolAddWorker.c)
 *     TppPoolRemoveWorker @ 0x18007F0A0 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007F628 (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeDirectParamsCache @ 0x180080AC8 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180081188 (TppFreeThreadData.c)
 *     RtlRegisterThreadWithCsrss @ 0x180081380 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolpFree @ 0x180082A8C (TppPoolpFree.c)
 *     TppCritResetThread @ 0x18008463C (TppCritResetThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800846D0 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A0300 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A3C50 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DFABC (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 *     TppETWWorkerNodeSwitch @ 0x180111220 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1801112D0 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180111354 (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  struct _PEB *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  _LIST_ENTRY *Blink; // rcx
  _OWORD **v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // edi
  _OWORD *v17; // rbx
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // eax
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  int v25; // edx
  int v26; // edx
  __int64 Heap; // rax
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rcx
  unsigned __int16 v32; // r14
  unsigned __int16 v33; // r15
  __int64 v34; // rcx
  int v35; // edx
  int v36; // edx
  int v37; // r8d
  int v38; // r9d
  int v39; // r10d
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  struct _PEB *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // [rsp+31h] [rbp-2B7h] BYREF
  char v46; // [rsp+32h] [rbp-2B6h]
  char v47; // [rsp+33h] [rbp-2B5h]
  char v48; // [rsp+34h] [rbp-2B4h]
  char v49; // [rsp+35h] [rbp-2B3h]
  char v50; // [rsp+36h] [rbp-2B2h]
  char v51; // [rsp+37h] [rbp-2B1h]
  bool v52; // [rsp+38h] [rbp-2B0h]
  int v53; // [rsp+3Ch] [rbp-2ACh]
  int v54; // [rsp+40h] [rbp-2A8h]
  int v55; // [rsp+44h] [rbp-2A4h]
  int v56; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v57; // [rsp+50h] [rbp-298h]
  struct _PEB *v58; // [rsp+58h] [rbp-290h]
  signed __int64 v59; // [rsp+60h] [rbp-288h]
  _QWORD *v60; // [rsp+68h] [rbp-280h] BYREF
  signed __int64 v61; // [rsp+70h] [rbp-278h]
  _OWORD *v62; // [rsp+78h] [rbp-270h]
  int v63; // [rsp+80h] [rbp-268h] BYREF
  int v64; // [rsp+88h] [rbp-260h] BYREF
  __int64 v65; // [rsp+90h] [rbp-258h] BYREF
  void (__fastcall ***v66)(char *); // [rsp+98h] [rbp-250h] BYREF
  int v67; // [rsp+A0h] [rbp-248h]
  __int64 v68; // [rsp+B8h] [rbp-230h]
  __int64 v69; // [rsp+C0h] [rbp-228h]
  __int64 v70; // [rsp+C8h] [rbp-220h]
  struct _TEB *v71; // [rsp+E0h] [rbp-208h]
  struct _TEB *v72; // [rsp+E8h] [rbp-200h]
  struct _TEB *v73; // [rsp+F0h] [rbp-1F8h]
  struct _TEB *v74; // [rsp+100h] [rbp-1E8h]
  struct _TEB *v75; // [rsp+108h] [rbp-1E0h]
  struct _TEB *v76; // [rsp+110h] [rbp-1D8h]
  __int64 v77; // [rsp+128h] [rbp-1C0h]
  _OWORD v78[23]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD v79[2]; // [rsp+2A0h] [rbp-48h] BYREF

  v59 = a1;
  v65 = 0LL;
  v57 = a1;
  v46 = 0;
  v47 = 0;
  v50 = 0;
  v48 = 0;
  v45 = 0;
  v51 = 0;
  v49 = 0;
  v60 = 0LL;
  v53 = 0;
  RtlRegisterThreadWithCsrss();
  v58 = NtCurrentPeb();
  TppCritSetThread(&v65);
  TppAllocThreadData(&v60);
  if ( v60 )
    *v60 = v78;
  memset(v78, 0, 0x168uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v54 = -1073741558;
  }
  else
  {
    v69 = *(_QWORD *)(a1 + 56);
    v54 = NtWorkerFactoryWorkerReady();
    if ( v54 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v50;
LABEL_8:
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
      if ( v5 )
        goto LABEL_99;
      TppPoolAddWorker(a1, v78);
      v48 = 1;
      v9 = v58;
      RtlAcquireSRWLockExclusive((unsigned __int64)&v58->TppWorkerpListLock, v10, v11, v12);
      Blink = v58->TppWorkerpList.Blink;
      if ( Blink->Flink != &v58->TppWorkerpList )
        __fastfail(3u);
      *(_QWORD *)&v78[0] = &v58->TppWorkerpList;
      *((_QWORD *)&v78[0] + 1) = Blink;
      Blink->Flink = (_LIST_ENTRY *)v78;
      v9->TppWorkerpList.Blink = (_LIST_ENTRY *)v78;
      v47 = 1;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v9->TppWorkerpListLock);
      memset((char *)&v78[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v46 = 1;
      TppGetCurrentThreadNumaNode(a1, (char *)&v78[21] + 8, 0LL);
LABEL_12:
      while ( 1 )
      {
        v53 = 0;
        memset(&v78[19], 0, 0x20uLL);
        v14 = *(_OWORD ***)&v78[21];
        v55 = 16;
        if ( !*(_QWORD *)&v78[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v78[21] + 8LL) != 1 )
          goto LABEL_80;
        v15 = *(_QWORD *)&v78[21];
        memset(**(void ***)&v78[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v78[21] + 12LL));
        v16 = *(_DWORD *)(v15 + 12);
        v55 = v16;
        v17 = *v14;
LABEL_15:
        v62 = v17;
        v56 = 0;
        v70 = *(_QWORD *)(a1 + 56);
        v18 = ZwWaitForWorkViaWorkerFactory(v70, v17, v16, &v56, (char *)&v78[16] + 8);
        v54 = v18;
        if ( v18 )
          v56 = 0;
        if ( (BYTE12(v78[17]) & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v78[16] + 1));
          HIDWORD(v78[17]) &= ~1u;
          v18 = v54;
          LODWORD(v17) = (_DWORD)v62;
          v16 = v55;
        }
        if ( v18 )
        {
          v29 = v18 - 128;
          if ( !v29 )
            goto LABEL_99;
          v30 = v29 - 64;
          if ( v30 )
          {
            if ( v30 == 66 )
            {
              v49 = 1;
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
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v78, (_DWORD)v17, v56, v16, a1, (__int64)&v45) )
            goto LABEL_99;
          if ( !v45 )
          {
            v19 = *(_QWORD *)&v78[19];
            if ( *(_QWORD *)&v78[19] )
            {
              v68 = *(_QWORD *)&v78[19];
              *(_QWORD *)&v78[9] = *(_QWORD *)(*(_QWORD *)&v78[19] + 56LL);
              *((_QWORD *)&v78[9] + 1) = *(_QWORD *)&v78[19];
              v63 = *(unsigned __int8 *)(*(_QWORD *)&v78[19] + 68LL);
              v20 = *(unsigned int *)(*(_QWORD *)&v78[19] + 64LL);
              v21 = DWORD2(v78[21]);
              v22 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v20 == DWORD2(v78[21]) )
              {
                if ( v22 == -1 && !LOBYTE(v78[22]) )
                {
                  LOBYTE(v78[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v20));
                }
              }
              else
              {
                if ( v22 == -1 )
                {
                  if ( LOBYTE(v78[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v78[21])));
                  else
                    LOBYTE(v78[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v20));
                }
                DWORD2(v78[21]) = v20;
                v31 = *(_QWORD *)(a1 + 48);
                v32 = *(_WORD *)(16 * v20 + v31 + 8);
                v33 = *(_WORD *)(v31 + 16 * v21 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v31) )
                  v34 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v34 = 2147353478LL;
                if ( *(_BYTE *)v34 )
                  TppETWWorkerNodeSwitch(a1, v21, v20, v33, v32);
                if ( v33 != v32 )
                {
                  v79[1] = v32;
                  v79[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v79, 16LL);
                  NtSetInformationThread(-2LL, 13LL, &v63, 4LL);
                }
              }
              v78[18] = NtCurrentTeb()->ActivityId;
              if ( *((_QWORD *)&v78[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v78[11] + 1) + 436LL) & 1) == 0 )
              {
                v35 = LODWORD(v78[10]) | 8;
                LODWORD(v78[10]) |= 8u;
                v71 = NtCurrentTeb();
                if ( v71->IsImpersonating )
                  LODWORD(v78[10]) = v35 | 4;
                if ( TppCheckForTransactions() )
                {
                  v39 = v36 | 0x10;
                  LODWORD(v78[10]) = v36 | 0x10;
                  v38 = v36 | 0x10;
                  v37 = v36 | 0x10;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v38 = v39 | 0x20;
                  LODWORD(v78[10]) = v39 | 0x20;
                  v37 = v39 | 0x20;
                }
                v72 = NtCurrentTeb();
                if ( v72->PreferredLanguages )
                {
                  v37 = v38 | 0x40;
                  LODWORD(v78[10]) = v38 | 0x40;
                }
                v73 = NtCurrentTeb();
                if ( v73->SavedPriorityState )
                  LODWORD(v78[10]) = v37 | 0x80;
              }
              (*(void (__fastcall **)(char *, __int64, _QWORD, _OWORD *))(v19 + 56))(
                (char *)&v78[3] + 8,
                v68,
                *((_QWORD *)&v78[19] + 1),
                &v78[20]);
              goto LABEL_29;
            }
            while ( 1 )
            {
              if ( !(unsigned int)TppWorkerFindTask(a1, (__int64)v78, &v66) )
                goto LABEL_99;
              if ( (BYTE12(v78[17]) & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((char *)&v78[3] + 8, v6);
                HIDWORD(v78[17]) &= ~1u;
              }
              *(_QWORD *)&v78[2] = v66;
              *(_QWORD *)&v78[9] = **v66;
              *((_QWORD *)&v78[9] + 1) = v66;
              *((_QWORD *)&v78[11] + 1) = *(_QWORD *)&v78[3];
              v78[18] = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&v78[3] && (*(_BYTE *)(*(_QWORD *)&v78[3] + 436LL) & 1) == 0 )
              {
                v25 = LODWORD(v78[10]) | 8;
                LODWORD(v78[10]) |= 8u;
                v74 = NtCurrentTeb();
                if ( v74->IsImpersonating )
                  LODWORD(v78[10]) = v25 | 4;
                if ( TppCheckForTransactions() )
                  LODWORD(v78[10]) = v26 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v78[10]) |= 0x20u;
                v75 = NtCurrentTeb();
                if ( v75->PreferredLanguages )
                  LODWORD(v78[10]) |= 0x40u;
                v76 = NtCurrentTeb();
                if ( v76->SavedPriorityState )
                  LODWORD(v78[10]) |= 0x80u;
              }
              (**v66)((char *)&v78[3] + 8);
LABEL_29:
              if ( (BYTE4(v78[8]) & 4) != 0 )
                v51 = 1;
              v52 = LODWORD(v78[8]) == 4;
              TppCallbackEpilog((char *)&v78[3] + 8);
              *(_QWORD *)&v78[2] = 0LL;
              if ( v51 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v23 = *(_QWORD *)(a1 + 8);
              v61 = v23;
              do
              {
                v6 = (unsigned __int16)v23;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_99;
                if ( HIDWORD(v23) && ((v23 & 0x8000u) == 0LL || v52) )
                {
                  LOBYTE(v7) = 0;
                  HIDWORD(v61) = HIDWORD(v23) - 1;
                }
                else
                {
                  LOBYTE(v7) = 1;
                  LODWORD(v61) = v23 ^ (unsigned __int16)(v23 ^ (v23 + 1));
                }
                v24 = v23;
                v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v61, v23);
                v61 = v23;
              }
              while ( v24 != v23 );
              v45 = (char)v7;
              if ( (_BYTE)v7 )
                goto LABEL_12;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v40 = *(_QWORD *)(a1 + 8);
            v59 = v40;
            do
            {
              LODWORD(v59) = v40 ^ (unsigned __int16)(v40 ^ (v40 + 1));
              v41 = v40;
              v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v59, v40);
              v59 = v40;
            }
            while ( v41 != v40 );
            v64 = 3;
            v77 = *(_QWORD *)(a1 + 56);
            NtSetInformationWorkerFactory(v77, 9LL, &v64);
LABEL_99:
            if ( (BYTE12(v78[17]) & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage((char *)&v78[3] + 8, v6);
              HIDWORD(v78[17]) &= ~1u;
            }
            if ( v46 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v47 )
            {
              v42 = v58;
              RtlAcquireSRWLockExclusive((unsigned __int64)&v58->TppWorkerpListLock, v6, v7, v8);
              v43 = *((_QWORD *)&v78[0] + 1);
              v44 = *(_QWORD *)&v78[0];
              if ( *(_OWORD **)(*(_QWORD *)&v78[0] + 8LL) != v78 || **((_OWORD ***)&v78[0] + 1) != v78 )
                __fastfail(3u);
              **((_QWORD **)&v78[0] + 1) = *(_QWORD *)&v78[0];
              *(_QWORD *)(v44 + 8) = v43;
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v42->TppWorkerpListLock);
            }
            if ( v48 )
            {
              TppPoolRemoveWorker(v78, v6);
              if ( v49 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree(a1, v6);
            }
            TppCritResetThread(v65, v6);
            TppFreeThreadData(v60);
            TppFreeDirectParamsCache(v78);
            v54 = 0;
            RtlExitUserThread(0LL);
          }
        }
      }
      v67 = TppHeapTag + 3145728;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
      v17 = (_OWORD *)Heap;
      if ( Heap )
      {
        v28 = Heap + 896;
        *(_QWORD *)v28 = v17;
        *(_DWORD *)(v28 + 8) = 1;
        *(_DWORD *)(v28 + 12) = 16;
        *(_QWORD *)&v78[21] = v28;
        v16 = 16;
      }
      else
      {
LABEL_80:
        v16 = 1;
        v17 = &v78[19];
      }
      v55 = v16;
      goto LABEL_15;
    }
  }
  v5 = 1;
  v50 = 1;
  goto LABEL_8;
}
