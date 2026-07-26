/*
 * XREFs of ndisInvokeNextReceiveHandler @ 0x1C000FE40
 * Callers:
 *     ndisDoLoopbackNetBufferList @ 0x1C0055D90 (ndisDoLoopbackNetBufferList.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008070 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
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
  char Parameter[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _NDIS_FILTER_BLOCK *v34; // [rsp+70h] [rbp-19h]
  void *v35; // [rsp+78h] [rbp-11h]
  void (*v36)(void); // [rsp+80h] [rbp-9h]
  struct _NET_BUFFER_LIST *v37; // [rsp+88h] [rbp-1h]
  unsigned int v38; // [rsp+90h] [rbp+7h]
  int v39; // [rsp+94h] [rbp+Bh]
  unsigned int v40; // [rsp+98h] [rbp+Fh]
  int v41; // [rsp+9Ch] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  char v43; // [rsp+F8h] [rbp+6Fh]

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
      v35 = a6;
      v40 = a3;
      v38 = a2;
      v41 = a4;
      v36 = a7;
      v34 = a5;
      v39 = 2;
      v37 = a1;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
             Parameter,
             0x4CCCuLL,
             0,
             0LL) < 0 )
      {
        if ( byte_1C009FE30 && (*((_DWORD *)&a5->PktMonComp + 13) & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)a5 + 800, (_DWORD)v9, v27, 1, -1073741670, -536866813);
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
      v32[2] = 0LL;
      v14 = a1->Link.Alignment;
      v31 = CurrentIrql;
      v32[0] = v9;
      v32[1] = v9;
      v9->Scratch = 0LL;
      v9->ChildRefCount = a4;
      v9->Status = a2;
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
          v43 = v17;
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
            v17 = v43;
          }
          *(_BYTE *)(v16 + 64) = 0;
          if ( v17 )
          {
            *(_BYTE *)(v16 + 64) = 1;
            v9 = *v11;
            goto LABEL_21;
          }
          v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextIndicateReceiveNetBufferListsObject;
          v11 = (struct _NET_BUFFER_LIST **)(v16 + 48);
          NextIndicateReceiveNetBufferListsHandler = v15->NextIndicateReceiveNetBufferListsHandler;
          NextIndicateReceiveNetBufferListsContext = v15->NextIndicateReceiveNetBufferListsContext;
          CurrentIrql = v31;
          if ( v8->Header.Type != 5 )
          {
            v9 = *(struct _NET_BUFFER_LIST **)(v16 + 48);
            goto LABEL_21;
          }
        }
      }
      else
      {
LABEL_21:
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
