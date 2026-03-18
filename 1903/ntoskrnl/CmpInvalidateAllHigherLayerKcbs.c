/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x140833260
 * Callers:
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F7FA0 (CmpEnumerateAllHigherLayerKcbs.c)
 */

_UNKNOWN **__fastcall CmpInvalidateAllHigherLayerKcbs(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
           a4,
           (__int64)v5,
           1,
           1);
}
