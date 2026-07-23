/*
 * XREFs of KiGetThreadReadyTime @ 0x1401B4AD0
 * Callers:
 *     KeQueryValuesThread @ 0x14008EE70 (KeQueryValuesThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadReadyTime(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl

  result = *(unsigned int *)(a1 + 132);
  v3 = *(_BYTE *)(a1 + 388);
  if ( v3 == 1 || v3 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    return (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436) + result);
  return result;
}
