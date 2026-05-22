/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F82B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180047A44 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x180047AF8 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F84B0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x1800F87A0 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1800F9AA0 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800FA3DC (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180100964 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180102BE4 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCGamepadInputHelper *Instance; // rax
  char ShouldHandleMPCInput; // al
  char v7; // bp
  MPCHolographicInputManager *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct IMPCTarget *v11; // rcx
  struct IMPCTarget *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCTarget *v14; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) != 1 )
    return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, a2);
  memcpy_0((void *)(this + 3752), a2, 0x640uLL);
  *(_OWORD *)(this + 5360) = *(_OWORD *)((char *)a2 + 520);
  *(_OWORD *)(this + 5376) = *(_OWORD *)((char *)a2 + 536);
  *(_OWORD *)(this + 5392) = *(_OWORD *)((char *)a2 + 552);
  *(_OWORD *)(this + 5408) = *(_OWORD *)((char *)a2 + 568);
  Instance = MPCGamepadInputHelper::GetInstance();
  ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
  v7 = ShouldHandleMPCInput;
  if ( *(_BYTE *)(this + 5813) && !ShouldHandleMPCInput )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), a2);
  *(_BYTE *)(this + 5813) = v7;
  MPCButtonHoldHelper::UpdateState(
    *(MPCButtonHoldHelper **)(this + 5904),
    *(_BYTE *)(this + 5368) & 1,
    *((_QWORD *)a2 + 2));
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  if ( !v7 )
  {
    (*(void (__fastcall **)(MPCButtonHoldHelper *, unsigned __int64))(**(_QWORD **)(this + 3736) + 48LL))(
      *(MPCButtonHoldHelper **)(this + 3736),
      this + 3752);
LABEL_20:
    *(_DWORD *)(this + 5352) = *(_DWORD *)(this + 5368);
    return 0LL;
  }
  if ( (*((_DWORD *)a2 + 132) & 4) != 0 && (*(_DWORD *)(this + 5352) & 4) == 0 )
    *((_DWORD *)a2 + 130) = 2;
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
    && MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32)) )
  {
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  }
  v14 = 0LL;
  v8 = MPCHolographicInputManager::GetInstance();
  v9 = MPCHolographicInputManager::Process3DInput(
         v8,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
         &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
    (const char *)(unsigned int)v9);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
