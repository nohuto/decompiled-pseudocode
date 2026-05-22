/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FB954
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FB750 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18003D08C (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800415AC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180042B14 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3DD4 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1800FC1AC (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180100964 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18010358C (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  MPCHolographicInputManager *Instance; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  MPCHolographicInputManager *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  struct IMPCFocusTarget *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // r9
  unsigned int **v21; // rax
  MPCHolographicInputManager *v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  unsigned int v26; // r12d
  __int64 *v27; // rbx
  unsigned int *v28; // rsi
  struct MPCHolographicInputManager *v29; // rax
  struct IMPCTarget *v30; // rcx
  char v32; // cl
  struct IMPCTarget *v33; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IMPCTarget *v35; // [rsp+98h] [rbp+20h] BYREF

  if ( (*((_WORD *)a3 + 262) & 0xC00) != 0 )
    v6 = *((__int16 *)a3 + 263);
  else
    v6 = 0;
  *((_DWORD *)this + 1206) = v6;
  Instance = MPCHolographicInputManager::GetInstance();
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance, v8, v9, v10);
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 32LL))(FocusedTarget)
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 1873) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1874) )
    {
      *((_DWORD *)a3 + 397) = 1;
    }
    else
    {
      v12 = MPCHolographicInputManager::GetInstance();
      v16 = MPCHolographicInputManager::GetFocusedTarget(v12, v13, v14, v15);
      *((_DWORD *)a3 + 124) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v16 + 56LL))(v16);
      MPCMouseProcessor::DownLevelInput(this, a2, a3, *((_DWORD *)a3 + 133), *((_DWORD *)a3 + 134), 0);
    }
    *((_BYTE *)this + 4880) = 0;
LABEL_42:
    *((_DWORD *)this + 1207) = *((_DWORD *)a2 + 4);
    return 0LL;
  }
  if ( !MPCInputProviderBase::IsPrimary((MPCMouseProcessor *)((char *)this + 40)) )
  {
    if ( (*((_BYTE *)this + 4832) & 0x70) != 0
      || (v21 = (unsigned int **)MPCConstantManager::GetInstance(v18, v17, v19, v20),
          *((_DWORD *)this + 1205) > (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                                     v21,
                                                     (MPCMouseProcessor *)((char *)this + 40),
                                                     L"ActivationDelta")) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 16));
      *((_BYTE *)this + 4880) = 0;
      *((_DWORD *)this + 1225) = 1;
    }
    goto LABEL_42;
  }
  *((_BYTE *)a3 + 1585) = *((_BYTE *)this + 4920) == 0;
  v35 = 0LL;
  v22 = MPCHolographicInputManager::GetInstance();
  v23 = MPCHolographicInputManager::Process3DInput(v22, a3, (MPCMouseProcessor *)((char *)this + 40), &v35);
  v24 = v23;
  if ( v23 >= 0 )
  {
    if ( (*((_DWORD *)this + 1208) & 0x10) != 0 )
      MPCGestureCancelTracker::TrackPosition(
        (MPCMouseProcessor *)((char *)this + 4936),
        (MPCMouseProcessor *)((char *)this + 4848));
    if ( (*((_DWORD *)a2 + 4) & 0x10) != 0 || (*((_DWORD *)this + 1207) & 0x10) == 0 )
    {
      if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 || (*((_DWORD *)this + 1207) & 0x10) != 0 )
        goto LABEL_32;
      v26 = 1;
      *((_QWORD *)this + 617) = *((_QWORD *)this + 606);
      *((_DWORD *)this + 1236) = *((_DWORD *)this + 1214);
      *((_WORD *)this + 2476) = 256;
      *((_DWORD *)this + 1237) = 1011666125;
      *((_DWORD *)this + 1239) = GetTickCount();
    }
    else
    {
      v26 = 0;
    }
    if ( *((_BYTE *)this + 4953) && *((_BYTE *)this + 4952) )
    {
      v26 = 2;
      *((_WORD *)this + 2476) = 0;
      *((_DWORD *)this + 1239) = 0;
    }
    v27 = (__int64 *)v35;
    v28 = (unsigned int *)*((_QWORD *)this + 8);
    v29 = MPCHolographicInputManager::GetInstance();
    v23 = MPCHolographicInputManager::InjectInteractionState((__int64)v29, v26, *v28, (__int64)a3 + 600, v27);
    v24 = v23;
    if ( v23 < 0 )
    {
      v25 = 276LL;
      goto LABEL_29;
    }
LABEL_32:
    v32 = *((_BYTE *)a3 + 600);
    *((_BYTE *)this + 4880) = v32 != 0;
    if ( v32 )
    {
      *((_DWORD *)a3 + 16) = (int)*((float *)a3 + 151);
      *((_DWORD *)a3 + 17) = (int)*((float *)a3 + 152);
      *((_BYTE *)a3 + 500) = 0;
      *((_BYTE *)a3 + 600) = 0;
      *((_DWORD *)a3 + 124) = *((_DWORD *)a3 + 158);
      *((_BYTE *)a3 + 1594) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        a2,
        a3,
        (int)*((float *)a3 + 151),
        (int)*((float *)a3 + 152),
        *((_BYTE *)a3 + 896) != 0);
    }
    else if ( *((_BYTE *)this + 4881) && !*((_QWORD *)this + 467) )
    {
      *((_DWORD *)a3 + 124) = *((_DWORD *)this + 1221);
      *((_BYTE *)a3 + 1594) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        a2,
        a3,
        *((_DWORD *)this + 1222),
        *((_DWORD *)this + 1223),
        *((_DWORD *)this + 1224) != 0);
    }
    if ( (*((_DWORD *)a2 + 4) & 0x20) == 0 && (*((_DWORD *)this + 1207) & 0x20) != 0 )
      MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *((_QWORD *)this + 8), 3u);
    v33 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_42;
  }
  v25 = 248LL;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v23);
  v30 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return v24;
}
