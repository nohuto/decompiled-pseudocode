/*
 * XREFs of ??$As@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x140046324
 * Callers:
 *     ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004E3C0 (-SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PE.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140002EB4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004942C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefe_ea_14004942C.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::As<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(
        __int64 a1,
        __int64 *a2)
{
  const struct _GUID *v3; // rcx
  __int64 v4; // r8
  const struct _GUID *v5; // rcx
  const struct _GUID *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  int CanCastTo; // edi

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a2 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  if ( InlineIsEqualGUID(v5, v6) )
  {
    *a2 = v8;
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 8LL))(*a2);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::CanCastTo(
                v8 + 8,
                v7,
                a2);
  if ( CanCastTo >= 0 )
    goto LABEL_6;
  return (unsigned int)CanCastTo;
}
