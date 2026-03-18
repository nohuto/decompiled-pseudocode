/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AD160
 * Callers:
 *     <none>
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0052D5C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00549BC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0054B94 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0054CFC (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C011D784 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C028D9F0 (FONTOBJ_cGetGlyphs.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C028DD90 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C028DE1C (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, ULONG64 a5)
{
  ULONG v5; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  struct PFT *v10; // r15
  HGLYPH *v11; // rsi
  ULONG Glyphs; // edi
  struct _GLYPHBITS **v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  struct _GLYPHBITS *v16; // rdx
  struct _GLYPHBITS *v17; // rax
  struct _PATHOBJ *v18; // rax
  PVOID *v19; // rdx
  HGLYPH v21; // [rsp+34h] [rbp-44h] BYREF
  PVOID ppvGlyph[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v23[48]; // [rsp+48h] [rbp-30h] BYREF

  v5 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  ppvGlyph[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v10 || v5 - 1 > 1 )
  {
    --*((_DWORD *)v9 + 105);
    return 0LL;
  }
  v11 = (HGLYPH *)a4;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v11 = (HGLYPH *)MmUserProbeAddress;
    v21 = *v11;
    v11 = &v21;
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v23, v10);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v23, v9, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v10, v5, 1u, v11, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v13 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)ppvGlyph, 0x40u) )
    {
      v16 = *v13;
      if ( v5 == 1 )
      {
        if ( v16 )
        {
          v17 = UMPDOBJ::CacheGlyphBits((char **)v9, v16, v14, v15);
          *(_QWORD *)ppvGlyph[0] = v17;
          Glyphs = v17 != 0LL;
        }
      }
      else if ( v16 )
      {
        v18 = UMPDOBJ::CacheGlyphPath(v9, (struct _PATHOBJ *)v16);
        *(_QWORD *)ppvGlyph[0] = v18;
        Glyphs = v18 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v23, v9, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v19 = (PVOID *)a5;
    if ( a5 >= MmUserProbeAddress )
      v19 = (PVOID *)MmUserProbeAddress;
    *v19 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v23);
  if ( v9 )
    --*((_DWORD *)v9 + 105);
  return Glyphs;
}
