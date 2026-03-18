/*
 * XREFs of InsertReadyQueue @ 0x1C0004A80
 * Callers:
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     ParseRelease @ 0x1C0013B40 (ParseRelease.c)
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 *     DequeueAndReadyContext @ 0x1C0028B8C (DequeueAndReadyContext.c)
 *     RestartCtxtPassive @ 0x1C0029470 (RestartCtxtPassive.c)
 * Callees:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 *     LogSchedEvent @ 0x1C002880C (LogSchedEvent.c)
 *     LogEvent @ 0x1C0028868 (LogEvent.c)
 *     OSQueueWorkItem @ 0x1C002A790 (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall InsertReadyQueue(PSLIST_ENTRY ListEntry, char a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r15
  unsigned __int32 v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int Next; // eax
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r8
  struct _KTHREAD *v20; // r11
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rsi
  unsigned __int32 v24; // edi
  unsigned int v25; // edi
  __int64 v26; // rdx
  signed int v27; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  struct _KTHREAD *v31; // r11
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rsi
  unsigned __int32 v35; // edi
  unsigned int v36; // edi
  __int64 v37; // rdx
  int v38; // eax
  PSLIST_ENTRY v39; // rax
  PSLIST_ENTRY *v40; // rdx
  _QWORD *v41; // r8
  __int64 (__fastcall *v42)(); // rax
  __int64 v43; // r9
  __int64 v44; // r8
  struct _KTHREAD *v45; // r11
  __int64 v46; // r10
  __int64 v47; // rbp
  unsigned __int32 v48; // edi
  unsigned int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r9

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v8 = *((_QWORD *)&ListEntry[7].Next + 1);
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v11 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
    if ( (_DWORD)qword_1C0082828 == 204 )
      v12 = v11 % 0xCC;
    else
      v12 = v11 % (unsigned int)qword_1C0082828;
    v13 = 72LL * v12;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0082830 + v13) = 1229869905;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 24) = v9;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 40) = v10;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 56) = v6;
    *(_QWORD *)((char *)qword_1C0082830 + v13 + 64) = v8;
  }
  Next = (int)ListEntry[4].Next;
  if ( (Next & 1) != 0 )
  {
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)&ListEntry[12]) )
      LODWORD(ListEntry[4].Next) |= 2u;
  }
  v15 = (int)ListEntry[4].Next;
  v16 = v15 | 8;
  LODWORD(ListEntry[4].Next) = v15 | 8;
  if ( (v15 & 2) == 0 )
  {
    v17 = v15 & 0x80;
    if ( (v16 & 0x10) == 0 || v17 )
    {
      if ( !a2 )
      {
        if ( (gdwfAMLI & 4) != 0 )
        {
          if ( (gReadyQueue & 8) == 0 )
            return (unsigned int)RunContext(ListEntry);
          v53 = *((_QWORD *)&ListEntry[6].Next + 1);
          if ( v53 )
            v54 = *(_QWORD *)(v53 + 32);
          else
            v54 = *((_QWORD *)&ListEntry[4].Next + 1);
          LogSchedEvent(1363367000, (_DWORD)ListEntry, (_DWORD)ListEntry, v54, *((_QWORD *)&ListEntry[7].Next + 1));
          v38 = (int)ListEntry[4].Next;
          if ( (v38 & 0x40) != 0 )
            goto LABEL_37;
          LODWORD(ListEntry[4].Next) = v38 | 0x40;
          v39 = ListEntry + 2;
          v40 = (PSLIST_ENTRY *)qword_1C00826F0;
          if ( *(__int64 **)qword_1C00826F0 == &qword_1C00826E8 )
            goto LABEL_36;
        }
        else
        {
          if ( v17 && *((struct _KTHREAD **)&ListEntry[25].Next + 1) == KeGetCurrentThread() )
          {
            v51 = *((_QWORD *)&ListEntry[6].Next + 1);
            if ( v51 )
              v52 = *(_QWORD *)(v51 + 32);
            else
              v52 = *((_QWORD *)&ListEntry[4].Next + 1);
            LogSchedEvent(1313166164, (_DWORD)ListEntry, (_DWORD)ListEntry, v52, *((_QWORD *)&ListEntry[7].Next + 1));
            return (unsigned int)RunContext(ListEntry);
          }
          if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
          {
            v18 = *((_QWORD *)&ListEntry[6].Next + 1);
            if ( v18 )
              v19 = *(_QWORD *)(v18 + 32);
            else
              v19 = *((_QWORD *)&ListEntry[4].Next + 1);
            v20 = KeGetCurrentThread();
            v21 = *((_QWORD *)&ListEntry[7].Next + 1);
            v22 = *((_QWORD *)&ListEntry[25].Next + 1);
            v23 = (unsigned int)gReadyQueue;
            if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
            {
              v24 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
              if ( (_DWORD)qword_1C0082828 == 204 )
                v25 = v24 % 0xCC;
              else
                v25 = v24 % (unsigned int)qword_1C0082828;
              v26 = 72LL * v25;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 8) = MEMORY[0xFFFFF78000000008];
              *(_DWORD *)((char *)qword_1C0082830 + v26) = 1163280716;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 16) = v20;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 24) = v22;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 32) = ListEntry;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 40) = v23;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 48) = ListEntry;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 56) = v19;
              *(_QWORD *)((char *)qword_1C0082830 + v26 + 64) = v21;
            }
            v27 = RunContext(ListEntry);
            v2 = v27;
            if ( (__int64 *)qword_1C00826E8 != &qword_1C00826E8 && (gReadyQueue & 2) == 0 )
            {
              LogEvent(1263092555, (unsigned int)KeGetCurrentThread(), 0, 0, (unsigned int)gReadyQueue, v27, 0LL, 0LL);
              gReadyQueue |= 2u;
              OSQueueWorkItem(&qword_1C0082708);
            }
            return v2;
          }
          v29 = *((_QWORD *)&ListEntry[6].Next + 1);
          if ( v29 )
            v30 = *(_QWORD *)(v29 + 32);
          else
            v30 = *((_QWORD *)&ListEntry[4].Next + 1);
          v31 = KeGetCurrentThread();
          v32 = *((_QWORD *)&ListEntry[7].Next + 1);
          v33 = *((_QWORD *)&ListEntry[25].Next + 1);
          v34 = (unsigned int)gReadyQueue;
          if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
          {
            v35 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
            if ( (_DWORD)qword_1C0082828 == 204 )
              v36 = v35 % 0xCC;
            else
              v36 = v35 % (unsigned int)qword_1C0082828;
            v37 = 72LL * v36;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 8) = MEMORY[0xFFFFF78000000008];
            *(_DWORD *)((char *)qword_1C0082830 + v37) = 1363367000;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 16) = v31;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 24) = v33;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 32) = ListEntry;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 40) = v34;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 48) = ListEntry;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 56) = v30;
            *(_QWORD *)((char *)qword_1C0082830 + v37 + 64) = v32;
          }
          v38 = (int)ListEntry[4].Next;
          if ( (v38 & 0x40) != 0 )
          {
LABEL_37:
            v2 = 32772;
            LODWORD(ListEntry[4].Next) = v38 | 0x20;
            return v2;
          }
          LODWORD(ListEntry[4].Next) = v38 | 0x40;
          v39 = ListEntry + 2;
          v40 = (PSLIST_ENTRY *)qword_1C00826F0;
          if ( *(__int64 **)qword_1C00826F0 == &qword_1C00826E8 )
          {
LABEL_36:
            v39->Next = (_SLIST_ENTRY *)&qword_1C00826E8;
            *((_QWORD *)&v39->Next + 1) = v40;
            *v40 = v39;
            qword_1C00826F0 = (__int64)v39;
            v38 = (int)ListEntry[4].Next;
            goto LABEL_37;
          }
        }
        __fastfail(3u);
      }
      KeReleaseSpinLock(&SpinLock, byte_1C0082700);
      v41 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
      if ( v41 )
      {
        v42 = (__int64 (__fastcall *)())v41[11];
        v43 = v41[4];
        v44 = v41[13];
      }
      else
      {
        v42 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
        v43 = *((_QWORD *)&ListEntry[4].Next + 1);
        v44 = *((_QWORD *)&ListEntry[11].Next + 1);
      }
      if ( v42 == EvalMethodComplete )
      {
        v45 = KeGetCurrentThread();
        v46 = *((_QWORD *)&ListEntry[25].Next + 1);
        v47 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
        {
          v48 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
          if ( (_DWORD)qword_1C0082828 == 204 )
            v49 = v48 % 0xCC;
          else
            v49 = v48 % (unsigned int)qword_1C0082828;
          v50 = 72LL * v49;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)qword_1C0082830 + v50) = 1146048069;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 16) = v45;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 24) = v46;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 32) = ListEntry;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 40) = v47;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 48) = v43;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 56) = 32771LL;
          *(_QWORD *)((char *)qword_1C0082830 + v50 + 64) = v44;
        }
        *(_DWORD *)v44 = 32771;
        *(_QWORD *)(v44 + 8) = ListEntry;
        KeSetEvent((PRKEVENT)(v44 + 16), 0, 0);
      }
      else
      {
        RestartContext(ListEntry);
      }
      byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    }
  }
  return v2;
}
