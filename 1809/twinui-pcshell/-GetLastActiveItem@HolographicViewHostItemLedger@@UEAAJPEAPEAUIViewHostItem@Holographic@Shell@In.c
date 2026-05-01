/*
 * XREFs of ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BA480
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@W7EAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800A08B0 (-GetLastActiveItem@HolographicViewHostItemLedger@@W7EAAJPEAPEAUIViewHostItem@Holographic@Shell@I.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18007EB24 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18010768C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x1801B9A7C (--$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@QEAV12@I@Z @ 0x1801B9FE8 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_ret.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@AEAAXXZ @ 0x1801BA350 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicatio.c)
 *     ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801BA950 (-TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holographic@S.c)
 *     _LogEventWithViewHostItemData_0 @ 0x1801BAA10 (_LogEventWithViewHostItemData_0.c)
 *     ?attach@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@@Z @ 0x1801BAAD0 (-attach@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicViewHostItemLedger::GetLastActiveItem(
        HolographicViewHostItemLedger *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct IApplicationView *v8; // rdx
  HolographicViewHelpers *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v12; // rbx
  HolographicViewHelpers *v14; // [rsp+20h] [rbp-39h] BYREF
  __int64 v15; // [rsp+28h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-29h] BYREF
  __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  HolographicViewHelpers *v18[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  int v20; // [rsp+58h] [rbp-1h]
  int v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22[9]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v24; // [rsp+C0h] [rbp+67h] BYREF
  int v25; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+D0h] [rbp+77h] BYREF
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v27; // [rsp+D8h] [rbp+7Fh] BYREF

  v22[2] = -2LL;
  *a2 = 0LL;
  v27 = 0LL;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 8);
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v19,
      v15);
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::Iterator(
      (__int64)&v17,
      (__int64)&v19,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::Iterator(
      (__int64)&v21,
      (__int64)&v19,
      v20);
    while ( (_DWORD)v17 != v21 || v18[1] != (HolographicViewHelpers *)v22[1] )
    {
      v9 = v18[0];
      v14 = v18[0];
      if ( v18[0] )
        (*(void (__fastcall **)(HolographicViewHelpers *))(*(_QWORD *)v18[0] + 8LL))(v18[0]);
      if ( HolographicViewHelpers::IsApplicationViewHolographic(v9, v8) )
      {
        HolographicViewHostItemLedger::TryFindViewHostItem((char *)this + 8, &v26, v9);
        v10 = v26;
        if ( v26 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 80LL))(v26, &v24) >= 0 && (_BYTE)v24 )
        {
          if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 120LL))(v10, &v25) >= 0 && v25 == 1 )
          {
            v26 = 0LL;
            wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach(&v27, v10);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
            break;
          }
          if ( (*(int (__fastcall **)(HolographicViewHelpers *, unsigned __int64 *))(*(_QWORD *)v9 + 184LL))(v9, &v16) >= 0
            && v16 > v4 )
          {
            v4 = v16;
            v26 = 0LL;
            wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach(&v27, v10);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
      LODWORD(v17) = v17 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::GetCurrentObject(&v17);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v12 = v27;
    if ( v27 )
    {
      LogEventWithViewHostItemData_0(v27);
      v27 = 0LL;
      *a2 = v12;
    }
    else
    {
      v24 = 0;
      HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(v11, &v24);
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
  return v7;
}
