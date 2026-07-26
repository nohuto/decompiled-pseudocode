/*
 * XREFs of ndisInvokeNextReceiveCompleteHandler @ 0x1C005C2AC
 * Callers:
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     ndisFakeFilterReceiveHandler @ 0x1C005BEE0 (ndisFakeFilterReceiveHandler.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008160 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 */

void __fastcall ndisInvokeNextReceiveCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        _BYTE *a4,
        void *a5,
        void (*a6)(void))
{
  unsigned __int64 CurrentIrql; // rax
  _QWORD *v7; // rsi
  struct _NET_BUFFER_LIST *v9; // rdi
  struct _NET_BUFFER_LIST **v10; // r14
  void (*v11)(void); // r15
  void *v12; // r12
  bool v13; // zf
  _QWORD *v14; // r13
  __int64 v15; // rdi
  char v16; // al
  struct _NET_BUFFER_LIST *v17; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v19; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-49h]
  unsigned int v21; // [rsp+38h] [rbp-49h]
  unsigned int v22; // [rsp+48h] [rbp-39h]
  _QWORD v23[3]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE Parameter[8]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE *v25; // [rsp+70h] [rbp-11h]
  void *v26; // [rsp+78h] [rbp-9h]
  void (*v27)(void); // [rsp+80h] [rbp-1h]
  struct _NET_BUFFER_LIST *v28; // [rsp+88h] [rbp+7h]
  int v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+94h] [rbp+13h]
  unsigned int v31; // [rsp+9Ch] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  char v33; // [rsp+F0h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v7 = a4;
  v9 = a1;
  if ( *a4 == 17 )
    goto LABEL_21;
  if ( ndisIterativeDataPathDisabled || (a2 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2) )
  {
    if ( a3->Header.Type == 5 )
    {
      v26 = a5;
      v25 = a4;
      v29 = 0;
      v31 = a2;
      v27 = a6;
      v30 = 3LL;
      v28 = a1;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
             Parameter,
             0x4CCCuLL,
             0,
             0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls(a3, v9, 0);
      return;
    }
LABEL_21:
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
    return;
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v10 = (struct _NET_BUFFER_LIST **)v23;
  v11 = a6;
  v12 = a5;
  a1->Scratch = 0LL;
  a1->ChildRefCount = a2;
  v13 = *a4 == 5;
  v22 = CurrentIrql;
  v23[2] = 0LL;
  v23[0] = a1;
  v23[1] = a1;
  if ( v13 )
  {
    while ( *v10 )
    {
      v14 = v7;
      v15 = v7[54] + 96 * CurrentIrql;
      v16 = *(_BYTE *)(v15 + 88);
      *(_BYTE *)(v15 + 88) = 1;
      v17 = *v10;
      v33 = v16;
      *v10 = 0LL;
      if ( v17 )
      {
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v17->Scratch;
          ChildRefCount = v17->ChildRefCount;
          v17->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(v7, v11, v12, v17, 0, 0, ChildRefCount);
          v17 = Scratch;
        }
        while ( Scratch );
        v16 = v33;
      }
      *(_BYTE *)(v15 + 88) = 0;
      if ( v16 )
      {
        *(_BYTE *)(v15 + 88) = 1;
        v9 = *v10;
        goto LABEL_14;
      }
      v7 = (_QWORD *)v7[70];
      v10 = (struct _NET_BUFFER_LIST **)(v15 + 72);
      v11 = (void (*)(void))v14[67];
      v12 = (void *)v14[68];
      CurrentIrql = v22;
      if ( *(_BYTE *)v7 != 5 )
      {
        v9 = *(struct _NET_BUFFER_LIST **)(v15 + 72);
        goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    if ( v9 )
    {
      *v10 = 0LL;
      do
      {
        v19 = (struct _NET_BUFFER_LIST *)v9->Scratch;
        v21 = v9->ChildRefCount;
        v9->ChildRefCount = 0;
        ndisCallReceiveCompleteHandler(v7, v11, v12, v9, 0, 0, v21);
        v9 = v19;
      }
      while ( v19 );
    }
  }
}
