/*
 * XREFs of ndisReturnNblWithPowerQueue @ 0x1C0011390
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C00B98E0 (ndisSetBusyAsync.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r13
  unsigned int v4; // r15d
  KIRQL v8; // bp
  KSPIN_LOCK *v9; // rcx
  char v10; // r14
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  _SLIST_HEADER *Alignment; // rax
  _SLIST_HEADER *v15; // rax
  _SLIST_HEADER *v16; // rcx

  v3 = 0;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 4448) )
    goto LABEL_2;
  Alignment = (_SLIST_HEADER *)a2;
  if ( a2 )
  {
    do
    {
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      ++v4;
    }
    while ( Alignment );
  }
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v4, 54, (_DWORD)a2, 0) )
  {
    v3 = 1;
LABEL_2:
    if ( *(int *)(a1 + 1872) < 0 && LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
      v8 = 0;
      v9 = (KSPIN_LOCK *)(a1 + 3872);
      if ( (a3 & 1) != 0 )
      {
        v10 = 1;
        KeAcquireSpinLockAtDpcLevel(v9);
      }
      else
      {
        v10 = 0;
        v8 = KeAcquireSpinLockRaiseToDpc(v9);
      }
      if ( (unsigned int)(*(_DWORD *)(a1 + 3880) - 2) > 2 || *(_BYTE *)(a1 + 3900) )
      {
        ++*(_DWORD *)(a1 + 3896);
        v11 = (KSPIN_LOCK *)(a1 + 3872);
        if ( v10 )
          KeReleaseSpinLockFromDpcLevel(v11);
        else
          KeReleaseSpinLock(v11, v8);
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(
          *(_QWORD *)(a1 + 24),
          a2,
          a3);
        v12 = (KSPIN_LOCK *)(a1 + 3872);
        if ( v10 )
          KeAcquireSpinLockAtDpcLevel(v12);
        else
          v8 = KeAcquireSpinLockRaiseToDpc(v12);
        --*(_DWORD *)(a1 + 3896);
      }
      else
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 3904), 1u, 1u);
        v15 = (_SLIST_HEADER *)a2->Link.Alignment;
        v16 = (_SLIST_HEADER *)a2;
        while ( v15 )
        {
          v16 = v15;
          v15 = (_SLIST_HEADER *)v15->Alignment;
        }
        v16->Alignment = *(_QWORD *)(a1 + 3888);
        *(_QWORD *)(a1 + 3888) = a2;
      }
      v13 = (KSPIN_LOCK *)(a1 + 3872);
      if ( v10 )
        KeReleaseSpinLockFromDpcLevel(v13);
      else
        KeReleaseSpinLock(v13, v8);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(
        *(_QWORD *)(a1 + 24),
        a2,
        a3);
    }
    if ( v3 )
      ndisClearBusy(a1, v4, 54LL);
  }
}
