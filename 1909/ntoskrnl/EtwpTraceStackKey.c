/*
 * XREFs of EtwpTraceStackKey @ 0x140334068
 * Callers:
 *     EtwpTraceStackWalk @ 0x14032CE44 (EtwpTraceStackWalk.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     KxTryToAcquireSpinLock @ 0x1402A7818 (KxTryToAcquireSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x140333DB8 (EtwpDereferenceStackEntry.c)
 */

char __fastcall EtwpTraceStackKey(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int **v6; // rbp
  char v7; // di
  unsigned int v8; // r12d
  unsigned __int64 v9; // r8
  _SLIST_ENTRY *v10; // r13
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // edx
  int v16; // ebx
  __int64 v17; // r14
  __int64 CurrentIrql; // r15
  PSLIST_ENTRY v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  PSLIST_ENTRY v22; // rbp
  unsigned int Next; // edx
  _SLIST_ENTRY *v24; // rdx
  PSLIST_ENTRY *v25; // rax
  PSLIST_ENTRY v26; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v28; // cl
  __int64 *v29; // rax
  unsigned int v30; // ebx
  _SLIST_HEADER *v31; // r14
  PSLIST_ENTRY v32; // r15
  PSLIST_ENTRY v33; // rbp
  unsigned int v34; // r12d
  struct _KPRCB *v35; // rcx
  _SLIST_ENTRY *v36; // rbx
  PSLIST_ENTRY *v37; // rax
  struct _KPRCB *v38; // rcx
  int v40; // [rsp+34h] [rbp-94h]
  unsigned int v41; // [rsp+38h] [rbp-90h]
  unsigned int **v42; // [rsp+40h] [rbp-88h]
  unsigned int ListHead; // [rsp+48h] [rbp-80h]
  _SLIST_HEADER *ListHeada; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *ListEntry; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *SpinLock; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY v47; // [rsp+60h] [rbp-68h] BYREF
  __int64 v48; // [rsp+68h] [rbp-60h]
  __int64 v49; // [rsp+70h] [rbp-58h]

  v6 = *(unsigned int ***)(a1 + 992);
  v7 = 0;
  v42 = v6;
  if ( !v6 )
    return v7;
  v8 = a6;
  ListEntry = 0LL;
  v9 = 4LL * a6;
  v10 = 0LL;
  v41 = 0;
  v11 = 0;
  v12 = 0;
  if ( v9 )
  {
    v13 = 0LL;
    do
    {
      v14 = v12 + 1;
      v12 += 2;
      v15 = *(unsigned __int16 *)(a5 + 2 * v13) ^ *(unsigned __int16 *)(a5 + 2 * v14);
      v13 = v12;
      v11 += v15;
    }
    while ( v12 < v9 );
    v8 = a6;
    v41 = v11;
  }
  v16 = 0;
  v17 = (__int64)&v6[3 * (v11 % *((_DWORD *)v6 + 2)) + 4];
  v48 = v17;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  if ( (unsigned __int8)CurrentIrql <= 1u )
  {
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else if ( (_BYTE)CurrentIrql != 2 )
  {
    SpinLock = (KSPIN_LOCK *)(v17 + 16);
    if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)(v17 + 16)) )
      return v7;
    v16 = 0;
    goto LABEL_10;
  }
  SpinLock = (KSPIN_LOCK *)(v17 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(v17 + 16));
