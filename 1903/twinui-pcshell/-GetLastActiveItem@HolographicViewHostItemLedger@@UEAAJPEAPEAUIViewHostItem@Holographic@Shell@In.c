/*
 * XREFs of ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180207FE0
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@WBA@EAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800B7410 (-GetLastActiveItem@HolographicViewHostItemLedger@@WBA@EAAJPEAPEAUIViewHostItem@Holographic@Shell.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18007E2E4 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18012D5FC (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x1802074DC (--$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z.c)
 *     _LogEventWithViewHostItemData___0 @ 0x1802077F0 (_LogEventWithViewHostItemData___0.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@QEAV12@I@Z @ 0x180207B28 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_ret.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@AEAAXXZ @ 0x180207F30 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicatio.c)
 *     ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802084E0 (-TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holographic@S.c)
 *     ?attach@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@@Z @ 0x180208920 (-attach@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicViewHostItemLedger::GetLastActiveItem(
        HolographicViewHostItemLedger *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  unsigned __int64 v4; // r14
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v9; // rdx
  HolographicViewHelpers *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  HolographicViewHelpers *v18; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-48h] BYREF
  HolographicViewHelpers *v21[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  int v23; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  int v27; // [rsp+C0h] [rbp+40h] BYREF
  int v28; // [rsp+C8h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v29; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+58h] BYREF

  v25[2] = -2LL;
  *a2 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 9);
  v6 = *v5;
  v30 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 24))(v5, &v30);
  v8 = v7;
  if ( v7 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v22,
      v30);
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::Iterator(
      (__int64)&v20,
      (__int64)&v22,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::Iterator(
      (__int64)&v24,
      (__int64)&v22,
      v23);
    while ( v20 != v24 || v21[1] != (HolographicViewHelpers *)v25[1] )
    {
      v10 = v21[0];
      v18 = v21[0];
      if ( v21[0] )
        (*(void (__fastcall **)(HolographicViewHelpers *))(*(_QWORD *)v21[0] + 8LL))(v21[0]);
      if ( HolographicViewHelpers::IsApplicationViewHolographic(v10, v9) )
      {
        HolographicViewHostItemLedger::TryFindViewHostItem((char *)this + 16, &v17, v10);
        v11 = v17;
        if ( v17 )
        {
          v12 = v17;
          if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 80LL))(v17, &v27) >= 0 )
          {
            if ( (_BYTE)v27 )
            {
              if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 120LL))(v11, &v28) >= 0 && v28 == 1 )
              {
                wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach(&v29, v11);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
                break;
              }
              if ( (*(int (__fastcall **)(HolographicViewHelpers *, unsigned __int64 *))(*(_QWORD *)v10 + 184LL))(
                     v10,
                     &v19) >= 0
                && v19 > v4 )
              {
                v4 = v19;
                v11 = 0LL;
                v17 = 0LL;
                wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach(&v29, v12);
              }
            }
          }
        }
        if ( v11 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      ++v20;
      details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::GetCurrentObject(&v20);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v25);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v15 = v29;
    if ( v29 )
    {
      LogEventWithViewHostItemData___0((__int64)v29, v13);
      v29 = 0LL;
      *a2 = v15;
    }
    else
    {
      v27 = 0;
      HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(v14, &v27);
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
      (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v29);
  return v8;
}
