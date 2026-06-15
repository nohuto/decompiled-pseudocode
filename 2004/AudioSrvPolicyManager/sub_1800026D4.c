/*
 * XREFs of sub_1800026D4 @ 0x1800026D4
 * Callers:
 *     sub_180003428 @ 0x180003428 (sub_180003428.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800026D4(int a1)
{
  dword_18004FE20 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18004FE00);
}
