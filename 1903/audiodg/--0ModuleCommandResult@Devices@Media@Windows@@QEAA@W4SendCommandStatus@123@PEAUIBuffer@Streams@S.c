/*
 * XREFs of ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x1400454E4
 * Callers:
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140044944 (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140002768 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140045DDC (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::ModuleCommandResult(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v3; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx

  v3 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 56) = 1LL;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)a1 = &Windows::Media::Devices::ModuleCommandResult::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 64) = a2;
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=(a1 + 72, a3);
  return a1;
}
