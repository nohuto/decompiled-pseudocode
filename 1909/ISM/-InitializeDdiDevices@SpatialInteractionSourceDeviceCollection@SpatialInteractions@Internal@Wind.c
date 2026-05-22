/*
 * XREFs of ?InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800EC820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4260 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevices(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  _DWORD *v5; // rdi
  void *v6; // rcx
  char *v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10[2]; // [rsp+28h] [rbp-70h] BYREF
  std::_Ref_count_base *v11[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v12[9]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v14; // [rsp+B0h] [rbp+18h] BYREF

  try
  {
    *((_BYTE *)this + 696) = (**(int (__fastcall ***)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))a3)(a3) >= 0;
    v5 = operator new(0x3FCuLL);
    *v5 = 0;
    memset_0(v5 + 1, 0, 0x3B8uLL);
    memset_0(v5 + 239, 0, 0x40uLL);
    v6 = (void *)*((_QWORD *)this + 86);
    *((_QWORD *)this + 86) = v5;
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x3FC);
    v14 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
    *(_OWORD *)v11 = 0LL;
    v10[0] = (__int64)a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v10);
    v7 = (char *)this - 8;
    v10[1] = (__int64)v7;
    v12[0] = off_180170420;
    v12[1] = a2;
    v10[0] = 0LL;
    v12[2] = v7;
    v12[7] = v12;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v10);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
      (__int64)v7,
      v11,
      (__int64)v12,
      1);
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x134,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
                     v8);
    return (unsigned int)v14;
  }
  return result;
}
