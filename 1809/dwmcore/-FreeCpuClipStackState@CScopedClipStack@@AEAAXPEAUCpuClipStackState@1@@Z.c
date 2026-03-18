/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18017A024
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006B4DC (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18017A05C (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
