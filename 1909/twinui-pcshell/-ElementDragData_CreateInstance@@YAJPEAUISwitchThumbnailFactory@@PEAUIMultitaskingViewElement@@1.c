/*
 * XREFs of ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x18039ED10
 * Callers:
 *     ?StartDrag@CMultitaskingViewFrameElement@@UEAA_NW4DragEffects@@PEAUIMultitaskingViewElement@@PEAUIUnknown@@@Z @ 0x18038D060 (-StartDrag@CMultitaskingViewFrameElement@@UEAA_NW4DragEffects@@PEAUIMultitaskingViewElement@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Details@WRL@Microsoft@@YAJPEAPEAVElementDragData@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Z @ 0x18039E304 (--$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingVi.c)
 */

__int64 __fastcall ElementDragData_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        ElementDragData *a8)
{
  ElementDragData *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v8 = a8;
  a8 = 0LL;
  *(_QWORD *)v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<ElementDragData,ElementDragData,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IUnknown * &,DragMetrics const &,enum DragEffects &>(
         &a8,
         &v14,
         &v15,
         &v16,
         &v17,
         a5,
         &a6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 502LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_6;
  }
  v9 = (**(__int64 (__fastcall ***)(ElementDragData *, GUID *, ElementDragData *))a8)(
         a8,
         &GUID_7fb67ec0_e6fb_4025_9c71_de328be7017b,
         v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 503LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  return v10;
}
