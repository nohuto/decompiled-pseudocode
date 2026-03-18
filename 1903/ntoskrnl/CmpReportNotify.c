/*
 * XREFs of CmpReportNotify @ 0x1406338C0
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14062D4D0 (CmpReportNotifyForKcbStack.c)
 */

void __fastcall CmpReportNotify(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  PPRIVILEGE_SET v10[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v10, 0, 0x20uLL);
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  CmpStartKcbStackForTopLayerKcb((__int64)v10, a1, v8, v9);
  CmpReportNotifyForKcbStack((__int64)v10, a2, a3, a4);
  if ( v10[3] )
    CmSiFreeMemory(v10[3]);
}
