/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082350
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C010E778 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C0112234 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C019749C (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02AFB84 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1, __int64 a2)
{
  volatile void **v2; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct UmfdTls *v8; // r14
  struct _KTHREAD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // rax
  struct UmfdTls *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  struct _KTHREAD *v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  struct UmfdTls *v21; // r15
  int v22; // eax
  int v23; // edi
  union _SLIST_HEADER **v24; // rbx
  PSLIST_ENTRY *v25; // rdi
  PSLIST_ENTRY *RequestContext; // r13
  PSLIST_ENTRY v27; // rax
  union _SLIST_HEADER *v28; // rdi
  PSLIST_ENTRY v29; // rax
  PSLIST_ENTRY v30; // rbx
  PSLIST_ENTRY v31; // rax
  size_t v32; // r12
  struct _KTHREAD *v33; // rdi
  __int64 v34; // rbx
  __int64 *v35; // rax
  struct UmfdTls *v36; // rdx
  __int64 v37; // rdi
  int v38; // eax
  char v39; // r15
  __int64 v40; // rbx
  int v41; // r12d
  __int64 v42; // r13
  CWorkItemQueue **v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v45[12]; // [rsp+48h] [rbp-60h] BYREF
  char v47; // [rsp+B8h] [rbp+10h]
  int v48; // [rsp+C0h] [rbp+18h]
  PSLIST_ENTRY *v49; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( !v4
    || (v8 = *(struct UmfdTls **)(v4 + 352)) == 0LL && (v8 = UmfdTls::Create(), (*(_QWORD *)(v4 + 352) = v8) == 0LL) )
  {
    v23 = -1073741801;
    goto LABEL_88;
  }
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5) )
  {
    v12 = (__int64 *)PsGetThreadWin32Thread(v9);
    if ( v12 )
      v10 = *v12;
  }
  if ( !v10 )
    goto LABEL_36;
  v13 = *(struct UmfdTls **)(v10 + 352);
  if ( !v13 )
  {
    v13 = UmfdTls::Create();
    *(_QWORD *)(v10 + 352) = v13;
    if ( !v13 )
      goto LABEL_36;
  }
  v14 = *((_QWORD *)v13 + 3);
  if ( v14 )
  {
    v11 = **(_QWORD **)v13;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  }
  v15 = *((int *)v2 + 10);
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v11) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v20 )
      v17 = *v20;
  }
  if ( !v17 )
    goto LABEL_36;
  v21 = *(struct UmfdTls **)(v17 + 352);
  if ( !v21 )
  {
    v21 = UmfdTls::Create();
    *(_QWORD *)(v17 + 352) = v21;
    if ( !v21 )
      goto LABEL_36;
  }
  if ( (unsigned int)v15 > 3 )
  {
LABEL_25:
    v23 = -1073741811;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    goto LABEL_88;
  }
  v22 = *((_DWORD *)v21 + 2);
  if ( v22 == -1 )
  {
    *((_DWORD *)v21 + 2) = v15;
  }
  else if ( v22 != (_DWORD)v15 )
  {
    goto LABEL_25;
  }
  _mm_lfence();
  v24 = (union _SLIST_HEADER **)g_pUmfdServerPort[v15];
  v43 = (CWorkItemQueue **)v24;
  if ( !v24 )
  {
    v23 = -1073740032;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    goto LABEL_88;
  }
  v25 = (PSLIST_ENTRY *)*((_QWORD *)v21 + 2);
  v49 = v25;
  if ( v25 )
  {
    RequestContext = (PSLIST_ENTRY *)*((_QWORD *)v21 + 2);
  }
  else
  {
    RequestContext = (PSLIST_ENTRY *)UmfdCreateRequestContext();
    if ( !RequestContext )
    {
LABEL_35:
      v2 = a1;
LABEL_36:
      v23 = -1073741801;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      goto LABEL_88;
    }
  }
  v27 = 0LL;
  if ( v25 )
  {
    v27 = *v25;
    if ( !*v25 )
    {
      v23 = -1073741811;
      goto LABEL_63;
    }
  }
  if ( !RequestContext )
  {
    v23 = -1073741811;
    goto LABEL_63;
  }
  if ( RequestContext != v25 && *RequestContext )
  {
    v23 = -1073741811;
    goto LABEL_63;
  }
  if ( v27 )
  {
    *((_DWORD *)&v27->Next + 2) = 3;
    KeSetEvent(**(PRKEVENT **)(*((_QWORD *)&v27[2].Next + 1) + 8LL), 1, 0);
    *v25 = 0LL;
  }
  v28 = *v24;
  v29 = ExpInterlockedPopEntrySList(*v24 + 1);
  v30 = v29;
  if ( v29 )
    goto LABEL_55;
  if ( !LOBYTE(v28->Alignment) )
  {
    do
    {
      if ( KeWaitForSingleObject(*(PVOID *)v28->Region, UserRequest, 1, 0, 0LL) == 192 )
        break;
      v29 = ExpInterlockedPopEntrySList(v28 + 1);
      v30 = v29;
      if ( v29 )
        goto LABEL_55;
      if ( LOBYTE(v28->Alignment) )
        goto LABEL_54;
      KeResetEvent(*(PRKEVENT *)v28->Region);
      v31 = ExpInterlockedPopEntrySList(v28 + 1);
      v30 = v31;
      if ( v31 )
      {
        *((_DWORD *)&v31->Next + 2) = 2;
        KeSetEvent(*(PRKEVENT *)v28->Region, 1, 0);
        goto LABEL_56;
      }
    }
    while ( !LOBYTE(v28->Alignment) );
    KeSetEvent(*(PRKEVENT *)v28->Region, 1, 0);
LABEL_54:
    v29 = ExpInterlockedPopEntrySList(v28 + 1);
    v30 = v29;
    if ( v29 )
LABEL_55:
      *((_DWORD *)&v29->Next + 2) = 2;
  }
