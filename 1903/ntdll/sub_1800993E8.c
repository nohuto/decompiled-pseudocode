/*
 * XREFs of sub_1800993E8 @ 0x1800993E8
 * Callers:
 *     sub_1800990B4 @ 0x1800990B4 (sub_1800990B4.c)
 *     sub_18009941C @ 0x18009941C (sub_18009941C.c)
 * Callees:
 *     sub_180096734 @ 0x180096734 (sub_180096734.c)
 */

__int64 __fastcall sub_1800993E8(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 - 1;
  if ( v1 <= 0 )
    return (unsigned int)sub_180096734();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
