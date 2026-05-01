/*
 * XREFs of ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180306340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180306208 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180307038 (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 */

void __fastcall CMultitaskingViewControllerBase::DragSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  volatile signed __int32 *v4; // rcx
  int started; // eax
  __int64 v6; // rbx
  int v7; // eax
  CMultitaskingViewControllerBase *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int16 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+10h] BYREF
  CMultitaskingViewControllerBase *v15; // [rsp+68h] [rbp+28h] BYREF

  v4 = (volatile signed __int32 *)((char *)this - 16);
  v15 = (CMultitaskingViewControllerBase *)v4;
  _InterlockedIncrement(v4 + 24);
  started = CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement(
              (CMultitaskingViewControllerBase *)v4,
              a2,
              a3);
  if ( started >= 0 )
  {
    v14 = 0LL;
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
             v6,
             &GUID_51575f72_33a0_4be2_b5ad_5ecac31260f4,
             &v14);
      if ( v7 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
        v8 = v15;
        v11 = 0;
        v12 = 0LL;
        *((_WORD *)v15 + 52) = 0;
        v9 = *((_QWORD *)v8 + 14);
        *((_QWORD *)v8 + 14) = 0LL;
        v10 = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          172LL,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v7);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      168LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)started);
  }
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v15);
}
