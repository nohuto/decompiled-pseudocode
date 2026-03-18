/*
 * XREFs of RunContext @ 0x1C0003C90
 * Callers:
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C0026820 (DispatchCtxtQueue.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     NewObjData @ 0x1C001BAD0 (NewObjData.c)
 *     _TlgWrite @ 0x1C001D690 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001D730 (_TlgKeywordOn.c)
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     LogSchedEvent @ 0x1C002880C (LogSchedEvent.c)
 *     ReleaseASLMutex @ 0x1C002E5AC (ReleaseASLMutex.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C0062750 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0062BC4 (AmliWatchdogTimeoutAction.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     InvokePauseCallbacks @ 0x1C0067D60 (InvokePauseCallbacks.c)
 */

__int64 __fastcall RunContext(PSLIST_ENTRY ListEntry)
{
  char v1; // r12
  _SLIST_ENTRY *v2; // rsi
  _SLIST_ENTRY *v4; // rax
  unsigned int Next; // ecx
  __int64 v6; // rax
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // r10
  unsigned __int32 v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _SLIST_ENTRY *v15; // rdi
  _SLIST_ENTRY *v16; // rdx
  unsigned int v17; // eax
  _SLIST_ENTRY *v18; // r14
  __int64 v19; // rax
  int v20; // eax
  PSLIST_ENTRY v21; // r14
  _SLIST_ENTRY *v22; // rdx
  _SLIST_ENTRY *v23; // rax
  _SLIST_ENTRY **v24; // rcx
  _SLIST_ENTRY *v25; // rdx
  PSLIST_ENTRY *v26; // rcx
  PSLIST_ENTRY v27; // rax
  _SLIST_ENTRY *v28; // r8
  _SLIST_ENTRY **v29; // rdx
  KIRQL v30; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int128 v33; // rax
  _SLIST_ENTRY *v34; // rsi
  KIRQL v35; // r14
  _SLIST_ENTRY *v36; // r12
  _SLIST_ENTRY *v37; // rcx
  __int64 v38; // rcx
  _SLIST_ENTRY *v39; // rcx
  __int64 v40; // rsi
  struct _KTHREAD *v41; // r8
  __int64 v42; // r9
  unsigned __int32 v43; // r15d
  unsigned int v44; // r15d
  __int64 v45; // rdx
  _QWORD *v47; // rax
  __int64 (__fastcall *v48)(); // r10
  __int64 v49; // r11
  _SLIST_ENTRY *v50; // r12
  __int64 v51; // r14
  struct _KTHREAD *v52; // r13
  __int64 v53; // r9
  unsigned __int32 v54; // ecx
  unsigned int v55; // ecx
  __int64 v56; // rdx
  _SLIST_ENTRY *v57; // rcx
  __int64 v58; // r14
  _SLIST_ENTRY *v59; // rax
  int v60; // ecx
  _SLIST_ENTRY *v61; // r12
  int v62; // r13d
  _SLIST_ENTRY *v63; // rcx
  _DWORD *v64; // r14
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  __int64 v68; // rcx
  _SLIST_ENTRY *v69; // rcx
  _SLIST_ENTRY *v70; // rcx
  _SLIST_ENTRY *v71; // rax
  int v72; // ecx
  unsigned __int64 v73; // rdx
  const GUID *v74; // r8
  const GUID *v75; // r9
  char v76; // [rsp+30h] [rbp-99h]
  __int16 v77; // [rsp+34h] [rbp-95h] BYREF
  __int16 v78; // [rsp+38h] [rbp-91h] BYREF
  int v79; // [rsp+3Ch] [rbp-8Dh] BYREF
  __int64 v80; // [rsp+40h] [rbp-89h]
  _SLIST_ENTRY *v81; // [rsp+48h] [rbp-81h]
  unsigned __int64 v82; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  _SLIST_ENTRY *v84; // [rsp+70h] [rbp-59h]
  int v85; // [rsp+78h] [rbp-51h]
  int v86; // [rsp+7Ch] [rbp-4Dh]
  __int16 *v87; // [rsp+80h] [rbp-49h]
  __int64 v88; // [rsp+88h] [rbp-41h]
  unsigned __int64 *v89; // [rsp+90h] [rbp-39h]
  __int64 v90; // [rsp+98h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v92; // [rsp+C0h] [rbp-9h]
  __int64 v93; // [rsp+C8h] [rbp-1h]
  _SLIST_ENTRY *v94; // [rsp+D0h] [rbp+7h]
  _DWORD v95[2]; // [rsp+D8h] [rbp+Fh] BYREF
  int *v96; // [rsp+E0h] [rbp+17h]
  __int64 v97; // [rsp+E8h] [rbp+1Fh]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C0081808;
    if ( *(__int64 **)qword_1C0081808 != &RunningContextListHead )
      goto LABEL_157;
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    v4->Next = v2;
    qword_1C0081808 = (__int64)(&ListEntry[24].Next + 1);
    v76 = 0;
  }
  else
  {
    v76 = 1;
  }
  Next = (unsigned int)ListEntry[4].Next;
  *((_QWORD *)&ListEntry[25].Next + 1) = KeGetCurrentThread();
  if ( (Next & 0x200) != 0 )
  {
    gReadyQueue |= 0x200u;
    Next = (unsigned int)ListEntry[4].Next;
  }
  v6 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  v11 = Next;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
    if ( (_DWORD)qword_1C0082828 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C0082828;
    v14 = 72LL * v13;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0082830 + v14) = 1381322307;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 24) = v9;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 40) = v10;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 56) = v7;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 64) = v11;
    Next = (unsigned int)ListEntry[4].Next;
  }
  do
  {
    v15 = 0LL;
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, byte_1C0082700);
    do
    {
      v16 = ListEntry[26].Next;
      if ( !v16 )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
        v16 = ListEntry[26].Next;
      }
      v17 = (*((__int64 (__fastcall **)(PSLIST_ENTRY, _SLIST_ENTRY *, _QWORD))&v16[1].Next + 1))(
              ListEntry,
              v16,
              (unsigned int)v15);
      v15 = (_SLIST_ENTRY *)v17;
      if ( v17 == 32772 )
        break;
    }
    while ( v17 != 0x8000 );
    byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Next = (unsigned int)ListEntry[4].Next;
    if ( (Next & 0x80u) == 0 || (_DWORD)v15 != 0x8000 )
    {
      Next &= ~0x10u;
      LODWORD(ListEntry[4].Next) = Next;
    }
  }
  while ( (Next & 8) != 0 );
  if ( (_DWORD)v15 == 32772 )
  {
    LODWORD(ListEntry[4].Next) = Next | 0x20;
    goto LABEL_34;
  }
  if ( (_DWORD)v15 == 0x8000 )
  {
    if ( !*((_QWORD *)&ListEntry[6].Next + 1) )
      LODWORD(ListEntry[4].Next) = Next & 0xFFFFFF7F;
    LODWORD(v15) = 0;
    goto LABEL_34;
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0082700);
  if ( !(_DWORD)v15 )
  {
    v18 = ListEntry[11].Next;
    v81 = v18;
    if ( v18 )
    {
      v19 = gpheapGlobal;
      v80 = gpheapGlobal;
      if ( v18 != &ListEntry[8] )
      {
        *v18 = ListEntry[8];
        v18[1] = ListEntry[9];
        v18[2].Next = ListEntry[10].Next;
        if ( ListEntry[10].Next != v15 )
        {
          v59 = (_SLIST_ENTRY *)NewObjData(v19, &ListEntry[8]);
          v18[2].Next = v59;
          if ( !v59 )
          {
            LODWORD(v15) = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(0LL, 3221225626LL);
            PrintDebugMessage(43, 0, 0, 0, 0LL);
            goto LABEL_28;
          }
          memmove(v59, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
          v60 = WORD1(v18->Next);
          if ( v60 == 4 )
          {
            v61 = ListEntry[10].Next;
            v62 = 0;
            v63 = v18[2].Next;
            LODWORD(v63->Next) = v61->Next;
            if ( SLODWORD(v61->Next) > 0 )
            {
              v64 = &v63->Next + 1;
              do
              {
                LODWORD(v15) = DupObjData(v80, &v64[10 * v62], &v61->Next + 5 * v62 + 1);
                if ( (_DWORD)v15 )
                  break;
                ++v62;
              }
              while ( v62 < SLODWORD(v61->Next) );
              v18 = v81;
              v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
            }
          }
          else
          {
            v65 = v60 - 5;
            if ( !v65 )
              goto LABEL_138;
            v66 = v65 - 125;
            if ( !v66 )
            {
              v70 = v18[2].Next;
              if ( (gdwfAMLI & 4) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)&v70->Next[7]);
                v70 = v18[2].Next;
              }
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v70->Next + 1) + 112LL));
              goto LABEL_100;
            }
            v67 = v66 - 1;
            if ( v67 )
            {
              if ( v67 == 1 )
              {
                v69 = v18[2].Next;
                if ( (gdwfAMLI & 4) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v69->Next + 1) + 112LL));
                  v69 = v18[2].Next;
                }
                if ( (gdwfAMLI & 4) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)&v69->Next[7]);
              }
            }
            else
            {
LABEL_138:
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)&v18[2].Next->Next[7]);
            }
          }
