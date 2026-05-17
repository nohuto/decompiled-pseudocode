/*
 * XREFs of sub_18004FE48 @ 0x18004FE48
 * Callers:
 *     sub_18004FAA8 @ 0x18004FAA8 (sub_18004FAA8.c)
 * Callees:
 *     sub_18004FF08 @ 0x18004FF08 (sub_18004FF08.c)
 */

__int64 __fastcall sub_18004FE48(__int64 a1, char *a2)
{
  char v2; // si
  char *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rax

  v2 = *a2;
  v3 = a2;
  if ( (*a2 & 4) != 0 )
    v5 = *((_QWORD *)a2 + 3);
  else
    v5 = *((unsigned __int16 *)a2 + 12);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (unsigned __int64)&a2[32 * v5];
  result = sub_18004FF08(
             v6 + 32,
             8 * ((__int64)&a2[-*(_QWORD *)(v6 + 40)] >> *(_DWORD *)(v6 + 24) << *(_DWORD *)(v6 + 24)),
             8 * (1LL << *(_DWORD *)(v6 + 24)));
  if ( (v2 & 4) == 0 )
  {
    while ( 1 )
    {
      v3 += 32;
      if ( (unsigned __int64)v3 >= v7 )
        break;
      v9 = *(_QWORD *)(a1 + 24);
      result = sub_18004FF08(
                 v9 + 32,
                 8 * ((__int64)&v3[-*(_QWORD *)(v9 + 40)] >> *(_DWORD *)(v9 + 24) << *(_DWORD *)(v9 + 24)),
                 8 * (1LL << *(_DWORD *)(v9 + 24)));
    }
  }
  return result;
}
