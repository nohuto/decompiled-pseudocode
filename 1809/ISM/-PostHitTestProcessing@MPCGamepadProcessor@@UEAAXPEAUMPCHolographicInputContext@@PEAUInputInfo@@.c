/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F8510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180047A44 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x180047B48 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9C1C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800FA3DC (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180102D88 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  MPCGamepadInputHelper *Instance; // rax
  char ShouldUseGazeAndCommit; // al
  char v7; // bl
  int v8; // edx
  bool IsPrimary; // al
  __int64 v10; // rcx
  bool v11; // r14
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  char v14; // r15
  struct MPCHolographicInputManager *v15; // rax
  struct MPCHolographicInputManager *v16; // rax
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  __m128 v19; // xmm2
  float v20; // xmm1_4
  _BYTE v21[1344]; // [rsp+48h] [rbp-C0h] BYREF
  float v22; // [rsp+588h] [rbp+480h]
  float v23; // [rsp+58Ch] [rbp+484h]
  float v24; // [rsp+590h] [rbp+488h]
  float v25; // [rsp+598h] [rbp+490h]
  float v26; // [rsp+59Ch] [rbp+494h]
  float v27; // [rsp+5A0h] [rbp+498h]
  float v28; // [rsp+5A8h] [rbp+4A0h]
  float v29; // [rsp+5ACh] [rbp+4A4h]
  float v30; // [rsp+5B0h] [rbp+4A8h]
  float v31; // [rsp+5B8h] [rbp+4B0h]
  float v32; // [rsp+5BCh] [rbp+4B4h]
  float v33; // [rsp+5C0h] [rbp+4B8h]

  Instance = MPCGamepadInputHelper::GetInstance();
  ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(Instance, a3);
  v7 = ShouldUseGazeAndCommit;
  if ( !*((_BYTE *)this + 5814) && ShouldUseGazeAndCommit )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 32), a3);
  v8 = *((_DWORD *)this + 1342);
  *((_BYTE *)this + 5814) = v7;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 739),
    (v8 & 4) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 151),
    *((float *)a3 + 152),
    *((float *)a3 + 166));
  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v10 = *((_QWORD *)this + 737);
  if ( IsPrimary )
  {
    v11 = !*(_BYTE *)(v10 + 8) && v7;
    v12 = *((_QWORD *)this + 739);
    v13 = *(volatile signed __int32 **)(v12 + 24);
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = *(volatile signed __int32 **)(v12 + 24);
    }
    v14 = *(_BYTE *)(*(_QWORD *)(v12 + 16) + 10LL);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    if ( v14 )
    {
      v15 = MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 727) = *((_QWORD *)v15 + 22);
      *((_DWORD *)this + 1456) = *((_DWORD *)v15 + 46);
      v16 = MPCHolographicInputManager::GetInstance();
      memcpy_0(v21, v16, 0x710uLL);
      v17 = (__m128)*((unsigned int *)this + 1454);
      v18 = v17;
      v19 = v17;
      v20 = *((float *)this + 1456);
      v18.m128_f32[0] = (float)((float)((float)(v17.m128_f32[0] * v22) + (float)(*((float *)this + 1455) * v25))
                              + (float)(v20 * v28))
                      + v31;
      v19.m128_f32[0] = (float)((float)((float)(v17.m128_f32[0] * v23) + (float)(*((float *)this + 1455) * v26))
                              + (float)(v20 * v29))
                      + v32;
      v17.m128_f32[0] = (float)((float)((float)(v17.m128_f32[0] * v24) + (float)(*((float *)this + 1455) * v27))
                              + (float)(v20 * v30))
                      + v33;
      *(_QWORD *)((char *)this + 5828) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
      *((_OWORD *)this + 366) = 0LL;
      *((_DWORD *)this + 1459) = v17.m128_i32[0];
    }
    if ( v11 )
    {
      MPCGamepadProcessor::SendMPCInput((MPCGamepadProcessor *)((char *)this - 32), a3);
      return;
    }
  }
  else if ( !*(_BYTE *)(v10 + 8) )
  {
    return;
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 467) + 48LL))(
    *((_QWORD *)this + 467),
    (char *)this + 3752);
}
