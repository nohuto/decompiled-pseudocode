/*
 * XREFs of Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e___ @ 0x1802BE610
 * Callers:
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1802C6468 (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v7 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v7 = (_QWORD *)*a2;
    v5 = (__int64)v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    *v4 = &off_180592A10;
    a1[6] = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return a1;
}
