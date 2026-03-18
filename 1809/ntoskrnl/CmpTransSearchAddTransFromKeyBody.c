/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x140693E70
 * Callers:
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1405CB550 (CmpQueryKeySecurity.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F1564 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x140693F0C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6E8 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[7];
  if ( !v2 && !a1[8] )
    return 3222863874LL;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 24);
  if ( (v2 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v5 + 24), 0LL, &v9);
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 4192);
    if ( !v8 )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], v8, v6, 0, (__int64)&v9);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}
