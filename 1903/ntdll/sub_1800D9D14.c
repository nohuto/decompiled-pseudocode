/*
 * XREFs of sub_1800D9D14 @ 0x1800D9D14
 * Callers:
 *     sub_1800D9D80 @ 0x1800D9D80 (sub_1800D9D80.c)
 * Callees:
 *     <none>
 */

char sub_1800D9D14()
{
  if ( (dword_180164EE8 & 1) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
    *Value |= 1u;
  }
  else if ( (dword_180164EE8 & 0x8000) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
  }
  return 1;
}
