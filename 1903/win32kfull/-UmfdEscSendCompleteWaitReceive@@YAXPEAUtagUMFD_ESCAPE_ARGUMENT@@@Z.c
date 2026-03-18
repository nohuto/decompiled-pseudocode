/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C007D1E0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C007CF40 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C0080F18 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C013C9F0 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D4D88 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02D4DBC (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile void **v4; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *ThreadWin32Thread; // rax
  struct UmfdTls *v11; // r14
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rdi
  __int64 v14; // rbx
  __int64 *v15; // rax
  struct UmfdTls *v16; // rax
  __int64 v17; // rdi
  struct _KTHREAD *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rax
  struct UmfdTls *v25; // r15
  int v26; // eax
  int v27; // edi
  union _SLIST_HEADER **v28; // rbx
  PSLIST_ENTRY *v29; // rdi
  PSLIST_ENTRY *RequestContext; // r13
  PSLIST_ENTRY v31; // rax
  union _SLIST_HEADER *v32; // rdi
  PSLIST_ENTRY v33; // rax
  PSLIST_ENTRY v34; // rbx
  PSLIST_ENTRY v35; // rax
  size_t v36; // r12
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rbx
  __int64 *v39; // rax
  struct UmfdTls *v40; // rdx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rbx
  char v44; // r15
  int v45; // r12d
  __int64 v46; // r13
  CWorkItemQueue **v47; // [rsp+38h] [rbp-70h]
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+48h] [rbp-60h]
  _QWORD v50[11]; // [rsp+50h] [rbp-58h] BYREF
  char v52; // [rsp+B8h] [rbp+10h]
  int v53; // [rsp+C0h] [rbp+18h]
  PSLIST_ENTRY *v54; // [rsp+C8h] [rbp+20h]

  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v6 )
  {
    v11 = *(struct UmfdTls **)(v6 + 352);
    if ( v11 || (v11 = UmfdTls::Create(), (*(_QWORD *)(v6 + 352) = v11) != 0LL) )
    {
      *((_QWORD *)v11 + 6) = 0LL;
      *((_QWORD *)v11 + 5) = 0LL;
      v12 = *((unsigned int *)v11 + 8);
      if ( (int)v12 >= 0 )
      {
        v13 = KeGetCurrentThread();
        v14 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v7, v8, v9) )
        {
          v15 = (__int64 *)PsGetThreadWin32Thread(v13);
          if ( v15 )
            v14 = *v15;
        }
        if ( !v14 )
          goto LABEL_37;
        v16 = *(struct UmfdTls **)(v14 + 352);
        if ( !v16 )
        {
          v16 = UmfdTls::Create();
          *(_QWORD *)(v14 + 352) = v16;
          if ( !v16 )
            goto LABEL_37;
        }
        v12 = *((_QWORD *)v16 + 3);
        if ( v12 )
        {
          v7 = **(_QWORD **)v16;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
        }
      }
      v17 = *((int *)v4 + 10);
      v18 = KeGetCurrentThread();
      v19 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v7, v8, v9) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v18);
        if ( v24 )
          v19 = *v24;
      }
      if ( !v19
        || (v25 = *(struct UmfdTls **)(v19 + 352)) == 0LL
        && (v25 = UmfdTls::Create(), (*(_QWORD *)(v19 + 352) = v25) == 0LL) )
      {
LABEL_37:
        v27 = -1073741801;
        goto LABEL_38;
      }
      if ( (unsigned int)v17 > 3 )
      {
LABEL_26:
        v27 = -1073741811;
LABEL_38:
        *((_QWORD *)v11 + 6) = 0LL;
        *((_QWORD *)v11 + 5) = 0LL;
LABEL_39:
        *((_DWORD *)v4 + 2) = v27;
        *((_DWORD *)v11 + 8) = v27;
        return;
      }
      v26 = *((_DWORD *)v25 + 2);
      if ( v26 == -1 )
      {
        *((_DWORD *)v25 + 2) = v17;
      }
      else if ( v26 != (_DWORD)v17 )
      {
        goto LABEL_26;
      }
      _mm_lfence();
      v28 = (union _SLIST_HEADER **)g_pUmfdServerPort[v17];
      v47 = (CWorkItemQueue **)v28;
      if ( !v28 )
      {
        v27 = -1073740032;
        goto LABEL_38;
      }
      v29 = (PSLIST_ENTRY *)*((_QWORD *)v25 + 2);
      v54 = v29;
      if ( v29 )
      {
        RequestContext = (PSLIST_ENTRY *)*((_QWORD *)v25 + 2);
      }
      else
      {
        RequestContext = (PSLIST_ENTRY *)UmfdCreateRequestContext();
        if ( !RequestContext )
        {
LABEL_36:
          v4 = a1;
          goto LABEL_37;
        }
      }
      v31 = 0LL;
      if ( v29 )
      {
        v31 = *v29;
        if ( !*v29 )
        {
          v27 = -1073741811;
          goto LABEL_66;
        }
      }
      if ( !RequestContext )
      {
        v27 = -1073741811;
        goto LABEL_66;
      }
      if ( RequestContext != v29 && *RequestContext )
      {
        v27 = -1073741811;
        goto LABEL_66;
      }
      if ( v31 )
      {
        *((_DWORD *)&v31->Next + 2) = 3;
        KeSetEvent(**(PRKEVENT **)(*((_QWORD *)&v31[2].Next + 1) + 8LL), 1, 0);
        *v29 = 0LL;
      }
      v32 = *v28;
      v33 = ExpInterlockedPopEntrySList(*v28 + 1);
      v34 = v33;
      if ( v33 )
        goto LABEL_58;
      if ( !LOBYTE(v32->Alignment) )
      {
        do
        {
          if ( KeWaitForSingleObject(*(PVOID *)v32->Region, UserRequest, 1, 0, 0LL) == 192 )
            break;
          v33 = ExpInterlockedPopEntrySList(v32 + 1);
          v34 = v33;
          if ( v33 )
            goto LABEL_58;
          if ( LOBYTE(v32->Alignment) )
            goto LABEL_57;
          KeResetEvent(*(PRKEVENT *)v32->Region);
          v35 = ExpInterlockedPopEntrySList(v32 + 1);
          v34 = v35;
          if ( v35 )
          {
            *((_DWORD *)&v35->Next + 2) = 2;
            KeSetEvent(*(PRKEVENT *)v32->Region, 1, 0);
            goto LABEL_59;
          }
        }
        while ( !LOBYTE(v32->Alignment) );
        KeSetEvent(*(PRKEVENT *)v32->Region, 1, 0);
LABEL_57:
        v33 = ExpInterlockedPopEntrySList(v32 + 1);
        v34 = v33;
        if ( v33 )
LABEL_58:
          *((_DWORD *)&v33->Next + 2) = 2;
      }
