/*
 * XREFs of ?SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801FFE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f27e537ed1ad8c8456023c324c3ce255___ @ 0x1801FBAF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_f27e537ed1ad8c8456023c324c3ce255___.c)
 *     ?GetCachedIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FEEFC (-GetCachedIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShel.c)
 *     ?SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801FFF88 (-SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@Compos.c)
 */

__int64 __fastcall DefaultIconManager::SetIconForViewAsync(DefaultIconManager *this, struct IApplicationView *a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+68h] [rbp+28h] BYREF

  DefaultIconManager::GetCachedIconForView(
    (__int64)this,
    (__int64 *)&v19,
    (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  if ( !v19 )
  {
    v8 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v15,
           (__int64)a2);
    v9 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v20,
           (__int64)this);
    v16[1] = (__int64)this;
    v10 = *v9;
    *v9 = 0LL;
    v16[0] = v10;
    v11 = *v8;
    *v8 = 0LL;
    v12 = *((_DWORD *)this + 44);
    v17 = v11;
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_f27e537ed1ad8c8456023c324c3ce255___(v11, v13, v12, v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
    if ( v5 < 0 )
    {
      v6 = (unsigned int)v5;
      v7 = 166LL;
      goto LABEL_6;
    }
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v4 = DefaultIconManager::SetIconOnViewTabs(this, a2, v19);
  v5 = v4;
  if ( v4 >= 0 )
    goto LABEL_7;
  v6 = (unsigned int)v4;
  v7 = 137LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
    (const char *)v6);
LABEL_8:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  return (unsigned int)v5;
}
