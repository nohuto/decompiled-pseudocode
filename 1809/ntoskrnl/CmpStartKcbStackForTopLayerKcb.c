/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CC1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1405CC550 (CmpQueryKeySecurity.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x1406965F8 (CmpReportNotify.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407319A8 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x14075CB4C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EBE30 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407EE550 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 * Callees:
 *     CmpStartKcbStack @ 0x140644FF0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406450B0 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 58));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
