/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180087624 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800878BC (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801371E0 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801374D4 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138C60 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180138E8C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18013E6B0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A30 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCGamepadInputHelper *v5; // rax
  char ShouldHandleMPCInput; // al
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  MPCHolographicInputManager *Instance; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCTarget *v15; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) != 1 )
    return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, a2);
  memcpy_0((void *)(this + 4624), a2, 0x7F0uLL);
  *(_OWORD *)(this + 6664) = *((_OWORD *)a2 + 4);
  *(_OWORD *)(this + 6680) = *((_OWORD *)a2 + 5);
  *(_OWORD *)(this + 6696) = *((_OWORD *)a2 + 6);
  *(_OWORD *)(this + 6712) = *((_OWORD *)a2 + 7);
  MPCGamepadInputHelper::GetInstance();
  ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(v5);
  v7 = ShouldHandleMPCInput;
  if ( *(_BYTE *)(this + 7125) && !ShouldHandleMPCInput )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), a2);
  *(_BYTE *)(this + 7125) = v7;
  MPCButtonHoldHelper::UpdateState(
    *(MPCButtonHoldHelper **)(this + 7216),
    *(_BYTE *)(this + 6672) & 1,
    *((_QWORD *)a2 + 2));
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  if ( v7 )
  {
    if ( (*((_BYTE *)a2 + 72) & 4) != 0 && (*(_DWORD *)(this + 6656) & 4) == 0 )
      *((_DWORD *)a2 + 16) = 2;
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
    {
      if ( MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32), v8, v9, v10) )
        MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
    v15 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
    v12 = MPCHolographicInputManager::Process3DInput(
            Instance,
            a2,
            (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
            &v15);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
      return v13;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this + 4608) + 48LL))(
      *(_QWORD *)(this + 4608),
      this + 4624);
  }
  *(_DWORD *)(this + 6656) = *(_DWORD *)(this + 6672);
  return 0LL;
}
