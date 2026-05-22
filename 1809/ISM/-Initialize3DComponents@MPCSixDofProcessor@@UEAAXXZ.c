/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1800F2810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?InitializeConstants@MPCSixDofProcessor@@EEAAXXZ @ 0x1800EE9F0 (-InitializeConstants@MPCSixDofProcessor@@EEAAXXZ.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800F394C (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F39C0 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180102B34 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180102CA4 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCSixDofProcessor::Initialize3DComponents(MPCSixDofProcessor *this)
{
  float v1; // xmm0_4
  MPCButtonHoldHelper *v3; // rax
  MPCButtonHoldHelper *v4; // rbx
  char *v5; // rdx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  MPCButtonHoldHelper *v10; // rbx
  MPCButtonHoldHelper ***v11; // rdx
  MPCButtonHoldHelper **v12; // rcx
  MPCConstantManager *Instance; // rax
  MPCButtonHoldHelper *v14; // rax
  MPCButtonHoldHelper *v15; // rbx
  char *v16; // rdx
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v18; // rax
  __int64 v19; // r8
  const char *v20; // r9
  MPCButtonHoldHelper *v21; // rbx
  MPCButtonHoldHelper ***v22; // rdx
  MPCButtonHoldHelper **v23; // rcx
  MPCConstantManager *v24; // rax
  MPCButtonHoldHelper *v25; // rax
  __int64 v26; // r8
  const char *v27; // r9
  MPCButtonHoldHelper *v28; // rbx
  MPCButtonHoldHelper ***v29; // rdx
  MPCButtonHoldHelper **v30; // rcx
  MPCConstantManager *v31; // rax
  MPCButtonHoldHelper *v32; // rax
  __int64 v33; // r8
  const char *v34; // r9
  MPCButtonHoldHelper *v35; // rbx
  MPCButtonHoldHelper ***v36; // rdx
  MPCButtonHoldHelper **v37; // rcx
  MPCConstantManager *v38; // rax
  MPCButtonHoldHelper *v39; // rax
  __int64 v40; // r8
  const char *v41; // r9
  MPCButtonHoldHelper *v42; // rbx
  MPCButtonHoldHelper ***v43; // rdx
  MPCButtonHoldHelper **v44; // rcx
  MPCConstantManager *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  const char *v49; // r9
  MPCConstantManager *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  const char *v54; // r9
  MPCConstantManager *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  const char *v59; // r9
  MPCConstantManager *v60; // rax
  MPCButtonHoldHelper *v61; // [rsp+70h] [rbp+20h] BYREF

  MPCSixDofProcessor::InitializeConstants(this);
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v3 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, 0.0);
  v4 = v3;
  v5 = (char *)this + 4072;
  if ( (MPCButtonHoldHelper **)((char *)this + 4072) != &v61 )
  {
    v4 = 0LL;
    v6 = *(void (__fastcall ****)(_QWORD, __int64))v5;
    *(_QWORD *)v5 = v3;
    if ( !v6 )
      goto LABEL_6;
    (**v6)(v6, 1LL);
    v3 = 0LL;
  }
  if ( v3 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v4)(v4, 1LL);
LABEL_6:
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v7 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, 10.0);
  v10 = v7;
  v11 = (MPCButtonHoldHelper ***)((char *)this + 4080);
  v12 = &v61;
  if ( (MPCButtonHoldHelper **)((char *)this + 4080) != &v61 )
  {
    v10 = 0LL;
    v12 = *v11;
    *v11 = (MPCButtonHoldHelper **)v7;
    if ( !v12 )
      goto LABEL_11;
    (*(void (__fastcall **)(MPCButtonHoldHelper **, __int64))*v12)(v12, 1LL);
    v7 = 0LL;
  }
  if ( v7 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v10)(v10, 1LL);
LABEL_11:
  Instance = MPCConstantManager::GetInstance((__int64)v12, (__int64)v11, v8, v9);
  MPCConstantManager::GetConstant<float>(Instance);
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v14 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, v1);
  v15 = v14;
  v16 = (char *)this + 4088;
  if ( (MPCButtonHoldHelper **)((char *)this + 4088) != &v61 )
  {
    v15 = 0LL;
    v17 = *(void (__fastcall ****)(_QWORD, __int64))v16;
    *(_QWORD *)v16 = v14;
    if ( !v17 )
      goto LABEL_16;
    (**v17)(v17, 1LL);
    v14 = 0LL;
  }
  if ( v14 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v15)(v15, 1LL);
