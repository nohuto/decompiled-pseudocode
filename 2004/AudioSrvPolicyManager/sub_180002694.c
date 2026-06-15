/*
 * XREFs of sub_180002694 @ 0x180002694
 * Callers:
 *     sub_180003428 @ 0x180003428 (sub_180003428.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002694(int a1)
{
  dword_18004FD98 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18004FE10);
}