LABEL_100:
          LOWORD(v18->Next) &= ~1u;
          _InterlockedExchange((volatile __int32 *)&v18->Next + 2, 0);
        }
      }
    }
  }
LABEL_28:
  v20 = (int)ListEntry[4].Next;
  if ( (v20 & 0x20) != 0 )
  {
    v47 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v47 )
    {
      v48 = (__int64 (__fastcall *)())v47[11];
      v49 = v47[4];
      v50 = (_SLIST_ENTRY *)v47[12];
      v51 = v47[13];
    }
    else
    {
      v48 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v49 = *((_QWORD *)&ListEntry[4].Next + 1);
      v50 = ListEntry[11].Next;
      v51 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v48 == EvalMethodComplete )
    {
      LogSchedEvent(1146048069, (_DWORD)ListEntry, v49, (_DWORD)v15, v51);
      *(_DWORD *)v51 = (_DWORD)v15;
      *(_QWORD *)(v51 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v51 + 16), 0, 0);
    }
    else if ( (_DWORD)v15 == 32771 )
    {
      RestartContext(ListEntry);
    }
    else if ( v48 )
    {
      v52 = KeGetCurrentThread();
      v53 = *((_QWORD *)&ListEntry[25].Next + 1);
      v81 = (_SLIST_ENTRY *)(unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
      {
        v54 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
        if ( (_DWORD)qword_1C0082828 == 204 )
          v55 = v54 % 0xCC;
        else
          v55 = v54 % (unsigned int)qword_1C0082828;
        v56 = 72LL * v55;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 8) = MEMORY[0xFFFFF78000000008];
        v57 = v81;
        *(_DWORD *)((char *)qword_1C0082830 + v56) = 1095975746;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 16) = v52;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 24) = v53;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 32) = ListEntry;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 40) = v57;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 48) = v49;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 56) = (int)v15;
        *(_QWORD *)((char *)qword_1C0082830 + v56 + 64) = v51;
      }
      ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v48)(v49 + 120, (unsigned int)v15, v50, v51);
    }
    v20 = (int)ListEntry[4].Next;
    if ( (v20 & 0x100) != 0 )
      LODWORD(v15) = 32772;
  }
  if ( (v20 & 0x200) != 0 )
    gReadyQueue &= ~0x200u;
  v21 = ListEntry + 3;
  while ( 1 )
  {
    v22 = v21->Next;
    if ( v21->Next == v21 )
      break;
    if ( *((_DWORD *)&v22[-2].Next + 2) == 1 )
    {
      ReleaseASLMutex(ListEntry, *((_QWORD *)&v22[-1].Next + 1), 0LL);
    }
    else
    {
      if ( *(&v22->Next + 1) != v21 )
        goto LABEL_157;
      v71 = v22->Next;
      if ( *(&v22->Next->Next + 1) != v22 )
        goto LABEL_157;
      v21->Next = v71;
      *((_QWORD *)&v71->Next + 1) = v21;
      HeapFree(&v22[-2].Next + 1);
    }
  }
  v1 = 1;
  byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
