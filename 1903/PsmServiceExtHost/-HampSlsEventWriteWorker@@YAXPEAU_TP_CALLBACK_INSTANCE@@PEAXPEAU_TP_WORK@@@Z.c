/*
 * XREFs of ?HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempListRemoveHeadAndClear @ 0x18003DE88 (CempListRemoveHeadAndClear.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007C1D4 (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18007C4B8 (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18007C514 (-HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA60 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

void __fastcall HampSlsEventWriteWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_SLEEP_STUDY_CONTEXT *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rdx
  char *v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  bool v8; // zf
  char v9; // dl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  void *v12; // r14
  unsigned __int64 v13; // rdi
  struct _RTL_BALANCED_NODE *v14; // rcx
  char v15; // al
  int v16; // ebp
  struct _RTL_BALANCED_NODE *v17; // rdx
  unsigned __int64 v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  DWORD v22; // ebx
  char v23[144]; // [rsp+20h] [rbp-C8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  HampSlsAcquireLockExclusive(a2, v4);
  *((_DWORD *)a2 + 24) = GetCurrentThreadId();
  while ( *((struct _HAM_SLEEP_STUDY_CONTEXT **)a2 + 7) != (struct _HAM_SLEEP_STUDY_CONTEXT *)((char *)a2 + 56) )
  {
    v5 = (char *)CempListRemoveHeadAndClear((_QWORD **)a2 + 7);
    HampSlsReleaseLockExclusive(a2);
    v6 = *((_QWORD *)v5 + 3);
    if ( v6 )
    {
      while ( 1 )
      {
LABEL_4:
        if ( (int)HampSlsBlockerTreeWriteCallback((struct _RTL_BALANCED_NODE *)v6, v5 + 16) < 0 )
          goto LABEL_24;
        v7 = *(_QWORD *)v6;
        if ( !*(_QWORD *)v6 )
          break;
        v8 = (v5[32] & 1) == 0;
LABEL_9:
        if ( v8 )
          v6 = v7;
        else
          v6 ^= v7;
      }
      v7 = *(_QWORD *)(v6 + 8);
      v9 = v5[32] & 1;
      if ( v7 )
      {
        v8 = v9 == 0;
        goto LABEL_9;
      }
      v10 = v6;
      while ( 2 )
      {
        v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v9 )
        {
          if ( !v10 )
            break;
          v10 ^= v6;
        }
        if ( !v10 )
          break;
        v11 = *(_QWORD *)(v10 + 8);
        if ( v9 )
        {
          if ( v11 )
          {
            v11 ^= v10;
            goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          if ( v11 && v11 != v6 )
          {
            v6 = v11;
            goto LABEL_4;
          }
        }
        v6 = v10;
        continue;
      }
    }
LABEL_24:
    v12 = (void *)*((_QWORD *)v5 + 2);
    v13 = (unsigned __int64)(v5 + 24);
    v14 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v5 + 3);
    if ( (v5[32] & 1) != 0 && v14 )
      v14 = (struct _RTL_BALANCED_NODE *)(v13 ^ (unsigned __int64)v14);
    v15 = v5[32];
    v16 = v15 & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v14->Children[0] )
          {
            v17 = v14;
            if ( v16 )
              v14 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v14->Children[0] ^ (unsigned __int64)v14);
            else
              v14 = v14->Children[0];
            v17->Children[0] = 0LL;
          }
          v18 = (unsigned __int64)v14->Children[1];
          if ( !v18 )
            break;
          v19 = v14;
          if ( v16 )
            v14 = (struct _RTL_BALANCED_NODE *)(v18 ^ (unsigned __int64)v14);
          else
            v14 = v14->Children[1];
          v19->Children[1] = 0LL;
        }
        v20 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v16 && v20 )
          v20 ^= (unsigned __int64)v14;
        HampSlsBlockerTreeDeleteCallback(v14, v12);
        if ( !v20 )
          break;
        v14 = (struct _RTL_BALANCED_NODE *)v20;
      }
      v15 = v5[32];
    }
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    if ( (v15 & 1) != 0 )
      v5[32] = 1;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    HampSlsAcquireLockExclusive(a2, v21);
  }
  *((_DWORD *)a2 + 25) &= ~2u;
  *((_DWORD *)a2 + 24) = 0;
  HampSlsReleaseLockExclusive(a2);
  v22 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v22, 0LL);
  }
}
