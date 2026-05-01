/*
 * XREFs of ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AAPAUIUnknown@@@Details@WRL@Microsoft@@YG?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AAPAUIUnknown@@@Z @ 0x100101F8
 * Callers:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z @ 0x1001078D (-CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(
        _DWORD *a1,
        int *a2)
{
  _DWORD *v4; // esi
  int v5; // eax
  struct Microsoft::WRL::Details::ModuleBase *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h]

  *a1 = 0;
  v4 = operator new(0x14u);
  if ( v4 )
  {
    v5 = *a2;
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    v8 = *a2;
    v4[2] = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
    if ( v6 )
    {
      (*(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v6 + 4))(
        *(_DWORD *)(*(_DWORD *)v6 + 4),
        v6);
      v5 = v8;
    }
    v4[3] = 0x3FFFFFFF;
    *v4 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    v4[4] = v5;
    v4[2] = 2;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(*a1);
    *a1 = v4;
  }
  return a1;
}
