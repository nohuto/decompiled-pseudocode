/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0059B2C
 * Callers:
 *     ndisSendNBLToFilter @ 0x1C0010130 (ndisSendNBLToFilter.c)
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0006F90 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void))
{
  unsigned __int64 CurrentIrql; // rax
  struct _NDIS_OBJECT_HEADER *v7; // rsi
  struct _NET_BUFFER_LIST *v8; // rdi
  struct _NET_BUFFER_LIST **v9; // r14
  void (__fastcall *v10)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  void *v11; // r13
  bool v12; // zf
  struct _NDIS_OBJECT_HEADER *v13; // r15
  __int64 v14; // rdi
  char v15; // al
  struct _NET_BUFFER_LIST *v16; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v19; // eax
  struct _NET_BUFFER_LIST *v20; // rbx
  __int64 v21; // r8
  struct _NET_BUFFER_LIST *i; // rax
  _SLIST_HEADER *Alignment; // rcx
  unsigned int v24; // eax
  unsigned int v25; // [rsp+48h] [rbp-39h]
  _QWORD v26[3]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE Parameter[8]; // [rsp+68h] [rbp-19h] BYREF
  struct _NDIS_OBJECT_HEADER *v28; // [rsp+70h] [rbp-11h]
  void *v29; // [rsp+78h] [rbp-9h]
  void (*v30)(void); // [rsp+80h] [rbp-1h]
  struct _NET_BUFFER_LIST *v31; // [rsp+88h] [rbp+7h]
  unsigned int v32; // [rsp+90h] [rbp+Fh]
  __int64 v33; // [rsp+94h] [rbp+13h]
  unsigned int v34; // [rsp+9Ch] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  char v36; // [rsp+F0h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v7 = a4;
  v8 = a1;
  if ( a4->Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( !ndisIterativeDataPathDisabled
         && ((a3 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v9 = (struct _NET_BUFFER_LIST **)v26;
    v10 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))a6;
    v11 = a5;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a3;
    a1->Status = a2;
    v12 = a4->Type == 5;
    v25 = CurrentIrql;
    v26[2] = 0LL;
    v26[0] = a1;
    v26[1] = a1;
    if ( v12 )
    {
      while ( *v9 )
      {
        v13 = v7;
        v14 = *(_QWORD *)&v7[108].Type + 96 * CurrentIrql;
        v15 = *(_BYTE *)(v14 + 16);
        *(_BYTE *)(v14 + 16) = 1;
        v16 = *v9;
        v36 = v15;
        *v9 = 0LL;
        if ( v16 )
        {
          do
          {
            ChildRefCount = v16->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
            v16->ChildRefCount = 0;
            ndisCallSendHandler(v7, v10, v11, v16, v16->NdisReserved2, 0, ChildRefCount);
            v16 = Scratch;
          }
          while ( Scratch );
          v15 = v36;
        }
        *(_BYTE *)(v14 + 16) = 0;
        if ( v15 )
        {
          *(_BYTE *)(v14 + 16) = 1;
          v8 = *v9;
          goto LABEL_15;
        }
        v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[116].Type;
        v9 = (struct _NET_BUFFER_LIST **)v14;
        v10 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))&v13[110].Type;
        v11 = *(void **)&v13[112].Type;
        CurrentIrql = v25;
        if ( v7->Type != 5 )
        {
          v8 = *(struct _NET_BUFFER_LIST **)v14;
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      if ( v8 )
      {
        *v9 = 0LL;
        do
        {
          v19 = v8->ChildRefCount;
          v20 = (struct _NET_BUFFER_LIST *)v8->Scratch;
          v8->ChildRefCount = 0;
          ndisCallSendHandler(v7, v10, v11, v8, v8->NdisReserved2, 0, v19);
          v8 = v20;
        }
        while ( v20 );
      }
    }
  }
  else
  {
    v29 = a5;
    v32 = a2;
    v34 = a3;
    v30 = a6;
    v28 = a4;
    v33 = 0LL;
    v31 = a1;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
    {
      if ( byte_1C009FE30 && (*(_DWORD *)&v7[213] & 2) != 0 )
        PktMonClientNblDropNdis((__int64)&v7[200], (__int64)v8, v21, 2LL, 0xC000009A);
      for ( i = v8; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        i->Status = -1073741670;
      Alignment = (_SLIST_HEADER *)v8;
      v24 = 0;
      if ( v8 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v24;
        }
        while ( Alignment );
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7[76], v24);
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v7, v8, 1u);
    }
  }
}
