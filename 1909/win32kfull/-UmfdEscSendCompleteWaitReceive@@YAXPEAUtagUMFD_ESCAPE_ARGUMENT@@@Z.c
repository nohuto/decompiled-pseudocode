/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01220A0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0116210 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C011A78C (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D48D8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02D490C (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1, int a2)
{
  volatile void **v2; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 *ThreadWin32Thread; // rax
  struct UmfdTls *v7; // r14
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  struct UmfdTls *v12; // rax
  __int64 v13; // rdi
  struct _KTHREAD *v14; // r15
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rcx
  __int64 *v18; // rax
  struct UmfdTls *v19; // r15
  int v20; // eax
  int v21; // edi
  union _SLIST_HEADER **v22; // rbx
  _QWORD *v23; // rdi
  _QWORD *RequestContext; // r13
  __int64 v25; // rax
  union _SLIST_HEADER *v26; // rdi
  PSLIST_ENTRY v27; // rax
  PSLIST_ENTRY v28; // rbx
  PSLIST_ENTRY v29; // rax
  size_t v30; // r12
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rbx
  __int64 *v33; // rax
  struct UmfdTls *v34; // rdx
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rbx
  char v38; // r15
  int v39; // r12d
  __int64 v40; // r13
  CWorkItemQueue **v41; // [rsp+38h] [rbp-70h]
  __int64 v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+48h] [rbp-60h]
  _QWORD v44[11]; // [rsp+50h] [rbp-58h] BYREF
  char v46; // [rsp+B8h] [rbp+10h]
  int v47; // [rsp+C0h] [rbp+18h]
  _QWORD *v48; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v4 )
  {
    v7 = *(struct UmfdTls **)(v4 + 352);
    if ( v7 || (v7 = UmfdTls::Create(), (*(_QWORD *)(v4 + 352) = v7) != 0LL) )
    {
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 5) = 0LL;
      v8 = *((unsigned int *)v7 + 8);
      if ( (int)v8 >= 0 )
      {
        v9 = KeGetCurrentThread();
        v10 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v5) )
        {
          v11 = (__int64 *)PsGetThreadWin32Thread(v9);
          if ( v11 )
            v10 = *v11;
        }
        if ( !v10 )
          goto LABEL_37;
        v12 = *(struct UmfdTls **)(v10 + 352);
        if ( !v12 )
        {
          v12 = UmfdTls::Create();
          *(_QWORD *)(v10 + 352) = v12;
          if ( !v12 )
            goto LABEL_37;
        }
        v8 = *((_QWORD *)v12 + 3);
        if ( v8 )
        {
          v5 = **(_QWORD **)v12;
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        }
      }
      v13 = *((int *)v2 + 10);
      v14 = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v5) )
      {
        v18 = (__int64 *)PsGetThreadWin32Thread(v14);
        if ( v18 )
          v15 = *v18;
      }
      if ( !v15
        || (v19 = *(struct UmfdTls **)(v15 + 352)) == 0LL
        && (v19 = UmfdTls::Create(), (*(_QWORD *)(v15 + 352) = v19) == 0LL) )
      {
LABEL_37:
        v21 = -1073741801;
        goto LABEL_38;
      }
      if ( (unsigned int)v13 > 3 )
      {
LABEL_26:
        v21 = -1073741811;
LABEL_38:
        *((_QWORD *)v7 + 6) = 0LL;
        *((_QWORD *)v7 + 5) = 0LL;
LABEL_39:
        *((_DWORD *)v2 + 2) = v21;
        *((_DWORD *)v7 + 8) = v21;
        return;
      }
      v20 = *((_DWORD *)v19 + 2);
      if ( v20 == -1 )
      {
        *((_DWORD *)v19 + 2) = v13;
      }
      else if ( v20 != (_DWORD)v13 )
      {
        goto LABEL_26;
      }
      _mm_lfence();
      v22 = (union _SLIST_HEADER **)g_pUmfdServerPort[v13];
      v41 = (CWorkItemQueue **)v22;
      if ( !v22 )
      {
        v21 = -1073740032;
        goto LABEL_38;
      }
      v23 = (_QWORD *)*((_QWORD *)v19 + 2);
      v48 = v23;
      if ( v23 )
      {
        RequestContext = (_QWORD *)*((_QWORD *)v19 + 2);
      }
      else
      {
        RequestContext = UmfdCreateRequestContext();
        if ( !RequestContext )
        {
LABEL_36:
          v2 = a1;
          goto LABEL_37;
        }
      }
      v25 = 0LL;
      if ( v23 )
      {
        v25 = *v23;
        if ( !*v23 )
        {
          v21 = -1073741811;
          goto LABEL_66;
        }
      }
      if ( !RequestContext )
      {
        v21 = -1073741811;
        goto LABEL_66;
      }
      if ( RequestContext != v23 && *RequestContext )
      {
        v21 = -1073741811;
        goto LABEL_66;
      }
      if ( v25 )
      {
        *(_DWORD *)(v25 + 8) = 3;
        KeSetEvent(**(PRKEVENT **)(*(_QWORD *)(v25 + 40) + 8LL), 1, 0);
        *v23 = 0LL;
      }
      v26 = *v22;
      v27 = ExpInterlockedPopEntrySList(*v22 + 1);
      v28 = v27;
      if ( v27 )
        goto LABEL_58;
      if ( !LOBYTE(v26->Alignment) )
      {
        do
        {
          if ( KeWaitForSingleObject(*(PVOID *)v26->Region, UserRequest, 1, 0, 0LL) == 192 )
            break;
          v27 = ExpInterlockedPopEntrySList(v26 + 1);
          v28 = v27;
          if ( v27 )
            goto LABEL_58;
          if ( LOBYTE(v26->Alignment) )
            goto LABEL_57;
          KeResetEvent(*(PRKEVENT *)v26->Region);
          v29 = ExpInterlockedPopEntrySList(v26 + 1);
          v28 = v29;
          if ( v29 )
          {
            *((_DWORD *)&v29->Next + 2) = 2;
            KeSetEvent(*(PRKEVENT *)v26->Region, 1, 0);
            goto LABEL_59;
          }
        }
        while ( !LOBYTE(v26->Alignment) );
        KeSetEvent(*(PRKEVENT *)v26->Region, 1, 0);
LABEL_57:
        v27 = ExpInterlockedPopEntrySList(v26 + 1);
        v28 = v27;
        if ( v27 )
LABEL_58:
          *((_DWORD *)&v27->Next + 2) = 2;
      }
