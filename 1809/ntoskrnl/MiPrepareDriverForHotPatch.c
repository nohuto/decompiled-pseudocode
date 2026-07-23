/*
 * XREFs of MiPrepareDriverForHotPatch @ 0x1408584BC
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1402F8064 (RtlGetHotPatchSize.c)
 *     MiLockHotPatchPages @ 0x1408570F8 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x14085718C (MiLockHotPatchUndoPages.c)
 */

__int64 __fastcall MiPrepareDriverForHotPatch(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  signed int *v7; // rbx
  unsigned int i; // r15d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  signed int v13; // edi

  v7 = (_DWORD *)((char *)a3 + *(unsigned int *)(*(_QWORD *)(a1 + 8) + 24LL));
  for ( i = RtlGetHotPatchSize(a3); ; v7 = (signed int *)(v9 + 4LL * i * (v13 & 0xFFF)) )
  {
    v13 = *v7;
    if ( !*v7 )
      break;
    v9 = (__int64)(v7 + 1);
    v10 = a1;
    if ( v13 < 0 )
      v10 = a2;
    result = MiLockHotPatchPages(v10, v9, v13 & 0xFFF, i, v13, 0);
    if ( (int)result < 0 )
      return result;
    if ( (v13 & 0xFC000) == 0x5C000 )
    {
      v12 = a2;
      if ( v13 < 0 )
        v12 = a1;
      result = MiLockHotPatchPages(v12, v9, v13 & 0xFFF, i, v13, 1u);
      if ( (int)result < 0 )
        return result;
    }
  }
  if ( !a4 )
    return 0LL;
  result = MiLockHotPatchUndoPages(a1, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
