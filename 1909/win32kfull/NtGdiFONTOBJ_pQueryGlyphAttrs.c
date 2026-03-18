/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ACEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C009C5BC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C009E55C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C00F7214 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C028D3D0 (FONTOBJ_pQueryGlyphAttrs.c)
 */

void *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v3; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  struct PFT *v9; // rsi
  void *v10; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v12; // r14
  unsigned int cjThis; // esi
  void *v14; // rax
  char v15; // [rsp+60h] [rbp+18h] BYREF
  struct UMPDOBJ *v16; // [rsp+68h] [rbp+20h]

  v3 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v16 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v9 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v9 )
  {
    --*((_DWORD *)v7 + 105);
    return 0LL;
  }
  v10 = 0LL;
  if ( *((_QWORD *)v7 + 42) )
  {
    v10 = (void *)*((_QWORD *)v7 + 42);
  }
  else
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v15, v9);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v15, v7, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v9, v3);
    v12 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v14 = UMPDOBJ::_AllocUserMem(v7, GlyphAttrs->cjThis, 0);
      v10 = v14;
      if ( v14 )
      {
        memmove(v14, v12, cjThis);
        *((_QWORD *)v7 + 42) = v10;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v15, v7, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v15);
  }
  --*((_DWORD *)v7 + 105);
  return v10;
}
