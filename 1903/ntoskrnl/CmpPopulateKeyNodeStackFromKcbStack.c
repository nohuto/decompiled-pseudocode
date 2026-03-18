/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x140833430
 * Callers:
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408338F8 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140833AC8 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // r14
  __int16 v7; // dx
  _UNKNOWN **v8; // rdi
  __int16 v9; // cx
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(void *, _QWORD, __int64); // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2, v7);
    v8 = result;
    v9 = *((_WORD *)result + 33);
    if ( v9 && *((_BYTE *)result + 65) == 1 )
      break;
    v10 = *((unsigned int *)result + 10);
    if ( (_DWORD)v10 != -1 )
    {
      v11 = (__int64 (__fastcall **)(void *, _QWORD, __int64))result[4];
      *(_QWORD *)EntryAtLayerHeight = v11;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v10;
      result = (_UNKNOWN **)v11[1](v11, v10, EntryAtLayerHeight + 24);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
      v9 = *((_WORD *)v8 + 33);
    }
    if ( v9 && *((_BYTE *)v8 + 65) )
      break;
  }
  return result;
}
