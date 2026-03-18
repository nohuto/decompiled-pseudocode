/*
 * XREFs of CmpSetValueKeyNew @ 0x140631A40
 * Callers:
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x140635FA4 (CmpCommitSetValueKeyUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     CmpAddValueKeyNew @ 0x140631D74 (CmpAddValueKeyNew.c)
 *     CmpFreeValue @ 0x140632B9C (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x140632D40 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        size_t a7,
        int a8)
{
  __int64 v8; // rsi
  unsigned int v10; // edi
  size_t Size; // [rsp+20h] [rbp-18h]

  v8 = a2 + 36;
  if ( *(_DWORD *)(a2 + 36) && !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0) )
    return 3221225853LL;
  LODWORD(Size) = a7;
  v10 = CmpAddValueKeyNew(BugCheckParameter2, Size, a8);
  if ( v10 != -1 )
  {
    if ( (int)CmpAddValueToListEx(BugCheckParameter2, v8, 1) >= 0 )
      return 0LL;
    CmpFreeValue(BugCheckParameter2, v10);
  }
  return 3221225626LL;
}
