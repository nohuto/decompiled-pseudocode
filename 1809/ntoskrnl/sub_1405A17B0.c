/*
 * XREFs of sub_1405A17B0 @ 0x1405A17B0
 * Callers:
 *     sub_1400076D0 @ 0x1400076D0 (sub_1400076D0.c)
 * Callees:
 *     bsearch @ 0x140195E10 (bsearch.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall sub_1405A17B0(const void *a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  void *v8; // rax
  unsigned __int16 *v9; // rdx

  v8 = bsearch(a1, &unk_140970D00, (unsigned int)NumOfElements, 0x10uLL, sub_1405A2530);
  if ( v8 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
    *a5 = v9[3];
    if ( a2 )
      *a2 = v9[2];
    if ( v9[3] > a4 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      if ( a3 )
        memmove(a3, (char *)v9 + v9[1] + 16, v9[3]);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
}
