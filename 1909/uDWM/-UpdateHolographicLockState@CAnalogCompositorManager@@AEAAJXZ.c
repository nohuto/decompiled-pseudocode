/*
 * XREFs of ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003A764
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180004684 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002CAD8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180026378 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003A7C0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CAX_.c)
 */

__int64 __fastcall CAnalogCompositorManager::UpdateHolographicLockState(CAnalogCompositorManager *this)
{
  char v1; // bl
  __int64 v2; // rcx
  bool IsLogonDesktop; // al
  __int64 v4; // rdx

  v1 = 0;
  if ( *((_BYTE *)this + 80)
    || ((v2 = *((_QWORD *)this + 9)) == 0
      ? (IsLogonDesktop = 0)
      : (IsLogonDesktop = CDesktopManager::IsLogonDesktop(v2)),
        IsLogonDesktop) )
  {
    v1 = 1;
  }
  wil::Feature<__WilFeatureTraits_Feature_HolographicSecureDesktop>::ReportUsageToService();
  LOBYTE(v4) = v1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL)
                                                    + 296LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           v4);
}
