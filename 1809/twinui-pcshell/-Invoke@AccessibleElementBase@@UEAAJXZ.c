/*
 * XREFs of ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x180315800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007FCAC (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x18030E8E8 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180315EF8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::Invoke(AccessibleElementBase *this)
{
  int Element; // ebx
  ElementHelpers *v3; // rbx
  struct IMultitaskingViewElement *v4; // rdx
  __int64 *v5; // rax
  ElementHelpers *v7; // [rsp+30h] [rbp+10h] BYREF
  ElementHelpers *v8; // [rsp+38h] [rbp+18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 24),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              (void **)&v7);
  if ( Element >= 0 )
  {
    v3 = v7;
    v8 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    while ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(ElementHelpers *, _QWORD))(*(_QWORD *)v3 + 160LL))(v3, 0LL) )
      {
        ElementHelpers::SetFocusToElement(v3, v4);
        break;
      }
      v5 = (__int64 *)(*(__int64 (__fastcall **)(ElementHelpers *, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v9);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v8, v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      v3 = v8;
    }
    (*(void (__fastcall **)(ElementHelpers *))(*(_QWORD *)v7 + 312LL))(v7);
    Element = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)Element;
}
