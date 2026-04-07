/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003FF84
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180038D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180040050 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4R.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x1800401CC (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(CDesktopManager *this)
{
  unsigned int v2; // ebx
  HRESULT Instance; // eax
  HRESULT v4; // eax
  CAnimationEngine *v5; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationInitialization_Start);
  v2 = 0;
  if ( *((_QWORD *)this + 41) )
    goto LABEL_6;
  Instance = CoCreateInstance(
               &CLSID_UIAnimationTransitionLibrary,
               0LL,
               1u,
               &GUID_ca5a14b1_d24f_48b8_8fe4_c78169ba954e,
               (LPVOID *)this + 42);
  v2 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x6A9u);
    goto LABEL_9;
  }
  v4 = CoCreateInstance(
         &CLSID_UIAnimationManager,
         0LL,
         1u,
         &GUID_9169896c_ac8d_4e7d_94e5_67fa4dc2f2e8,
         (LPVOID *)this + 41);
  v2 = v4;
  if ( v4 >= 0 )
  {
LABEL_6:
    v5 = (CAnimationEngine *)*((_QWORD *)this + 25);
    if ( *((_BYTE *)v5 + 120) || (v4 = CAnimationEngine::Initialize(v5), v2 = v4, v4 >= 0) )
    {
      wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsageToService();
      goto LABEL_9;
    }
    ppv = 1716;
  }
  else
  {
    ppv = 1711;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, ppv);
LABEL_9:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationInitialization_Stop);
  return v2;
}
