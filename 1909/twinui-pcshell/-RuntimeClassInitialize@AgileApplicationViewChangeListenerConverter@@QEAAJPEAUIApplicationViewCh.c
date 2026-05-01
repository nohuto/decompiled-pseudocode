/*
 * XREFs of ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180178700
 * Callers:
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180172950 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180132F80 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@W4AgileReferenceOptions@@@Z @ 0x180178518 (--$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIAgileReferenc.c)
 */

__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
        AgileApplicationViewChangeListenerConverter *this,
        struct IApplicationViewChangeListener *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int inited; // eax
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewChangeListener *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationViewChangeListener *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  try
  {
    if ( *((struct IApplicationViewChangeListener **)this + 13) != a2 )
    {
      v12 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v4 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = a2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = wil::com_agile_query<IApplicationViewChangeListener * &>((__int64 *)&v12, (__int64 *)&v13);
    v6 = *v5;
    *v5 = 0LL;
    v7 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
    inited = CObjectWithThreadUseDetection::InitApartmentId((AgileApplicationViewChangeListenerConverter *)((char *)this + 48));
    if ( inited < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        119LL,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)inited);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7A,
                           (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                           v9);
  }
  return result;
}
