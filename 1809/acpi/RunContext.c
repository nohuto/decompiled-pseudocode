/*
 * XREFs of RunContext @ 0x1C00048A0
 * Callers:
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C0028140 (DispatchCtxtQueue.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     RestartContext @ 0x1C00237D0 (RestartContext.c)
 *     LogEvent @ 0x1C002975C (LogEvent.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C002E80C (ReleaseASLMutex.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     _TlgKeywordOn @ 0x1C0048AE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0048B10 (_TlgWrite.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C00607D0 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0060C48 (AmliWatchdogTimeoutAction.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     LogSchedEvent @ 0x1C0064328 (LogSchedEvent.c)
 *     InvokePauseCallbacks @ 0x1C0065CFC (InvokePauseCallbacks.c)
 */

__int64 __fastcall RunContext(PSLIST_ENTRY ListEntry)
{
  char v1; // r15
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
  __int64 v19; // r13
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
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  PSLIST_ENTRY v33; // rsi
  KIRQL v34; // al
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int128 v37; // rax
  _SLIST_ENTRY *v38; // rsi
  KIRQL v39; // r14
  _SLIST_ENTRY *v40; // r15
  _SLIST_ENTRY *v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  _SLIST_ENTRY *v44; // rcx
  __int64 v45; // rsi
  struct _KTHREAD *v46; // r8
  __int64 v47; // r9
  unsigned __int32 v48; // r13d
  unsigned int v49; // r13d
  __int64 v50; // rdx
  _QWORD *v52; // rax
  __int64 (__fastcall *v53)(); // r10
  __int64 v54; // r9
  _SLIST_ENTRY *v55; // r11
  __int64 v56; // r14
  struct _KTHREAD *v57; // r12
  __int64 v58; // r15
  __int64 v59; // r13
  unsigned __int32 v60; // ecx
  unsigned int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // r14
  _SLIST_ENTRY *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  _SLIST_ENTRY *v69; // r15
  int v70; // r12d
  _SLIST_ENTRY *v71; // rcx
  _DWORD *v72; // rsi
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  __int64 v76; // rcx
  _SLIST_ENTRY *v77; // rcx
  _SLIST_ENTRY *v78; // rcx
  _SLIST_ENTRY *v79; // rax
  int v80; // ecx
  unsigned __int64 v81; // rdx
  const GUID *v82; // r8
  const GUID *v83; // r9
  char v84; // [rsp+40h] [rbp-89h]
  __int16 v85; // [rsp+44h] [rbp-85h] BYREF
  __int16 v86; // [rsp+48h] [rbp-81h] BYREF
  int v87; // [rsp+4Ch] [rbp-7Dh] BYREF
  unsigned __int64 v88; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  _SLIST_ENTRY *v90; // [rsp+70h] [rbp-59h]
  int v91; // [rsp+78h] [rbp-51h]
  int v92; // [rsp+7Ch] [rbp-4Dh]
  __int16 *v93; // [rsp+80h] [rbp-49h]
  __int64 v94; // [rsp+88h] [rbp-41h]
  unsigned __int64 *v95; // [rsp+90h] [rbp-39h]
  __int64 v96; // [rsp+98h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v98; // [rsp+C0h] [rbp-9h]
  __int64 v99; // [rsp+C8h] [rbp-1h]
  _SLIST_ENTRY *v100; // [rsp+D0h] [rbp+7h]
  _DWORD v101[2]; // [rsp+D8h] [rbp+Fh] BYREF
  int *v102; // [rsp+E0h] [rbp+17h]
  __int64 v103; // [rsp+E8h] [rbp+1Fh]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C007F808;
    if ( *(__int64 **)qword_1C007F808 != &RunningContextListHead )
      goto LABEL_158;
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    v4->Next = v2;
    qword_1C007F808 = (__int64)(&ListEntry[24].Next + 1);
    v84 = 0;
  }
  else
  {
    v84 = 1;
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
  if ( (gDebugger & 0x8000) != 0 && qword_1C0080840 )
  {
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0080838 + 1, 1u);
    if ( (_DWORD)qword_1C0080838 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C0080838;
    v14 = 72LL * v13;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0080840 + v14) = 1381322307;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 24) = v9;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 40) = v10;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 56) = v7;
    *(_QWORD *)((char *)qword_1C0080840 + v14 + 64) = v11;
    Next = (unsigned int)ListEntry[4].Next;
  }
  do
  {
    v15 = 0LL;
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, byte_1C0080710);
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
    byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
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
  KeReleaseSpinLock(&SpinLock, byte_1C0080710);
  if ( !(_DWORD)v15 )
  {
    v18 = ListEntry[11].Next;
    if ( v18 )
    {
      v19 = gpheapGlobal;
      if ( v18 != &ListEntry[8] )
      {
        *v18 = ListEntry[8];
        v18[1] = ListEntry[9];
        v18[2].Next = ListEntry[10].Next;
        if ( ListEntry[10].Next != v15 )
        {
          v64 = (_SLIST_ENTRY *)NewObjData(v19, &ListEntry[8]);
          v18[2].Next = v64;
          if ( !v64 )
          {
            LODWORD(v15) = -1073741670;
            LogError(3221225626LL, v65, v66, v67);
            AcpiDiagTraceAmlError(0LL, 3221225626LL);
            PrintDebugMessage(43, 0, 0, 0, 0LL);
            goto LABEL_28;
          }
          memmove(v64, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
          v68 = WORD1(v18->Next);
          if ( v68 == 4 )
          {
            v69 = ListEntry[10].Next;
            v70 = 0;
            v71 = v18[2].Next;
            LODWORD(v71->Next) = v69->Next;
            if ( SLODWORD(v69->Next) > 0 )
            {
              v72 = &v71->Next + 1;
              do
              {
                LODWORD(v15) = DupObjData(v19, &v72[10 * v70], &v69->Next + 5 * v70 + 1);
                if ( (_DWORD)v15 )
                  break;
                ++v70;
              }
              while ( v70 < SLODWORD(v69->Next) );
              v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
            }
          }
          else
          {
            v73 = v68 - 5;
            if ( !v73 )
              goto LABEL_138;
            v74 = v73 - 125;
            if ( !v74 )
            {
              v78 = v18[2].Next;
              if ( (gdwfAMLI & 4) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)&v78->Next[7]);
                v78 = v18[2].Next;
              }
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v78->Next + 1) + 112LL));
              goto LABEL_100;
            }
            v75 = v74 - 1;
            if ( v75 )
            {
              if ( v75 == 1 )
              {
                v77 = v18[2].Next;
                if ( (gdwfAMLI & 4) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v77->Next + 1) + 112LL));
                  v77 = v18[2].Next;
                }
                if ( (gdwfAMLI & 4) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)&v77->Next[7]);
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
    v52 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v52 )
    {
      v53 = (__int64 (__fastcall *)())v52[11];
      v54 = v52[4];
      v55 = (_SLIST_ENTRY *)v52[12];
      v56 = v52[13];
    }
    else
    {
      v53 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v54 = *((_QWORD *)&ListEntry[4].Next + 1);
      v55 = ListEntry[11].Next;
      v56 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v53 == EvalMethodComplete )
    {
      LogEvent(
        1146048069,
        (unsigned int)KeGetCurrentThread(),
        *((_QWORD *)&ListEntry[25].Next + 1),
        (_DWORD)ListEntry,
        (unsigned int)gReadyQueue,
        v54,
        (int)v15,
        v56);
      *(_DWORD *)v56 = (_DWORD)v15;
      *(_QWORD *)(v56 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v56 + 16), 0, 0);
    }
    else if ( (_DWORD)v15 == 32771 )
    {
      RestartContext(ListEntry, 0LL);
    }
    else if ( v53 )
    {
      v57 = KeGetCurrentThread();
      v58 = *((_QWORD *)&ListEntry[25].Next + 1);
      v59 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_1C0080840 )
      {
        v60 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0080838 + 1, 1u);
        if ( (_DWORD)qword_1C0080838 == 204 )
          v61 = v60 % 0xCC;
        else
          v61 = v60 % (unsigned int)qword_1C0080838;
        v62 = 72LL * v61;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)qword_1C0080840 + v62) = 1095975746;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 16) = v57;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 24) = v58;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 32) = ListEntry;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 40) = v59;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 48) = v54;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 56) = (int)v15;
        *(_QWORD *)((char *)qword_1C0080840 + v62 + 64) = v56;
      }
      ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v53)(v54 + 120, (unsigned int)v15, v55, v56);
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
        goto LABEL_158;
      v79 = v22->Next;
      if ( *(&v22->Next->Next + 1) != v22 )
        goto LABEL_158;
      v21->Next = v79;
      *((_QWORD *)&v79->Next + 1) = v21;
      HeapFree((_QWORD *)&v22[-2].Next + 1);
    }
  }
  v1 = 1;
  byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
