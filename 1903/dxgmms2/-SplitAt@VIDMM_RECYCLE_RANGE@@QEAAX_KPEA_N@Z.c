/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0068F9C
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0066ACC (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00670DC (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00BBBE8 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0pppppppqq @ 0x1C0028C34 (McTemplateK0pppppppqq.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006925C (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00698E0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069D3C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BA8F8 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BB638 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  bool v4; // r15
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // si
  __int64 v10; // rax
  bool v11; // bp
  __int64 v12; // rax
  bool v13; // r12
  unsigned int v14; // r13d
  struct VIDMM_RECYCLE_BLOCK *v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r14
  PSLIST_ENTRY v21; // rdi
  const GUID *v22; // r8
  char *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  signed __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  const GUID *v30; // r8
  __int64 v31; // rdx
  const GUID *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // [rsp+50h] [rbp-68h]
  __int64 v37; // [rsp+58h] [rbp-60h]
  unsigned __int64 v38; // [rsp+60h] [rbp-58h]
  struct VIDMM_RECYCLE_BLOCK *v39; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v42; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  v5 = 1LL;
  *a3 = 1;
  v7 = *((_QWORD *)this + 17);
  if ( v7 )
    v4 = *(_QWORD *)(v7 + 72) == (_QWORD)this;
  v8 = *((_QWORD *)this + 18);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 72) == (_QWORD)this;
  v10 = *((_QWORD *)this + 19);
  v11 = 0;
  if ( v10 )
    v11 = *(_QWORD *)(v10 + 72) == (_QWORD)this;
  v12 = *((_QWORD *)this + 20);
  v13 = 0;
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 72) == (_QWORD)this;
  v14 = *((_DWORD *)this + 21);
  if ( v14 != 3 )
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v14, this);
    v5 = 1LL;
  }
  v15 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 9);
  v16 = *((_QWORD *)this + 5);
  v17 = a2 + *((_QWORD *)this + 4);
  v39 = v15;
  v42 = v16;
  v38 = v17;
  v18 = *(_QWORD *)(*((_QWORD *)v15 + 4) + 8LL);
  v19 = *(_DWORD *)(v18 + 1608);
  v20 = *(_QWORD *)(v18 + 1312);
  if ( v19 )
  {
    v28 = (unsigned int)(v19 - 1);
    v21 = *(PSLIST_ENTRY *)(v18 + 8 * v28 + 1616);
    *(_QWORD *)(v18 + 8 * v28 + 1616) = 0LL;
    --*(_DWORD *)(v18 + 1608);
  }
  else
  {
    ++*(_DWORD *)(v20 + 20);
    v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v20);
    if ( !v21 )
    {
      ++*(_DWORD *)(v20 + 24);
      v21 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v20 + 48))(
                            *(unsigned int *)(v20 + 36),
                            *(unsigned int *)(v20 + 44),
                            *(unsigned int *)(v20 + 40),
                            v20);
    }
    v15 = v39;
    v16 = v42;
    v17 = v38;
  }
  if ( v21 )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v21, v15, v17, v16);
    LODWORD(v21[4].Next) = *((_DWORD *)this + 16);
    *((_DWORD *)&v21[5].Next + 2) = *((_DWORD *)this + 22);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v23 = (char *)this + 120;
    v24 = *((_QWORD *)this + 15);
    *(_QWORD *)(v24 + 8) = (char *)v21 + 120;
    *((_QWORD *)this + 15) = (char *)v21 + 120;
    v21[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *((_QWORD *)&v21[7].Next + 1) = v24;
    *((_QWORD *)&v21[8].Next + 1) = *((_QWORD *)this + 17);
    v21[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v21[9].Next + 1) = *((_QWORD *)this + 19);
    v21[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    LODWORD(v21[5].Next) = *((_DWORD *)this + 20);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v21;
    if ( v9 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v21;
    if ( v11 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v21;
    if ( v13 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v21;
    v25 = *((_DWORD *)this + 16);
    if ( v25 < 3 )
      goto LABEL_28;
    if ( v25 > 4 )
    {
      if ( v25 != 5 )
      {
LABEL_28:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          McTemplateK0p((__int64)v23, &EventRecycleRangeDestroy, v22, this);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            v31 = *((_QWORD *)this + 9);
            McTemplateK0pppppppqq(
              *(_QWORD *)(v31 + 32),
              v31,
              v30,
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8LL) + 8LL),
              this,
              v31,
              *(_QWORD *)(v31 + 56),
              *(_QWORD *)(v31 + 32),
              *((_QWORD *)this + 4),
              *((_QWORD *)this + 5),
              **(_DWORD **)(v31 + 32),
              *((_DWORD *)this + 16));
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              v33 = *((_QWORD *)this + 9);
              v34 = *(_QWORD *)(v33 + 32);
              LODWORD(v37) = v21[4].Next;
              LODWORD(v36) = *(_DWORD *)v34;
              McTemplateK0pppppppqq(
                v34,
                v33,
                v32,
                **(_QWORD **)(*(_QWORD *)(v34 + 8) + 8LL),
                v21,
                v33,
                *(_QWORD *)(v33 + 56),
                v34,
                v21[2].Next,
                *((_QWORD *)&v21[2].Next + 1),
                v36,
                v37);
            }
          }
        }
        return;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v21);
      v23 = (char *)v21[2].Next - *((_QWORD *)&v21[2].Next + 1);
      v27 = _InterlockedExchangeAdd64(
              &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
              (unsigned __int64)v23);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v21);
      v23 = (char *)v21[2].Next - *((_QWORD *)&v21[2].Next + 1);
      v27 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, (unsigned __int64)v23);
    }
    if ( (__int64)&v23[v27] < 0 && g_IsInternalRelease )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v26);
      v29[3] = 270LL;
      v29[4] = 9LL;
      v29[5] = 0LL;
      v29[6] = 0LL;
      v29[7] = 0LL;
      WdLogEvent5_WdCriticalError(v29);
    }
    goto LABEL_28;
  }
  v35 = WdLogNewEntry5_WdWarning(v5, v18);
  *(_QWORD *)(v35 + 24) = this;
  *(_QWORD *)(v35 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
  WdLogEvent5_WdWarning(v35);
  if ( v14 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v14, this);
  *a3 = 0;
}
