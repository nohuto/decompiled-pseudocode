/*
 * XREFs of sub_180072D6C @ 0x180072D6C
 * Callers:
 *     RtlVerifyVersionInfo @ 0x180072710 (RtlVerifyVersionInfo.c)
 *     RtlSwitchedVVI @ 0x180072940 (RtlSwitchedVVI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180072D6C(unsigned __int64 a1, unsigned int a2)
{
  int v3; // ecx
  char v4; // r8

  v3 = 0;
  do
  {
    v4 = v3++;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * v4)) & 7;
}
