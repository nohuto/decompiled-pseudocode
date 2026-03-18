/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007777C (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C011FA80 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0263DF0 (FONTOBJ_pQueryGlyphAttrs.c)
 */

char *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, __int64 a2)
{
  ULONG v2; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  struct RFONT *v8; // rsi
  char *v9; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v11; // r14
  unsigned int cjThis; // esi
  char *v13; // rax
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v8 = (struct RFONT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v8 )
  {
    --*((_DWORD *)v6 + 105);
    return 0LL;
  }
  v9 = 0LL;
  if ( *((_QWORD *)v6 + 42) )
  {
    v9 = (char *)*((_QWORD *)v6 + 42);
  }
  else
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v14, v8);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v14, v6, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v8, v2);
    v11 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v13 = UMPDOBJ::_AllocUserMem(v6, GlyphAttrs->cjThis, 0);
      v9 = v13;
      if ( v13 )
      {
        memmove(v13, v11, cjThis);
        *((_QWORD *)v6 + 42) = v9;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v14, v6, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v14);
  }
  --*((_DWORD *)v6 + 105);
  return v9;
}
