/*
 * XREFs of NtCompareSigningLevels @ 0x1406CCF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 NtCompareSigningLevels()
{
  int v0; // eax

  v0 = 0;
  if ( qword_14040DDC0 )
    v0 = ((__int64 (*)(void))qword_14040DDC0)();
  return v0 == 0 ? 0xC0000428 : 0;
}
