/*
 * XREFs of sub_18000BDE4 @ 0x18000BDE4
 * Callers:
 *     sub_18000B8E0 @ 0x18000B8E0 (sub_18000B8E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000BDE4(int a1)
{
  dword_180268B78 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_180268B7C);
}
