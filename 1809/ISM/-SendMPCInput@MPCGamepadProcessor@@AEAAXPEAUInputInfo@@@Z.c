/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9C1C
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F8510 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18003D08C (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800415AC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800419C0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18010358C (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // r14d
  _BYTE *v5; // r13
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  char v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rsi
  char v12; // dl
  volatile signed __int32 *v13; // rbx
  char v14; // r15
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  char v17; // si
  __int64 *v18; // rsi
  unsigned int *v19; // rbx
  struct MPCHolographicInputManager *Instance; // rax
  MPCGestureHandlerManager *v21; // rcx
  const char *v22; // r9
  struct MPCHolographicInputManager *v23; // rax
  const char *v24; // r9
  int v25; // eax
  struct MPCHolographicInputManager *v26; // rax
  const char *v27; // r9
  int v28; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  volatile signed __int32 *v30; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 *v31; // [rsp+88h] [rbp+10h]

  v4 = 0;
  LODWORD(v30) = 0;
  v5 = (char *)a2 + 600;
  *((_DWORD *)a2 + 278) = *((_DWORD *)a2 + 151);
  *((_DWORD *)a2 + 279) = *((_DWORD *)a2 + 152);
  *((_OWORD *)a2 + 70) = *(_OWORD *)((char *)a2 + 612);
  *((_DWORD *)a2 + 284) = *((_DWORD *)a2 + 158);
  v6 = *((_QWORD *)this + 743);
  v7 = *(volatile signed __int32 **)(v6 + 24);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(v6 + 24);
  }
  v8 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 10LL);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v9 = *((_QWORD *)this + 743);
  v10 = v9 + 16;
  v11 = *(volatile signed __int32 **)(v9 + 24);
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = *(volatile signed __int32 **)(v9 + 24);
    v9 = *((_QWORD *)this + 743);
  }
  v12 = 1;
  if ( *(_BYTE *)(*(_QWORD *)v10 + 10LL) )
  {
    v13 = v30;
LABEL_15:
    v14 = 1;
    goto LABEL_16;
  }
  v13 = *(volatile signed __int32 **)(v9 + 24);
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 2);
    v13 = *(volatile signed __int32 **)(v9 + 24);
  }
  v12 = 3;
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 16) + 12LL) )
    goto LABEL_15;
  v14 = 0;
LABEL_16:
  if ( (v12 & 2) != 0 )
  {
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v15 = *((_QWORD *)this + 743);
  v16 = *(volatile signed __int32 **)(v15 + 24);
  if ( v16 )
  {
    _InterlockedIncrement(v16 + 2);
    v16 = *(volatile signed __int32 **)(v15 + 24);
  }
  v17 = *(_BYTE *)(*(_QWORD *)(v15 + 16) + 8LL);
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( v17 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 5952),
      (MPCGamepadProcessor *)((char *)this + 5860));
  if ( v14 )
  {
    LOBYTE(v4) = v8 != 0;
    if ( v8 )
    {
      *((_QWORD *)this + 744) = *(_QWORD *)((char *)this + 5860);
      *((_DWORD *)this + 1490) = *((_DWORD *)this + 1467);
      *((_WORD *)this + 2984) = 256;
      *((_DWORD *)this + 1491) = 1020054733;
      *((_DWORD *)this + 1493) = GetTickCount();
    }
    else if ( *((_BYTE *)this + 5969) && *((_BYTE *)this + 5968) )
    {
      v4 = 2;
      *((_WORD *)this + 2984) = 0;
      *((_DWORD *)this + 1493) = 0;
    }
    v18 = (__int64 *)*((_QWORD *)this + 467);
    if ( !v18 )
      v18 = (__int64 *)*((_QWORD *)this + 468);
    v19 = (unsigned int *)*((_QWORD *)this + 7);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::InjectInteractionState((__int64)Instance, v4, *v19, (__int64)v5, v18);
  }
  if ( (*((_BYTE *)this + 5400) & 1) == 0 && (*((_BYTE *)this + 5384) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *((_QWORD *)this + 7), 4u);
  if ( *v5 && *((_BYTE *)a2 + 602) && !*((_DWORD *)this + 1460) && v14 )
  {
    *((_DWORD *)a2 + 274) = 2 - (v8 != 0);
    v31 = (unsigned __int64 *)&v30;
    v30 = (volatile signed __int32 *)((char *)this + 32);
    if ( this != (MPCGamepadProcessor *)-32LL )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 8LL))((char *)this + 32);
    v21 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v21, (__int64)a2, (unsigned __int64 *)&v30, v22);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 742) + 12LL) )
  {
    v23 = MPCHolographicInputManager::GetInstance();
    v25 = MPCHolographicInputManager::InjectRightClick(
            (__int64)v23,
            1,
            *((_DWORD *)a2 + 158),
            v24,
            *((float *)a2 + 152));
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v25);
    v26 = MPCHolographicInputManager::GetInstance();
    v28 = MPCHolographicInputManager::InjectRightClick(
            (__int64)v26,
            0,
            *((_DWORD *)a2 + 158),
            v27,
            *((float *)a2 + 152));
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v28);
  }
}