LABEL_16:
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v18 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, 0.0);
  v21 = v18;
  v22 = (MPCButtonHoldHelper ***)((char *)this + 4096);
  v23 = &v61;
  if ( (MPCButtonHoldHelper **)((char *)this + 4096) != &v61 )
  {
    v21 = 0LL;
    v23 = *v22;
    *v22 = (MPCButtonHoldHelper **)v18;
    if ( !v23 )
      goto LABEL_21;
    (*(void (__fastcall **)(MPCButtonHoldHelper **, __int64))*v23)(v23, 1LL);
    v18 = 0LL;
  }
  if ( v18 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v21)(v21, 1LL);
LABEL_21:
  v24 = MPCConstantManager::GetInstance((__int64)v23, (__int64)v22, v19, v20);
  MPCConstantManager::GetConstant<float>(v24);
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v25 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, v1);
  v28 = v25;
  v29 = (MPCButtonHoldHelper ***)((char *)this + 4104);
  v30 = &v61;
  if ( (MPCButtonHoldHelper **)((char *)this + 4104) != &v61 )
  {
    v28 = 0LL;
    v30 = *v29;
    *v29 = (MPCButtonHoldHelper **)v25;
    if ( !v30 )
      goto LABEL_26;
    (*(void (__fastcall **)(MPCButtonHoldHelper **, __int64))*v30)(v30, 1LL);
    v25 = 0LL;
  }
  if ( v25 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v28)(v28, 1LL);
LABEL_26:
  v31 = MPCConstantManager::GetInstance((__int64)v30, (__int64)v29, v26, v27);
  MPCConstantManager::GetConstant<float>(v31);
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v32 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, v1);
  v35 = v32;
  v36 = (MPCButtonHoldHelper ***)((char *)this + 4112);
  v37 = &v61;
  if ( (MPCButtonHoldHelper **)((char *)this + 4112) != &v61 )
  {
    v35 = 0LL;
    v37 = *v36;
    *v36 = (MPCButtonHoldHelper **)v32;
    if ( !v37 )
      goto LABEL_31;
    (*(void (__fastcall **)(MPCButtonHoldHelper **, __int64))*v37)(v37, 1LL);
    v32 = 0LL;
  }
  if ( v32 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v35)(v35, 1LL);
LABEL_31:
  v38 = MPCConstantManager::GetInstance((__int64)v37, (__int64)v36, v33, v34);
  MPCConstantManager::GetConstant<float>(v38);
  v61 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v39 = MPCButtonHoldHelper::MPCButtonHoldHelper(v61, v1);
  v42 = v39;
  v43 = (MPCButtonHoldHelper ***)((char *)this + 4120);
  v44 = &v61;
  if ( (MPCButtonHoldHelper **)((char *)this + 4120) != &v61 )
  {
    v42 = 0LL;
    v44 = *v43;
    *v43 = (MPCButtonHoldHelper **)v39;
    if ( !v44 )
      goto LABEL_36;
    (*(void (__fastcall **)(MPCButtonHoldHelper **, __int64))*v44)(v44, 1LL);
    v39 = 0LL;
  }
  if ( v39 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v42)(v42, 1LL);
LABEL_36:
  v45 = MPCConstantManager::GetInstance((__int64)v44, (__int64)v43, v40, v41);
  MPCConstantManager::GetConstant<float>(v45);
  v50 = MPCConstantManager::GetInstance(v47, v46, v48, v49);
  MPCConstantManager::GetConstant<float>(v50);
  v61 = (MPCButtonHoldHelper *)operator new(0x20uLL);
  v61 = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v61, v1, v1);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((char *)this + 4128, &v61);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v61);
  v55 = MPCConstantManager::GetInstance(v52, v51, v53, v54);
  MPCConstantManager::GetConstant<float>(v55);
  v60 = MPCConstantManager::GetInstance(v57, v56, v58, v59);
  MPCConstantManager::GetConstant<float>(v60);
  v61 = (MPCButtonHoldHelper *)operator new(0x20uLL);
  v61 = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v61, v1, v1);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((char *)this + 4136, &v61);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v61);
}
