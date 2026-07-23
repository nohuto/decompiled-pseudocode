/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1405DD11C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x1406965F8 (CmpReportNotify.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotifyHelper @ 0x1405DCEE0 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 KcbAtLayerHeight; // rbx
  int v9; // r8d
  __int64 v10; // r9
  __int64 result; // rax

  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  result = CmpReportNotifyHelper(a1, *(_QWORD *)(KcbAtLayerHeight + 24), a2, v9, v10);
  if ( *(PVOID *)(KcbAtLayerHeight + 24) != CmpMasterHive )
    return CmpReportNotifyHelper(a1, (__int64)CmpMasterHive, a2, a3, a4);
  return result;
}
