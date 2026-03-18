/*
 * XREFs of MiCreateSystemPageTableTail @ 0x14012DE00
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  MiFlushTbList((int *)(*(_QWORD *)(a1 + 160) + 80LL), a2, a3, a4);
  return 0LL;
}
