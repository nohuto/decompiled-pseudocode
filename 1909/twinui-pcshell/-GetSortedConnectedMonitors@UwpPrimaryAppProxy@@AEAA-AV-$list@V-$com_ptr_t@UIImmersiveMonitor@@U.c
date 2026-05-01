/*
 * XREFs of ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1803BC3A4
 * Callers:
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BD790 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801FEEB4 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802CFAFC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802D0C34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@2@PEAU32@0@Z @ 0x180348A24 (-_Buynode0@-$_List_alloc@U-$_List_base_types@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_pol.c)
 *     ??$_Insert@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1803BAA8C (--$_Insert@AEBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$list@V-$com_ptr_t@UIImmersiveMoni.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall UwpPrimaryAppProxy::GetSortedConnectedMonitors(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v11[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp+28h]
  int v21; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v22; // [rsp+B8h] [rbp+38h] BYREF

  v20 = a2;
  v19 = a1;
  v11[1] = -2LL;
  v4 = *a3;
  v11[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 112))(a3, v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      245LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = std::_List_alloc<std::_List_base_types<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>>::_Buynode0(
          (__int64)retaddr,
          0LL,
          0LL);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v12,
    v11[0]);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v14,
    (__int64)&v12,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v16,
    (__int64)&v12,
    v13);
  while ( (_DWORD)v14 != v16 || v15[1] != v17[1] )
  {
    v6 = v15[0];
    v22 = (_QWORD *)v15[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    LODWORD(v19) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v19);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        250LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    if ( (_DWORD)v19 )
    {
      v21 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 56LL))(v6, &v21);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          254LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      v9 = (_QWORD *)*a2;
      if ( v21 )
        v9 = (_QWORD *)*v9;
      std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Insert<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
        (__int64)a2,
        v9,
        &v22);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    LODWORD(v14) = v14 + 1;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v14);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
  return a2;
}
