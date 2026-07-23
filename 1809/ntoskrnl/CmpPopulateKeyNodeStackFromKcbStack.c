/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x1407FB2F0
 * Callers:
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1407FB760 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407FB938 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405D99D0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // r14
  __int16 v9; // dx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 (__fastcall **v12)(void *, _QWORD, __int64); // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2, v9);
    v10 = (__int64)result;
    v11 = *((unsigned int *)result + 8);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (__int64 (__fastcall **)(void *, _QWORD, __int64))result[3];
      *(_QWORD *)EntryAtLayerHeight = v12;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v11;
      result = (_UNKNOWN **)v12[1](v12, v11, EntryAtLayerHeight + 24);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKcbSemantics(v10, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
