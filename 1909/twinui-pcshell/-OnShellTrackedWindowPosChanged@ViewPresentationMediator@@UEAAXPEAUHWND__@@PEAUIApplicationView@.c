/*
 * XREFs of ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1802C9B70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014CB3C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802C8DC4 (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802C9588 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1804332E8 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnShellTrackedWindowPosChanged(
        ViewPresentationMediator *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  struct tagRECT *v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h] BYREF
  int v15; // [rsp+60h] [rbp-21h]
  struct tagRECT v16; // [rsp+68h] [rbp-19h] BYREF
  __int64 v17; // [rsp+78h] [rbp-9h] BYREF
  __int64 v18[2]; // [rsp+80h] [rbp-1h] BYREF
  int v19; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v20[2]; // [rsp+98h] [rbp+17h] BYREF
  struct IObjectArray *v21; // [rsp+D8h] [rbp+57h] BYREF

  v13[1] = -2LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  if ( (int)CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 88), &v21) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v14,
      (__int64)v21);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v17,
      (__int64)&v14,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v19,
      (__int64)&v14,
      v15);
    v10 = a6;
    v11 = a5;
    while ( (_DWORD)v17 != v19 || v18[1] != v20[1] )
    {
      v12 = v18[0];
      v13[0] = v18[0];
      if ( v18[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 8LL))(v18[0]);
      v16 = *v10;
      (*(void (__fastcall **)(__int64, HWND, struct IApplicationView *, _QWORD, unsigned int, struct tagRECT *))(*(_QWORD *)v12 + 32LL))(
        v12,
        a2,
        a3,
        a4,
        v11,
        &v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
      LODWORD(v17) = v17 + 1;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v17);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
}
