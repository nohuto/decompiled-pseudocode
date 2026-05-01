/*
 * XREFs of ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18037F488
 * Callers:
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18037F1B0 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragStarted @ 0x18037F470 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486__ea_18037F470.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18037FB90 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180150490 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18034F840 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18034F8C4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18037E7EC (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18037EA5C (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18037EFB4 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18037F200 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_Tlg.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18037F644 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 */

void __fastcall ElementDragData::FinishDrag(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-49h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-41h]
  __int128 v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-29h] BYREF
  LPVOID v16[14]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v18; // [rsp+D0h] [rbp+67h] BYREF
  int v19; // [rsp+E0h] [rbp+77h] BYREF
  int v20; // [rsp+E4h] [rbp+7Bh]
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 184),
    (wil::ActivityThreadWatcher *)v16);
  v18 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v15, &v18, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v21 = a1;
  v4 = 0;
  if ( a2 != -1 )
    v4 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 496) = 3;
  *(_DWORD *)(a1 + 88) = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 440LL))(v5, v6, v4);
  if ( v4 == 2 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 464LL))(*(_QWORD *)(a1 + 40));
  }
  else if ( *(_DWORD *)(a1 + 108) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 200LL))(*(_QWORD *)(a1 + 40), a1 + 92);
  }
  v12 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v13 = v4;
  if ( v4 - 1 <= 1 )
  {
    v11 = 4LL;
    if ( v4 != 1 )
      v11 = 0LL;
    v9 = ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(a1, v11, (__int64)&v12);
    if ( v9 < 0 )
    {
      v10 = 323LL;
      goto LABEL_14;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 48);
    v18 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v18);
    v14 = 0LL;
    ElementDragData::GetDragSourceLocation((ElementDragData *)a1, (struct Geometry::CRect *)&v14);
    v19 = v14 + *(_DWORD *)(a1 + 56);
    v20 = DWORD1(v14) + *(_DWORD *)(a1 + 60);
    v9 = ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
           a1,
           (__int64)&v19,
           v8,
           (__int64)&v12);
    if ( v9 < 0 )
    {
      v10 = 341LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
        (const char *)(unsigned int)v9);
      lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()((unsigned int *)&v12);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v15);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(v16);
}
