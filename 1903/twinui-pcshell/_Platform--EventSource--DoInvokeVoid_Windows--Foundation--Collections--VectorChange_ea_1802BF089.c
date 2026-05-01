/*
 * XREFs of _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_47ed099530a2135fa4bc1c4a176c63c9____::_1_::catch$4 @ 0x1802BF089
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_47ed099530a2135fa4bc1c4a176c63c9____::_1_::catch_4(
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
  return &loc_1802BEFF7;
}
