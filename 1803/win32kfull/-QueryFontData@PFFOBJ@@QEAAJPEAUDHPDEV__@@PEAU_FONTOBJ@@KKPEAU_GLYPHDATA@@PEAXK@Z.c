/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00800D4 (xInsertMetricsRFONTOBJ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0084734 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0084F4C (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0127EC4 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02A612C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02A6244 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  unsigned int v8; // edi
  __int64 (__fastcall *v12)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-98h] BYREF

  v8 = -1;
  v12 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2904LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, this);
    v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v8;
}
