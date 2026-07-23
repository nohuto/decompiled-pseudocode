/*
 * XREFs of CmpSetValueKeyNew @ 0x1405ADBBC
 * Callers:
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 * Callees:
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyNew(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  __int64 v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edi

  v8 = a2 + 36;
  if ( *(_DWORD *)(a2 + 36) && !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 40)) )
    return 3221225853LL;
  v11 = CmpAddValueKeyNew(a1, a7, a8);
  v12 = v11;
  if ( v11 != -1 )
  {
    if ( (int)CmpAddValueToListEx(a1, v11, a4, a8, v8, 1) >= 0 )
      return 0LL;
    CmpFreeValue(a1, v12);
  }
  return 3221225626LL;
}
