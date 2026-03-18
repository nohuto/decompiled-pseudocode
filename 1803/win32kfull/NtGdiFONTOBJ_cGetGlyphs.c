/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C0284940
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007777C (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C011FA80 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0263D80 (FONTOBJ_cGetGlyphs.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0264130 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C02641BC (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, ULONG64 a5)
{
  ULONG v5; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  struct RFONT *v10; // r14
  HGLYPH *v11; // rsi
  ULONG Glyphs; // edi
  struct _GLYPHBITS **v13; // rsi
  struct _GLYPHBITS *v14; // rdx
  struct _GLYPHBITS *v15; // rax
  struct _PATHOBJ *v16; // rax
  PVOID *v17; // rdx
  HGLYPH v19; // [rsp+34h] [rbp-54h] BYREF
  PVOID ppvGlyph[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v21[64]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  ppvGlyph[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = (struct RFONT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
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
    v19 = *v11;
    v11 = &v19;
  }
  RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v21, v10);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v21, v9, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v10, v5, 1u, v11, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v13 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)ppvGlyph, 0x40u) )
    {
      v14 = *v13;
      if ( v5 == 1 )
      {
        if ( v14 )
        {
          v15 = UMPDOBJ::CacheGlyphBits((char **)v9, v14);
          *(_QWORD *)ppvGlyph[0] = v15;
          Glyphs = v15 != 0LL;
        }
      }
      else if ( v14 )
      {
        v16 = UMPDOBJ::CacheGlyphPath(v9, (struct _PATHOBJ *)v14);
        *(_QWORD *)ppvGlyph[0] = v16;
        Glyphs = v16 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v21, v9, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v17 = (PVOID *)a5;
    if ( a5 >= MmUserProbeAddress )
      v17 = (PVOID *)MmUserProbeAddress;
    *v17 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v21);
  if ( v9 )
    --*((_DWORD *)v9 + 105);
  return Glyphs;
}
