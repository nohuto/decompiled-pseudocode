/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C001E634
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0028B9C (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C002AFA8 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C004F150 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0024ED0 (ACPIDereferenceWaitWakePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004ADD8 (ExFreeToNPagedLookasideList.c)
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
  struct _SLIST_ENTRY *v10; // rsi
  _SLIST_ENTRY *v11; // rdx
  int v12; // eax
  int v13; // ecx
  KIRQL v14; // al
  _SLIST_ENTRY *v15; // rdx
  KIRQL v16; // r8
  PVOID *v17; // rcx
  struct _SLIST_ENTRY **p_Next; // rdx
  PVOID *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _SLIST_ENTRY *v23; // rdx
  _SLIST_ENTRY *v24; // rcx
  _SLIST_ENTRY **v25; // r8
  _SLIST_ENTRY *v26; // r8
  _SLIST_ENTRY **v27; // rcx
  _SLIST_ENTRY *v28; // rax
  _SLIST_ENTRY **v29; // rcx
  _SLIST_ENTRY *v30; // rax
  _SLIST_ENTRY *v31; // r8
  _SLIST_ENTRY **v32; // rcx
  KIRQL v33; // si
  _SLIST_ENTRY *v34; // rcx
  struct _SLIST_ENTRY **v35; // rax
  struct _SLIST_ENTRY **v36; // rax

  v1 = *((_QWORD *)&Entry[2].Next + 1);
  v2 = (const char *)&unk_1C006E28A;
  Next = Entry[12].Next;
  v4 = 0;
  v6 = (const char *)&unk_1C006E28A;
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
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x12u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    (char)Entry,
    (char)Entry[16].Next,
    v4,
    v2,
    v6);
  if ( !LODWORD(Entry[3].Next) )
  {
    v8 = Entry + 4;
    while ( 1 )
    {
      v9 = v8->Next;
      if ( v8->Next == v8 )
        break;
      v23 = v9 - 1;
      v24 = v9[-1].Next;
      if ( *(&v24->Next + 1) != &v9[-1] )
        goto LABEL_47;
      v25 = (_SLIST_ENTRY **)*((_QWORD *)&v23->Next + 1);
      if ( *v25 != v23 )
        goto LABEL_47;
      *v25 = v24;
      *((_QWORD *)&v24->Next + 1) = v25;
      *((_QWORD *)&v23->Next + 1) = v23;
      v23->Next = v23;
      v26 = v9->Next;
      if ( *(&v9->Next->Next + 1) != v9 )
        goto LABEL_47;
      v27 = (_SLIST_ENTRY **)*((_QWORD *)&v9->Next + 1);
      if ( *v27 != v9 )
        goto LABEL_47;
      *v27 = v26;
      *((_QWORD *)&v26->Next + 1) = v27;
      *((_QWORD *)&v9->Next + 1) = v9;
      v9->Next = v9;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v23);
    }
    v10 = Entry + 5;
    while ( 1 )
    {
      v11 = v10->Next;
      if ( v10->Next == v10 )
        break;
      v28 = v11->Next;
      if ( *(&v11->Next->Next + 1) != v11 )
        goto LABEL_47;
      v29 = (_SLIST_ENTRY **)*((_QWORD *)&v11->Next + 1);
      if ( *v29 != v11 )
        goto LABEL_47;
      *v29 = v28;
      *((_QWORD *)&v28->Next + 1) = v29;
      v30 = v11 + 1;
      *((_QWORD *)&v11->Next + 1) = v11;
      v11->Next = v11;
      v31 = v11[1].Next;
      if ( *(&v31->Next + 1) != &v11[1] )
        goto LABEL_47;
      v32 = (_SLIST_ENTRY **)*((_QWORD *)&v11[1].Next + 1);
      if ( *v32 != v30 )
        goto LABEL_47;
      *v32 = v31;
      *((_QWORD *)&v31->Next + 1) = v32;
      *((_QWORD *)&v11[1].Next + 1) = v11 + 1;
      v30->Next = v30;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v11);
    }
    v12 = *(_DWORD *)(v1 + 336);
    if ( v12 )
    {
      if ( !BYTE4(Entry[3].Next) && SLODWORD(Entry[16].Next) < 0 )
      {
        v33 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        *((_QWORD *)&Entry[6].Next + 1) = *(unsigned int *)(v1 + 336);
        BYTE4(Entry[3].Next) = 1;
        v34 = Entry->Next;
        if ( *(&Entry->Next->Next + 1) == Entry )
        {
          v35 = (struct _SLIST_ENTRY **)*((_QWORD *)&Entry->Next + 1);
          if ( *v35 == Entry )
          {
            *v35 = v34;
            *((_QWORD *)&v34->Next + 1) = v35;
            v36 = (struct _SLIST_ENTRY **)qword_1C00800E8;
            if ( *(__int64 **)qword_1C00800E8 == &AcpiPowerQueueList )
            {
              Entry->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
              *((_QWORD *)&Entry->Next + 1) = v36;
              *v36 = Entry;
              qword_1C00800E8 = (__int64)Entry;
              ACPIPowerScheduleDpc();
              KeReleaseSpinLock(&AcpiPowerQueueLock, v33);
              return;
            }
          }
        }
        goto LABEL_47;
      }
      if ( v12 < *((_DWORD *)&Entry[6].Next + 2) )
        LODWORD(Entry[16].Next) = 0;
    }
    v13 = *((_DWORD *)&Entry[3].Next + 2);
    if ( (v13 & 0x2000000) != 0 )
    {
      *((_DWORD *)&Entry[3].Next + 2) = v13 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( Next )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))Next)(v1, *((_QWORD *)&Entry[12].Next + 1), LODWORD(Entry[16].Next));
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v15 = Entry->Next;
  v16 = v14;
  if ( *(&Entry->Next->Next + 1) != Entry )
    goto LABEL_47;
  v17 = (PVOID *)*((_QWORD *)&Entry->Next + 1);
  if ( *v17 != Entry )
    goto LABEL_47;
  *v17 = v15;
  *((_QWORD *)&v15->Next + 1) = v17;
  p_Next = &Entry[1].Next->Next;
  if ( p_Next[1] != &Entry[1] )
    goto LABEL_47;
  v19 = (PVOID *)*((_QWORD *)&Entry[1].Next + 1);
  if ( *v19 != &Entry[1] )
    goto LABEL_47;
  *v19 = p_Next;
  p_Next[1] = (struct _SLIST_ENTRY *)v19;
  if ( LODWORD(Entry[3].Next) == 4 )
    goto LABEL_24;
  v20 = *(_QWORD *)(v1 + 536);
  if ( v20 == v1 + 536 )
  {
    *(_QWORD *)(v1 + 528) = 0LL;
    goto LABEL_24;
  }
  v21 = (_QWORD *)(v20 - 16);
  v22 = (_QWORD *)qword_1C00800E8;
  if ( *(__int64 **)qword_1C00800E8 != &AcpiPowerQueueList )
LABEL_47:
    __fastfail(3u);
  *v21 = &AcpiPowerQueueList;
  v21[1] = v22;
  *v22 = v21;
  qword_1C00800E8 = (__int64)v21;
  *(_QWORD *)(v1 + 528) = v21;
LABEL_24:
  KeReleaseSpinLock(&AcpiPowerQueueLock, v16);
  if ( LODWORD(Entry[3].Next) == 2 )
  {
    ACPIDereferenceWaitWakePowerRequest(Entry);
  }
  else
  {
    ++dword_1C0080DDC;
    if ( ExQueryDepthSList(&RequestLookAsideList) >= (unsigned __int16)word_1C0080DD0 )
    {
      ++dword_1C0080DE0;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))qword_1C0080DF8)(Entry);
    }
    else
    {
      ExpInterlockedPushEntrySList(&RequestLookAsideList, Entry);
    }
  }
}