LABEL_34:
  if ( !v84 )
  {
    v23 = v2->Next;
    if ( *(&v2->Next->Next + 1) != v2 )
      goto LABEL_158;
    v24 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1);
    if ( *v24 != v2 )
      goto LABEL_158;
    *v24 = v23;
    *((_QWORD *)&v23->Next + 1) = v24;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)&ListEntry[25].Next + 1) = 0LL;
  }
  if ( !v1 )
    goto LABEL_67;
  byte_1C0080B10 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
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
LABEL_158:
    __fastfail(3u);
  }
  *v29 = v28;
  *((_QWORD *)&v28->Next + 1) = v29;
  *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
  v27->Next = v27;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0080B10);
  v33 = ListEntry + 8;
  if ( ((__int64)ListEntry[8].Next & 1) != 0 )
  {
    v76 = *((_QWORD *)&ListEntry[8].Next + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v76 & 8) != 0 )
      FreeData(v76, v30, v31, v32);
  }
  else if ( ListEntry[10].Next )
  {
    if ( *((int *)&ListEntry[8].Next + 2) > 0 )
    {
      LOWORD(v33->Next) |= 8u;
    }
    else
    {
      if ( WORD1(ListEntry[8].Next) == 4 )
        FreeDataBuffs((__int64)(&ListEntry[10].Next->Next + 1), (unsigned int)ListEntry[10].Next->Next);
      FreeObjData((__int64)&ListEntry[8], v30, v31, v32);
    }
  }
  v33->Next = 0LL;
  *((_QWORD *)&ListEntry[8].Next + 1) = 0LL;
  ListEntry[9].Next = 0LL;
  *((_QWORD *)&ListEntry[9].Next + 1) = 0LL;
  ListEntry[10].Next = 0LL;
  v34 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v34);
  v88 = 0LL;
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    *(_QWORD *)&UserData.Size = 2LL;
    v80 = *((unsigned __int16 *)&ListEntry[27].Next + 4);
    v81 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)&ListEntry[28].Next + 1)) / 0x2710uLL;
    v85 = *((_WORD *)&ListEntry[27].Next + 4) >> 1;
    UserData.Ptr = (unsigned __int64)&v85;
    v90 = ListEntry[28].Next;
    v93 = &v86;
    v95 = &v88;
    v88 = v81;
    v91 = v80;
    v92 = 0;
    v86 = 0;
    v94 = 2LL;
    v96 = 8LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
  v35 = *((_QWORD *)&ListEntry[28].Next + 1);
  if ( v35 )
  {
    v36 = MEMORY[0xFFFFF78000000008] - v35;
    v37 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v35) * (unsigned __int128)0x346DC5D63886594BuLL;
    if ( (unsigned int)(v36 / 0x2710) >= 0x3E8
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, *((ULONGLONG *)&v37 + 1)) )
    {
      v87 = (int)v82;
      v98 = v101;
      v100 = ListEntry[28].Next;
      v101[0] = *((unsigned __int16 *)&ListEntry[27].Next + 4);
      v102 = &v87;
      v99 = 2LL;
      v101[1] = 0;
      v103 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0070540, v82, v83, 5u, &pData);
    }
  }
  v38 = ListEntry[29].Next;
  if ( v38 )
  {
    v39 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
    v40 = v38->Next;
    if ( *((_BYTE *)&v38[5].Next + 8) || *((_BYTE *)&v40[29].Next + 8) )
    {
      *((_BYTE *)&v38[5].Next + 8) = 0;
      if ( !KeCancelTimer((PKTIMER)(&v38[6].Next + 1)) )
      {
        if ( *((_BYTE *)&v40[29].Next + 8) )
          AcpiQueueRecordBlackboxInformation();
        else
          AmliWatchdogTimeoutAction(v38);
      }
    }
    KeReleaseSpinLock(&AcpiWatchdogLock, v39);
    ExFreePoolWithTag(ListEntry[29].Next, 0);
  }
  v41 = ListEntry[28].Next;
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  v42 = *((_QWORD *)&ListEntry[4].Next + 1);
  if ( v42 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v42 + 64) |= 4u;
      if ( (*(_WORD *)(v42 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v42);
    }
    *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
  }
  v43 = *((_QWORD *)&ListEntry[26].Next + 1);
  if ( v43 )
  {
    DereferenceObjectEx(v43);
    *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
  }
  v44 = ListEntry[5].Next;
  if ( v44 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v44[7], 0xFFFFFFFF) == 1 )
    {
      LOWORD(v44[4].Next) |= 4u;
      if ( ((__int64)v44[4].Next & 0x40) == 0 )
        FreeNameSpaceObjects((unsigned __int64)v44);
    }
    ListEntry[5].Next = 0LL;
  }
  v45 = *((_QWORD *)&ListEntry[31].Next + 1);
  if ( v45 )
  {
    do
    {
      v63 = *(_QWORD *)(v45 + 24);
      ++dword_1C0080B5C;
      if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0080B50 )
      {
        ++dword_1C0080B60;
        ((void (__fastcall *)(__int64))qword_1C0080B78)(v45);
      }
      else
      {
        ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)v45);
      }
      v45 = v63;
    }
    while ( v63 );
  }
  ++dword_1C0080B5C;
  if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0080B50 )
  {
    ++dword_1C0080B60;
    ((void (__fastcall *)(PSLIST_ENTRY))qword_1C0080B78)(ListEntry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
  }
LABEL_67:
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0080740 != &qword_1C0080740 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, (_DWORD)v15, 0LL);
    }
  }
  v46 = KeGetCurrentThread();
  v47 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0080840 )
  {
    v48 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0080838 + 1, 1u);
    if ( (_DWORD)qword_1C0080838 == 204 )
      v49 = v48 % 0xCC;
    else
      v49 = v48 % (unsigned int)qword_1C0080838;
    v50 = 72LL * v49;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0080840 + v50) = 1381322273;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 16) = v46;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 40) = v47;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 56) = (int)v15;
    *(_QWORD *)((char *)qword_1C0080840 + v50 + 64) = 0LL;
  }
  return (unsigned int)v15;
}
