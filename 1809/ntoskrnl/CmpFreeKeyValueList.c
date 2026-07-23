/*
 * XREFs of CmpFreeKeyValueList @ 0x1407FE86C
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 i; // r14
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int16 v8; // [rsp+3Ch] [rbp+14h]
  __int16 v9; // [rsp+3Eh] [rbp+16h]

  result = 0LL;
  v9 = 0;
  v7 = -1;
  v8 = 0;
  if ( *a2 )
  {
    v5 = 0LL;
    for ( i = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                (unsigned int)a2[1],
                &v7); (unsigned int)v5 < *a2; v5 = (unsigned int)(v5 + 1) )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(i + 4 * v5));
    result = HvFreeCell(BugCheckParameter2, (unsigned int)a2[1]);
    if ( i )
      return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  }
  return result;
}
