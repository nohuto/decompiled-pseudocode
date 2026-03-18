/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18017A5A4
 * Callers:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180046E80 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180049318 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18017A628 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(
        CScopedClipStack *this,
        struct CScopedClipStack::CpuClipStackState *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  CShapePtr::Release(a2);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 11);
  if ( v3 )
    (**v3)(v3, 1LL);
}
