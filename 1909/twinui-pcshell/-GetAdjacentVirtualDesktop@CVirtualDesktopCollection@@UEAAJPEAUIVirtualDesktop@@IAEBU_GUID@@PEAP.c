/*
 * XREFs of ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180408F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18037499C (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::GetAdjacentVirtualDesktop(
        CVirtualDesktopCollection *this,
        void **a2,
        int a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v7; // r14
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  char v13; // bl
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  int v18; // edi
  unsigned __int64 v20; // rcx
  int v21; // eax
  _QWORD v22[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v22[1] = -2LL;
  v7 = a5;
  *a5 = 0LL;
  v8 = a3 - 3;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v11 = -2147024809;
          v12 = 103LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
            (const char *)v11);
          return v11;
        }
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
    }
    else
    {
      v13 = *((_BYTE *)this + 16) == 0;
    }
  }
  else
  {
    v13 = *((_BYTE *)this + 16);
  }
  if ( !a2 )
  {
    if ( v13 )
      v14 = 0LL;
    else
      v14 = *((_QWORD *)this + 7) - 1LL;
    v15 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 6) + 8 * v14);
    v11 = (**v15)(v15, a4, v7);
    if ( (v11 & 0x80000000) == 0 )
      return v11;
    v12 = 109LL;
    goto LABEL_6;
  }
  v16 = (_QWORD *)((char *)this + 48);
  a5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a5);
  v18 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
          v16,
          v17,
          (struct IUnknown **)&a5,
          v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v18);
    return (unsigned int)v18;
  }
  v20 = v22[0] + (v13 != 0 ? 1LL : -1LL);
  a5 = 0LL;
  if ( v20 >= v16[1] )
  {
    v11 = -2147316575;
  }
  else
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&a5, (__int64 *)(*v16 + 8 * v20));
    v21 = (*(__int64 (__fastcall **)(void **, const struct _GUID *, void **))*a5)(a5, a4, v7);
    v11 = v21;
    if ( v21 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v21);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return v11;
}
