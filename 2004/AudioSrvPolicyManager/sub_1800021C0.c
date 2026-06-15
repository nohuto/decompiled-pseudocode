/*
 * XREFs of sub_1800021C0 @ 0x1800021C0
 * Callers:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DB0 @ 0x180039DB0 (sub_180039DB0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1800021C0(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