LABEL_56:
  if ( !v30 )
    goto LABEL_62;
  v32 = *((unsigned int *)&v30[1].Next + 3);
  if ( (unsigned int)v32 > 8 )
  {
    if ( CWorkItemQueue::QueueWorkItem(*v43, (struct CWorkItemQueue::CWorkItem *const)v30) )
    {
      v23 = -1073741789;
    }
    else
    {
      CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v30);
      v23 = -1073740032;
    }
LABEL_63:
    if ( !v49 )
      EngFreeMem(RequestContext);
    goto LABEL_68;
  }
  *RequestContext = v30;
  memmove(&v44, v30[1].Next, v32);
  v23 = 0;
  if ( (_DWORD)v32 != 8 )
  {
LABEL_62:
    v23 = -1073741823;
    goto LABEL_63;
  }
  if ( !v49 )
    *((_QWORD *)v21 + 2) = RequestContext;
  *((_QWORD *)v21 + 3) = v44;
LABEL_68:
  if ( v23 < 0 )
    goto LABEL_84;
  v33 = KeGetCurrentThread();
  v34 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v33);
    if ( v35 )
      v34 = *v35;
  }
  if ( !v34 )
    goto LABEL_35;
  v36 = *(struct UmfdTls **)(v34 + 352);
  if ( !v36 )
  {
    v36 = UmfdTls::Create();
    *(_QWORD *)(v34 + 352) = v36;
    if ( !v36 )
      goto LABEL_35;
  }
  v37 = *((_QWORD *)v36 + 3);
  if ( !v37 )
  {
    v23 = -1073740032;
    v2 = a1;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    goto LABEL_88;
  }
  v38 = (*(__int64 (__fastcall **)(_QWORD, struct UmfdTls *, _QWORD *))(*(_QWORD *)v37 + 24LL))(
          *((_QWORD *)v36 + 3),
          v36,
          v45);
  if ( v38 >= 0 )
  {
    v42 = v45[0];
    v41 = *(_DWORD *)(v37 + 8);
    v40 = *(_QWORD *)(v37 + 24);
    v39 = *(_BYTE *)(v37 + 32);
  }
  else
  {
    v39 = v47;
    v40 = v45[1];
    v41 = v48;
    v42 = v45[2];
  }
  v23 = v38;
  if ( v38 >= 0 )
  {
    ProbeForWrite(a1[1], 8uLL, 4u);
    ProbeForWrite(a1[2], 4uLL, 4u);
    *(_QWORD *)a1[1] = v42;
    v2 = a1;
    *(_DWORD *)a1[2] = v41;
    *(_BYTE *)a1[4] = v39;
    if ( v39 )
      *(_QWORD *)a1[3] = v40;
    goto LABEL_85;
  }
LABEL_84:
  v2 = a1;
LABEL_85:
  if ( v23 < 0 )
  {
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
  }
LABEL_88:
  *((_DWORD *)v2 + 2) = v23;
}
