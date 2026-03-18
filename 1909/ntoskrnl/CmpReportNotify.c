/*
 * XREFs of CmpReportNotify @ 0x140636EB0
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmpProcessLightWeightUOW @ 0x1406E3990 (CmpProcessLightWeightUOW.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x140631320 (CmpReportNotifyForKcbStack.c)
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
