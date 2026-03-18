/*
 * XREFs of CmpHasKcbBeenMirrored @ 0x140143840
 * Callers:
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpHasKcbBeenMirrored(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x800000) != 0;
}
