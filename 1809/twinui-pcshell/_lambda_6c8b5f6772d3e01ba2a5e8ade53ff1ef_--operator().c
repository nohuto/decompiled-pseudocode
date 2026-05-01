/*
 * XREFs of _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::operator() @ 0x18026BBE8
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef__void_::Invoke @ 0x180271F90 (Platform--Details--__abi_FunctorCapture__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x180262C48 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, __int64, __int64 *); // rsi
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64 *); // r14
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rcx

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 184LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD **)(a1 + 8);
  v4 = v3[12];
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 216LL))(v4, v3[14]);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 96LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL));
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL) = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 96LL) + 168LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL));
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL) = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 96LL) + 104LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL));
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 96LL) + 120LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL));
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 96LL) + 136LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL));
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
  }
  v11 = v3[13];
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, v3[22]);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL) = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
  }
  v13 = v3[11];
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, v3[20]);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) = 0LL;
    v15 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::IWindow::Content::get(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL));
    v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_cast_to(
                                                                  0,
                                                                  v15,
                                                                  (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v17 = __abi_winrt_cast_to(
            0,
            v16,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 120LL))(
            v17,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL));
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v16 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[2])(v16);
    if ( v15 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v15)[2])(v15);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
  }
  v19 = v3[6];
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
