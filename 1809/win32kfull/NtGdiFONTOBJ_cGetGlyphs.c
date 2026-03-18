/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C0298150
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0087930 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50 (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0277960 (FONTOBJ_cGetGlyphs.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0277D20 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C0277DAC (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, ULONG64 a5)
{
  ULONG v5; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  struct RFONT *v9; // r14
  HGLYPH *v10; // rsi
  ULONG Glyphs; // ebx
  struct _GLYPHBITS **v12; // rsi
  struct _GLYPHBITS *v13; // rdx
  struct _GLYPHBITS *v14; // rax
  struct _PATHOBJ *v15; // rax
  PVOID *v16; // rdx
  HGLYPH v18; // [rsp+34h] [rbp-54h] BYREF
  PVOID ppvGlyph[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v20[64]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  ppvGlyph[1] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  v9 = (struct RFONT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v9 || v5 - 1 > 1 )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  v10 = (HGLYPH *)a4;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v10 = (HGLYPH *)MmUserProbeAddress;
    v18 = *v10;
    v10 = &v18;
  }
  RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v20, v9);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v20, ThreadCurrentObj, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v9, v5, 1u, v10, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v12 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(ThreadCurrentObj, (const void **)ppvGlyph, 0x40u) )
    {
      v13 = *v12;
      if ( v5 == 1 )
      {
        if ( v13 )
        {
          v14 = UMPDOBJ::CacheGlyphBits((char **)ThreadCurrentObj, v13);
          *(_QWORD *)ppvGlyph[0] = v14;
          Glyphs = v14 != 0LL;
        }
      }
      else if ( v13 )
      {
        v15 = UMPDOBJ::CacheGlyphPath(ThreadCurrentObj, (struct _PATHOBJ *)v13);
        *(_QWORD *)ppvGlyph[0] = v15;
        Glyphs = v15 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v20, ThreadCurrentObj, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v16 = (PVOID *)a5;
    if ( a5 >= MmUserProbeAddress )
      v16 = (PVOID *)MmUserProbeAddress;
    *v16 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v20);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return Glyphs;
}
