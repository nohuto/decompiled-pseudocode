/*
 * XREFs of vMarkFreeW32Thread @ 0x1C0069B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Thread(__int64 a1)
{
  *(_DWORD *)(a1 + 1200) |= 0x1000u;
}
