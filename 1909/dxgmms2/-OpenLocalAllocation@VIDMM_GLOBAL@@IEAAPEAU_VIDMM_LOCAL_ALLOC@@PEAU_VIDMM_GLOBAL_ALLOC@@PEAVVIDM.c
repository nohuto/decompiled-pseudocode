/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0075200
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00746E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000253C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006A690 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006A9E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070B50 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071060 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0075E08 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00AFB00 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        void *a4,
        unsigned __int8 *a5)
{
  struct VIDMM_PROCESS *v6; // rbp
  _DWORD *v9; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v10; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v11; // rcx
  PVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  struct _VIDMM_GLOBAL_ALLOC **v15; // rax
  struct _VIDMM_LOCAL_ALLOC *v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  enum _LOCK_OPERATION v34; // [rsp+28h] [rbp-A0h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5040);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( !v6 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = 12319LL;
    goto LABEL_41;
  }
  v9 = (_DWORD *)*((_QWORD *)a2 + 63);
  v10 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
  v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
  if ( v11 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) && (*v9 & 0x20000000) == 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v9);
    *(_QWORD *)(v24 + 24) = 12329LL;
LABEL_41:
    WdLogEvent5_WdAssertion(v24);
    return 0LL;
  }
  if ( (*v9 & 0x20000010) == 0x20000010 )
  {
    v25 = *((_QWORD *)a2 + 13);
    if ( v25 )
    {
      if ( *(struct VIDMM_PROCESS **)(v25 + 8) != v6 )
      {
        if ( v6 == *((struct VIDMM_PROCESS **)this + 5040) )
          return 0LL;
        v24 = WdLogNewEntry5_WdAssertion(v11, 536870928LL);
        *(_QWORD *)(v24 + 24) = 12348LL;
        goto LABEL_41;
      }
    }
  }
  while ( 1 )
  {
    if ( v11 == v10 )
    {
      v12 = operator new[](0x68uLL, 0x32306956u, PagedPool);
      v14 = (__int64)v12;
      if ( !v12 )
      {
        _InterlockedIncrement(&dword_1C004E5D0);
        v29 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v29 + 24) = 12410LL;
        WdLogEvent5_WdLowResource(v29);
        return 0LL;
      }
      memset(v12, 0, 0x68uLL);
      *(_QWORD *)v14 = a2;
      *(_QWORD *)(v14 + 8) = v6;
      *(_QWORD *)(v14 + 48) = v14 + 40;
      *(_QWORD *)(v14 + 40) = v14 + 40;
      v15 = (struct _VIDMM_GLOBAL_ALLOC **)(v14 + 56);
      ++*((_DWORD *)a2 + 78);
      v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 38);
      if ( *(struct _VIDMM_GLOBAL_ALLOC **)v11 != v10 )
        goto LABEL_57;
      *v15 = v10;
      *(_QWORD *)(v14 + 64) = v11;
      *(_QWORD *)v11 = v15;
      *((_QWORD *)a2 + 38) = v15;
      if ( (*((_DWORD *)a2 + 23) & 1) == 0
        || VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v14, a4) >= 0 )
      {
        goto LABEL_13;
      }
LABEL_55:
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v14, 1);
      --*((_DWORD *)a2 + 78);
      v32 = *(_QWORD *)(v14 + 56);
      if ( *(_QWORD *)(v32 + 8) == v14 + 56 )
      {
        v33 = *(_QWORD **)(v14 + 64);
        if ( *v33 == v14 + 56 )
        {
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          operator delete((void *)v14);
          return 0LL;
        }
      }
LABEL_57:
      __fastfail(3u);
    }
    v14 = (__int64)v11 - 56;
    if ( *((struct VIDMM_PROCESS **)v11 - 6) == v6 )
      break;
    v11 = *(struct _VIDMM_GLOBAL_ALLOC **)v11;
  }
  v21 = *(_BYTE *)(v14 + 32);
  if ( (v21 & 2) != 0 )
  {
    *(_BYTE *)(v14 + 32) = v21 & 0xFD;
    v26 = WdLogNewEntry5_WdEvent(v11, 536870928LL);
    *(_QWORD *)(v26 + 24) = v14;
    WdLogEvent5_WdEvent(v26);
    v27 = *((_QWORD *)a2 + 13);
    if ( !v27 || (*(_BYTE *)(v27 + 32) & 2) != 0 )
    {
      v28 = *((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 13) = v14;
      if ( v28 )
        VidMmRecordAlloc(this, (__int64)a2, v14, v28, *((_QWORD *)a2 + 2), 0);
    }
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v14;
LABEL_13:
  ++*(_DWORD *)(v14 + 36);
  if ( (**((_DWORD **)a2 + 63) & 0x20000000) == 0 )
  {
    *((_QWORD *)a2 + 13) = v14;
    goto LABEL_15;
  }
  v17 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  if ( !v17 || (*((_DWORD *)a2 + 21) & 4) != 0 )
  {
    if ( (*((_BYTE *)a2 + 92) & 3) == 3 )
      VIDMM_GLOBAL::TransferAllocationDecommit(v11, a2, v17, (struct _VIDMM_LOCAL_ALLOC *)v14);
    *(_QWORD *)(v14 + 8) = v6;
    if ( *((_QWORD *)a2 + 13) )
    {
      *(_QWORD *)v14 = a2;
      if ( *((int *)a2 + 87) > 0 )
      {
        if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                    v11,
                    (struct _VIDMM_LOCAL_ALLOC *)v14,
                    a2,
                    0LL,
                    *((_QWORD *)a2 + 1),
                    v34,
                    *((struct VIDMM_SEGMENT **)a2 + 17),
                    0) < 0 )
        {
          _InterlockedIncrement(&dword_1C004E5C4);
          v31 = WdLogNewEntry5_WdLowResource(v30);
          *(_QWORD *)(v31 + 24) = a2;
          *(_QWORD *)(v31 + 32) = *((_QWORD *)a2 + 1);
          WdLogEvent5_WdLowResource(v31);
          goto LABEL_55;
        }
        VIDMM_GLOBAL::UnlockAllocation(this, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13), 0LL, *((_QWORD *)a2 + 1), 0, 0);
      }
      v22 = *((_QWORD *)a2 + 13);
      if ( (*(_BYTE *)(v22 + 32) & 2) == 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(**(PRKPROCESS **)(v22 + 8), &ApcState);
        VIDMM_GLOBAL::CloseOneAllocation(
          this,
          (struct _KEVENT *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 40LL) - 40LL),
          0LL,
          0,
          0,
          0LL);
        KeUnstackDetachProcess(&ApcState);
      }
    }
    v18 = *((_DWORD *)a2 + 21);
    if ( (v18 & 4) != 0 )
    {
      v23 = *((_QWORD *)a2 + 17);
      if ( v23 )
      {
        VidMmRecordAlloc(this, (__int64)a2, v14, v23, *((_QWORD *)a2 + 2), 0);
        v18 = *((_DWORD *)a2 + 21);
      }
    }
    *((_QWORD *)a2 + 13) = v14;
    *((_DWORD *)a2 + 21) = v18 & 0xFFFFFFFB;
  }
  *a5 = 1;
LABEL_15:
  if ( *((_DWORD *)a2 + 32) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL)) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    v20 = *((_QWORD *)a2 + 2);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 17) + 80LL) & 0x1001) != 0 )
      *(_QWORD *)(v19 + 240) += v20;
    else
      *(_QWORD *)(v19 + 232) += v20;
  }
  return (struct _VIDMM_LOCAL_ALLOC *)v14;
}
