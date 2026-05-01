/*
 * XREFs of _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18031EAC0
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18031E2F8 (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18031EF98 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x18031F4D0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lamb.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180126EA4 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18031ED10 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x18032006C (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 */

void __fastcall lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()(unsigned int *a1)
{
  __int64 v2[2]; // [rsp+20h] [rbp-68h] BYREF
  LPVOID v3[11]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v4; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(*(_QWORD *)a1 + 184LL),
    (wil::ActivityThreadWatcher *)v3);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v2, &v4, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 40LL) + 448LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 40LL),
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    a1[2]);
  MultitaskingViewTelemetry::DragSwitchItem::Stop(
    (MultitaskingViewTelemetry::DragSwitchItem *)(*(_QWORD *)a1 + 184LL),
    a1[2]);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(v3);
}
