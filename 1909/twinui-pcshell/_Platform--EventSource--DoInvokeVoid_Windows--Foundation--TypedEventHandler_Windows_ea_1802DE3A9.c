/*
 * XREFs of _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_482b3f9570c0e9685e107121a6a2c9e9____::_1_::catch$4 @ 0x1802DE3A9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_482b3f9570c0e9685e107121a6a2c9e9____::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a2 + 80);
  if ( *(_DWORD *)(v5 + 64) != -2147023174 && *(_DWORD *)(v5 + 64) != -2147417848 && *(_DWORD *)(v5 + 64) != -1996357631 )
  {
    *(_QWORD *)(a2 + 64) = __abi_winrt_ptr_ctor(v5);
    throw (Platform::Exception **)(a2 + 64);
  }
  Platform::Details::EventSourceRemove(
    *(Platform::Details **)(a2 + 160),
    *(void ***)(a2 + 168),
    *(struct Platform::Details::EventLock **)(a2 + 40),
    a4);
  return &loc_1802DE317;
}
