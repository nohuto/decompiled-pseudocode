/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c_____lambda_2254560a2be2e850cda9341575eb773c___ @ 0x180034398
 * Callers:
 *     ?OnWindowAdded@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x1800342B0 (-OnWindowAdded@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@In.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c_____lambda_2254560a2be2e850cda9341575eb773c___(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v6; // xmm0
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v6 = *a3;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = off_1803C38A0;
  result = a1;
  *(_OWORD *)(a1 + 16) = v6;
  return result;
}
