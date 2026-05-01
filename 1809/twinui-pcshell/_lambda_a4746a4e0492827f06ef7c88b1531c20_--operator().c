/*
 * XREFs of _lambda_a4746a4e0492827f06ef7c88b1531c20_::operator() @ 0x18023B684
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20___::Run @ 0x18023BC30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a4746a4e0492827f06ef7c88b1531c20___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x18023BC8C (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_a4746a4e0492827f06ef7c88b1531c20_::operator()(_DWORD *a1)
{
  _DWORD *v1; // rdi
  char v2; // bl
  __int64 *v3; // rsi
  __int64 *v4; // rbx
  const char *v5; // r9
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  LPVOID v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // [rsp+30h] [rbp-1A8h] BYREF
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-1A0h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-198h] BYREF
  __int64 v13; // [rsp+48h] [rbp-190h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-188h] BYREF
  __int128 v15; // [rsp+58h] [rbp-180h]
  _DWORD *v16; // [rsp+68h] [rbp-170h]
  __int64 v17; // [rsp+70h] [rbp-168h]
  _QWORD v18[40]; // [rsp+80h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v17 = -2LL;
  v1 = a1;
  v16 = a1;
  *(_BYTE *)(*(_QWORD *)a1 + 40LL) = a1[6] == 1;
  v2 = *(_BYTE *)(*(_QWORD *)a1 + 40LL);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"PdcNotificationCallback");
  v18[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)v18,
    v2 != 0);
  try
  {
    v14 = 0LL;
    v15 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 **))(**(_QWORD **)(*(_QWORD *)v1 + 24LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)v1 + 24LL),
      &v14);
    v4 = v14;
    v3 = (__int64 *)v15;
    while ( v4 != v3 )
    {
      v13 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 24LL) + 56LL))(
        *(_QWORD *)(*(_QWORD *)v1 + 24LL),
        v13,
        *(_BYTE *)(*(_QWORD *)v1 + 40LL) != 0 ? 2 : 0);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      ++v4;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, 0);
    v6 = v14;
    if ( v14 )
    {
      v7 = (__int64 *)v15;
      if ( v14 != (__int64 *)v15 )
      {
        do
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v6++);
        while ( v6 != v7 );
        v6 = v14;
      }
      std::_Deallocate<16,0>(
        v6,
        (const struct std::nothrow_t *)((*((_QWORD *)&v15 + 1) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v5);
    v1 = v16;
  }
  ppv = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( CoCreateInstance(
         &CLSID_ShellServiceHostBrokerProvider,
         0LL,
         4u,
         &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
         &ppv) >= 0 )
  {
    v8 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    if ( (*(int (__fastcall **)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v8 + 24LL))(
           v8,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &v11) >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      if ( (**v11)(v11, &GUID_23030752_8e7c_4225_8c88_28211f93ddf7, &v10) >= 0 )
      {
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)v1 + 40LL) == 0;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, v9);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v18[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
}
