/*
 * XREFs of ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800044A8
 * Callers:
 *     ??_EOneCoreUAPInputHost@@OBA@EAAPEAXI@Z @ 0x180005740 (--_EOneCoreUAPInputHost@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA@XZ @ 0x180004E24 (--1-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::`scalar deleting destructor'(OneCoreUAPInputHost *this, char a2)
{
  MPCManager *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 80) )
  {
    std::vector<InputProvider>::~vector<InputProvider>((char *)this + 56);
    *((_BYTE *)this + 80) = 0;
  }
  MPCGestureHandlerManager::s_instance = 0LL;
  MPCGamepadInputHelper::s_instance = 0LL;
  MPCConstantManager::s_instance = 0LL;
  v4 = MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    (**((void (__fastcall ***)(__int64))v4 + 2))((__int64)v4 + 16);
  }
  MPCHolographicInputManager::s_instance = 0LL;
  MPC3DStateHelper::s_instance = 0LL;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  OneCoreUAPInputHost::s_pInputHost = 0LL;
  EventUnregister(RegHandle);
  RegHandle = 0LL;
  hProvider = 0;
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((_BYTE *)this + 80) )
    std::vector<InputProvider>::~vector<InputProvider>((char *)this + 56);
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((int *)this + 8) >= 0 )
    RoUninitialize(v10);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
