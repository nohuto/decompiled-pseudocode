/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1405CBDE0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CB1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1405CB550 (CmpQueryKeySecurity.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14063C100 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x140695458 (CmpReportNotify.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407307D8 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x14075B97C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EAC50 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED370 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED64C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A38 (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48E0 (CmpCheckKeyBodyAccess.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 * Callees:
 *     CmpStartKcbStack @ 0x140643FF0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406440B0 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 58));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
