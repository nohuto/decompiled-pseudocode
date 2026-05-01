/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1802C9880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014CB3C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802C8E0C (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$ComPtr@UIWindowM.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802C9618 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1804332E8 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnGroupWindowTemplateApplied(
        ViewPresentationMediator *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  struct tagRECT *v10; // rdi
  struct tagRECT *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v15; // [rsp+60h] [rbp-31h] BYREF
  int v16; // [rsp+68h] [rbp-29h]
  __int64 v17; // [rsp+70h] [rbp-21h] BYREF
  int v18; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19[3]; // [rsp+80h] [rbp-11h] BYREF
  struct tagRECT v20; // [rsp+98h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+A8h] [rbp+17h] BYREF
  struct IObjectArray *v22; // [rsp+E8h] [rbp+57h] BYREF

  v19[2] = -2LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  if ( (int)CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 120), &v22) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v15,
      (__int64)v22);
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
      (__int64)&v13,
      (__int64)&v15,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v15,
      v16);
    v10 = a6;
    v11 = a5;
    while ( (_DWORD)v13 != v18 || v14[1] != v19[1] )
    {
      v12 = v14[0];
      v17 = v14[0];
      if ( v14[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 8LL))(v14[0]);
      v20 = *v10;
      v21 = *v11;
      (*(void (__fastcall **)(__int64, HWND, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *))(*(_QWORD *)v12 + 24LL))(
        v12,
        a2,
        a3,
        a4,
        &v21,
        &v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      LODWORD(v13) = v13 + 1;
      details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
}
