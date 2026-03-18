/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C000E8F4
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C000C360 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C000CA70 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0011790 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C0132514 (UserSetWindowedSwapChain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  CWindowProp *v5; // rax
  CWindowProp *v6; // rdx
  unsigned __int16 v7; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = (CWindowProp *)RealInternalRemoveProp(*(_QWORD *)(a2 + 120), v4, 1LL);
  v6 = v5;
  if ( v5 && v5 != this )
    (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
  v7 = (*(__int64 (__fastcall **)(CWindowProp *, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v6);
  result = RealInternalSetProp(a2 + 120, v7, this, 32769LL);
  *((_QWORD *)this + 1) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
