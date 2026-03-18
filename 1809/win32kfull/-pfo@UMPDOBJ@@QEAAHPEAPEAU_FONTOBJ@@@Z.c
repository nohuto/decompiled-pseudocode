/*
 * XREFs of ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C008BC48
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C008B6E0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1C0120BE0 (-UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C028CCC0 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C028D3B0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C028E690 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C028EE20 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008CCC4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C008E458 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C008E834 (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::pfo(UMPDOBJ *this, __m128i **a2)
{
  __m128i *v2; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i v11; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  char v14; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 1LL;
  v5 = v2[1];
  v6 = v2[3];
  v11 = *v2;
  v7 = v2[2];
  v12[0] = v5;
  v8 = _mm_srli_si128(v5, 8).m128i_u64[0];
  v12[1] = v7;
  v12[2] = v6;
  if ( v8 >= (unsigned __int64)MmSystemRangeStart )
  {
    AutoSharedPushLock::AutoSharedPushLock((AutoSharedPushLock *)&v13, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( (unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
                            v9,
                            (char *)v12 + 8,
                            &v14) )
      v8 = 0LL;
    *((_QWORD *)&v12[0] + 1) = v8;
    if ( v13 )
    {
      GreReleasePushLockShared(v13);
      KeLeaveCriticalRegion();
    }
  }
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 176), (void **)a2, 0x40u, &v11);
}
