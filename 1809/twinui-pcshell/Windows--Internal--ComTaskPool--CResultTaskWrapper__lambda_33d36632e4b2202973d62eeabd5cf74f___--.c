/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_33d36632e4b2202973d62eeabd5cf74f___::CResultTaskWrapper__lambda_33d36632e4b2202973d62eeabd5cf74f_____lambda_33d36632e4b2202973d62eeabd5cf74f___ @ 0x180033018
 * Callers:
 *     ?OnAppViewVisibilityChanged@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewVisibilityChangedEventArgs@3456@@Z @ 0x180032F30 (-OnAppViewVisibilityChanged@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Appli.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_33d36632e4b2202973d62eeabd5cf74f___::CResultTaskWrapper__lambda_33d36632e4b2202973d62eeabd5cf74f_____lambda_33d36632e4b2202973d62eeabd5cf74f___(
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
  *(_QWORD *)a1 = off_1803C3828;
  result = a1;
  *(_OWORD *)(a1 + 16) = v6;
  return result;
}
