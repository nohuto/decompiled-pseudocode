/*
 * XREFs of ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x18016AC50
 * Callers:
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18016A7F0 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18000F6F0 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18003CB1C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18003CDD8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x18016A750 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     WPP_SF_q @ 0x18016B808 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_UpdateZOrderActivation(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int64 a2)
{
  unsigned int inserted; // ebp
  struct ITaskWindow *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  struct ITaskWindow *v9; // [rsp+40h] [rbp+8h] BYREF

  inserted = 0;
  if ( a2 )
  {
    v9 = *(struct ITaskWindow **)(*((_QWORD *)this + 21) + 8 * a2);
    v5 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, a2);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow((CSplashScreen **)this, v5, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  }
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((__int64)this);
  if ( *((_QWORD *)this + 22) >= 2uLL && a2 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL);
    v9 = (struct ITaskWindow *)v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids, v7);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 160LL))(v6, 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 248LL))(v6, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  }
  return inserted;
}
