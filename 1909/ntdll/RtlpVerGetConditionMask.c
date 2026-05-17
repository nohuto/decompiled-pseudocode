/*
 * XREFs of RtlpVerGetConditionMask @ 0x18007330C
 * Callers:
 *     RtlVerifyVersionInfo @ 0x180072CB0 (RtlVerifyVersionInfo.c)
 *     RtlSwitchedVVI @ 0x180072EE0 (RtlSwitchedVVI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpVerGetConditionMask(unsigned __int64 a1, unsigned int a2)
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
