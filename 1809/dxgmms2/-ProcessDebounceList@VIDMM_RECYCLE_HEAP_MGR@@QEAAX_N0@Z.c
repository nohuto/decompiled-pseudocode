/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005B918
 * Callers:
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0059F90 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C005B4FC (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C005BC40 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00B8088 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0001510 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005A230 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005C270 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DCEC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DE1C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // r15
  char v4; // r12
  VIDMM_RECYCLE_HEAP_MGR *v5; // rdi
  _QWORD *v6; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rbx
  bool v10; // al
  VIDMM_RECYCLE_HEAP_MGR *v11; // rcx
  struct VIDMM_RECYCLE_RANGE *v12; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v13; // r14
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  struct VIDMM_RECYCLE_RANGE *v16; // rbx
  unsigned __int8 v17; // dl
  VIDMM_RECYCLE_MULTIRANGE *v18; // rcx
  __int64 v19; // rdx
  const GUID *v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  VIDMM_RECYCLE_MULTIRANGE *v25; // rcx
  _QWORD *v26; // rax
  VIDMM_RECYCLE_HEAP_MGR **v27; // rax
  __int64 v28; // rcx
  struct VIDMM_RECYCLE_RANGE *v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // r8
  _QWORD *v32; // [rsp+20h] [rbp-10h] BYREF
  VIDMM_RECYCLE_HEAP_MGR *v33; // [rsp+28h] [rbp-8h]
  int v34; // [rsp+70h] [rbp+40h] BYREF
  char v35; // [rsp+80h] [rbp+50h]

  v35 = a3;
  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536);
  v4 = a3;
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  v33 = (VIDMM_RECYCLE_HEAP_MGR *)&v32;
  v6 = &v32;
  v32 = &v32;
  if ( v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    while ( 1 )
    {
      v13 = v5;
      IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
      v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v5 - 104);
      if ( v4 )
      {
        if ( !IsOverLimits )
          goto LABEL_12;
      }
      else if ( a2 && *((_QWORD *)v16 + 12) > *((_QWORD *)this + 196) )
      {
        goto LABEL_12;
      }
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)v5;
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v15, v16);
      v21 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v16, v19, v20);
      v24 = v21;
      if ( v21 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22);
        v26[3] = v16;
        v26[4] = v24;
        v26[5] = **((_QWORD **)this + 1);
        WdLogEvent5_WdWarning(v26);
        v27 = (VIDMM_RECYCLE_HEAP_MGR **)v33;
        if ( *(_QWORD ***)v33 != &v32 )
LABEL_28:
          __fastfail(3u);
        *((_QWORD *)v13 + 1) = v33;
        *(_QWORD *)v13 = &v32;
        *v27 = v13;
        v33 = v13;
      }
      v25 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v16 + 17);
      if ( v25 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v25, v22);
      v4 = v35;
      if ( v5 == v3 )
      {
LABEL_12:
        v6 = v32;
        break;
      }
    }
  }
  while ( v6 != &v32 )
  {
    v28 = *v6;
    v29 = (struct VIDMM_RECYCLE_RANGE *)(v6 - 13);
    v30 = v6;
    v6 = (_QWORD *)v28;
    if ( *(_QWORD **)(v28 + 8) != v30 )
      goto LABEL_28;
    v31 = (_QWORD *)v30[1];
    if ( (_QWORD *)*v31 != v30 )
      goto LABEL_28;
    *v31 = v28;
    *(_QWORD *)(v28 + 8) = v31;
    *((_QWORD *)v29 + 14) = 0LL;
    *v30 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v29);
  }
  v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 194);
  while ( v9 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1552) )
  {
    v10 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v12 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v9 - 104);
    if ( v4 )
    {
      if ( !v10 )
        return;
    }
    else if ( a2 && *((_QWORD *)v12 + 12) > *((_QWORD *)this + 196) )
    {
      return;
    }
    v9 = *(VIDMM_RECYCLE_HEAP_MGR **)v9;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v11, v12);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v12, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v34);
    if ( !v34 )
    {
      v18 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v12 + 17);
      if ( v18 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v18, v17);
    }
  }
}
