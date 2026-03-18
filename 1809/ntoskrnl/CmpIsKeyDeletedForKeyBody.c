/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1405D7310
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D68BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmpCloseKeyObject @ 0x140694DA0 (CmpCloseKeyObject.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED370 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F01E8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0348 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F1564 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F1968 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48E0 (CmpCheckKeyBodyAccess.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14080231C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmEqualTrans @ 0x1405A94E8 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1406948E0 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 NextElement; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v8 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 200LL, &v8, 32LL);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v6 = *(_DWORD *)(NextElement + 68);
    if ( v6 == 2 || v6 == 11 )
      break;
    NextElement = CmListGetNextElement(v5 + 200, &v8, 32LL);
  }
  while ( NextElement );
  if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v4) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return NextElement;
}
