/*
 * XREFs of CmpCreateLayerLink @ 0x1407FADF0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1407FAA74 (CmpAllocateLayerInfoForKcb.c)
 */

__int64 __fastcall CmpCreateLayerLink(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx

  if ( *(__int16 *)(BugCheckParameter2 + 58) >= 127 )
    return 3221225485LL;
  result = CmpAllocateLayerInfoForKcb(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    result = CmpAllocateLayerInfoForKcb(a2);
    if ( (int)result >= 0 )
    {
      if ( CmpReferenceKeyControlBlock(BugCheckParameter2) )
      {
        v5 = *(_QWORD **)(a2 + 184);
        *(_WORD *)(a2 + 58) = *(_WORD *)(BugCheckParameter2 + 58) + 1;
        v6 = *(_QWORD *)(BugCheckParameter2 + 184);
        v5[3] = v6;
        v7 = v6 + 32;
        v8 = *(_QWORD **)(v7 + 8);
        if ( *v8 != v7 )
          __fastfail(3u);
        *v5 = v7;
        v5[1] = v8;
        *v8 = v5;
        *(_QWORD *)(v7 + 8) = v5;
        return 0LL;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
