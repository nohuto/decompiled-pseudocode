/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084CA4 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180087624 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18008790C (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801374D4 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013920C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140BF0 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  MPCGamepadInputHelper *v5; // rax
  char ShouldUseGazeAndCommit; // al
  char v7; // bl
  int v8; // edx
  bool IsPrimary; // al
  char v10; // dl
  bool v11; // bp
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  char v14; // bl
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v16; // rax
  float *v17; // rax
  float v18[4]; // [rsp+30h] [rbp-948h] BYREF
  _OWORD v19[4]; // [rsp+40h] [rbp-938h] BYREF
  _BYTE v20[952]; // [rsp+80h] [rbp-8F8h] BYREF
  __int128 v21; // [rsp+438h] [rbp-540h]
  __int128 v22; // [rsp+448h] [rbp-530h]
  __int128 v23; // [rsp+458h] [rbp-520h]
  __int128 v24; // [rsp+468h] [rbp-510h]

  MPCGamepadInputHelper::GetInstance();
  ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v5, a3);
  v7 = ShouldUseGazeAndCommit;
  if ( !*((_BYTE *)this + 7126) && ShouldUseGazeAndCommit )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 32), a3);
  v8 = *((_DWORD *)this + 1668);
  *((_BYTE *)this + 7126) = v7;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 903),
    (v8 & 4) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 39),
    *((float *)a3 + 40),
    *((float *)a3 + 54));
  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v10 = *(_BYTE *)(*((_QWORD *)this + 901) + 8LL);
  if ( IsPrimary )
  {
    v11 = !v10 && v7;
    v12 = *((_QWORD *)this + 903);
    v13 = *(volatile signed __int32 **)(v12 + 24);
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = *(volatile signed __int32 **)(v12 + 24);
    }
    v14 = *(_BYTE *)(*(_QWORD *)(v12 + 16) + 10LL);
    if ( v13 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
    if ( v14 )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 891) = *((_QWORD *)Instance + 28);
      *((_DWORD *)this + 1784) = *((_DWORD *)Instance + 58);
      v16 = MPCHolographicInputManager::GetInstance();
      memcpy_0(v20, v16, 0x8F0uLL);
      v19[0] = v21;
      v19[1] = v22;
      v19[2] = v23;
      v19[3] = v24;
      v17 = Windows::Foundation::Numerics::transform(v18, (float *)this + 1782, (float *)v19);
      *(_QWORD *)((char *)this + 7140) = *(_QWORD *)v17;
      *(float *)&v17 = v17[2];
      *((_OWORD *)this + 448) = 0LL;
      *((_DWORD *)this + 1787) = (_DWORD)v17;
    }
    if ( v11 )
    {
      MPCGamepadProcessor::SendMPCInput((MPCGamepadProcessor *)((char *)this - 32), a3);
      return;
    }
  }
  else if ( !v10 )
  {
    return;
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 576) + 48LL))(
    *((_QWORD *)this + 576),
    (char *)this + 4624);
}
