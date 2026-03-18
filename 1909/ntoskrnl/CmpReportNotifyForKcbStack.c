/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x140631320
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpReportNotify @ 0x140636EB0 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotifyHelper @ 0x1406313B0 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // edi
  __int64 KcbAtLayerHeight; // rbx
  int v9; // r8d
  __int64 v10; // r9
  __int64 result; // rax

  v7 = a1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  result = CmpReportNotifyHelper(v7, *(_QWORD *)(KcbAtLayerHeight + 32), a2, v9, v10);
  if ( *(PVOID *)(KcbAtLayerHeight + 32) != CmpMasterHive )
    return CmpReportNotifyHelper(v7, (_DWORD)CmpMasterHive, a2, a3, a4);
  return result;
}
