/*
 * XREFs of ?InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@@Z @ 0x1800ECBF4
 * Callers:
 *     _lambda_6a3155624c78cd50ce8884ce74998254_::operator() @ 0x1800EAFF0 (_lambda_6a3155624c78cd50ce8884ce74998254_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x180091DD0 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatialObjectDDIClientFactory@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x1800E9EC4 (--$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatia.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevicesOnWorkerThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2)
{
  _QWORD *v2; // rbx
  __int64 *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 592);
  v4 = (__int64 *)((char *)this + 592);
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::operator=(v4, (__int64)a2);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v4);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,>(v2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned __int64, char *))(*(_QWORD *)*v2 + 40LL))(
         *v2,
         &GUID_DEVINTERFACE_SPATIAL_OBJECT,
         ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
         (char *)this + 600);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x145,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
