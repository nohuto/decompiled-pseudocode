/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1405DC11C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x140695458 (CmpReportNotify.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405D8AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotifyHelper @ 0x1405DBEE0 (CmpReportNotifyHelper.c)
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