LABEL_59:
      if ( v28 )
      {
        v30 = *((unsigned int *)&v28[1].Next + 3);
        if ( (unsigned int)v30 > 8 )
        {
          if ( CWorkItemQueue::QueueWorkItem(*v41, (struct CWorkItemQueue::CWorkItem *const)v28) )
          {
            v21 = -1073741789;
          }
          else
          {
            CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v28);
            v21 = -1073740032;
          }
LABEL_66:
          if ( !v48 )
            EngFreeMem(RequestContext);
LABEL_71:
          if ( v21 < 0 )
            goto LABEL_87;
          v43 = 0LL;
          v31 = KeGetCurrentThread();
          v32 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
          {
            v33 = (__int64 *)PsGetThreadWin32Thread(v31);
            if ( v33 )
              v32 = *v33;
          }
          if ( v32 )
          {
            v34 = *(struct UmfdTls **)(v32 + 352);
            if ( v34 || (v34 = UmfdTls::Create(), (*(_QWORD *)(v32 + 352) = v34) != 0LL) )
            {
              v35 = *((_QWORD *)v34 + 3);
              if ( !v35 )
              {
                v21 = -1073740032;
                v2 = a1;
                goto LABEL_38;
              }
              v36 = (*(__int64 (__fastcall **)(_QWORD, struct UmfdTls *, _QWORD *))(*(_QWORD *)v35 + 24LL))(
                      *((_QWORD *)v34 + 3),
                      v34,
                      v44);
              if ( v36 >= 0 )
              {
                v40 = v44[0];
                v39 = *(_DWORD *)(v35 + 8);
                v37 = *(_QWORD *)(v35 + 24);
                v38 = *(_BYTE *)(v35 + 32);
              }
              else
              {
                v37 = v43;
                v38 = v46;
                v39 = v47;
                v40 = v44[1];
              }
              v21 = v36;
              if ( v36 >= 0 )
              {
                ProbeForWrite(a1[1], 8uLL, 4u);
                ProbeForWrite(a1[2], 4uLL, 4u);
                ProbeForWrite(a1[4], 1uLL, 1u);
                *(_QWORD *)a1[1] = v40;
                v2 = a1;
                *(_DWORD *)a1[2] = v39;
                *(_BYTE *)a1[4] = v38;
                if ( v38 )
                {
                  ProbeForWrite(a1[3], 8uLL, 4u);
                  *(_QWORD *)a1[3] = v37;
                }
LABEL_88:
                if ( v21 >= 0 )
                  goto LABEL_39;
                goto LABEL_38;
              }
LABEL_87:
              v2 = a1;
              goto LABEL_88;
            }
          }
          goto LABEL_36;
        }
        *RequestContext = v28;
        memmove(&v42, v28[1].Next, v30);
        v21 = 0;
        if ( (_DWORD)v30 == 8 )
        {
          if ( !v48 )
            *((_QWORD *)v19 + 2) = RequestContext;
          *((_QWORD *)v19 + 3) = v42;
          goto LABEL_71;
        }
      }
      v21 = -1073741823;
      goto LABEL_66;
    }
  }
  *((_DWORD *)v2 + 2) = -1073741801;
}
