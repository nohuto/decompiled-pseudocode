/*
 * XREFs of ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180305808
 * Callers:
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180303B80 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?GetElementFromPoint@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180304190 (-GetElementFromPoint@CMultitaskingViewElementBase@@UEAA-AV-$ComPtr@UIMultitaskingViewElement@@@W.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803059BC (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180308740 (-HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18030F7E0 (-HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18031C8B0 (-HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180321670 (-HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::_HitTestChildren(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  int v9; // edx
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a1[3] )
  {
    v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 120LL))(a1, &v14);
    v7 = *a3;
    v8 = (__int64 *)a1[2];
    v13 = v7;
    v9 = v6[1];
    LODWORD(v7) = *v6 + v7;
    v10 = a1[3];
    HIDWORD(v13) += v9;
    LODWORD(v13) = v7;
    v11 = &v8[v10];
    while ( v8 != v11 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 152LL))(*v8)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v8 + 112LL))(*v8, &v13) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, v8);
        return a2;
      }
      ++v8;
    }
  }
  return a2;
}
