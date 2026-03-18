/*
 * XREFs of sub_1405CA02C @ 0x1405CA02C
 * Callers:
 *     sub_1405C9F80 @ 0x1405C9F80 (sub_1405C9F80.c)
 *     sub_1405CAB3C @ 0x1405CAB3C (sub_1405CAB3C.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     sub_1405CAA28 @ 0x1405CAA28 (sub_1405CAA28.c)
 */

__int64 __fastcall sub_1405CA02C(__int64 a1, __int64 a2, int a3)
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
      sub_1405CAA28(a1, *v7);
      memset(v7, 0, 0x20uLL);
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
