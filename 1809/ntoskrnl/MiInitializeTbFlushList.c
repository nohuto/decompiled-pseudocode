/*
 * XREFs of MiInitializeTbFlushList @ 0x1400EDB84
 * Callers:
 *     MiEliminateZeroPages @ 0x14066BEB0 (MiEliminateZeroPages.c)
 *     MiUnmapRetpolineStubs @ 0x140853E10 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140854900 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140858ECC (MmDeleteShadowMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeTbFlushList(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
