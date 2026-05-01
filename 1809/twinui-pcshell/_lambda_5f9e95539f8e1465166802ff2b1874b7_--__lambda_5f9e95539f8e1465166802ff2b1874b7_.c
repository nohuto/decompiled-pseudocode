/*
 * XREFs of _lambda_5f9e95539f8e1465166802ff2b1874b7_::__lambda_5f9e95539f8e1465166802ff2b1874b7_ @ 0x1801F616C
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_5f9e95539f8e1465166802ff2b1874b7_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801F6DF0 (--_E-$CTaskWrapper@V_lambda_5f9e95539f8e1465166802ff2b1874b7_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F6FD0 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 */

__int64 __fastcall lambda_5f9e95539f8e1465166802ff2b1874b7_::__lambda_5f9e95539f8e1465166802ff2b1874b7_(_QWORD *a1)
{
  _BYTE *v1; // rbx
  __int128 v3; // xmm0
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_BYTE *)a1[5];
  if ( v1 )
  {
    if ( v1[16] )
    {
      v3 = *(_OWORD *)v1;
      v1[16] = 0;
      v6 = v3;
      DwmpEndAnimationClock(&v6);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x14);
  }
  result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 2);
  v5 = a1[1];
  if ( v5 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v5);
  return result;
}
