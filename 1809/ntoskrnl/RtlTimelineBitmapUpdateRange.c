/*
 * XREFs of RtlTimelineBitmapUpdateRange @ 0x14011EE08
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x1406088D0 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlTimelineBitmapUpdateRange(unsigned __int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  int v7; // edx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int64 v10; // [rsp+8h] [rbp+8h]

  v5 = *a1;
  LODWORD(v10) = v5;
  result = HIDWORD(v5);
  if ( a3 <= (unsigned int)v5 )
  {
    v9 = v5 - a3;
    if ( v9 >= 0x20 )
      return result;
    v7 = 1 << v9;
  }
  else
  {
    LODWORD(v10) = a3;
    v7 = 1;
    if ( a3 - (unsigned int)v5 < 0x20 )
      LODWORD(result) = HIDWORD(v5) << (a3 - v5);
    else
      LODWORD(result) = 0;
  }
  v8 = v7 | result;
  while ( 1 )
  {
    HIDWORD(v10) = v8;
    if ( a2 >= a3 )
      break;
    v7 *= 2;
    if ( !v7 )
      break;
    v8 |= v7;
    ++a2;
  }
  result = v10;
  *a1 = v10;
  return result;
}
