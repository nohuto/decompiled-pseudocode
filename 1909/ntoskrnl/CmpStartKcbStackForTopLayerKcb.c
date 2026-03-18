/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmpDoWritethroughReparse @ 0x140603B90 (CmpDoWritethroughReparse.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpReportNotify @ 0x140636EB0 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406608E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F85C8 (CmpCheckKeyBodyAccess.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077EB0C (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140824E80 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x140832E78 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int16 v4; // si
  PVOID v5; // rbp
  __int64 v8; // rdx
  SIZE_T v10; // r14
  PVOID TransientPoolWithTag; // rax
  __int64 i; // r10
  __int64 v13; // r10

  v4 = *(_WORD *)(a2 + 66);
  v5 = 0LL;
  if ( v4 >= 2 && v4 != 1 )
  {
    v10 = 8LL * (unsigned int)(v4 - 1);
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x35364D43u, a4);
    v5 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, v10);
  }
  *(_WORD *)a1 = v4;
  *(_WORD *)(a1 + 2) = -1;
  *(_QWORD *)(a1 + 24) = v5;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 66);
  v8 = *(unsigned __int16 *)(a2 + 66);
  if ( (_WORD)v8 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; LOWORD(v8) = v8 - 1 )
    {
      CmpSetKcbAtLayerHeight(a1, v8, *(_QWORD *)(i + 16));
      i = *(_QWORD *)(v13 + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return 0LL;
}
