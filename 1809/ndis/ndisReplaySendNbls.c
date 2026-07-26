/*
 * XREFs of ndisReplaySendNbls @ 0x1C0075280
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072D4C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0075A74 (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisReplaySendNbls(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  _SLIST_HEADER *v5; // r12
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned int Scratch; // r14d
  unsigned __int64 v10; // rax

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  Alignment = a2;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 4112), 0x92u, 0);
  while ( Alignment )
  {
    Scratch = (unsigned int)Alignment->Scratch;
    if ( v4 && Scratch != v3 )
    {
      v5->Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
      v4 = 0LL;
    }
    v10 = (unsigned __int64)Alignment;
    v5 = (_SLIST_HEADER *)Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    if ( v4 )
    {
      v10 = v4;
      Scratch = v3;
    }
    v3 = Scratch;
    v4 = v10;
  }
  ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
}
