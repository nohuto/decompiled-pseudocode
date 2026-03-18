/*
 * XREFs of FsRtlIsExtentDangling @ 0x14084E8D0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x14088C26C (MiIsExtentDangling.c)
 */

__int64 __fastcall FsRtlIsExtentDangling(__int64 a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0LL);
}
