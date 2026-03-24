/*
 * XREFs of SeAccessCheckByType @ 0x1400A9340
 * Callers:
 *     NtAccessCheck @ 0x1400ABC60 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140127D80 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x1402FE730 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9470 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(__int64 a1, __int64 a2)
{
  return SeAccessCheckByTypeWithAdminlessChecks(a1, a2);
}
