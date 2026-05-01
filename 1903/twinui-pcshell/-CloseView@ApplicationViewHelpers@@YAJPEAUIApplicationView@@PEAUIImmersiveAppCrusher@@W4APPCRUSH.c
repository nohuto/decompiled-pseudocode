/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18040EE40
 * Callers:
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x1800AEC8C (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18016E3B0 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180203688 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_f072ab1976064765ea58feb5e43056af_::operator() @ 0x18021A268 (_lambda_f072ab1976064765ea58feb5e43056af_--operator().c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18022CD8C (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x1802ECC68 (_lambda_95ea086e3b8fa056e55a3a293b600f83_--operator().c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180366920 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18039BE38 (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803A5380 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803B02B0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803C2D18 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18012D804 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x18040EC5C (Windows--Internal--ComTaskPool--QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___.c)
 */

__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        int a3,
        int a4,
        int a5)
{
  unsigned int v6; // edi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  HWND hwnd; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  HWND v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+58h] [rbp-18h]
  int v30; // [rsp+5Ch] [rbp-14h]
  int v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int pvAttribute; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v25 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  if ( (int)(**a1)(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v25) < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v14 = (**a1)(a1, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v24);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_22;
    }
    if ( !a2 )
    {
      v11 = -2147019873;
      v13 = 150LL;
      v12 = 2147947423LL;
      goto LABEL_11;
    }
    v15 = v24;
    hwnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hwnd);
    v16 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 24LL))(v15, &hwnd);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v16);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hwnd);
      goto LABEL_21;
    }
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v22);
    pvAttribute = 2;
    v26 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v22,
            (__int64)&GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v26,
            &pvAttribute);
    v11 = v17;
    if ( v17 >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v27, (const struct CMarshaledInterface *)&v22);
      v28 = hwnd;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
      v31 = a5;
      v29 = a3;
      v30 = a4;
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___(v20, (__int64)&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      Microsoft::WRL::WeakRef::~WeakRef(&v27);
      if ( v11 >= 0 )
      {
LABEL_19:
        Microsoft::WRL::WeakRef::~WeakRef(&v22);
        goto LABEL_20;
      }
      v18 = (unsigned int)v11;
      v19 = 168LL;
    }
    else
    {
      v18 = (unsigned int)v17;
      v19 = 160LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v18);
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &hwnd);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 132LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v12);
LABEL_21:
    v6 = v11;
    goto LABEL_22;
  }
  if ( (a5 & 1) != 0 )
  {
    pvAttribute = 1;
    DwmSetWindowAttribute(hwnd, 3u, &pvAttribute, 4u);
  }
  PostMessageW(hwnd, 0x112u, 0xF060uLL, 0LL);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return v6;
}
