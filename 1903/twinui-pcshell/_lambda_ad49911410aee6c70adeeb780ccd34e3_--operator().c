/*
 * XREFs of _lambda_ad49911410aee6c70adeeb780ccd34e3_::operator() @ 0x180155544
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___::Invoke @ 0x180156780 (CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___--Invoke.c)
 * Callees:
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180024020 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x180153160 (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ad49911410aee6c70adeeb780ccd34e3_::operator()(__int64 a1)
{
  int ViewForApplication; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  ViewForApplication = CApplicationViewManager::GetViewForApplication(
                         (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 136LL),
                         *(struct IImmersiveApplication **)a1,
                         &v8);
  if ( ViewForApplication >= 0 )
  {
    v9 = 0LL;
    v3 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(&v8, &v9);
    ViewForApplication = v3;
    if ( v3 >= 0 )
    {
      LOBYTE(v4) = *(_DWORD *)(a1 + 16) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v4);
      v3 = CApplicationViewManager::RaiseApplicationViewChanged(
             *(_QWORD *)(a1 + 32) + 136LL,
             (void (__fastcall ***)(_QWORD, GUID *, __int64 *))v8,
             6u,
             0LL);
      ViewForApplication = v3;
      if ( v3 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        goto LABEL_8;
      }
      v5 = 749LL;
    }
    else
    {
      v5 = 746LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ViewForApplication;
}
