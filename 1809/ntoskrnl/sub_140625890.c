/*
 * XREFs of sub_140625890 @ 0x140625890
 * Callers:
 *     sub_140625C8C @ 0x140625C8C (sub_140625C8C.c)
 *     sub_1406D16CC @ 0x1406D16CC (sub_1406D16CC.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 */

__int64 __fastcall sub_140625890(__int64 a1, __int64 a2, int a3)
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
      sub_140625A74(a1, *v7);
      memset(v7, 0, 0x20uLL);
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
