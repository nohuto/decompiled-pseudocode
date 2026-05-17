/*
 * XREFs of sub_180095C64 @ 0x180095C64
 * Callers:
 *     sub_180095914 @ 0x180095914 (sub_180095914.c)
 *     sub_180095CA0 @ 0x180095CA0 (sub_180095CA0.c)
 * Callees:
 *     sub_180096734 @ 0x180096734 (sub_180096734.c)
 */

__int64 __fastcall sub_180095C64(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 - 1;
  if ( v1 <= 0 )
    return (unsigned int)sub_180096734();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
