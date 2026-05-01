/*
 * XREFs of ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014426C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031E0DC (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18031E650 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag__ea_18031E650.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18031E8EC (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031EA38 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031ED4C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18031F154 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18031F930 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x180324610 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 */

__int64 __fastcall ElementDragData::StartDrag(__int64 a1, int a2, __int64 *a3)
{
  int DragSourceLocation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int Instance; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct _GUID *v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[40]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[40]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"DragSwitchItem");
  v19[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  MultitaskingViewTelemetry::DragSwitchItem::StartActivity((MultitaskingViewTelemetry::DragSwitchItem *)v19);
  v15 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v18, &v15, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  *(_DWORD *)(a1 + 88) = a2;
  *(_OWORD *)(a1 + 92) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 108) = *((_DWORD *)a3 + 4);
  v17 = 0LL;
  DragSourceLocation = ElementDragData::GetDragSourceLocation((ElementDragData *)a1, &v17);
  v7 = DragSourceLocation;
  if ( DragSourceLocation >= 0 )
  {
    v8 = *a3;
    v16 = 0LL;
    v9 = v8 - v17.m128i_i32[0];
    *(_QWORD *)(a1 + 64) = v8;
    HIDWORD(v15) = HIDWORD(v8) - v17.m128i_i32[1];
    LODWORD(v15) = v9;
    *(_QWORD *)(a1 + 56) = v15;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
                 (_QWORD *)(a1 + 32),
                 &v16);
    v7 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
      Instance = MultitaskingViewDragVisual_CreateInstance(
                   *(struct ISwitchThumbnailFactory **)(a1 + 16),
                   *(struct IMultitaskingViewElement **)(a1 + 40),
                   *(struct IMultitaskingViewElement **)(a1 + 32),
                   (const struct Geometry::CSize *)(a1 + 56),
                   *(double *)(a1 + 120),
                   v14,
                   (void **)(a1 + 48));
      v7 = Instance;
      if ( Instance >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 48);
        v15 = *(_QWORD *)(a1 + 92);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, &v15, 0LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 216LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 232LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 432LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 24));
        ElementDragData::DragOver((ElementDragData *)a1, (const struct MultitaskingViewPointerInputArgs *)a3);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v20,
          (__int64)v19);
        v20[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
        MultitaskingViewTelemetry::DragSwitchItem::operator=(a1 + 184, (__int64)v20);
        MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v20);
        v7 = 0;
        *(_DWORD *)(a1 + 496) = 1;
        goto LABEL_9;
      }
      v11 = 113LL;
    }
    else
    {
      v11 = 106LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)Instance);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
    (const char *)(unsigned int)DragSourceLocation);
LABEL_10:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v18);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v19);
  return v7;
}
