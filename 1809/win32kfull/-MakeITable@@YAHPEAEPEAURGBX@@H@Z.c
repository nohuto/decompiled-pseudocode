/*
 * XREFs of ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00E521C
 * Callers:
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00E4F48 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C0145814 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00E534C (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?MakeITable256@@YAHPEAE@Z @ 0x1C027F5C0 (-MakeITable256@@YAHPEAE@Z.c)
 *     ?MakeITableMono@@YAHPEAE@Z @ 0x1C027F614 (-MakeITableMono@@YAHPEAE@Z.c)
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C027F668 (-MakeITableVGA@@YAHPEAE@Z.c)
 */

__int64 __fastcall MakeITable(unsigned __int8 *a1, struct RGBX *a2, int a3)
{
  int v3; // r14d
  int v4; // edi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rbp
  unsigned int v8; // esi
  int v9; // r8d
  struct RGBX *v10; // r9
  unsigned int *v11; // rax
  int v12; // r8d
  unsigned int *v13; // r12
  __int64 v15; // r15
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = a1;
  v7 = a1;
  if ( a2 )
  {
    v16 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v8 = 1;
    if ( v4 >= 20 )
    {
      v9 = 0;
      v10 = a2;
      do
      {
        if ( *(_DWORD *)v10 != logDefaultPal[v9 % 20 + 1] )
          break;
        ++v9;
        v10 = (struct RGBX *)((char *)v10 + 4);
      }
      while ( v9 < v4 );
      if ( v9 == v4 )
      {
        if ( gpDefITable )
        {
          memmove(v6, gpDefITable, 0x8000uLL);
LABEL_11:
          SEMOBJ::vUnlock((SEMOBJ *)&v16);
          return v8;
        }
        v7 = (unsigned __int8 *)PALLOCMEM2(0x8000uLL, 1886221383LL, 0);
        v4 = 20;
        if ( !v7 )
          v7 = v6;
      }
    }
    v11 = (unsigned int *)PALLOCMEM2(0x20000uLL, 1886221383LL, 0);
    v13 = v11;
    if ( v11 )
    {
      inv_cmap(v4, a2, v12, v11, v7);
      Win32FreePool(v13);
      v3 = 1;
      if ( v7 != v6 )
      {
        memmove(v6, v7, 0x8000uLL);
        gpDefITable = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
    }
    v8 = v3;
    goto LABEL_11;
  }
  switch ( a3 )
  {
    case 2:
      return MakeITableMono(a1);
    case 16:
      return MakeITableVGA(a1);
    case 20:
      MakeITableVGA(a1);
      v8 = 1;
      v15 = 0x8000LL;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v15;
      }
      while ( v15 );
      return v8;
    case 256:
      return MakeITable256(a1);
    default:
      return 0LL;
  }
}
