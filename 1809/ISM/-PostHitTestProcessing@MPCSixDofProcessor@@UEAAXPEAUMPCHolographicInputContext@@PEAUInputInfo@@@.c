/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18003D08C (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800419C0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800457AC (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045BA4 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F095C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1AB4 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F2F18 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  bool v5; // al
  bool v6; // bl
  struct MPCHolographicInputManager *Instance; // rax
  const char *v8; // r9
  int v9; // eax
  struct MPCHolographicInputManager *v10; // rax
  const char *v11; // r9
  int v12; // eax
  unsigned __int64 v13; // rbx
  struct MPCGestureHandlerManager *v14; // rcx
  bool IsInjecting; // al
  MPCSixDofProcessor *v16; // rcx
  MPCGestureHandlerManager *v17; // rcx
  const char *v18; // r9
  struct MPCGestureHandlerManager *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 *v22; // [rsp+70h] [rbp+30h]

  if ( !MPCInputProviderBase::IsPrimary(this) )
    return;
  MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)((char *)this - 24), a3);
  v5 = (*((_BYTE *)a3 + 1168) & 2) != 0 && !*((_BYTE *)this + 4688);
  if ( !*((_BYTE *)this + 3736) )
  {
    if ( v5 )
    {
      *((_BYTE *)this + 3641) = 0;
      *((_BYTE *)this + 3736) = 1;
    }
    goto LABEL_9;
  }
  if ( v5 )
  {
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  *((_BYTE *)this + 3736) = 0;
  v6 = *((_BYTE *)this + 3641) == 0;
LABEL_10:
  if ( v6 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *((_QWORD *)this + 3), 5u);
  if ( *((_BYTE *)a3 + 600) )
  {
    if ( v6 )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      v9 = MPCHolographicInputManager::InjectRightClick(
             (__int64)Instance,
             1,
             *((_DWORD *)a3 + 158),
             v8,
             *((float *)a3 + 152));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3E6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v9);
      v10 = MPCHolographicInputManager::GetInstance();
      v12 = MPCHolographicInputManager::InjectRightClick(
              (__int64)v10,
              0,
              *((_DWORD *)a3 + 158),
              v11,
              *((float *)a3 + 152));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3EE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v12);
    }
    if ( *((_BYTE *)this + 3749) )
    {
      MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)((char *)this - 24), a3);
      return;
    }
    v22 = &v21;
    v13 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
    v21 = v13;
    if ( v13 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    v14 = MPCGestureHandlerManager::GetInstance();
    IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v14, &v21);
    v16 = (MPCSixDofProcessor *)((char *)this - 24);
    if ( IsInjecting )
    {
      MPCSixDofProcessor::PopulateDownLevelInfo(v16, a3);
      v22 = &v21;
      v21 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
      if ( v13 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    }
    else
    {
      MPCSixDofProcessor::UpdateTouchpadDownleveling(v16, a3);
      if ( *((_BYTE *)this + 3749) )
        return;
      MPCSixDofProcessor::PopulateDownLevelInfo((MPCSixDofProcessor *)((char *)this - 24), a3);
      v22 = &v21;
      v21 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
      if ( v13 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    }
    v17 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v17, (__int64)a3, &v21, v18);
  }
  else
  {
    v22 = &v21;
    v21 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
    if ( v21 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24))
                                               + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    v19 = MPCGestureHandlerManager::GetInstance();
    if ( MPCGestureHandlerManager::IsHovering((__int64)v19, &v21) )
      MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)((char *)this - 24));
  }
}
