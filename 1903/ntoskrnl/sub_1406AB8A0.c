/*
 * XREFs of sub_1406AB8A0 @ 0x1406AB8A0
 * Callers:
 *     sub_1400FA510 @ 0x1400FA510 (sub_1400FA510.c)
 * Callees:
 *     bsearch @ 0x1401A04A0 (bsearch.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall sub_1406AB8A0(const void *a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  void *v8; // rax
  unsigned __int16 *v9; // rax

  v8 = bsearch(a1, &unk_1409AFF80, (unsigned int)NumOfElements, 0x10uLL, ExpLicensingDescriptorCompare);
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
