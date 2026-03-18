/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068A58
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0066AFC (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C0067160 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0082760 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00BB1B8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0002248 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0064720 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C006600C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067778 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00693D0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00694F0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // r15
  char v4; // r12
  VIDMM_RECYCLE_HEAP_MGR *v5; // rdi
  _QWORD *v6; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rsi
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v11; // rcx
  struct VIDMM_RECYCLE_RANGE *v12; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v13; // rbx
  bool v14; // al
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  struct VIDMM_RECYCLE_RANGE *v16; // rdi
  const GUID *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r12
  VIDMM_RECYCLE_MULTIRANGE *v22; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v23; // rcx
  _QWORD *v24; // rax
  VIDMM_RECYCLE_HEAP_MGR **v25; // rax
  __int64 v26; // rcx
  struct VIDMM_RECYCLE_RANGE *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  _QWORD *v30; // [rsp+20h] [rbp-10h] BYREF
  VIDMM_RECYCLE_HEAP_MGR *v31; // [rsp+28h] [rbp-8h]
  int v32; // [rsp+70h] [rbp+40h] BYREF
  char v33; // [rsp+80h] [rbp+50h]

  v33 = a3;
  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536);
  v4 = a3;
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  v31 = (VIDMM_RECYCLE_HEAP_MGR *)&v30;
  v6 = &v30;
  v30 = &v30;
  if ( v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    while ( 1 )
    {
      v9 = v5;
      IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
      v12 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v5 - 104);
      if ( v4 )
      {
        if ( !IsOverLimits )
          goto LABEL_5;
      }
      else if ( a2 && *((_QWORD *)v12 + 12) > *((_QWORD *)this + 196) )
      {
        goto LABEL_5;
      }
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)v5;
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v11, v12);
      LOBYTE(v32) = 0;
      v18 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v12, (bool *)&v32, v17);
      v21 = v18;
      if ( v18 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19);
        v24[3] = v12;
        v24[4] = v21;
        v24[5] = **((_QWORD **)this + 1);
        WdLogEvent5_WdWarning(v24);
        v25 = (VIDMM_RECYCLE_HEAP_MGR **)v31;
        if ( *(_QWORD ***)v31 != &v30 )
          goto LABEL_29;
        *((_QWORD *)v9 + 1) = v31;
        *(_QWORD *)v9 = &v30;
        *v25 = v9;
        v31 = v9;
      }
      if ( !(_BYTE)v32 )
      {
        v22 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v12 + 17);
        if ( v22 )
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v22);
      }
      v4 = v33;
      if ( v5 == v3 )
      {
LABEL_5:
        v6 = v30;
        break;
      }
    }
  }
  while ( v6 != &v30 )
  {
    v26 = *v6;
    v27 = (struct VIDMM_RECYCLE_RANGE *)(v6 - 13);
    v28 = v6;
    v6 = (_QWORD *)v26;
    if ( *(_QWORD **)(v26 + 8) != v28 || (v29 = (_QWORD *)v28[1], (_QWORD *)*v29 != v28) )
LABEL_29:
      __fastfail(3u);
    *v29 = v26;
    *(_QWORD *)(v26 + 8) = v29;
    *((_QWORD *)v27 + 14) = 0LL;
    *v28 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v27);
  }
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 194);
  while ( v13 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1552) )
  {
    v14 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v13 - 104);
    if ( v4 )
    {
      if ( !v14 )
        return;
    }
    else if ( a2 && *((_QWORD *)v16 + 12) > *((_QWORD *)this + 196) )
    {
      return;
    }
    v13 = *(VIDMM_RECYCLE_HEAP_MGR **)v13;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v15, v16);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v16, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v32);
    if ( !v32 )
    {
      v23 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v16 + 17);
      if ( v23 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v23);
    }
  }
}
