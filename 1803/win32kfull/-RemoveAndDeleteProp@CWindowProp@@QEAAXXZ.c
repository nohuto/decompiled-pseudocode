/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C000E980
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C000AF38 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C000C360 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C000EAB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0011790 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  void (__fastcall **v3)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  RealInternalRemoveProp(*(_QWORD *)(*((_QWORD *)this + 1) + 120LL), v2, 1LL);
  v3 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 1) = 0LL;
  (*v3)(this);
}
