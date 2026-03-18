/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02983B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0087930 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50 (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C02779D0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

char *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, __int64 a2)
{
  ULONG v2; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  struct RFONT *v7; // rsi
  char *v8; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v10; // r14
  ULONG cjThis; // esi
  char *v12; // rax
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
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
  v7 = (struct RFONT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v7 )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  v8 = 0LL;
  if ( *((_QWORD *)ThreadCurrentObj + 42) )
  {
    v8 = (char *)*((_QWORD *)ThreadCurrentObj + 42);
  }
  else
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v13, v7);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v13, ThreadCurrentObj, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v7, v2);
    v10 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v12 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, GlyphAttrs->cjThis, 0);
      v8 = v12;
      if ( v12 )
      {
        memmove(v12, v10, cjThis);
        *((_QWORD *)ThreadCurrentObj + 42) = v8;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v13, ThreadCurrentObj, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v13);
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v8;
}
