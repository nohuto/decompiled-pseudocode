/*
 * XREFs of ?HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006E980
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006E370 (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E654 (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E6B0 (-HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006EC40 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

void __fastcall HampSlsEventWriteWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_SLEEP_STUDY_CONTEXT *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rdx
  void **v5; // r12
  char *v6; // r14
  void **v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  bool v10; // zf
  char v11; // dl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // r15
  unsigned __int64 v15; // rdi
  struct _RTL_BALANCED_NODE *v16; // rcx
  char v17; // al
  int v18; // ebp
  struct _RTL_BALANCED_NODE *v19; // rdx
  unsigned __int64 v20; // rax
  struct _RTL_BALANCED_NODE *v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  DWORD v24; // ebx
  char v25[144]; // [rsp+20h] [rbp-C8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  HampSlsAcquireLockExclusive(a2, v4);
  *((_DWORD *)a2 + 24) = GetCurrentThreadId();
  v5 = (void **)((char *)a2 + 56);
  while ( 1 )
  {
    v6 = (char *)*v5;
    if ( *v5 == v5 )
      break;
    if ( *((void ***)v6 + 1) != v5 || (v7 = *(void ***)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    HampSlsReleaseLockExclusive(a2);
    v8 = *((_QWORD *)v6 + 3);
    if ( v8 )
    {
      while ( 1 )
      {
LABEL_26:
        if ( (int)HampSlsBlockerTreeWriteCallback((struct _RTL_BALANCED_NODE *)v8, v6 + 16) < 0 )
          goto LABEL_27;
        v9 = *(_QWORD *)v8;
        if ( !*(_QWORD *)v8 )
          break;
        v10 = (v6[32] & 1) == 0;
LABEL_9:
        if ( v10 )
          v8 = v9;
        else
          v8 ^= v9;
      }
      v9 = *(_QWORD *)(v8 + 8);
      v11 = v6[32] & 1;
      if ( v9 )
      {
        v10 = v11 == 0;
        goto LABEL_9;
      }
      v12 = v8;
      while ( 2 )
      {
        v12 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 )
        {
          if ( !v12 )
            break;
          v12 ^= v8;
        }
        if ( !v12 )
          break;
        v13 = *(_QWORD *)(v12 + 8);
        if ( v11 )
        {
          if ( v13 )
          {
            v13 ^= v12;
            goto LABEL_22;
          }
        }
        else
        {
LABEL_22:
          if ( v13 && v13 != v8 )
          {
            v8 = v13;
            goto LABEL_26;
          }
        }
        v8 = v12;
        continue;
      }
    }
LABEL_27:
    v14 = (void *)*((_QWORD *)v6 + 2);
    v15 = (unsigned __int64)(v6 + 24);
    v16 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v6 + 3);
    if ( (v6[32] & 1) != 0 && v16 )
      v16 = (struct _RTL_BALANCED_NODE *)(v15 ^ (unsigned __int64)v16);
    v17 = v6[32];
    v18 = v17 & 1;
    if ( v16 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v16->Children[0] )
          {
            v19 = v16;
            if ( v18 )
              v16 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v16->Children[0] ^ (unsigned __int64)v16);
            else
              v16 = v16->Children[0];
            v19->Children[0] = 0LL;
          }
          v20 = (unsigned __int64)v16->Children[1];
          if ( !v20 )
            break;
          v21 = v16;
          if ( v18 )
            v16 = (struct _RTL_BALANCED_NODE *)(v20 ^ (unsigned __int64)v16);
          else
            v16 = v16->Children[1];
          v21->Children[1] = 0LL;
        }
        v22 = v16->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v18 && v22 )
          v22 ^= (unsigned __int64)v16;
        HampSlsBlockerTreeDeleteCallback(v16, v14);
        if ( !v22 )
          break;
        v16 = (struct _RTL_BALANCED_NODE *)v22;
      }
      v17 = v6[32];
    }
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    if ( (v17 & 1) != 0 )
      v6[32] = 1;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    HampSlsAcquireLockExclusive(a2, v23);
  }
  *((_DWORD *)a2 + 25) &= ~2u;
  *((_DWORD *)a2 + 24) = 0;
  HampSlsReleaseLockExclusive(a2);
  v24 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v24, 0LL);
  }
}
