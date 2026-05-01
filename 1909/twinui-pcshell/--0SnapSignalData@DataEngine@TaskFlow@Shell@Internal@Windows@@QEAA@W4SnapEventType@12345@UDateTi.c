/*
 * XREFs of ??0SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x18021A40C
 * Callers:
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x18021A50C (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::SnapSignalData(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = &Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  result = a1;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  return result;
}
