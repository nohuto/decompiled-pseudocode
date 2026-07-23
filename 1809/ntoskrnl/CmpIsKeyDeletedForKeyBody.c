/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1405D8310
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1405D1194 (CmQueryMultipleValueKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmpCloseKeyObject @ 0x140695F40 (CmpCloseKeyObject.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407EE550 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F13C8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F2744 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
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
