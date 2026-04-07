/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180043058
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180039D98 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180043140 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4R.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x1800432D8 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x1800434DC (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this)
{
  unsigned int v2; // ebx
  HRESULT Instance; // eax
  HRESULT v4; // eax
  CAnimationEngine *v5; // rcx
  CDisplayBroker *v6; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-18h]
  void *v9; // [rsp+28h] [rbp-10h]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationInitialization_Start);
  v2 = 0;
  if ( !this[41] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary,
                 0LL,
                 1u,
                 &GUID_ca5a14b1_d24f_48b8_8fe4_c78169ba954e,
                 this + 42);
    v2 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x676u, v9);
      goto LABEL_10;
    }
    v4 = CoCreateInstance(&CLSID_UIAnimationManager, 0LL, 1u, &GUID_9169896c_ac8d_4e7d_94e5_67fa4dc2f2e8, this + 41);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1660;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, ppv, v9);
      goto LABEL_10;
    }
  }
  v5 = (CAnimationEngine *)this[25];
  if ( !*((_BYTE *)v5 + 120) )
  {
    v4 = CAnimationEngine::Initialize(v5);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1665;
      goto LABEL_17;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsageToService();
  v6 = (CDisplayBroker *)this[36];
  if ( !*(_QWORD *)v6 )
  {
    v4 = CDisplayBroker::Initialize(v6);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1672;
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationInitialization_Stop);
  return v2;
}
