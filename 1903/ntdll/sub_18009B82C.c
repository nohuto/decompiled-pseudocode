/*
 * XREFs of sub_18009B82C @ 0x18009B82C
 * Callers:
 *     sub_18009A918 @ 0x18009A918 (sub_18009A918.c)
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

__int64 __fastcall sub_18009B82C(unsigned __int16 a1, __int64 a2)
{
  int v3; // r9d
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  int v6; // eax

  if ( !a2 )
  {
    sub_18008C6D8();
    return 0xFFFFLL;
  }
  if ( a1 == 0xFFFF )
    return 0xFFFFLL;
  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 1) == 0 && (v3 & 0x82) != 0x80 )
    return 0xFFFFLL;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 < (unsigned __int64)(*(_QWORD *)(a2 + 16) + 2LL) )
  {
    if ( *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 36) < 2u )
      return 0xFFFFLL;
    v4 = *(_QWORD *)(a2 + 16) + 2LL;
  }
  v5 = (unsigned __int16 *)(v4 - 2);
  *(_QWORD *)a2 = v5;
  if ( (v3 & 0x40) != 0 )
  {
    if ( *v5 != a1 )
    {
      *(_QWORD *)a2 = v5 + 1;
      return 0xFFFFLL;
    }
  }
  else
  {
    *v5 = a1;
  }
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 8) += 2;
  *(_DWORD *)(a2 + 24) = v6 & 0xFFFFFFEE | 1;
  return a1;
}
