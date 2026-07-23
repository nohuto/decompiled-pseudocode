/*
 * XREFs of KiComputeNewSystemTime @ 0x140117A6C
 * Callers:
 *     KiUpdateTimeAssist @ 0x1401178A8 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x14016AE28 (KiUpdateSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewSystemTime(unsigned __int64 a1)
{
  unsigned __int128 v1; // rax
  unsigned __int64 v2; // r8

  *((_QWORD *)&v1 + 1) = 0LL;
  if ( a1 > MEMORY[0xFFFFF78000000348] )
  {
    v2 = a1 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v2 <<= MEMORY[0xFFFFF78000000368];
    v1 = v2 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    KiSystemTimeErrorAccumulator += v1;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v1 )
      ++*((_QWORD *)&v1 + 1);
  }
  return *((_QWORD *)&v1 + 1) + MEMORY[0xFFFFF78000000014];
}
