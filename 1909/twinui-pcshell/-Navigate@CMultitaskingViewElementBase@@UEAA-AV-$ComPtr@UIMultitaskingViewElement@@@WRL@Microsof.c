/*
 * XREFs of ?Navigate@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@IW4NavigationType@@@Z @ 0x180384810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180383640 (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::Navigate(
        _QWORD *a1,
        __int64 *a2,
        struct IUnknown *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v17; // [rsp+58h] [rbp+18h] BYREF

  *a2 = 0LL;
  v5 = a4;
  if ( (_DWORD)a4 == 7 )
  {
    if ( a1[3] )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, (__int64 *)a1[2]);
      v8 = a5;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 160LL))(*a2, a5) )
      {
        v9 = 5LL;
        v10 = 0LL;
LABEL_5:
        v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, struct IUnknown **, __int64, __int64, unsigned int))(*a1 + 536LL))(
                           a1,
                           &v17,
                           v10,
                           v9,
                           v8);
LABEL_6:
        Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v11);
LABEL_16:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      }
    }
  }
  else if ( (_DWORD)a4 == 8 )
  {
    v12 = a1[3];
    if ( v12 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, (__int64 *)(a1[2] + 8 * (v12 - 1)));
      v8 = a5;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 160LL))(*a2, a5) )
      {
        v9 = 6LL;
        v10 = a1[3] - 1LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    if ( !a3 )
    {
      v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, struct IUnknown **, _QWORD *, __int64, unsigned int))(*(_QWORD *)a1[10] + 272LL))(
                         a1[10],
                         &v17,
                         a1,
                         a4,
                         a5);
      goto LABEL_6;
    }
    if ( a1[3] )
    {
      v17 = a3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
                  a1 + 2,
                  v13,
                  &v17,
                  v16) >= 0 )
      {
        v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD, unsigned int))(*a1 + 536LL))(
                           a1,
                           v16,
                           v16[0],
                           v5,
                           a5);
        Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
      }
      goto LABEL_16;
    }
  }
  return a2;
}
