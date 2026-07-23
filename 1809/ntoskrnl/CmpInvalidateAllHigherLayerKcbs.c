/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x1407FB184
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 */

PVOID __fastcall CmpInvalidateAllHigherLayerKcbs(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+5Ch] [rbp+24h]

  v4 = a2;
  v5 = a3;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
           (__int64)&v4,
           1,
           1);
}