LABEL_59:
      if ( v34 )
      {
        v36 = *((unsigned int *)&v34[1].Next + 3);
        if ( (unsigned int)v36 > 8 )
        {
          if ( CWorkItemQueue::QueueWorkItem(*v47, (struct CWorkItemQueue::CWorkItem *const)v34) )
          {
            v27 = -1073741789;
          }
          else
          {
            CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v34);
            v27 = -1073740032;
          }
LABEL_66:
          if ( !v54 )
            EngFreeMem(RequestContext);
LABEL_71:
          if ( v27 < 0 )
            goto LABEL_87;
          v49 = 0LL;
          v37 = KeGetCurrentThread();
          v38 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20, v22, v23) )
          {
            v39 = (__int64 *)PsGetThreadWin32Thread(v37);
            if ( v39 )
              v38 = *v39;
          }
          if ( v38 )
          {
            v40 = *(struct UmfdTls **)(v38 + 352);
            if ( v40 || (v40 = UmfdTls::Create(), (*(_QWORD *)(v38 + 352) = v40) != 0LL) )
            {
              v41 = *((_QWORD *)v40 + 3);
              if ( !v41 )
              {
                v27 = -1073740032;
                v4 = a1;
                goto LABEL_38;
              }
              v42 = (*(__int64 (__fastcall **)(_QWORD, struct UmfdTls *, _QWORD *))(*(_QWORD *)v41 + 24LL))(
                      *((_QWORD *)v40 + 3),
                      v40,
                      v50);
              if ( v42 >= 0 )
              {
                v46 = v50[0];
                v45 = *(_DWORD *)(v41 + 8);
                v43 = *(_QWORD *)(v41 + 24);
                v44 = *(_BYTE *)(v41 + 32);
              }
              else
              {
                v43 = v49;
                v44 = v52;
                v45 = v53;
                v46 = v50[1];
              }
              v27 = v42;
              if ( v42 >= 0 )
              {
                ProbeForWrite(a1[1], 8uLL, 4u);
                ProbeForWrite(a1[2], 4uLL, 4u);
                ProbeForWrite(a1[4], 1uLL, 1u);
                *(_QWORD *)a1[1] = v46;
                v4 = a1;
                *(_DWORD *)a1[2] = v45;
                *(_BYTE *)a1[4] = v44;
                if ( v44 )
                {
                  ProbeForWrite(a1[3], 8uLL, 4u);
                  *(_QWORD *)a1[3] = v43;
                }
LABEL_88:
                if ( v27 >= 0 )
                  goto LABEL_39;
                goto LABEL_38;
              }
LABEL_87:
              v4 = a1;
              goto LABEL_88;
            }
          }
          goto LABEL_36;
        }
        *RequestContext = v34;
        memmove(&v48, v34[1].Next, v36);
        v27 = 0;
        if ( (_DWORD)v36 == 8 )
        {
          if ( !v54 )
            *((_QWORD *)v25 + 2) = RequestContext;
          *((_QWORD *)v25 + 3) = v48;
          goto LABEL_71;
        }
      }
      v27 = -1073741823;
      goto LABEL_66;
    }
  }
  *((_DWORD *)v4 + 2) = -1073741801;
}
