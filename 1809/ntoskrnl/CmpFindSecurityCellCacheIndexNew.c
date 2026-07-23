/*
 * XREFs of CmpFindSecurityCellCacheIndexNew @ 0x1401B3724
 * Callers:
 *     CmpResetCachedSecurity @ 0x140582274 (CmpResetCachedSecurity.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpAddSecurityCellToCache @ 0x1405AC584 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x1405DCC90 (CmpIncrementCachedSecurityRefcount.c)
 *     CmpRemoveFromSecurityCache @ 0x1406CB800 (CmpRemoveFromSecurityCache.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 * Callees:
 *     CmpFindLowerBoundInSortedArray @ 0x1401B36BC (CmpFindLowerBoundInSortedArray.c)
 */

char __fastcall CmpFindSecurityCellCacheIndexNew(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // r14
  char v4; // di
  unsigned __int64 v8; // rdx
  unsigned int *v9; // rbx
  unsigned int *LowerBoundInSortedArray; // rax
  char result; // al
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *(unsigned int *)(a1 + 1864);
  v4 = 0;
  if ( !(_DWORD)v3 )
  {
    LODWORD(v8) = 0;
    goto LABEL_10;
  }
  v8 = *(int *)(a1 + 1872);
  if ( (v8 & 0x80000000) == 0LL
    && (unsigned int)v8 < (unsigned int)v3
    && *(_DWORD *)(*(_QWORD *)(a1 + 1880) + 16 * v8) == a2 )
  {
LABEL_9:
    v4 = 1;
    goto LABEL_10;
  }
  v9 = *(unsigned int **)(a1 + 1880);
  LowerBoundInSortedArray = CmpFindLowerBoundInSortedArray(&v12, v9, v3);
  v8 = (unsigned __int64)((char *)LowerBoundInSortedArray - (char *)v9) >> 4;
  if ( (unsigned int)v8 < (unsigned int)v3 && *LowerBoundInSortedArray == a2 )
  {
    *(_DWORD *)(a1 + 1872) = v8;
    goto LABEL_9;
  }
LABEL_10:
  result = v4;
  *a3 = v8;
  return result;
}
