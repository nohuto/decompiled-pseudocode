/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1405FD520
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpReportNotify @ 0x1406338C0 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14064CB80 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x14064F450 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     CmpDoWritethroughReparse @ 0x1406BB0C0 (CmpDoWritethroughReparse.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 *     CmpAssignKeySecurity @ 0x140784110 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140825780 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x140833818 (CmpSetKcbAtLayerHeight.c)
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
