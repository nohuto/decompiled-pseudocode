/*
 * XREFs of NtCompareSigningLevels @ 0x1406EC040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 NtCompareSigningLevels()
{
  int v0; // eax

  v0 = 0;
  if ( qword_140436440 )
    v0 = ((__int64 (*)(void))qword_140436440)();
  return v0 == 0 ? 0xC0000428 : 0;
}
