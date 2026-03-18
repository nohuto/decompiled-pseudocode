/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C0091720
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0015D04 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *a1, int a2)
{
  *((_DWORD *)a1 + 2) = a2;
  RGNMEMOBJ::vInitialize(a1, 0xD8u);
  return a1;
}
