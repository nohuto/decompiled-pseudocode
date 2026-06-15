/*
 * XREFs of ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400177BC
 * Callers:
 *     ??$CopyLocal@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@2@@Z @ 0x1400176E0 (--$CopyLocal@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@.c)
 *     ??$CopyLocal@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1400176F0 (--$CopyLocal@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Med_ea_1400176F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::CopyLocal(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx

  v3 = *a1;
  v4 = 0;
  *a3 = 0LL;
  if ( !v3 )
    return 2147942487LL;
  v5 = *a1;
  if ( v5 )
    return (*(unsigned int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v5 + 24LL))(
             v5,
             &GUID_cb786404_f2e8_5e0b_bf12_39e31483cfae);
  return v4;
}
