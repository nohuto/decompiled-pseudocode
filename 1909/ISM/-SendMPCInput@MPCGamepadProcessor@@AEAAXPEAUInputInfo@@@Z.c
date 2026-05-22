/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013922C
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A90 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18007E8FC (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180081164 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180081480 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180140D1C (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180140D54 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  __int64 v6; // rax
  volatile signed __int32 *v7; // rcx
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  char v12; // r8
  volatile signed __int32 *v13; // rcx
  char v14; // r14
  __int64 v15; // rax
  volatile signed __int32 *v16; // rcx
  char v17; // bl
  int v18; // ebx
  struct MPCHolographicInputManager *Instance; // rax
  __int64 *v20; // rcx
  __int64 **v21; // rax
  __int64 **v22; // rbx
  __int64 *v23; // rax
  const char *v24; // r9
  struct MPCHolographicInputManager *v25; // rax
  const char *v26; // r9
  int v27; // eax
  struct MPCHolographicInputManager *v28; // rax
  const char *v29; // r9
  int v30; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  std::_Ref_count_base *v32; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v32) = 0;
  v4 = *((_BYTE *)a2 + 457) == 0;
  v5 = *(_OWORD *)((char *)a2 + 164);
  *((_DWORD *)a2 + 168) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a2 + 169) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a2 + 174) = *((_DWORD *)a2 + 46);
  *((_BYTE *)a2 + 700) = !v4;
  *((_DWORD *)a2 + 164) = 0;
  *(_OWORD *)((char *)a2 + 680) = v5;
  v6 = *((_QWORD *)this + 907);
  v7 = *(volatile signed __int32 **)(v6 + 24);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(v6 + 24);
  }
  v8 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 10LL);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  v9 = *((_QWORD *)this + 907);
  v10 = v9 + 16;
  v11 = *(volatile signed __int32 **)(v9 + 24);
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = *(volatile signed __int32 **)(v9 + 24);
    v9 = *((_QWORD *)this + 907);
  }
  v12 = 1;
  if ( *(_BYTE *)(*(_QWORD *)v10 + 10LL) )
  {
    v13 = (volatile signed __int32 *)v32;
LABEL_13:
    v14 = 1;
    goto LABEL_14;
  }
  v13 = *(volatile signed __int32 **)(v9 + 24);
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 2);
    v13 = *(volatile signed __int32 **)(v9 + 24);
  }
  v12 = 3;
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 16) + 12LL) )
    goto LABEL_13;
  v14 = 0;
LABEL_14:
  if ( (v12 & 2) != 0 && v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( v11 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
  v15 = *((_QWORD *)this + 907);
  v16 = *(volatile signed __int32 **)(v15 + 24);
  if ( v16 )
  {
    _InterlockedIncrement(v16 + 2);
    v16 = *(volatile signed __int32 **)(v15 + 24);
  }
  v17 = *(_BYTE *)(*(_QWORD *)(v15 + 16) + 8LL);
  if ( v16 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
  if ( v17 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 7264),
      (MPCGamepadProcessor *)((char *)this + 7172));
  if ( v14 )
  {
    v18 = v8 != 0;
    if ( v8 )
    {
      MPCGestureCancelTracker::StartTracking(
        (MPCGamepadProcessor *)((char *)this + 7264),
        (MPCGamepadProcessor *)((char *)this + 7172),
        0.025);
    }
    else if ( *((_BYTE *)this + 7281) && *((_BYTE *)this + 7280) )
    {
      v18 = 2;
      *((_WORD *)this + 3640) = 0;
      *((_DWORD *)this + 1821) = 0;
    }
    Instance = MPCHolographicInputManager::GetInstance();
    v20 = (__int64 *)*((_QWORD *)this + 576);
    if ( !v20 )
      v20 = (__int64 *)*((_QWORD *)this + 577);
    MPCHolographicInputManager::InjectInteractionState(
      (__int64)Instance,
      v18,
      **((_DWORD **)this + 7),
      (__int64)a2 + 152,
      v20);
  }
  if ( (*((_BYTE *)this + 6704) & 1) == 0 && (*((_BYTE *)this + 6688) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *((_QWORD *)this + 7), 4u);
  if ( *((_BYTE *)a2 + 152) && *((_BYTE *)a2 + 154) && !*((_DWORD *)this + 1788) && v14 )
  {
    *((_DWORD *)a2 + 164) = 2 - (v8 != 0);
    MPCGestureHandlerManager::GetInstance();
    v22 = v21;
    v23 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v32,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(v22, (__int64)a2, v23, v24);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 906) + 12LL) )
  {
    v25 = MPCHolographicInputManager::GetInstance();
    v27 = MPCHolographicInputManager::InjectRightClick((__int64)v25, 1, *((_DWORD *)a2 + 46), v26, *((float *)a2 + 40));
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        673LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v27);
    v28 = MPCHolographicInputManager::GetInstance();
    v30 = MPCHolographicInputManager::InjectRightClick((__int64)v28, 0, *((_DWORD *)a2 + 46), v29, *((float *)a2 + 40));
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        681LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v30);
  }
}
