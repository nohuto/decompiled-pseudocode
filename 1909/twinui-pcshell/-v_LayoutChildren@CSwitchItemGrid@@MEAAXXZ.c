/*
 * XREFs of ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x180389D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036F010 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036F094 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803877A8 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z @ 0x180387CF8 (--0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x180398E4C (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x180399070 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1803997F8 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 */

void __fastcall CSwitchItemGrid::v_LayoutChildren(CSwitchItemGrid *this)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  const struct Geometry::CSize *v6; // rax
  int v7; // eax
  struct IObjectArray *v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h]
  int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+64h] [rbp-9Ch]
  _BYTE v16[536]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+288h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    v12 = *((_DWORD *)this + 14);
    v14 = v12 + 1;
    v13 = v3;
    v15 = v3 + 1;
    (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v12, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 232) )
  {
    v8 = (struct IObjectArray *)*((_QWORD *)this + 107);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v11, (__int64 *)&v8, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
    v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    v12 = 0;
    v13 = 0;
    v14 = v4;
    v15 = v5;
    if ( v4 > 0 && v5 > 0 )
    {
      v8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      if ( (*(int (__fastcall **)(CSwitchItemGrid *, struct IObjectArray **))(*(_QWORD *)this + 56LL))(this, &v8) >= 0 )
      {
        if ( *((_QWORD *)this + 103) )
          goto LABEL_11;
        GridLayoutFactory::GridLayoutFactory(
          (GridLayoutFactory *)v16,
          (CSwitchItemGrid *)((char *)this + 256),
          (CSwitchItemGrid *)((char *)this + 848),
          (const struct Geometry::CRect *)&v12,
          v8);
        v6 = (const struct Geometry::CSize *)GridLayoutFactory::_CalculateRowSize(v16, v10);
        v7 = GridLayoutFactory::LayoutItems((GridLayoutFactory *)v16, v6, (CSwitchItemGrid *)((char *)this + 768));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x28F,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
            (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        if ( *((_QWORD *)this + 103) )
LABEL_11:
          GridLayout::LayoutRows((CSwitchItemGrid *)((char *)this + 768), (const struct Geometry::CRect *)&v12);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    }
    v9 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>((_QWORD *)this + 10, &v9) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
    }
    *((_BYTE *)this + 940) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v11);
  }
}
