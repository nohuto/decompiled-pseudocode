/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005C270
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005B0EC (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C005B384 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005B918 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005BFB8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4E0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005E47C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0059828 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005AFAC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDA8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005D770 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(struct _SLIST_ENTRY *this)
{
  struct _SLIST_ENTRY *Next; // rbx
  struct VIDMM_RECYCLE_RANGE *v3; // r9
  struct VIDMM_RECYCLE_RANGE *v4; // r10
  int v5; // r8d
  int v6; // r11d
  struct _SLIST_ENTRY *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _SLIST_ENTRY *v11; // rsi
  const GUID *v12; // r8

  Next = this[4].Next;
  v3 = (struct VIDMM_RECYCLE_RANGE *)Next;
  v4 = (struct VIDMM_RECYCLE_RANGE *)Next;
  v5 = (int)Next[4].Next;
  v6 = *((_DWORD *)&Next[5].Next + 3);
  while ( 1 )
  {
    if ( LODWORD(Next[4].Next) != v5 || *((_DWORD *)&Next[5].Next + 3) != v6 )
    {
      v5 = (int)Next[4].Next;
      if ( v3 != v4 )
      {
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_MULTIRANGE *)this, v3, v4);
        v5 = (int)Next[4].Next;
      }
      v6 = *((_DWORD *)&Next[5].Next + 3);
      v3 = (struct VIDMM_RECYCLE_RANGE *)Next;
    }
    if ( Next == *(&this[4].Next + 1) )
      break;
    v9 = *((_QWORD *)&Next[7].Next + 1);
    v4 = (struct VIDMM_RECYCLE_RANGE *)Next;
    v10 = *((_QWORD *)&Next[4].Next + 1);
    Next = 0LL;
    if ( v9 != v10 + 72 )
      Next = (struct _SLIST_ENTRY *)(v9 - 120);
  }
  if ( v3 != (struct VIDMM_RECYCLE_RANGE *)Next )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_MULTIRANGE *)this, v3, (struct VIDMM_RECYCLE_RANGE *)Next);
  v7 = this[5].Next;
  if ( v7->Next != (struct _SLIST_ENTRY *)1 )
    return 0;
  if ( *((_DWORD *)&this[13].Next + 2) )
    return 0;
  v11 = this[4].Next;
  if ( LODWORD(v11[4].Next) )
    return 0;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v7[2].Next, 2LL, this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v7[2].Next->Next + 1), this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v7[2].Next->Next + 1), v11, v12);
  return 1;
}
