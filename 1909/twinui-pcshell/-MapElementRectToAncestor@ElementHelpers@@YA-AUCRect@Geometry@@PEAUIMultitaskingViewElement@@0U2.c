/*
 * XREFs of ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x18038E6DC
 * Callers:
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x18038E5E8 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1803925BC (-GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUt.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18039EFB4 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18037B9D8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 */

__m128i *__fastcall ElementHelpers::MapElementRectToAncestor(__m128i *a1, __int64 a2, struct IUnknown *a3, __m128i *a4)
{
  struct IUnknown *v7; // rbx
  struct IMultitaskingViewElement *v8; // r8
  int *v9; // rax
  __m128i v10; // xmm0
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  __int64 *v15; // rax
  struct IUnknown *v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  char v19[8]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v20; // [rsp+38h] [rbp-18h]

  v17 = (struct IUnknown *)a2;
  v7 = (struct IUnknown *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  while ( v7 && !ElementHelpers::IsSameElement(v7, a3, v8) )
  {
    v9 = (int *)((__int64 (__fastcall *)(struct IUnknown *, char *))v7->lpVtbl[5].QueryInterface)(v7, v19);
    v20 = *a4;
    v10 = v20;
    v11 = *v9;
    v12 = -v9[1];
    v20.m128i_i32[3] -= v9[1];
    v13 = -v11;
    v20.m128i_i32[2] += v13;
    v20.m128i_i32[1] += v12;
    v20.m128i_i32[0] = v13 + _mm_cvtsi128_si32(v10);
    QueryInterface = v7->lpVtbl[1].QueryInterface;
    *a4 = v20;
    v15 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(v7, &v18);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v17, v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v7 = v17;
  }
  *a1 = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return a1;
}
