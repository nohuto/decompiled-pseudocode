/*
 * XREFs of ?HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA90
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A90 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x18003DE88 (CempListRemoveHeadAndClear.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007C1D4 (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18007C4B8 (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA60 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

void __fastcall HampSlsRundown(struct _HAM_SLEEP_STUDY_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // r15
  void *v7; // r12
  unsigned __int64 v8; // rsi
  struct _RTL_BALANCED_NODE *v9; // rcx
  char v10; // al
  int v11; // r14d
  struct _RTL_BALANCED_NODE *v12; // rdx
  unsigned __int64 v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rdx
  unsigned __int64 v15; // rdi
  void *v16; // rbp
  unsigned __int64 v17; // rbx
  struct _RTL_BALANCED_NODE *v18; // rcx
  char v19; // al
  int v20; // esi
  struct _RTL_BALANCED_NODE *v21; // rdx
  unsigned __int64 v22; // rax
  struct _RTL_BALANCED_NODE *v23; // rdx
  unsigned __int64 v24; // rdi

  HampSlsAcquireLockExclusive(a1, a2);
  *((_DWORD *)a1 + 25) |= 4u;
  HampSlsReleaseLockExclusive(a1, v3);
  if ( *((_QWORD *)a1 + 11) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
    TpWaitForWork(v4, 1LL);
  while ( *((struct _HAM_SLEEP_STUDY_CONTEXT **)a1 + 7) != (struct _HAM_SLEEP_STUDY_CONTEXT *)((char *)a1 + 56) )
  {
    v5 = CempListRemoveHeadAndClear((_QWORD **)a1 + 7);
    v6 = v5;
    v7 = (void *)v5[2];
    v8 = (unsigned __int64)(v5 + 3);
    v9 = (struct _RTL_BALANCED_NODE *)v5[3];
    if ( (v5[4] & 1) != 0 && v9 )
      v9 = (struct _RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v9);
    v10 = *((_BYTE *)v5 + 32);
    v11 = *(_BYTE *)(v8 + 8) & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v9->Children[0] )
          {
            v12 = v9;
            if ( v11 )
              v9 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v9->Children[0] ^ (unsigned __int64)v9);
            else
              v9 = v9->Children[0];
            v12->Children[0] = 0LL;
          }
          v13 = (unsigned __int64)v9->Children[1];
          if ( !v13 )
            break;
          v14 = v9;
          if ( v11 )
            v9 = (struct _RTL_BALANCED_NODE *)(v13 ^ (unsigned __int64)v9);
          else
            v9 = v9->Children[1];
          v14->Children[1] = 0LL;
        }
        v15 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 && v15 )
          v15 ^= (unsigned __int64)v9;
        HampSlsBlockerTreeDeleteCallback(v9, v7);
        if ( !v15 )
          break;
        v9 = (struct _RTL_BALANCED_NODE *)v15;
      }
      v10 = *(_BYTE *)(v8 + 8);
    }
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    if ( (v10 & 1) != 0 )
      *(_BYTE *)(v8 + 8) = 1;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  v16 = (void *)*((_QWORD *)a1 + 3);
  v17 = (unsigned __int64)a1 + 32;
  v18 = *(struct _RTL_BALANCED_NODE **)v17;
  if ( (*(_BYTE *)(v17 + 8) & 1) != 0 && v18 )
    v18 = (struct _RTL_BALANCED_NODE *)(v17 ^ (unsigned __int64)v18);
  v19 = *(_BYTE *)(v17 + 8);
  v20 = v19 & 1;
  if ( v18 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v18->Children[0] )
        {
          v21 = v18;
          if ( v20 )
            v18 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v18->Children[0] ^ (unsigned __int64)v18);
          else
            v18 = v18->Children[0];
          v21->Children[0] = 0LL;
        }
        v22 = (unsigned __int64)v18->Children[1];
        if ( !v22 )
          break;
        v23 = v18;
        if ( v20 )
          v18 = (struct _RTL_BALANCED_NODE *)(v22 ^ (unsigned __int64)v18);
        else
          v18 = v18->Children[1];
        v23->Children[1] = 0LL;
      }
      v24 = v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v20 && v24 )
        v24 ^= (unsigned __int64)v18;
      HampSlsBlockerTreeDeleteCallback(v18, v16);
      if ( !v24 )
        break;
      v18 = (struct _RTL_BALANCED_NODE *)v24;
    }
    v19 = *(_BYTE *)(v17 + 8);
  }
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)(v17 + 8) = 0LL;
  if ( (v19 & 1) != 0 )
    *(_BYTE *)(v17 + 8) = 1;
}
