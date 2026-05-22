/*
 * XREFs of ?StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F1E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E9A18 (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800F28C0 (-reset@-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StopListeningToSpatialObjects(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  char *v6; // rbx
  volatile signed __int32 *v7; // rdx
  int v8; // edi
  const char *v9; // r9
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
         (_QWORD *)this + 9,
         &v12);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v12;
    if ( v12 )
    {
      v6 = (char *)this + 216;
      v7 = (volatile signed __int32 *)*((_QWORD *)this + 28);
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v7 = (volatile signed __int32 *)*((_QWORD *)this + 28);
        v5 = v12;
      }
      v10 = (std::_Ref_count_base *)v7;
      try
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
        if ( v10 )
          std::_Ref_count_base::_Decref(v10);
        if ( v8 >= 0 )
        {
          std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset(v6);
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
            (const char *)(unsigned int)v8);
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
          result = (unsigned int)v8;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x6B,
                               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                               v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
    return v3;
  }
  return result;
}
