/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0055368
 * Callers:
 *     GreReferenceObject @ 0x1C000E4C4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0011920 (NtGdiDdDDICreateDCFromMemory.c)
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0053A60 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009A870 (hsurfCreateCompatibleSurface.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011D9A0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngCreateBitmap @ 0x1C012D9A0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C0130410 (NtGdiEngDeleteSurface.c)
 *     EngMarkBandingSurface @ 0x1C01305C0 (EngMarkBandingSurface.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0130DE0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
}
