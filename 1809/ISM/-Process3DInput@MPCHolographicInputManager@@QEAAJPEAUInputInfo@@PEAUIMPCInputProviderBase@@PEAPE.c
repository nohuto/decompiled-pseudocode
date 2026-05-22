/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F0670 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F82B0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FB954 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FEE80 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FF370 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x1800405E8 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180040DC4 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800413AC (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180041C34 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800421C4 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18004258C (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProvi.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x1800426B0 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180042F48 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180043600 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180044B20 (-MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180047A44 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180047BA4 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct ISystemInputRouter *v13; // rax
  const char *v14; // r9
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  char v17; // r12
  _QWORD *v18; // rax
  struct InputInfo *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  struct IMPCTarget *v22; // rbx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // r8
  const char *v26; // r9
  _OWORD *v27; // rax
  _OWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  _DWORD *v34; // rcx
  ISMTracing *v35; // rcx
  int v36; // eax
  struct MPCGamepadInputHelper *Instance; // rcx
  __int64 v38; // rax
  bool v39; // al
  MPCHolographicInputManager *v40; // rcx
  unsigned int v41; // eax
  int v42; // eax
  __int128 v44; // [rsp+40h] [rbp-41h]
  __int128 v45; // [rsp+40h] [rbp-41h]
  __int128 v46; // [rsp+50h] [rbp-31h] BYREF
  __int64 v47; // [rsp+60h] [rbp-21h]
  __int64 (__fastcall **v48)(); // [rsp+68h] [rbp-19h] BYREF
  __int128 v49; // [rsp+70h] [rbp-11h]
  __int64 (__fastcall ***v50)(); // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  struct InputInfo *v52; // [rsp+E8h] [rbp+67h] BYREF

  v8 = retaddr;
  if ( !*((_BYTE *)this + 1872) )
    goto LABEL_69;
  if ( !*((_QWORD *)this + 228) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 256LL))(a3);
    v10 = v9;
    v11 = *((_QWORD *)this + 228);
    if ( v11 != v9 )
    {
      v12 = *((_QWORD *)this + 228);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v12);
        v12 = *((_QWORD *)this + 228);
      }
      *((_QWORD *)this + 228) = v10;
      v11 = v10;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v11 = *((_QWORD *)this + 228);
      }
    }
    v13 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
    MPCHolographicInputManager::SetMPCInputRouter(this, v13);
  }
  if ( !*((_QWORD *)this + 226) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  MPCHolographicInputManager::UpdateGazeSensorData(this, a2);
  if ( !*((_BYTE *)this + 1872) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x22D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v14);
    __debugbreak();
  }
  v15 = 0LL;
  v16 = *((_QWORD *)this + 229);
  v17 = 1;
  if ( (*((_QWORD *)this + 230) - v16) >> 3 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 8 * v15) + 24LL))(*(_QWORD *)(v16 + 8 * v15)) )
    {
      ++v15;
      v16 = *((_QWORD *)this + 229);
      if ( v15 >= (*((_QWORD *)this + 230) - v16) >> 3 )
        goto LABEL_28;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 8 * v15) + 72LL))(*(_QWORD *)(v16 + 8 * v15)) )
    {
      v18 = (_QWORD *)*((_QWORD *)this + 261);
      if ( *v18 == *((_QWORD *)this + 233) || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 72LL))(*v18) )
      {
        v19 = *(struct InputInfo **)(v16 + 8 * v15);
        v52 = v19;
        if ( v19 )
          (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v19 + 8LL))(v19);
      }
      else
      {
        v19 = (struct InputInfo *)*((_QWORD *)this + 233);
        v52 = v19;
        if ( v19 )
          (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    else
    {
      v19 = *(struct InputInfo **)(v16 + 8 * v15);
      v52 = v19;
      if ( v19 )
        (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    MPCHolographicInputManager::TrySetProviderAsPrimary(this);
    if ( v19 )
      (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_28:
  v20 = *(_QWORD *)a3;
  if ( *((_BYTE *)a2 + 1585) )
  {
    v21 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v20 + 232))(a3);
    v22 = (struct IMPCTarget *)v21;
    v52 = (struct InputInfo *)v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    if ( v22 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v22 + 8LL))(v22);
    *a4 = v22;
    v23 = (_OWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 240LL))(a3);
    v24 = (_OWORD *)((char *)a2 + 600);
    v25 = 2LL;
    do
    {
      *v24 = *v23;
      v24[1] = v23[1];
      v24[2] = v23[2];
      v24[3] = v23[3];
      v24[4] = v23[4];
      v24[5] = v23[5];
      v24[6] = v23[6];
      v24 += 8;
      *(v24 - 1) = v23[7];
      v23 += 8;
      --v25;
    }
    while ( v25 );
    *v24 = *v23;
    v24[1] = v23[1];
    v24[2] = v23[2];
    v24[3] = v23[3];
LABEL_43:
    if ( v22 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v22 + 16LL))(v22);
    goto LABEL_48;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(v20 + 72))(a3) )
  {
    if ( !*((_QWORD *)this + 233) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v26);
      JUMPOUT(0x180040DBALL);
    }
    v27 = (_OWORD *)((char *)a2 + 600);
    v28 = (_OWORD *)((char *)this + 800);
    v29 = 2LL;
    do
    {
      *v27 = *v28;
      v27[1] = v28[1];
      v27[2] = v28[2];
      v27[3] = v28[3];
      v27[4] = v28[4];
      v27[5] = v28[5];
      v27[6] = v28[6];
      v27 += 8;
      *(v27 - 1) = v28[7];
      v28 += 8;
      --v29;
    }
    while ( v29 );
    *v27 = *v28;
    v27[1] = v28[1];
    v27[2] = v28[2];
    v27[3] = v28[3];
    v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 233) + 224LL))(*((_QWORD *)this + 233));
    v22 = (struct IMPCTarget *)v30;
    if ( v30 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v22 + 8LL))(v22);
    }
    *a4 = v22;
    goto LABEL_43;
  }
  MPCHolographicInputManager::PrepAndStabilizeTargetingRay(this, a2, a3);
  v31 = (__int64 *)*((_QWORD *)this + 227);
  v32 = *v31;
  v33 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 224LL))(a3);
  (*(void (__fastcall **)(__int64 *, struct InputInfo *, __int64, struct IMPCTarget **))(v32 + 64))(v31, a2, v33, a4);
  v34 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v34 && *v34 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(v35, a2);
  }
