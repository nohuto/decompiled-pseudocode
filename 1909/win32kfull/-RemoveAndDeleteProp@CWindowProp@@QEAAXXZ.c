/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C010D070
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00161A8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C002157C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00F97B0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C010D010 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r9
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rcx
  void (__fastcall **v8)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v4 = v2;
  v5 = v2 == (unsigned __int16)word_1C032A65C;
  v6 = *((_QWORD *)this + 1);
  v7 = *(_QWORD *)(v6 + 144);
  if ( v5 )
    *(_QWORD *)(*(_QWORD *)(v6 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v7, v4, 1LL, v3);
  v8 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 1) = 0LL;
  (*v8)(this);
}
