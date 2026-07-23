/*
 * XREFs of FopFreeFontData @ 0x1409521C0
 * Callers:
 *     BgpFoDestroy @ 0x1409520F8 (BgpFoDestroy.c)
 *     FopInitializeFonts @ 0x1409FB994 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     FopFreeMappingTable @ 0x140952234 (FopFreeMappingTable.c)
 */

void __fastcall FopFreeFontData(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 *v6; // rsi
  __int64 v7; // rcx

  v1 = a1 + 13;
  v3 = (_QWORD *)a1[13];
  while ( v3 != v1 )
  {
    v5 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    v6 = *(__int64 **)(v5 + 80);
    if ( v6 )
    {
      if ( *v6 )
        BgpFwFreeMemory(*v6);
      v7 = v6[2];
      if ( v7 )
        BgpFwFreeMemory(v7);
      BgpFwFreeMemory((__int64)v6);
    }
    BgpFwFreeMemory(v5);
  }
  v4 = a1[4];
  if ( v4 )
    BgpFwFreeMemory(v4);
  if ( a1[3] )
    FopFreeMappingTable();
  BgpFwFreeMemory((__int64)a1);
}
