/*
 * XREFs of _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64___lambda_3b34480ad7d2973204f2b7367543a8f5____::_1_::catch$4 @ 0x180266191
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64___lambda_3b34480ad7d2973204f2b7367543a8f5____::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  __int64 v5; // rcx
  int v6; // eax

  v5 = *(_QWORD *)(a2 + 80);
  v6 = *(_DWORD *)(v5 + 64);
  if ( v6 != -2147023174 && v6 != -2147417848 && v6 != -2146823277 && v6 != -1996357631 )
  {
    *(_QWORD *)(a2 + 64) = __abi_winrt_ptr_ctor(v5);
    throw (Platform::Exception **)(a2 + 64);
  }
  Platform::Details::EventSourceRemove(
    *(Platform::Details **)(a2 + 160),
    *(void ***)(a2 + 168),
    *(struct Platform::Details::EventLock **)(a2 + 40),
    a4);
  return &loc_1802660FF;
}