LABEL_10:
  v19 = *(PSLIST_ENTRY *)v17;
  if ( *(_QWORD *)v17 != v17 )
  {
    v20 = v41;
    do
    {
      ++v16;
      if ( *((_DWORD *)&v19[1].Next + 3) == v20 && LODWORD(v19[2].Next) == v8 )
      {
        v21 = 0;
        v22 = v19;
        v40 = 0;
        while ( 1 )
        {
          Next = 32;
          if ( LODWORD(v22[2].Next) < 0x20 )
            Next = (unsigned int)v22[2].Next;
          ListHead = Next;
          if ( RtlCompareMemory(&v22[2].Next + 1, (const void *)(a5 + 8LL * v21), 8LL * Next) != 8LL * Next )
            break;
          v21 = ListHead + v40;
          v22 = v22[1].Next;
          v40 += ListHead;
          if ( !v22 )
          {
            _InterlockedIncrement((volatile signed __int32 *)&v19[1].Next + 2);
            v24 = v19->Next;
            v25 = (PSLIST_ENTRY *)*((_QWORD *)&v19->Next + 1);
            if ( *(&v19->Next->Next + 1) == v19 && *v25 == v19 )
            {
              *v25 = v24;
              *((_QWORD *)&v24->Next + 1) = v25;
              v26 = *(PSLIST_ENTRY *)v17;
              if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) == v17 )
              {
                v19->Next = v26;
                *((_QWORD *)&v19->Next + 1) = v17;
                *((_QWORD *)&v26->Next + 1) = v19;
                *(_QWORD *)v17 = v19;
                KxReleaseSpinLock((PKSPIN_LOCK)(v17 + 16));
                if ( KiIrqlFlags
                  && (KiIrqlFlags & 1) != 0
                  && KeGetCurrentIrql() >= 2u
                  && (unsigned __int8)CurrentIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8((unsigned __int8)CurrentIrql);
                goto LABEL_71;
              }
            }
LABEL_63:
            __fastfail(3u);
          }
        }
        v20 = v41;
      }
      v19 = v19->Next;
    }
    while ( v19 != (PSLIST_ENTRY)v17 );
    if ( v16 == 4 )
    {
      v10 = *(_SLIST_ENTRY **)(v17 + 8);
      ListEntry = v10;
      v29 = (__int64 *)*((_QWORD *)&v10->Next + 1);
      if ( v10->Next != (_SLIST_ENTRY *)v17 || (_SLIST_ENTRY *)*v29 != v10 )
        goto LABEL_63;
      *(_QWORD *)(v17 + 8) = v29;
      *v29 = v17;
    }
    v6 = v42;
  }
  v19 = 0LL;
  v30 = 0;
  if ( !v8 )
    goto LABEL_62;
  v31 = (_SLIST_HEADER *)(v6 + 2);
  ListHeada = (_SLIST_HEADER *)(v6 + 2);
  v32 = 0LL;
  do
  {
    v33 = RtlpInterlockedPopEntrySList(v31);
    if ( !v33 )
      break;
    if ( v30 + 32 >= v8 )
      v34 = v8 - v30;
    else
      v34 = 32;
    memmove(&v33[2].Next + 1, (const void *)(a5 + 8LL * v30), 8LL * v34);
    if ( v30 )
      LODWORD(v33[2].Next) = v34;
    else
      v19 = v33;
    if ( v32 )
      v32[1].Next = v33;
    v30 += v34;
    v33[1].Next = 0LL;
    v8 = a6;
    v32 = v33;
  }
  while ( v30 < a6 );
  v17 = v48;
  LOBYTE(CurrentIrql) = v49;
  v10 = ListEntry;
  if ( v30 < v8 )
  {
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v49 < 2u )
    {
      v35 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
    __writecr8((unsigned __int8)v49);
    if ( v19 )
    {
      do
      {
        v36 = v19[1].Next;
        RtlpInterlockedPushEntrySList(ListHeada, v19);
        v19 = v36;
      }
      while ( v36 );
    }
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry, v42);
  }
  else
  {
LABEL_62:
    *((_DWORD *)&v19[1].Next + 3) = v41;
    LODWORD(v19[2].Next) = v8;
    *((_DWORD *)&v19[1].Next + 2) = 2;
    v37 = *(PSLIST_ENTRY **)(v17 + 8);
    if ( *v37 != (PSLIST_ENTRY)v17 )
      goto LABEL_63;
    v19->Next = (_SLIST_ENTRY *)v17;
    *((_QWORD *)&v19->Next + 1) = v37;
    *v37 = v19;
    *(_QWORD *)(v17 + 8) = v19;
    KxReleaseSpinLock((PKSPIN_LOCK)(v17 + 16));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v38);
    }
    __writecr8((unsigned __int8)CurrentIrql);
    if ( v10 )
      EtwpDereferenceStackEntry(v10, v42);
LABEL_71:
    v47 = v19;
    *(_QWORD *)(a4 + 16) = &v47;
    *(_QWORD *)(a4 + 24) = 8LL;
    EtwpLogKernelEvent(a4, *(_QWORD *)(a1 + 1080), *(_DWORD *)a1, 2u, a3, a2);
    EtwpDereferenceStackEntry(v47, *(unsigned int ***)(a1 + 992));
    return 1;
  }
  return v7;
}
