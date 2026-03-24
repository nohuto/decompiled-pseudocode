/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1405D7310
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14026BF18 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CCCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D68BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     CmpCloseKeyObject @ 0x140694D80 (CmpCloseKeyObject.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED350 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F01C8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0328 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F1544 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F1948 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48C0 (CmpCheckKeyBodyAccess.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1408022FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmEqualTrans @ 0x1405A94E8 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1406948C0 (CmListGetNextElement.c)
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
