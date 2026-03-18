/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0053720
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C004F4D4 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C004F840 (xInsertMetricsRFONTOBJ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00517A8 (GreGetGlyphOutlineInternal.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0074344 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C00748BC (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C0109FA8 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C014A798 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C014A8BC (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CDC8C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02CDE30 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00537CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0080BA0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  __int64 (__fastcall *v11)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  unsigned int v12; // esi
  ULONG_PTR *v14; // rbx
  __int64 v15; // rdi
  ULONG_PTR *v16; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-10h]

  v11 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2912LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v16, this);
  v12 = v11(a2, a3, a4, a5, a6, a7, a8);
  if ( v17 )
  {
    v14 = v16;
    v15 = v17;
    do
    {
      EngUnmapFontFileFD(*v14++);
      --v15;
    }
    while ( v15 );
  }
  return v12;
}
