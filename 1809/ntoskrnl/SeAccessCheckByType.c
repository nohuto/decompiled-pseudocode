/*
 * XREFs of SeAccessCheckByType @ 0x1400A9280
 * Callers:
 *     NtAccessCheck @ 0x1400ABBA0 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140127E50 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x1402FE920 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(__int64 a1, __int64 a2)
{
  return SeAccessCheckByTypeWithAdminlessChecks(a1, a2);
}
