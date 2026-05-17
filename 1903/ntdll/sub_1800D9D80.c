/*
 * XREFs of sub_1800D9D80 @ 0x1800D9D80
 * Callers:
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     sub_1800D9C9C @ 0x1800D9C9C (sub_1800D9C9C.c)
 *     sub_1800D9D14 @ 0x1800D9D14 (sub_1800D9D14.c)
 */

__int64 sub_1800D9D80()
{
  int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // eax
  char v3; // al

  v0 = dword_180164EE8;
  v1 = 0;
  if ( (dword_180164EE8 & 0x8001) != 0 && !sub_1800D9D14() )
    v1 = -1073741823;
  if ( (v0 & 4) != 0 )
  {
    v2 = sub_1800D9C9C();
    v0 = dword_180164EE8;
    v1 = v2;
  }
  if ( (v0 & 8) != 0 )
  {
    if ( NtCurrentPeb()->BeingDebugged || MEMORY[0x7FFE02D4] )
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x10000;
    v0 = dword_180164EE8;
  }
  v3 = byte_180166551;
  if ( (v0 & 0x40000) != 0 )
    v3 = 1;
  byte_180166551 = v3;
  return v1;
}
