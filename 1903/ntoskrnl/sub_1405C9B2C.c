/*
 * XREFs of sub_1405C9B2C @ 0x1405C9B2C
 * Callers:
 *     sub_1405C9A80 @ 0x1405C9A80 (sub_1405C9A80.c)
 *     sub_1405CA63C @ 0x1405CA63C (sub_1405CA63C.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     sub_1405CA528 @ 0x1405CA528 (sub_1405CA528.c)
 */

__int64 __fastcall sub_1405C9B2C(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rbx

  v3 = 0;
  if ( a3 <= -1 )
    a3 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)a3 > *(_DWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v6 = (unsigned int)a3;
    do
    {
      v7 = (_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1));
      sub_1405CA528(a1, *v7);
      memset(v7, 0, 0x20uLL);
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
