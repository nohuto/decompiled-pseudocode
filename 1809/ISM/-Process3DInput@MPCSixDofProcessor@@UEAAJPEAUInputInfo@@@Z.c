/*
 * XREFs of ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F0670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180040520 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x1800EF35C (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1800F0874 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F3AE0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180100964 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCSixDofProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCTarget *v4; // rbx
  char v5; // di
  bool IsPrimary; // al
  const char *v7; // r9
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  struct LegacyInputInfo *v12; // r12
  struct LegacyInputInfo *i; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  int v16; // [rsp+90h] [rbp+48h] BYREF
  __int16 v17; // [rsp+94h] [rbp+4Ch]
  int v18; // [rsp+98h] [rbp+50h] BYREF
  __int16 v19; // [rsp+9Ch] [rbp+54h]
  struct IMPCTarget *v20; // [rsp+A0h] [rbp+58h] BYREF
  struct IMPCTarget *v21; // [rsp+A8h] [rbp+60h]

  v4 = *(struct IMPCTarget **)(this + 3704);
  v21 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( !*((_BYTE *)a2 + 1380) || (v5 = 1, !*((_BYTE *)a2 + 1381)) )
    v5 = 0;
  IsPrimary = MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this);
  if ( v5 )
  {
    if ( !IsPrimary && MPCSixDofProcessor::AreButtonsOrAxesActive((MPCSixDofProcessor *)(this - 24), a2, 0, v7) )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetCachedFeatureEnabledState();
      v16 = 0;
      LOBYTE(v17) = 3;
      v18 = 0;
      v19 = v17;
      wil::details::ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data,
        0xAC02ABu,
        (const struct FEATURE_LOGGED_TRAITS *)&v18,
        1,
        3);
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
  }
  else if ( IsPrimary )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::DemoteProviderPrimary(
      Instance,
      (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)));
  }
  v20 = 0LL;
  v9 = MPCHolographicInputManager::GetInstance();
  v10 = MPCHolographicInputManager::Process3DInput(
          v9,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
          &v20);
  v11 = v10;
  if ( v10 >= 0 )
  {
    LOBYTE(v18) = 0;
    LOBYTE(v16) = 0;
    MPCSixDofProcessor::ProcessHomeGesture((MPCSixDofProcessor *)(this - 24), a2, (bool *)&v18, (bool *)&v16);
    if ( (_BYTE)v16 )
    {
      v12 = *(struct LegacyInputInfo **)(this + 4704);
      for ( i = *(struct LegacyInputInfo **)(this + 4696); i != v12; i = (struct LegacyInputInfo *)((char *)i + 1600) )
        MPCSixDofProcessor::DeliverInputToTarget((MPCSixDofProcessor *)(this - 24), i, v4, v20);
      *(_QWORD *)(this + 4704) = *(_QWORD *)(this + 4696);
    }
    if ( !(_BYTE)v18 )
      MPCSixDofProcessor::DeliverInputToTarget((MPCSixDofProcessor *)(this - 24), a2, v4, v20);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  return v11;
}
