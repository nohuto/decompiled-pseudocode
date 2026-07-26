/*
 * XREFs of ndisFilterSendNetBufferLists @ 0x1C0006950
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0006F90 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005BD5C (ndisFLoopbackNetBufferLists.c)
 */

void __fastcall ndisFilterSendNetBufferLists(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  _DWORD *v8; // rcx
  __int64 v10; // rax
  int v11; // ebx
  struct _NET_BUFFER_LIST *v12; // rcx
  void *v13; // r12
  __int64 v14; // r14
  void (*v15)(void); // r15
  struct _NET_BUFFER_LIST *v16; // r15
  unsigned int v17; // edi
  int v18; // r8d
  struct _NET_BUFFER_LIST **p_Next; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST *v22; // rax
  struct _NET_BUFFER_LIST **v23; // r13
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rsi
  char v27; // al
  struct _NET_BUFFER_LIST *v28; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v30; // r9
  struct _NET_BUFFER_LIST *v31; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rax
  unsigned int Context; // [rsp+20h] [rbp-59h]
  unsigned int Contexta; // [rsp+20h] [rbp-59h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-49h]
  unsigned int v36; // [rsp+30h] [rbp-49h]
  _QWORD v37[3]; // [rsp+48h] [rbp-31h] BYREF
  char Parameter[8]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v39; // [rsp+68h] [rbp-11h]
  void *v40; // [rsp+70h] [rbp-9h]
  __int64 v41; // [rsp+78h] [rbp-1h]
  struct _NET_BUFFER_LIST *v42; // [rsp+80h] [rbp+7h]
  unsigned int v43; // [rsp+88h] [rbp+Fh]
  __int64 v44; // [rsp+8Ch] [rbp+13h]
  unsigned int v45; // [rsp+94h] [rbp+1Bh]
  struct _NET_BUFFER_LIST *v46; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v47; // [rsp+E8h] [rbp+6Fh]

  v46 = a2;
  v6 = a1[4];
  v8 = (_DWORD *)a1[58];
  if ( *(_BYTE *)v8 == 5
    && (v8[14] & 0x8000) != 0
    && !v8[86]
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 2007))
     || (a4 & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    v4 = ndisFLoopbackNetBufferLists(v8, a2, (__int64)&v46);
    a2 = v46;
  }
  if ( a2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v10 = a1[54] + 96 * v4;
    if ( !ndisIterativeDataPathDisabled && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 16) )
    {
      v11 = a4 | 1;
      if ( !*(_QWORD *)v10 )
      {
        v12 = v46;
        *(_QWORD *)v10 = v46;
LABEL_8:
        *(_QWORD *)(v10 + 8) = v12;
        v12->Scratch = 0LL;
        v12->ChildRefCount = v11;
        v12->Status = a3;
        return;
      }
      p_Next = *(struct _NET_BUFFER_LIST ***)(v10 + 8);
      if ( a3 != *((_DWORD *)p_Next + 35) || v11 != *((_DWORD *)p_Next + 33) || (v11 & 0x34) != 0 )
      {
        v12 = v46;
        p_Next[14] = v46;
        goto LABEL_8;
      }
      for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        p_Next = &i->Next;
      *p_Next = v46;
    }
    else
    {
      v13 = (void *)a1[56];
      v14 = a1[58];
      v15 = (void (*)(void))a1[55];
      if ( *(_BYTE *)v14 == 17 )
      {
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a1[55])(v13, v46, a3, a4);
      }
      else if ( !ndisIterativeDataPathDisabled && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v37[2] = 0LL;
        v22 = v46;
        v23 = (struct _NET_BUFFER_LIST **)v37;
        v47 = Number;
        v37[0] = v46;
        v46->Scratch = 0LL;
        v22->ChildRefCount = a4;
        v22->Status = a3;
        v24 = *(_BYTE *)v14 == 5;
        v37[1] = v22;
        if ( v24 )
        {
          while ( *v23 )
          {
            v25 = v14;
            v26 = *(_QWORD *)(v14 + 432) + 96LL * Number;
            v27 = *(_BYTE *)(v26 + 16);
            *(_BYTE *)(v26 + 16) = 1;
            v28 = *v23;
            LOBYTE(v46) = v27;
            *v23 = 0LL;
            if ( v28 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v28->Scratch;
                ChildRefCount = v28->ChildRefCount;
                Context = v28->NdisReserved2;
                v28->ChildRefCount = 0;
                ndisCallSendHandler((void *)v14, v15, v13, v28, Context, 0, ChildRefCount);
                v28 = Scratch;
              }
              while ( Scratch );
              v27 = (char)v46;
              v25 = v14;
              Number = v47;
            }
            *(_BYTE *)(v26 + 16) = 0;
            if ( v27 )
            {
              *(_BYTE *)(v26 + 16) = 1;
              goto LABEL_44;
            }
            v14 = *(_QWORD *)(v14 + 464);
            v23 = (struct _NET_BUFFER_LIST **)v26;
            v15 = *(void (**)(void))(v25 + 440);
            v13 = *(void **)(v25 + 448);
            if ( *(_BYTE *)v14 != 5 )
              goto LABEL_44;
          }
        }
        else
        {
LABEL_44:
          v30 = *v23;
          if ( *v23 )
          {
            *v23 = 0LL;
            do
            {
              v31 = (struct _NET_BUFFER_LIST *)v30->Scratch;
              v36 = v30->ChildRefCount;
              Contexta = v30->NdisReserved2;
              v30->ChildRefCount = 0;
              ndisCallSendHandler((void *)v14, v15, v13, v30, Contexta, 0, v36);
              v30 = v31;
            }
            while ( v31 );
          }
        }
      }
      else
      {
        v41 = a1[55];
        v16 = v46;
        v17 = 0;
        v42 = v46;
        v39 = v14;
        v40 = v13;
        v44 = 0LL;
        v43 = a3;
        v45 = a4;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        {
          if ( byte_1C009FE30 && (*(_DWORD *)(v14 + 852) & 2) != 0 )
            PktMonClientNblDropNdis(v14 + 800, (_DWORD)v16, v18, 2, -1073741670, -536866812);
          Alignment = v16;
          do
          {
            Alignment->Status = -1073741670;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          do
          {
            v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
            ++v17;
          }
          while ( v16 );
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 304), v17);
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v14, v46, 1u);
        }
      }
    }
  }
}
