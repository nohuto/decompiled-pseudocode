/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C0026AE4
 * Callers:
 *     ACPIDevicePowerProcessPhase4 @ 0x1C000C388 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerDpc @ 0x1C0016760 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0027E90 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C00509E0 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C000F36C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00212F0 (ACPIDereferenceWaitWakePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004C548 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ACPIDeviceCompleteRequest(struct _SLIST_ENTRY *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  _SLIST_ENTRY *Next; // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  struct _SLIST_ENTRY *v8; // rsi
  _SLIST_ENTRY *v9; // rax
  _SLIST_ENTRY *v10; // rdx
  _SLIST_ENTRY *v11; // rcx
  _SLIST_ENTRY **v12; // r8
  _SLIST_ENTRY *v13; // r8
  _SLIST_ENTRY **v14; // rcx
  struct _SLIST_ENTRY *v15; // rsi
  _SLIST_ENTRY *v16; // rdx
  _SLIST_ENTRY *v17; // rax
  _SLIST_ENTRY **v18; // rcx
  _SLIST_ENTRY *v19; // rax
  _SLIST_ENTRY *v20; // r8
  _SLIST_ENTRY **v21; // rcx
  int v22; // eax
  KIRQL v23; // si
  _SLIST_ENTRY *v24; // rcx
  struct _SLIST_ENTRY **v25; // rax
  struct _SLIST_ENTRY **v26; // rax
  int v27; // ecx
  KIRQL v28; // al
  _SLIST_ENTRY *v29; // rdx
  KIRQL v30; // r8
  PVOID *v31; // rcx
  struct _SLIST_ENTRY **p_Next; // rdx
  PVOID *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx

  v1 = *((_QWORD *)&Entry[2].Next + 1);
  v2 = (const char *)&unk_1C006FE7D;
  Next = Entry[12].Next;
  v4 = 0;
  v6 = (const char *)&unk_1C006FE7D;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x12u,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      (char)Entry,
      (char)Entry[16].Next,
      v4,
      v2,
      v6);
  if ( ((__int64)Entry[3].Next & 0xFFFFFFFD) == 0 )
  {
    v8 = Entry + 4;
    while ( 1 )
    {
      v9 = v8->Next;
      if ( v8->Next == v8 )
        break;
      v10 = v9 - 1;
      v11 = v9[-1].Next;
      if ( *(&v11->Next + 1) != &v9[-1] )
        goto LABEL_49;
      v12 = (_SLIST_ENTRY **)*((_QWORD *)&v10->Next + 1);
      if ( *v12 != v10 )
        goto LABEL_49;
      *v12 = v11;
      *((_QWORD *)&v11->Next + 1) = v12;
      *((_QWORD *)&v10->Next + 1) = v10;
      v10->Next = v10;
      v13 = v9->Next;
      if ( *(&v9->Next->Next + 1) != v9 )
        goto LABEL_49;
      v14 = (_SLIST_ENTRY **)*((_QWORD *)&v9->Next + 1);
      if ( *v14 != v9 )
        goto LABEL_49;
      *v14 = v13;
      *((_QWORD *)&v13->Next + 1) = v14;
      *((_QWORD *)&v9->Next + 1) = v9;
      v9->Next = v9;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v10);
    }
    v15 = Entry + 5;
    while ( 1 )
    {
      v16 = v15->Next;
      if ( v15->Next == v15 )
        break;
      v17 = v16->Next;
      if ( *(&v16->Next->Next + 1) != v16 )
        goto LABEL_49;
      v18 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
      if ( *v18 != v16 )
        goto LABEL_49;
      *v18 = v17;
      *((_QWORD *)&v17->Next + 1) = v18;
      v19 = v16 + 1;
      *((_QWORD *)&v16->Next + 1) = v16;
      v16->Next = v16;
      v20 = v16[1].Next;
      if ( *(&v20->Next + 1) != &v16[1] )
        goto LABEL_49;
      v21 = (_SLIST_ENTRY **)*((_QWORD *)&v16[1].Next + 1);
      if ( *v21 != v19 )
        goto LABEL_49;
      *v21 = v20;
      *((_QWORD *)&v20->Next + 1) = v21;
      *((_QWORD *)&v16[1].Next + 1) = v16 + 1;
      v19->Next = v19;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v16);
    }
    v22 = *(_DWORD *)(v1 + 336);
    if ( v22 )
    {
      if ( !BYTE4(Entry[3].Next) && SLODWORD(Entry[16].Next) < 0 )
      {
        v23 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        *((_QWORD *)&Entry[6].Next + 1) = *(unsigned int *)(v1 + 336);
        BYTE4(Entry[3].Next) = 1;
        v24 = Entry->Next;
        if ( *(&Entry->Next->Next + 1) == Entry )
        {
          v25 = (struct _SLIST_ENTRY **)*((_QWORD *)&Entry->Next + 1);
          if ( *v25 == Entry )
          {
            *v25 = v24;
            *((_QWORD *)&v24->Next + 1) = v25;
            v26 = (struct _SLIST_ENTRY **)qword_1C00820E8;
            if ( *(__int64 **)qword_1C00820E8 == &AcpiPowerQueueList )
            {
              Entry->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
              *((_QWORD *)&Entry->Next + 1) = v26;
              *v26 = Entry;
              qword_1C00820E8 = (__int64)Entry;
              ACPIPowerScheduleDpc();
              KeReleaseSpinLock(&AcpiPowerQueueLock, v23);
              return;
            }
          }
        }
LABEL_49:
        __fastfail(3u);
      }
      if ( v22 < *((_DWORD *)&Entry[6].Next + 2) )
        LODWORD(Entry[16].Next) = 0;
    }
    v27 = *((_DWORD *)&Entry[3].Next + 2);
    if ( (v27 & 0x2000000) != 0 )
    {
      *((_DWORD *)&Entry[3].Next + 2) = v27 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( Next )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))Next)(v1, *((_QWORD *)&Entry[12].Next + 1), LODWORD(Entry[16].Next));
  v28 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v29 = Entry->Next;
  v30 = v28;
  if ( *(&Entry->Next->Next + 1) != Entry )
    goto LABEL_49;
  v31 = (PVOID *)*((_QWORD *)&Entry->Next + 1);
  if ( *v31 != Entry )
    goto LABEL_49;
  *v31 = v29;
  *((_QWORD *)&v29->Next + 1) = v31;
  p_Next = &Entry[1].Next->Next;
  if ( p_Next[1] != &Entry[1] )
    goto LABEL_49;
  v33 = (PVOID *)*((_QWORD *)&Entry[1].Next + 1);
  if ( *v33 != &Entry[1] )
    goto LABEL_49;
  *v33 = p_Next;
  p_Next[1] = (struct _SLIST_ENTRY *)v33;
  if ( LODWORD(Entry[3].Next) != 4 )
  {
    v34 = *(_QWORD *)(v1 + 536);
    if ( v34 == v1 + 536 )
    {
      *(_QWORD *)(v1 + 528) = 0LL;
    }
    else
    {
      v35 = (_QWORD *)(v34 - 16);
      v36 = (_QWORD *)qword_1C00820E8;
      if ( *(__int64 **)qword_1C00820E8 != &AcpiPowerQueueList )
        goto LABEL_49;
      *v35 = &AcpiPowerQueueList;
      v35[1] = v36;
      *v36 = v35;
      qword_1C00820E8 = (__int64)v35;
      *(_QWORD *)(v1 + 528) = v35;
    }
  }
  KeReleaseSpinLock(&AcpiPowerQueueLock, v30);
  if ( LODWORD(Entry[3].Next) == 2 )
  {
    ACPIDereferenceWaitWakePowerRequest((char *)Entry);
  }
  else
  {
    ++dword_1C0082DDC;
    if ( ExQueryDepthSList(&RequestLookAsideList) < (unsigned __int16)word_1C0082DD0 )
    {
      ExpInterlockedPushEntrySList(&RequestLookAsideList, Entry);
    }
    else
    {
      ++dword_1C0082DE0;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))qword_1C0082DF8)(Entry);
    }
  }
}
