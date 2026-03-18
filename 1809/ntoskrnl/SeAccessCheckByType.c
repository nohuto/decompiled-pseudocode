/*
 * XREFs of SeAccessCheckByType @ 0x1400A9320
 * Callers:
 *     NtAccessCheck @ 0x1400ABC40 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140127D60 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x1402FE630 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(__int64 a1, __int64 a2)
{
  return SeAccessCheckByTypeWithAdminlessChecks(a1, a2);
}