LABEL_34:
  if ( !v76 )
  {
    v23 = v2->Next;
    if ( *(&v2->Next->Next + 1) != v2 )
      goto LABEL_157;
    v24 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1);
    if ( *v24 != v2 )
      goto LABEL_157;
    *v24 = v23;
    *((_QWORD *)&v23->Next + 1) = v24;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)&ListEntry[25].Next + 1) = 0LL;
  }
  if ( !v1 )
    goto LABEL_67;
  byte_1C0082B10 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v25 = ListEntry[1].Next;
  if ( *(&v25->Next + 1) != &ListEntry[1]
    || (v26 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1), *v26 != &ListEntry[1])
    || (*v26 = v25,
        v27 = ListEntry + 2,
        *((_QWORD *)&v25->Next + 1) = v26,
        v28 = ListEntry[2].Next,
        *(&v28->Next + 1) != &ListEntry[2])
    || (v29 = (_SLIST_ENTRY **)*((_QWORD *)&ListEntry[2].Next + 1), *v29 != v27) )
  {
LABEL_157:
    __fastfail(3u);
  }
  *v29 = v28;
  *((_QWORD *)&v28->Next + 1) = v29;
  *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
  v27->Next = v27;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0082B10);
  if ( ((__int64)ListEntry[8].Next & 1) != 0 )
  {
    v68 = *((_QWORD *)&ListEntry[8].Next + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v68 & 8) != 0 )
      FreeData();
  }
  else if ( ListEntry[10].Next && *((int *)&ListEntry[8].Next + 2) <= 0 )
  {
    if ( WORD1(ListEntry[8].Next) == 4 )
      FreeDataBuffs(&ListEntry[10].Next->Next + 1, ListEntry[10].Next->Next);
    FreeObjData(&ListEntry[8]);
  }
  ListEntry[8].Next = 0LL;
  *((_QWORD *)&ListEntry[8].Next + 1) = 0LL;
  ListEntry[9].Next = 0LL;
  *((_QWORD *)&ListEntry[9].Next + 1) = 0LL;
  ListEntry[10].Next = 0LL;
  v30 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v30);
  v82 = 0LL;
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    *(_QWORD *)&UserData.Size = 2LL;
    v72 = *((unsigned __int16 *)&ListEntry[27].Next + 4);
    v73 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)&ListEntry[28].Next + 1)) / 0x2710uLL;
    v77 = *((_WORD *)&ListEntry[27].Next + 4) >> 1;
    UserData.Ptr = (unsigned __int64)&v77;
    v84 = ListEntry[28].Next;
    v87 = &v78;
    v89 = &v82;
    v82 = v73;
    v85 = v72;
    v86 = 0;
    v78 = 0;
    v88 = 2LL;
    v90 = 8LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
  v31 = *((_QWORD *)&ListEntry[28].Next + 1);
  if ( v31 )
  {
    v32 = MEMORY[0xFFFFF78000000008] - v31;
    v33 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v31) * (unsigned __int128)0x346DC5D63886594BuLL;
    if ( (unsigned int)(v32 / 0x2710) >= 0x3E8
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, *((ULONGLONG *)&v33 + 1)) )
    {
      v79 = (int)v74;
      v92 = v95;
      v94 = ListEntry[28].Next;
      v95[0] = *((unsigned __int16 *)&ListEntry[27].Next + 4);
      v96 = &v79;
      v93 = 2LL;
      v95[1] = 0;
      v97 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0072320, v74, v75, 5u, &pData);
    }
  }
  v34 = ListEntry[29].Next;
  if ( v34 )
  {
    v35 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
    v36 = v34->Next;
    if ( *((_BYTE *)&v34[5].Next + 8) || *((_BYTE *)&v36[29].Next + 8) )
    {
      *((_BYTE *)&v34[5].Next + 8) = 0;
      if ( !KeCancelTimer((PKTIMER)(&v34[6].Next + 1)) )
      {
        if ( *((_BYTE *)&v36[29].Next + 8) )
          AcpiQueueRecordBlackboxInformation();
        else
          AmliWatchdogTimeoutAction(v34);
      }
    }
    KeReleaseSpinLock(&AcpiWatchdogLock, v35);
    ExFreePoolWithTag(ListEntry[29].Next, 0);
  }
  v37 = ListEntry[28].Next;
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  v38 = *((_QWORD *)&ListEntry[4].Next + 1);
  if ( v38 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v38 + 64) |= 4u;
      if ( (*(_WORD *)(v38 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v38);
    }
    *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
  }
  if ( *((_QWORD *)&ListEntry[26].Next + 1) )
  {
    DereferenceObjectEx();
    *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
  }
  v39 = ListEntry[5].Next;
  if ( v39 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v39[7], 0xFFFFFFFF) == 1 )
    {
      LOWORD(v39[4].Next) |= 4u;
      if ( ((__int64)v39[4].Next & 0x40) == 0 )
        FreeNameSpaceObjects(v39);
    }
    ListEntry[5].Next = 0LL;
  }
  v40 = *((_QWORD *)&ListEntry[31].Next + 1);
  if ( v40 )
  {
    do
    {
      v58 = *(_QWORD *)(v40 + 24);
      ++dword_1C0082B5C;
      if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0082B50 )
      {
        ++dword_1C0082B60;
        ((void (__fastcall *)(__int64))qword_1C0082B78)(v40);
      }
      else
      {
        ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)v40);
      }
      v40 = v58;
    }
    while ( v58 );
  }
  ++dword_1C0082B5C;
  if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0082B50 )
  {
    ++dword_1C0082B60;
    ((void (__fastcall *)(PSLIST_ENTRY))qword_1C0082B78)(ListEntry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
  }
LABEL_67:
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0082730 != &qword_1C0082730 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, (_DWORD)v15, 0LL);
    }
  }
  v41 = KeGetCurrentThread();
  v42 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v43 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
    if ( (_DWORD)qword_1C0082828 == 204 )
      v44 = v43 % 0xCC;
    else
      v44 = v43 % (unsigned int)qword_1C0082828;
    v45 = 72LL * v44;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0082830 + v45) = 1381322273;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 16) = v41;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 40) = v42;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 56) = (int)v15;
    *(_QWORD *)((char *)qword_1C0082830 + v45 + 64) = 0LL;
  }
  return (unsigned int)v15;
}
