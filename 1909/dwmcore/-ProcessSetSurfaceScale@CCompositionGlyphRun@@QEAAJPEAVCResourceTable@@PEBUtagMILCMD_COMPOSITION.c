/*
 * XREFs of ?ProcessSetSurfaceScale@CCompositionGlyphRun@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONGLYPHRUN_SETSURFACESCALE@@@Z @ 0x1801CF928
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionGlyphRun::ProcessSetSurfaceScale(
        CCompositionGlyphRun *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONGLYPHRUN_SETSURFACESCALE *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 10) = *((_QWORD *)a3 + 1);
  (*(void (__fastcall **)(CCompositionGlyphRun *, _QWORD, _QWORD))(v3 + 64))(this, 0LL, 0LL);
  return 0LL;
}
