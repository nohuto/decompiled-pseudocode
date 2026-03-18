/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x140632D84
 * Callers:
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14064DD70 (CmEnumerateValueKey.c)
 *     CmpQueryKeySecurity @ 0x14064F450 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082B7F4 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1406331E8 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406355A8 (CmpTransSearchAddLightWeightTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[7];
  if ( !v2 && !a1[8] )
    return 3222863874LL;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 32);
  if ( (v2 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v5 + 32), 0LL, &v9);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 4192);
    if ( !v7 )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], v7, v6, 0, (__int64)&v9);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}
