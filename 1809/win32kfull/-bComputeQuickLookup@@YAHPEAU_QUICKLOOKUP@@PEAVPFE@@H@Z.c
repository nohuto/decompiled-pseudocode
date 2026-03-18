/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00C61E8
 * Callers:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C3C74 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C00C520C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00867CC (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00868EC (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C00C520C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  ULONG v3; // ebx
  struct _QUICKLOOKUP *v5; // r14
  unsigned __int16 v6; // bp
  int v7; // edi
  struct _FD_GLYPHSET *v8; // rax
  struct _FD_GLYPHSET *v9; // r15
  ULONG cRuns; // eax
  WCRUN *awcrun; // rdx
  __int64 v12; // r10
  int wcLow; // r9d
  __int16 v14; // r8
  int cGlyphs; // edi
  void **v16; // r14
  _DWORD *v17; // r8
  USHORT v18; // r11
  __int64 v19; // rbp
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v23; // r10
  unsigned int v24; // edi
  unsigned int v25; // r8d
  unsigned int v26; // eax
  _DWORD *v27; // rdi
  unsigned __int64 i; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // [rsp+68h] [rbp+10h]
  __int64 *v32; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v32 = (__int64 *)a2;
  v5 = a1;
  v6 = 0;
  LOWORD(v7) = -1;
  if ( a2 )
  {
    if ( !a1 )
      v5 = PFEOBJ::pql((struct PFE **)&v32);
    if ( !a3 && *((_QWORD *)v5 + 1) )
    {
      return 1;
    }
    else
    {
      v8 = PFEOBJ::pfdg(&v32);
      v9 = v8;
      if ( v8 )
      {
        cRuns = v8->cRuns;
        if ( cRuns )
        {
          awcrun = v9->awcrun;
          v12 = cRuns;
          do
          {
            wcLow = awcrun->wcLow;
            v14 = wcLow;
            if ( (unsigned __int16)v7 <= (unsigned __int16)wcLow )
              v14 = v7;
            cGlyphs = awcrun->cGlyphs;
            if ( v6 < (unsigned int)(cGlyphs + wcLow) )
              v6 = cGlyphs + wcLow - 1;
            ++awcrun;
            LOWORD(v7) = v14;
            --v12;
          }
          while ( v12 );
        }
        *(_WORD *)v5 = v7;
        *((_WORD *)v5 + 1) = v6;
        v16 = (void **)((char *)v5 + 8);
        if ( a3 )
        {
          if ( *v16 )
            memset(*v16, 0, 0x2000uLL);
          else
            *v16 = PALLOCMEM2(0x2000uLL, 1802400071LL, 1);
          LOWORD(v7) = 0;
        }
        else
        {
          *v16 = PALLOCMEM2((unsigned int)(4 * ((v6 - (unsigned __int16)v7 + 32) / 32)), 1802400071LL, 1);
        }
        if ( *v16 )
        {
          if ( v9->cRuns )
          {
            v7 = (unsigned __int16)v7;
            v31 = (unsigned __int16)v7;
            do
            {
              v17 = *v16;
              v18 = v9->awcrun[v3].cGlyphs;
              v19 = (unsigned int)((v9->awcrun[v3].wcLow - v7) / 32);
              v20 = (v9->awcrun[v3].wcLow - 1 + v18 - v7) / 32;
              v21 = v20;
              if ( (_DWORD)v19 == v20 )
              {
                v17[v19] |= (unsigned int)(-1 << (32 - v18)) >> ((v9->awcrun[v3].wcLow - v7) % 32);
              }
              else
              {
                v23 = (unsigned int)(v19 + 1);
                v17[v19] |= 0xFFFFFFFF >> ((v9->awcrun[v3].wcLow - v7) % 32);
                v24 = v20 - v23;
                v25 = v19 + 1;
                if ( (unsigned int)v23 < v20
                  && v24 >= 4
                  && ((char *)*v16 + 4 * v23 > (char *)v16 || (char *)*v16 + 4 * v20 - 4 < (char *)v16) )
                {
                  v26 = v20 - (v24 & 3);
                  do
                    v25 += 4;
                  while ( v25 < v26 );
                  v27 = (char *)*v16 + 4 * v23;
                  for ( i = (16 * ((unsigned __int64)(v26 - (unsigned int)v23 + 3) >> 2)) >> 2; i; --i )
                    *v27++ = -1;
                }
                if ( v25 < (unsigned int)v21 )
                {
                  v29 = 4LL * v25;
                  v30 = (unsigned int)v21 - v25;
                  do
                  {
                    *(_DWORD *)((char *)*v16 + v29) = -1;
                    v29 += 4LL;
                    --v30;
                  }
                  while ( v30 );
                }
                *((_DWORD *)*v16 + v21) |= -1 << (31 - (v9->awcrun[v3].wcLow - v31 - 1 + v9->awcrun[v3].cGlyphs) % 32);
              }
              v7 = v31;
              ++v3;
            }
            while ( v3 < v9->cRuns );
          }
          PFEOBJ::vFreepfdg(&v32);
          return 1;
        }
        else
        {
          PFEOBJ::vFreepfdg(&v32);
        }
      }
    }
  }
  return v3;
}
