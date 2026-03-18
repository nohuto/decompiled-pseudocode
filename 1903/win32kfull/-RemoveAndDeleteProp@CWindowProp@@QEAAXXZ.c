/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0132570
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0018230 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C001978C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0085DC8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0132510 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rcx
  void (__fastcall **v7)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v3 = v2;
  v4 = v2 == (unsigned __int16)word_1C032C66C;
  v5 = *((_QWORD *)this + 1);
  v6 = *(_QWORD *)(v5 + 144);
  if ( v4 )
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v6, v3, 1LL);
  v7 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 1) = 0LL;
  (*v7)(this);
}
