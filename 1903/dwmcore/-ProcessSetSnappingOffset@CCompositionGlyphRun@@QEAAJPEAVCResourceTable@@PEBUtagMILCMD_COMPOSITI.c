/*
 * XREFs of ?ProcessSetSnappingOffset@CCompositionGlyphRun@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONGLYPHRUN_SETSNAPPINGOFFSET@@@Z @ 0x1801D1098
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionGlyphRun::ProcessSetSnappingOffset(
        CCompositionGlyphRun *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONGLYPHRUN_SETSNAPPINGOFFSET *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 11) = *((_QWORD *)a3 + 1);
  (*(void (__fastcall **)(CCompositionGlyphRun *, _QWORD, _QWORD))(v3 + 64))(this, 0LL, 0LL);
  return 0LL;
}
