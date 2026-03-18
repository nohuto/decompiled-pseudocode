/*
 * XREFs of BgpFwMarkHiberPhase @ 0x140994060
 * Callers:
 *     BgMarkHiberPhase @ 0x1409935C8 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14015F820 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_14042C100; (__int64 *)i != &qword_14042C100; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
