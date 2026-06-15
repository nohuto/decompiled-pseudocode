/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001CA1C
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001E190 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180029350 (-Invoke@CAppClosedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000E52C (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x18000FCD4 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x18000FE08 (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180010AC0 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001B6C0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001C87C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002585C (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18002590C (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  int Application; // ebp
  volatile signed __int32 *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  CApplication *v11; // rdi
  CApplication *v12; // rbx
  CApplication *v14; // [rsp+80h] [rbp+8h] BYREF
  CApplication *v15; // [rsp+88h] [rbp+10h]

  Application = 0;
  v9 = 0LL;
  v15 = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, a3, a4, &v14, 0, 0LL);
      if ( Application >= 0 )
      {
        v11 = v14;
        v9 = (volatile signed __int32 *)v14;
        v15 = v14;
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
          v9 = (volatile signed __int32 *)v15;
          v11 = v14;
        }
        if ( !(unsigned int)CApplication::IsVoipCallCapableAndCallIsActive(v11) && *((_DWORD *)v11 + 149) )
          CApplicationManager::SilenceAndRevokePLMExemption(this, v11);
        CApplication::UpdateAppState(v11, 0, 0LL);
        if ( (unsigned int)TsSessionIsActiveMediaApplication(v11) )
          TsSessionIdRemoveActiveMediaApp(a4, v11);
        CApplication::SendAppClosureNotification(v11);
        if ( *((_BYTE *)v11 + 664) )
          Application = CApplicationManager::RemoveApplication(this, &v14);
      }
    }
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v9 )
  {
    CApplication::DisconnectExclusiveModeStreams((CApplication *)v9);
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      v12 = v15;
      (*(void (__fastcall **)(CApplication *))(*(_QWORD *)v15 + 16LL))(v15);
      (*(void (__fastcall **)(CApplication *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1LL);
    }
  }
  return (unsigned int)Application;
}
