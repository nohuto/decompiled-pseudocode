/*
 * XREFs of sub_180029E90 @ 0x180029E90
 * Callers:
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 */

__int64 __fastcall sub_180029E90(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v5; // rax

  v2 = 0;
  v3 = a2 + 2;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (unsigned int)(a2 + 2) > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else if ( (v3 & 1) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = sub_18006D6B8(v3, a2);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v5 )
      *(_WORD *)(a1 + 2) = v3;
    else
      return (unsigned int)-1073741801;
  }
  return v2;
}
