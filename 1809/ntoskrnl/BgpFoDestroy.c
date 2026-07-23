/*
 * XREFs of BgpFoDestroy @ 0x1409520F8
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140951E4C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     FopFreeFontData @ 0x1409521C0 (FopFreeFontData.c)
 */

void __fastcall BgpFoDestroy(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 **v7; // rdx
  __int64 v8; // rcx

  if ( FontLibraryInitialized )
  {
    v2 = (__int64 *)FopFontFileListHead;
    while ( v2 != &FopFontFileListHead )
    {
      if ( a1 && v2[2] != a1 )
      {
        v2 = (__int64 *)*v2;
      }
      else
      {
        v3 = (_QWORD **)(v2 + 5);
        while ( 1 )
        {
          v4 = *v3;
          if ( *v3 == v3 )
            break;
          if ( (_QWORD **)v4[1] != v3 )
            goto LABEL_16;
          v5 = (_QWORD *)*v4;
          if ( *(_QWORD **)(*v4 + 8LL) != v4 )
            goto LABEL_16;
          *v3 = v5;
          v5[1] = v3;
          FopFreeFontData();
        }
        v6 = *v2;
        if ( *(__int64 **)(*v2 + 8) != v2 || (v7 = (__int64 **)v2[1], *v7 != v2) )
LABEL_16:
          __fastfail(3u);
        *v7 = (__int64 *)v6;
        v8 = (__int64)v2;
        *(_QWORD *)(v6 + 8) = v7;
        v2 = (__int64 *)*v2;
        BgpFwFreeMemory(v8);
      }
    }
  }
}
