/*
 * XREFs of ?PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z @ 0x1C00BC85C
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00BEA68 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0x1C0259C80 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFntCacheDrv(int a1, struct PDEV *a2, __int16 a3)
{
  __int64 v4; // rbx
  int v5; // edi
  struct PDEV **i; // rax
  __int64 v7; // rax

  if ( (dword_1C0326C50 & 3) != 0 )
  {
    v4 = qword_1C0326C58;
    if ( qword_1C0326C58 )
    {
      if ( a1 )
      {
        v5 = 0;
        for ( i = (struct PDEV **)&gaFntPDev; a2 != *i; ++i )
        {
          if ( (unsigned int)++v5 >= 6 )
            return;
        }
        if ( v5 )
        {
          if ( (dword_1C0326C50 & 2) != 0 )
          {
            v7 = SearchFntCacheNewLink();
            if ( v7 )
            {
              if ( *(_WORD *)(v7 + 14) )
              {
                *(_DWORD *)(v7 + 24) |= 1u;
              }
              else
              {
                *(_WORD *)(v7 + 12) = v5;
                *(_WORD *)(v7 + 14) = a3;
              }
            }
            else
            {
              *(_DWORD *)(v4 + 16) |= 2u;
            }
            *(_DWORD *)(v4 + 20) = 1;
          }
          else
          {
            *(_DWORD *)(qword_1C0326C58 + 16) |= 2u;
          }
        }
      }
    }
  }
}
