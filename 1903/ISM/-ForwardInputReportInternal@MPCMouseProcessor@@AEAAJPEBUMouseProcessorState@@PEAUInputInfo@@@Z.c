/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A6D8
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A4E0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18007EB3C (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180080EAC (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800813A4 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180081988 (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@PEBG@Z @ 0x18012DEBC (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@PEBG@Z.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x18013A1A8 (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18013A1DC (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18013E6B0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180140CDC (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180140D14 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  unsigned __int64 v6; // r15
  const char *v7; // r9
  unsigned int v8; // r12d
  struct BamoMPCConstantManagerClientPrincipal *v9; // rbx
  int v10; // eax
  MPCHolographicInputManager *Instance; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  char v15; // r13
  int v16; // ebx
  struct MPCHolographicInputManager *v17; // rax
  bool v19; // al
  int v20; // edx
  unsigned int v21; // ecx
  MPCHolographicInputManager *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  const char *v25; // r9
  MPCHolographicInputManager *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  const char *v29; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  struct IMPCTarget *v32[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v33[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+70h] [rbp-98h]
  _BYTE v35[4]; // [rsp+F0h] [rbp-18h] BYREF
  float v36; // [rsp+F4h] [rbp-14h]
  float v37; // [rsp+F8h] [rbp-10h]
  int v38; // [rsp+110h] [rbp+8h]
  __int64 v39; // [rsp+118h] [rbp+10h]
  char v40; // [rsp+138h] [rbp+30h]
  char v41; // [rsp+220h] [rbp+118h]
  char v42; // [rsp+841h] [rbp+739h]
  wil::details::in1diag3 *retaddr; // [rsp+890h] [rbp+788h]

  v32[1] = (struct IMPCTarget *)-2LL;
  if ( (*((_WORD *)a3 + 50) & 0xC00) != 0 )
    *((_DWORD *)this + 1570) = *((__int16 *)a3 + 51);
  else
    *((_DWORD *)this + 1570) = 0;
  v6 = (unsigned __int64)this + 40;
  if ( MPCInputProviderBase::IsPrimary((MPCMouseProcessor *)((char *)this + 40)) )
  {
    memset_0(v33, 0, 0x7F0uLL);
    v34 = 2032;
    v42 = *((_BYTE *)this + 6376);
    v32[0] = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v32);
    v12 = MPCHolographicInputManager::Process3DInput(
            Instance,
            (struct InputInfo *)v33,
            (struct IMPCInputProviderBase *)(v6 & -(__int64)(this != 0LL)),
            v32);
    v13 = v12;
    if ( v12 >= 0 )
    {
      if ( v40 )
      {
        v15 = 1;
        *((_QWORD *)a3 + 9) = v39;
        *((_DWORD *)a3 + 20) = 1;
      }
      else
      {
        v15 = 0;
      }
      if ( (*((_BYTE *)this + 6288) & 0x10) != 0 )
        MPCGestureCancelTracker::TrackPosition(
          (MPCMouseProcessor *)((char *)this + 6392),
          (MPCMouseProcessor *)((char *)this + 6304));
      if ( !MPCMouseProcessor::ButtonToInteractionState(
              this,
              *((_DWORD *)a2 + 4),
              16,
              (enum MPCHolographicInputManager::InteractionState *)&v31) )
        goto LABEL_26;
      v16 = v31;
      if ( (_DWORD)v31 == 1 )
        MPCGestureCancelTracker::StartTracking(
          (MPCMouseProcessor *)((char *)this + 6392),
          (MPCMouseProcessor *)((char *)this + 6304),
          0.0125);
      if ( *((_BYTE *)this + 6409) && *((_BYTE *)this + 6408) )
      {
        v16 = 2;
        *((_WORD *)this + 3204) = 0;
        *((_DWORD *)this + 1603) = 0;
      }
      v17 = MPCHolographicInputManager::GetInstance();
      v12 = MPCHolographicInputManager::InjectInteractionState(
              (__int64)v17,
              v16,
              **((_DWORD **)this + 8),
              (__int64)v35,
              (__int64 *)v32[0]);
      v13 = v12;
      if ( v12 >= 0 )
      {
LABEL_26:
        v19 = v35[0] != 0;
        *((_BYTE *)this + 6336) = v35[0] != 0;
        if ( v19 )
        {
          v20 = (int)v36;
          *((_DWORD *)a3 + 27) = (int)v36;
          v21 = (int)v37;
          *((_DWORD *)a3 + 28) = (int)v37;
          *((_DWORD *)a3 + 10) = v38;
          *((_BYTE *)a3 + 130) = 1;
          MPCMouseProcessor::DownLevelInput(this, a2, a3, v20, v21, v41 != 0);
        }
        else if ( *((_BYTE *)this + 6337) && !*((_QWORD *)this + 576) )
        {
          *((_DWORD *)a3 + 10) = *((_DWORD *)this + 1585);
          *((_BYTE *)a3 + 130) = 1;
          MPCMouseProcessor::DownLevelInput(
            this,
            a2,
            a3,
            *((_DWORD *)this + 1586),
            *((_DWORD *)this + 1587),
            *((_DWORD *)this + 1588) != 0);
        }
        if ( MPCMouseProcessor::ButtonToInteractionState(
               this,
               *((_DWORD *)a2 + 4),
               32,
               (enum MPCHolographicInputManager::InteractionState *)&v31)
          && !(_DWORD)v31 )
        {
          MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *((_QWORD *)this + 8), 3u);
        }
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v32);
        if ( v15 )
          goto LABEL_42;
        goto LABEL_36;
      }
      v14 = 271LL;
    }
    else
    {
      v14 = 235LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v32);
    return v13;
  }
  if ( (*((_BYTE *)this + 6288) & 0x70) != 0 )
    goto LABEL_9;
  v8 = *((_DWORD *)this + 1569);
  v9 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v6 & -(__int64)(this != 0LL)) + 48LL))(v6 & -(__int64)(this != 0LL));
  if ( v8 > (unsigned int)MPCConstantManager::GetStaticConstant<unsigned long>((__int64)v9, v10, L"ActivationDelta") )
  {
LABEL_9:
    MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 16));
    *((_BYTE *)this + 6336) = 0;
    *((_DWORD *)this + 1589) = 1;
  }
LABEL_36:
  v22 = MPCHolographicInputManager::GetInstance();
  if ( (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v22, v23, v24, v25)
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2366) )
    {
      *((_DWORD *)a3 + 31) = 1;
    }
    else
    {
      v26 = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v26, v27, v28, v29);
      *((_DWORD *)a3 + 10) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
      MPCMouseProcessor::DownLevelInput(this, a2, a3, *((_DWORD *)a3 + 27), *((_DWORD *)a3 + 28), 0);
    }
    *((_BYTE *)this + 6336) = 0;
  }
LABEL_42:
  *((_DWORD *)this + 1571) = *((_DWORD *)a2 + 4);
  return 0LL;
}
