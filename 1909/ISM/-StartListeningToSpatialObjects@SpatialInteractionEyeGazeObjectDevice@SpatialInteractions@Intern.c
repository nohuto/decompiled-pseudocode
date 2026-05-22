/*
 * XREFs of ?StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F18A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??B?$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x180035970 (--B-$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Deta.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004E648 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18004E648.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180052828 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E97E8 (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ??$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_WPEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@@0@$$QEAPEB_W$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800F0338 (--$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StartListeningToSpatialObjects(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  int v3; // eax
  const wchar_t *v4; // rax
  void **v5; // rax
  void *v6; // rcx
  const wchar_t *v7; // rdx
  std::_Ref_count_base *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-78h] BYREF
  RTL_SRWLOCK *v18; // [rsp+38h] [rbp-70h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+40h] [rbp-68h] BYREF
  struct Windows::Internal::Holographic::ISpatialObject *Ptr; // [rsp+50h] [rbp-58h] BYREF
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v21; // [rsp+58h] [rbp-50h] BYREF
  const wchar_t *v22[3]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h] BYREF
  std::_Ref_count_base *v24; // [rsp+80h] [rbp-28h]
  char v25[16]; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v22[1] = (const wchar_t *)-2LL;
  wil::srwlock::lock_shared(this + 25, &v18);
  v2 = this + 26;
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObject>::operator int Microsoft::WRL::Details::BoolStruct::*(&this[26].Ptr);
  try
  {
    if ( v3 != -1 )
    {
      Ptr = (struct Windows::Internal::Holographic::ISpatialObject *)v2->Ptr;
      v21 = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)this[15].Ptr;
      v4 = (const wchar_t *)&this[10];
      if ( this[13].Ptr >= (PVOID)8 )
        v4 = *(const wchar_t **)v4;
      v22[0] = v4;
      v5 = (void **)std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject,wchar_t const *,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
                      &v23,
                      v22,
                      &v21,
                      &Ptr);
      v6 = *v5;
      v7 = (const wchar_t *)v5[1];
      *v5 = 0LL;
      v5[1] = 0LL;
      this[27].Ptr = v6;
      v22[2] = v7;
      v8 = (std::_Ref_count_base *)this[28].Ptr;
      this[28].Ptr = (PVOID)v7;
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      v17 = 0LL;
      v9 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
             &this[9].Ptr,
             &v17);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v17);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
        return v10;
      }
      v13 = v17;
      if ( !v17 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)0x8000FFFFLL);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v17);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
        return 2147549183LL;
      }
      *(_OWORD *)v19 = 0LL;
      v14 = (volatile signed __int32 *)this[28].Ptr;
      if ( v14 )
      {
        _InterlockedIncrement(v14 + 2);
        v14 = (volatile signed __int32 *)this[28].Ptr;
        v13 = v17;
      }
      v19[0] = (std::_Ref_count_base *)this[27].Ptr;
      v19[1] = (std::_Ref_count_base *)v14;
      v15 = (*(__int64 (__fastcall **)(PVOID, char *))(*(_QWORD *)v2->Ptr + 48LL))(v2->Ptr, v25);
      v16 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, __int64, std::_Ref_count_base **))(*(_QWORD *)v13 + 48LL))(
              v13,
              this,
              v15,
              v19);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5E,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v17);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
        return (unsigned int)v16;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v17);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x61,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                           v11);
  }
  return result;
}
