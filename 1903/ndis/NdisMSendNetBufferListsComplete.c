/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C000BB30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EBA0 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CB7C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00A9F34 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  PNET_BUFFER_LIST v4; // rbx
  struct _NET_BUFFER_LIST *Context; // rdx
  unsigned __int64 CurrentIrql; // rax
  _QWORD *v8; // rsi
  void (*v9)(void); // r12
  void *v10; // r13
  struct _NET_BUFFER_LIST **v11; // rdi
  bool v12; // zf
  _QWORD *v13; // r15
  __int64 v14; // r14
  char v15; // al
  struct _NET_BUFFER_LIST *v16; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v18; // rdi
  _SLIST_HEADER *Alignment; // rax
  unsigned int ChildRefCount; // [rsp+30h] [rbp-59h]
  unsigned int v21; // [rsp+30h] [rbp-59h]
  unsigned int v22; // [rsp+40h] [rbp-49h]
  struct NDIS_PCW_CONTEXT v23; // [rsp+48h] [rbp-41h] BYREF
  _QWORD Parameter[5]; // [rsp+60h] [rbp-29h] BYREF
  int v25; // [rsp+88h] [rbp-1h]
  __int64 v26; // [rsp+8Ch] [rbp+3h]
  ULONG v27; // [rsp+94h] [rbp+Bh]
  _QWORD v28[9]; // [rsp+98h] [rbp+Fh] BYREF
  KIRQL v29; // [rsp+F0h] [rbp+67h]
  char v30; // [rsp+108h] [rbp+7Fh]

  v4 = NetBufferList;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)MiniportAdapterHandle);
  Context = 0LL;
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
  {
    Alignment = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        Context = (struct _NET_BUFFER_LIST *)(unsigned int)((_DWORD)Context + 1);
      }
      while ( Alignment );
    }
    ndisClearBusy(MiniportAdapterHandle, Context, 52LL);
    Context = 0LL;
  }
  CurrentIrql = *((unsigned int *)MiniportAdapterHandle + 12);
  v23.PcwBlock = 0LL;
  *(_QWORD *)&v23.DatapathEventsMask = 0LL;
  v23.CurrentCpu = -1;
  if ( (_DWORD)CurrentIrql || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    v23.DatapathEventsMask = CurrentIrql;
    v23.DatapathCyclesMask = *((_DWORD *)MiniportAdapterHandle + 20);
    CurrentIrql = *((_QWORD *)MiniportAdapterHandle + 5);
    v23.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)CurrentIrql;
    if ( !CurrentIrql )
    {
      CurrentIrql = *((_QWORD *)MiniportAdapterHandle + 5);
      v23.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)CurrentIrql;
    }
  }
  v29 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    ndisNblTrackerTransferOwnershipInternal(
      v4,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 323),
      NdisNblTrackerEvent_MiniportSendCompleted,
      (SendCompleteFlags & 1) != 0);
    Context = 0LL;
  }
  if ( byte_1C00E5E20 )
    CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v4, 0LL, *(_QWORD *)&SendCompleteFlags);
  if ( (v23.DatapathCyclesMask & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v29 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v23, 8u);
    Context = 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 324);
  v9 = (void (*)(void))*((_QWORD *)MiniportAdapterHandle + 327);
  v10 = (void *)*((_QWORD *)MiniportAdapterHandle + 322);
  if ( *(_BYTE *)v8 == 17 )
    goto LABEL_31;
  if ( !ndisIterativeDataPathDisabled
    && ((SendCompleteFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v11 = (struct _NET_BUFFER_LIST **)v28;
    v4->Scratch = Context;
    v4->ChildRefCount = SendCompleteFlags;
    v12 = *(_BYTE *)v8 == 5;
    v22 = CurrentIrql;
    v28[2] = Context;
    v28[0] = v4;
    v28[1] = v4;
    if ( v12 )
    {
      while ( *v11 )
      {
        v13 = v8;
        v14 = v8[53] + 96 * CurrentIrql;
        v15 = *(_BYTE *)(v14 + 40);
        *(_BYTE *)(v14 + 40) = 1;
        v16 = *v11;
        v30 = v15;
        *v11 = Context;
        if ( v16 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
            ChildRefCount = v16->ChildRefCount;
            v16->ChildRefCount = (int)Context;
            ndisCallSendCompleteHandler(v8, v9, v10, v16, (unsigned int)Context, (unsigned int)Context, ChildRefCount);
            v16 = Scratch;
            Context = 0LL;
          }
          while ( Scratch );
          v15 = v30;
        }
        *(_BYTE *)(v14 + 40) = 0;
        if ( v15 )
        {
          *(_BYTE *)(v14 + 40) = 1;
          v4 = *v11;
          goto LABEL_22;
        }
        v8 = (_QWORD *)v8[61];
        v11 = (struct _NET_BUFFER_LIST **)(v14 + 24);
        v9 = (void (*)(void))v13[58];
        v10 = (void *)v13[59];
        CurrentIrql = v22;
        if ( *(_BYTE *)v8 != 5 )
        {
          v4 = *(PNET_BUFFER_LIST *)(v14 + 24);
          goto LABEL_22;
        }
      }
    }
    else
    {
LABEL_22:
      if ( v4 )
      {
        *v11 = Context;
        do
        {
          v18 = (struct _NET_BUFFER_LIST *)v4->Scratch;
          v21 = v4->ChildRefCount;
          v4->ChildRefCount = (int)Context;
          ndisCallSendCompleteHandler(v8, v9, v10, v4, (unsigned int)Context, (unsigned int)Context, v21);
          v4 = v18;
          LODWORD(Context) = 0;
        }
        while ( v18 );
      }
    }
  }
  else
  {
    if ( *(_BYTE *)MiniportAdapterHandle != 5 )
    {
LABEL_31:
      (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))MiniportAdapterHandle + 327))(
        *((_QWORD *)MiniportAdapterHandle + 322),
        v4,
        SendCompleteFlags);
      goto LABEL_25;
    }
    Parameter[0] = Context;
    v25 = (int)Context;
    Parameter[1] = v8;
    Parameter[2] = v10;
    v26 = 1LL;
    Parameter[3] = v9;
    Parameter[4] = v4;
    v27 = SendCompleteFlags;
    if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, Context) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, v4, 1u);
  }
LABEL_25:
  if ( (v23.DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v23, 8u, 0x15uLL);
    if ( v29 != 2 )
      KeLowerIrql(v29);
  }
}
