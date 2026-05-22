/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1800FA160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800F394C (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F39C0 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@EEAAXXZ @ 0x1800F8190 (-InitializeConstants@MPCGamepadProcessor@@EEAAXXZ.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180102B34 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180102CA4 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::Initialize3DComponents(unsigned __int64 this)
{
  MPCButtonHoldHelper *v2; // rax
  MPCButtonHoldHelper *v3; // rbx
  char *v4; // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  MPCButtonHoldHelper *v9; // rbx
  MPCButtonHoldHelper ***v10; // rdx
  MPCButtonHoldHelper **v11; // rcx
  unsigned int **Instance; // rax
  float v13; // xmm7_4
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  unsigned int **v18; // rax
  float v19; // xmm6_4
  MPCButtonHoldHelper *v20; // [rsp+60h] [rbp+8h] BYREF

  MPCGamepadProcessor::InitializeConstants((MPCGamepadProcessor *)this);
  v20 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v2 = MPCButtonHoldHelper::MPCButtonHoldHelper(v20, 10.0);
  v3 = v2;
  v4 = (char *)(this + 5896);
  if ( (MPCButtonHoldHelper **)(this + 5896) != &v20 )
  {
    v3 = 0LL;
    v5 = *(void (__fastcall ****)(_QWORD, __int64))v4;
    *(_QWORD *)v4 = v2;
    if ( !v5 )
      goto LABEL_6;
    (**v5)(v5, 1LL);
    v2 = 0LL;
  }
  if ( v2 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v3)(v3, 1LL);
LABEL_6:
  v20 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v6 = MPCButtonHoldHelper::MPCButtonHoldHelper(v20, 10.0);
  v9 = v6;
  v10 = (MPCButtonHoldHelper ***)(this + 5904);
  v11 = &v20;
  if ( (MPCButtonHoldHelper **)(this + 5904) != &v20 )
  {
    v9 = 0LL;
    v11 = *v10;
    *v10 = (MPCButtonHoldHelper **)v6;
    if ( !v11 )
      goto LABEL_11;
    (*(void (__fastcall **)(MPCButtonHoldHelper **, __int64))*v11)(v11, 1LL);
    v6 = 0LL;
  }
  if ( v6 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v9)(v9, 1LL);
LABEL_11:
  Instance = (unsigned int **)MPCConstantManager::GetInstance((__int64)v11, (__int64)v10, v7, v8);
  LODWORD(v13) = MPCConstantManager::GetConstant<float>(
                   Instance,
                   (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                   L"SelectTemporalDeadzoneSec").m128_u32[0];
  v18 = (unsigned int **)MPCConstantManager::GetInstance(v15, v14, v16, v17);
  LODWORD(v19) = MPCConstantManager::GetConstant<float>(
                   v18,
                   (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                   L"SelectXYDeadzone1M").m128_u32[0];
  v20 = (MPCButtonHoldHelper *)operator new(0x20uLL);
  v20 = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v20, v19, v13);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)(this + 5912), &v20);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)&v20);
}
