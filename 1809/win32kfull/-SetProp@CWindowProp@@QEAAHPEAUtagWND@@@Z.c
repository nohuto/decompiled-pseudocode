/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00B3230
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00B203C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00C9564 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0122834 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C01228D4 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C0153724 (UserSetWindowedSwapChain.c)
 * Callees:
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  CWindowProp *v6; // rax
  CWindowProp *v7; // rdx
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = *(_QWORD *)(a2 + 120);
  if ( v4 == word_1C0317660 )
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 312LL) = 0LL;
  v6 = (CWindowProp *)RealInternalRemoveProp(v5, v4, 1LL);
  v7 = v6;
  if ( v6 && v6 != this )
    (**(void (__fastcall ***)(CWindowProp *))v6)(v6);
  v8 = (*(__int64 (__fastcall **)(CWindowProp *, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v7);
  result = InternalSetProp(a2, v8, this, 32769LL);
  *((_QWORD *)this + 1) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
