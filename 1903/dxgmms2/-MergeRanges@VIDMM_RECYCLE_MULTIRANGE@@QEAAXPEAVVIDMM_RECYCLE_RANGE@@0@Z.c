/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0069320
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067B68 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ?NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C000237C (-NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C00023A4 (-AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C001452C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0pppppppqq @ 0x1C0028C34 (McTemplateK0pppppppqq.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006925C (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00697C0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C0069844 (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00698E0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069D3C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  __int64 v4; // rbp
  int v6; // ecx
  struct VIDMM_RECYCLE_RANGE *v7; // rbx
  unsigned __int64 v8; // rax
  const GUID *v9; // r8
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned int v13; // r14d
  int v14; // esi
  char v15; // bp
  VIDMM_RECYCLE_HEAP_MGR *v16; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  VIDMM_RECYCLE_BLOCK *v20; // rcx
  bool v21; // zf
  VIDMM_RECYCLE_HEAP_MGR *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  struct VIDMM_RECYCLE_RANGE *v25; // rax
  struct VIDMM_RECYCLE_BLOCK *v26; // rdi
  VIDMM_RECYCLE_RANGE *v27; // rax
  const GUID *v28; // r8
  __int64 v29; // rbp
  __int64 v30; // r14
  VIDMM_RECYCLE_RANGE *v31; // rbx
  __int64 v32; // r15
  VIDMM_RECYCLE_BLOCK *v33; // rcx
  int v34; // ecx
  _QWORD *v35; // rdx
  __int64 v36; // rdx
  bool v37; // dl
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // [rsp+60h] [rbp-A8h]
  char v41; // [rsp+61h] [rbp-A7h]
  char v42; // [rsp+62h] [rbp-A6h]
  char v43; // [rsp+63h] [rbp-A5h]
  int v44; // [rsp+64h] [rbp-A4h] BYREF
  int v45; // [rsp+68h] [rbp-A0h]
  int v46; // [rsp+6Ch] [rbp-9Ch]
  int v47; // [rsp+70h] [rbp-98h]
  VIDMM_RECYCLE_HEAP_MGR *v48; // [rsp+78h] [rbp-90h]
  const GUID *v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-60h]
  _QWORD *v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  bool v57; // [rsp+110h] [rbp+8h]
  bool v58; // [rsp+118h] [rbp+10h]
  bool v59; // [rsp+120h] [rbp+18h]
  bool v60; // [rsp+128h] [rbp+20h]

  v4 = *((_QWORD *)a2 + 17);
  v6 = *((_DWORD *)a2 + 16);
  v7 = a2;
  v54 = *((_QWORD *)a2 + 4);
  v8 = *((_QWORD *)a3 + 5);
  v9 = 0LL;
  v53 = v8;
  v47 = *((_DWORD *)a2 + 22);
  v46 = v6;
  v50 = v4;
  v57 = 0;
  v40 = 0;
  if ( v4 )
  {
    v57 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v4 + 72) == a3 )
    {
      v40 = 1;
      v57 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 18);
  v51 = v10;
  v58 = 0;
  v41 = 0;
  if ( v10 )
  {
    v58 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v41 = 1;
      v58 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    }
  }
  v11 = *((_QWORD *)a2 + 19);
  v52 = v11;
  v59 = 0;
  v42 = 0;
  if ( v11 )
  {
    v59 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v11 + 72) == a3 )
    {
      v42 = 1;
      v59 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    }
  }
  v12 = *((_QWORD *)a2 + 20);
  v60 = 0;
  v43 = 0;
  if ( v12 )
  {
    v37 = *(_QWORD *)(v12 + 64) == (_QWORD)a2;
    v60 = *(_QWORD *)(v12 + 64) == (_QWORD)v7;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v12 + 72) == a3 )
    {
      v43 = 1;
      v60 = v37;
    }
  }
  v13 = v6 - 3;
  v55 = (_QWORD *)*((_QWORD *)v7 + 16);
  LOBYTE(v14) = 0;
  v56 = *((_QWORD *)a3 + 15);
  v15 = 0;
  ++**((_QWORD **)this + 10);
  v44 = *((_DWORD *)v7 + 20);
  do
  {
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v7 + 15);
    v17 = (VIDMM_RECYCLE_HEAP_MGR *)(*((_QWORD *)v7 + 9) + 72LL);
    if ( v16 != v17 )
      v9 = (const GUID *)((char *)v16 - 120);
    v49 = v9;
    if ( v13 <= 2 )
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v17, v7);
    v14 = (unsigned __int8)v14;
    if ( v7 == a3 )
      v14 = 1;
    v45 = v14;
    if ( v15 )
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(v7, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v44);
    else
      v15 = 1;
    v18 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v48 = *(VIDMM_RECYCLE_HEAP_MGR **)(v18 + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p(v18, &EventRecycleRangeDestroy, v9, v7);
    v19 = WdLogNewEntry5_WdEvent(v18, v16);
    *(_QWORD *)(v19 + 24) = v7;
    WdLogEvent5_WdEvent(v19);
    VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(*((_QWORD *)v7 + 9), 1, (__int64)v7);
    v20 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v7 + 9);
    v21 = (*(_QWORD *)v20)-- == 1LL;
    if ( v21 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v20);
    v22 = v48;
    *((_BYTE *)v7 + 168) = 1;
    v23 = *((unsigned int *)v22 + 402);
    v24 = *((_QWORD *)v22 + 164);
    if ( (unsigned int)v23 >= 4 )
    {
      ++*(_DWORD *)(v24 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v24) < *(_WORD *)(v24 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, (PSLIST_ENTRY)v7);
      }
      else
      {
        ++*(_DWORD *)(v24 + 32);
        (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v24 + 56))(v7, v24);
      }
    }
    else
    {
      *((_QWORD *)v22 + v23 + 202) = v7;
      ++*((_DWORD *)v22 + 402);
    }
    LOBYTE(v14) = v45;
    v9 = 0LL;
    v25 = (struct VIDMM_RECYCLE_RANGE *)v49;
    if ( (_BYTE)v45 )
      v25 = v7;
    v7 = v25;
  }
  while ( !(_BYTE)v45 );
  v26 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v27 = (VIDMM_RECYCLE_RANGE *)VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
                                 v22,
                                 *(struct _LOOKASIDE_LIST_EX **)(*(_QWORD *)(*((_QWORD *)v26 + 4) + 8LL) + 1312LL),
                                 (void **)(*(_QWORD *)(*((_QWORD *)v26 + 4) + 8LL) + 1616LL),
                                 (unsigned int *)(*(_QWORD *)(*((_QWORD *)v26 + 4) + 8LL) + 1608LL));
  v29 = v50;
  v30 = v51;
  v31 = v27;
  v32 = v52;
  if ( v27 )
    VIDMM_RECYCLE_RANGE::Init(v27, v26, v54, v53);
  v33 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v21 = (*(_QWORD *)v33)-- == 1LL;
  if ( v21 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v33);
  v34 = v46;
  *((_DWORD *)v31 + 22) = v47;
  *((_DWORD *)v31 + 20) = v44;
  *((_DWORD *)v31 + 16) = v34;
  *((_QWORD *)v31 + 17) = v29;
  *((_QWORD *)v31 + 18) = v30;
  *((_QWORD *)v31 + 19) = v32;
  *((_QWORD *)v31 + 20) = v12;
  if ( v57 )
    *(_QWORD *)(v29 + 64) = v31;
  if ( v40 )
    *(_QWORD *)(v29 + 72) = v31;
  if ( v58 )
    *(_QWORD *)(v30 + 64) = v31;
  if ( v41 )
    *(_QWORD *)(v30 + 72) = v31;
  if ( v59 )
    *(_QWORD *)(v32 + 64) = v31;
  if ( v42 )
    *(_QWORD *)(v32 + 72) = v31;
  if ( v60 )
    *(_QWORD *)(v12 + 64) = v31;
  if ( v43 )
    *(_QWORD *)(v12 + 72) = v31;
  v35 = v55;
  *((_QWORD *)v31 + 16) = v55;
  *v35 = (char *)v31 + 120;
  v36 = v56;
  *((_QWORD *)v31 + 15) = v56;
  *(_QWORD *)(v36 + 8) = (char *)v31 + 120;
  if ( v34 >= 3 )
  {
    if ( v34 > 4 )
    {
      if ( v34 == 5 )
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
          v31);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        v31);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v38 = *((_QWORD *)this + 10);
    v39 = *(_QWORD *)(v38 + 32);
    McTemplateK0pppppppqq(
      v39,
      v38,
      v28,
      **(_QWORD **)(*(_QWORD *)(v39 + 8) + 8LL),
      v31,
      v38,
      *(_QWORD *)(v38 + 56),
      v39,
      *((_QWORD *)v31 + 4),
      *((_QWORD *)v31 + 5),
      *(_DWORD *)v39,
      *((_DWORD *)v31 + 16));
  }
}
