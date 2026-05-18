/*
 * XREFs of sub_18000BDA0 @ 0x18000BDA0
 * Callers:
 *     sub_18000B8E0 @ 0x18000B8E0 (sub_18000B8E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000BDA0(int a1)
{
  dword_180269B70 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_180269B74);
}
