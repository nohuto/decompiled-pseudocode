/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1405FD470
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmEnumerateValueKey @ 0x14064DD70 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpCloseKeyObject @ 0x1406BB480 (CmpCloseKeyObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14082A9C4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082B7F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082BC00 (CmKeyBodyNeedsVirtualImage.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement(v4 + 208, &v10, 32LL);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v8 = *(_DWORD *)(NextElement + 68);
    if ( v8 == 2 || v8 == 11 )
      break;
    NextElement = CmListGetNextElement(v7, &v10, 32LL);
  }
  while ( NextElement );
  if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return NextElement;
}
