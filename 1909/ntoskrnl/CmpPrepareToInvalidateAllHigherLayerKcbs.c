/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140832C60
 * Callers:
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C01C (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F9D60 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbs(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v6[2]; // [rsp+50h] [rbp-10h] BYREF

  v5[1] = a3;
  v6[0] = 0LL;
  v6[1] = 0LL;
  v5[0] = a2;
  CmpInitializeDelayDerefContext(v6);
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)v6,
    (__int64)v5,
    1,
    1);
  CmpDrainDelayDerefContext(v6);
  return HIDWORD(v5[0]);
}
