/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001BD34
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000ED28 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000F038 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001BE34 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001C88C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1E4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x18001DD90 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180028120 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x180028DF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180028F90 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000E6E8 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000FB7C (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001C48C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3,
        int a4)
{
  CApplicationManager *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  unsigned int v9; // edi
  int v11; // [rsp+28h] [rbp-40h]
  unsigned int v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-34h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v14 = -2LL;
  v7 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v15 = v8;
  CApplicationManager::GetApplicationPBMStatus(
    v7,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v13,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v12,
    (enum _PLM_EXEMPTION *)&v16);
  v11 = a4;
  v9 = v12;
  LODWORD(v7) = v13;
  CApplication::ExecutePBMActions((__int64)a2, v13, v12, v16, a3, v11);
  if ( !(_DWORD)v7 && !v9 )
  {
    if ( v16 == 1 )
    {
      *(_QWORD *)((char *)a2 + 564) = 0LL;
      *(_QWORD *)((char *)a2 + 572) = 0LL;
      *(_QWORD *)((char *)a2 + 580) = 0LL;
      *((_DWORD *)a2 + 147) = 1;
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
    }
    else if ( *((_DWORD *)a2 + 141) != 6 )
    {
      *((_DWORD *)a2 + 141) = 6;
      *((_QWORD *)a2 + 71) = 1LL;
      *((_QWORD *)a2 + 72) = 1LL;
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
