/*
 * XREFs of MiCreateSystemPageTableTail @ 0x140128020
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  MiFlushTbList((int *)(*(_QWORD *)(a1 + 168) + 72LL), a2, a3, a4);
  return 0LL;
}