LABEL_48:
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 216LL))(a3, (char *)a2 + 600);
  v36 = *((_DWORD *)a2 + 130);
  if ( v36 == 8 )
  {
    MPCHolographicInputManager::ProcessCursorData(
      this,
      *((_QWORD *)this + 233),
      (char *)a2 + 600,
      0LL,
      (char *)this + 1912);
    memcpy_0((char *)this + 200, a2, 0x640uLL);
    v36 = *((_DWORD *)a2 + 130);
  }
  v52 = a2;
  if ( v36 == 8 )
  {
    Instance = MPCGamepadInputHelper::GetInstance();
    v38 = *((_QWORD *)a2 + 80);
    if ( v38 == *((_QWORD *)Instance + 1) || v38 == *((_QWORD *)Instance + 2) )
    {
      v39 = *((_BYTE *)a2 + 600) && !*((_BYTE *)a2 + 602);
      *((_BYTE *)Instance + 39) = v39;
      if ( v39 && !*((_DWORD *)a2 + 158) )
        goto LABEL_61;
    }
    else
    {
      *((_BYTE *)Instance + 39) = 0;
    }
    v17 = 0;
LABEL_61:
    *((_BYTE *)Instance + 40) = v17;
    *((_BYTE *)Instance + 41) = *((_BYTE *)a2 + 672) != 0;
    MPCGamepadInputHelper::UpdateGamepadFocus(Instance);
    *(_QWORD *)&v44 = this;
    *((_QWORD *)&v44 + 1) = &v52;
    v48 = off_18013B248;
    v49 = v44;
    v50 = &v48;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v48);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 128LL))(
    a3,
    this,
    a2);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
  {
    *((_BYTE *)this + 1800) = *((_BYTE *)a2 + 896) != 0;
    if ( !*((_BYTE *)a2 + 1584) )
    {
      v41 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 320LL))(a3);
      MPCHolographicInputManager::ProcessCursorData(this, a3, (char *)a2 + 600, v41, (char *)a2 + 920);
    }
    v46 = 0LL;
    v47 = 0LL;
    *(_QWORD *)&v45 = this;
    *((_QWORD *)&v45 + 1) = &v46;
    v48 = off_18013B188;
    v49 = v45;
    v50 = &v48;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v48);
    v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 236) + 80LL))(
            *((_QWORD *)this + 236),
            (*((_QWORD *)&v46 + 1) - (_QWORD)v46) / 184LL);
    if ( v42 >= 0 )
    {
      std::vector<PointData3D>::~vector<PointData3D>(&v46);
      goto LABEL_67;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1AE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v42);
LABEL_69:
    wil::details::in1diag3::_FailFast_Unexpected(
      v8,
      (void *)0x155,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
LABEL_67:
  MPCHolographicInputManager::ProcessCapture(v40, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 208LL))(a3, *a4);
  return 0LL;
}
