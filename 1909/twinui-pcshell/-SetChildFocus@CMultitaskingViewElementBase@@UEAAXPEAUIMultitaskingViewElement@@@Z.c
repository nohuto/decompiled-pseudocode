/*
 * XREFs of ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1803850D0
 * Callers:
 *     ?SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180389550 (-SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1803A23E0 (-SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18037B9D8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180383640 (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 */

void __fastcall CMultitaskingViewElementBase::SetChildFocus(CMultitaskingViewElementBase *this, struct IUnknown *a2)
{
  __int64 *v2; // r15
  struct IUnknown *v4; // rdi
  struct IUnknown *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  char v9; // si
  struct IMultitaskingViewElement *v10; // r8
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct IUnknown *v13; // [rsp+70h] [rbp+38h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+80h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+50h] BYREF

  v2 = (__int64 *)((char *)this + 168);
  v4 = (struct IUnknown *)*((_QWORD *)this + 21);
  v15 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v14 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
           (_QWORD *)this + 2,
           v7,
           &v14,
           &v16);
    if ( v8 >= 0 )
    {
      v9 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x214,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v8);
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v13, (__int64 *)(*((_QWORD *)this + 2) + 8 * v16));
      v6 = v13;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v2, (__int64 *)&v13);
  if ( !ElementHelpers::IsSameElement(v4, v6, v10) )
  {
    if ( v4 )
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v4->lpVtbl[12].AddRef)(v4, 0LL);
    if ( v6 )
    {
      LOBYTE(v11) = 1;
      ((void (__fastcall *)(struct IUnknown *, __int64))v6->lpVtbl[12].AddRef)(v6, v11);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
}
