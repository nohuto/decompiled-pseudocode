/*
 * XREFs of ndisInvokeNextReceiveHandler @ 0x1C00210F0
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0010A50 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0089164 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AECA0 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010E80 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CD4C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C98AC (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisInvokeNextReceiveHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        void *a6,
        void (*a7)(void))
{
  unsigned __int64 CurrentIrql; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rdi
  struct _NET_BUFFER_LIST *v9; // rbx
  int v10; // esi
  struct _NET_BUFFER_LIST **v11; // rsi
  void (__fastcall *NextIndicateReceiveNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r15
  void *NextIndicateReceiveNetBufferListsContext; // r12
  unsigned __int64 v14; // rcx
  struct _NDIS_FILTER_BLOCK *v15; // r14
  __int64 v16; // rbx
  char v17; // al
  struct _NET_BUFFER_LIST *v18; // r9
  struct _NET_BUFFER_LIST *Scratch; // r13
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v22; // eax
  struct _NET_BUFFER_LIST *v23; // rsi
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // eax
  int v27; // r8d
  struct _NET_BUFFER_LIST *i; // rax
  _SLIST_HEADER *Alignment; // rcx
  unsigned int v30; // eax
  unsigned int v31; // [rsp+48h] [rbp-41h]
  _QWORD v32[3]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD Parameter[5]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+7h]
  int v35; // [rsp+94h] [rbp+Bh]
  unsigned int v36; // [rsp+98h] [rbp+Fh]
  int v37; // [rsp+9Ch] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  char v39; // [rsp+F8h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v8 = a5;
  v9 = a1;
  if ( a5->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))a7)(a6, a1, a2, a3, a4);
  }
  else
  {
    v10 = a4 & 2;
    if ( (a4 & 2) != 0
      || ndisIterativeDataPathDisabled
      || (a4 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2) )
    {
      Parameter[2] = a6;
      v36 = a3;
      v34 = a2;
      v37 = a4;
      Parameter[3] = a7;
      Parameter[0] = 0LL;
      Parameter[1] = a5;
      v35 = 2;
      Parameter[4] = a1;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
             Parameter,
             0x4CCCuLL,
             0,
             0LL) < 0 )
      {
        if ( byte_1C00E5E20 && (*((_DWORD *)&a5->PktMonComp + 3) & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)a5 + 792, (_DWORD)v9, v27, 1, -1073741670, -536866813);
        for ( i = v9; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
          i->Status = -1073741670;
        Alignment = (_SLIST_HEADER *)v9;
        v30 = 0;
        if ( v9 )
        {
          do
          {
            Alignment = (_SLIST_HEADER *)Alignment->Alignment;
            ++v30;
          }
          while ( Alignment );
        }
        _InterlockedExchangeAdd(&a5->DroppedReceiveNbls, v30);
        if ( !v10 )
          ndisQueueStackExpansionFallbackNbls(a5, v9, 0);
      }
    }
    else
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v11 = (struct _NET_BUFFER_LIST **)v32;
      NextIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a7;
      NextIndicateReceiveNetBufferListsContext = a6;
      a1->Scratch = 0LL;
      a1->ChildRefCount = a4;
      a1->Status = a2;
      v14 = a1->Link.Alignment;
      v31 = CurrentIrql;
      v32[2] = 0LL;
      v32[0] = v9;
      v32[1] = v9;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 112) = a3;
        CurrentIrql = (unsigned int)CurrentIrql;
      }
      if ( a5->Header.Type == 5 )
      {
        while ( *v11 )
        {
          v15 = v8;
          v16 = (__int64)v8->IterativeDataPathTracker[CurrentIrql];
          v17 = *(_BYTE *)(v16 + 64);
          *(_BYTE *)(v16 + 64) = 1;
          v18 = *v11;
          v39 = v17;
          *v11 = 0LL;
          if ( v18 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v18->Scratch;
              ChildRefCount = v18->ChildRefCount;
              NdisReserved2 = v18->NdisReserved2;
              if ( v18->Link.Alignment )
                v22 = *(_DWORD *)(v18->Link.Alignment + 112);
              else
                v22 = 1;
              v18->ChildRefCount = 0;
              ndisCallReceiveHandler(
                v8,
                NextIndicateReceiveNetBufferListsHandler,
                NextIndicateReceiveNetBufferListsContext,
                v18,
                NdisReserved2,
                v22,
                ChildRefCount);
              v18 = Scratch;
            }
            while ( Scratch );
            v17 = v39;
          }
          *(_BYTE *)(v16 + 64) = 0;
          if ( v17 )
          {
            *(_BYTE *)(v16 + 64) = 1;
            v9 = *v11;
            goto LABEL_22;
          }
          v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextIndicateReceiveNetBufferListsObject;
          v11 = (struct _NET_BUFFER_LIST **)(v16 + 48);
          NextIndicateReceiveNetBufferListsHandler = v15->NextIndicateReceiveNetBufferListsHandler;
          NextIndicateReceiveNetBufferListsContext = v15->NextIndicateReceiveNetBufferListsContext;
          CurrentIrql = v31;
          if ( v8->Header.Type != 5 )
          {
            v9 = *(struct _NET_BUFFER_LIST **)(v16 + 48);
            goto LABEL_22;
          }
        }
      }
      else
      {
LABEL_22:
        if ( v9 )
        {
          *v11 = 0LL;
          do
          {
            v23 = (struct _NET_BUFFER_LIST *)v9->Scratch;
            v24 = v9->ChildRefCount;
            v25 = v9->NdisReserved2;
            if ( v9->Link.Alignment )
              v26 = *(_DWORD *)(v9->Link.Alignment + 112);
            else
              v26 = 1;
            v9->ChildRefCount = 0;
            ndisCallReceiveHandler(
              v8,
              NextIndicateReceiveNetBufferListsHandler,
              NextIndicateReceiveNetBufferListsContext,
              v9,
              v25,
              v26,
              v24);
            v9 = v23;
          }
          while ( v23 );
        }
      }
    }
  }
}
