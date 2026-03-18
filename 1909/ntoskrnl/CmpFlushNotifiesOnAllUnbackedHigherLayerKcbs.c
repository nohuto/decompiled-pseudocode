/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406F9D10
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F9BA0 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083C694 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F9D60 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(int a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0x100000008LL;
  BYTE5(v5) = a4;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int)CmpFlushNotifiesPreCallback,
           (unsigned int)CmpFlushNotifiesPostCallback,
           a3,
           (__int64)&v5,
           a4,
           1);
}
