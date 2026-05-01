/*
 * XREFs of ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x1800E4E90 (--$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@P.c)
 *     ?IsBatterySaverEnabled@@YA_NXZ @ 0x1800E6530 (-IsBatterySaverEnabled@@YA_NXZ.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E6A6C (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E6C64 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800E70F4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1800E76B8 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x1800E7968 (-IsDeviceAcrylicCapable@@YA_NXZ.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1800E79DC (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x1800E7A1C (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 */

__int64 __fastcall AcrylicPolicyManager::SubscribeToServices(
        AcrylicPolicyManager *this,
        struct IServiceProvider *a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService((__int64)this, (__int64)a2, a3);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v19);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = (unsigned int)v5;
    v9 = 107LL;
    goto LABEL_9;
  }
  v10 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
          (__int64)this + 144,
          v19,
          v6);
  v7 = v10;
  if ( v10 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v10);
  if ( v7 < 0 )
  {
    v9 = 108LL;
LABEL_8:
    v8 = (unsigned int)v7;
    goto LABEL_9;
  }
  v12 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
          (__int64)this + 264,
          v19,
          v11);
  v7 = v12;
  if ( v12 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v12);
  if ( v7 < 0 )
  {
    v9 = 109LL;
    goto LABEL_8;
  }
  v13 = AcrylicPolicyManager::RegisterForTransparencyChange((AcrylicPolicyManager *)((char *)this - 48));
  v7 = v13;
  if ( v13 >= 0 )
  {
    v14 = AcrylicPolicyManager::RegisterForEnergySaverStateChange((AcrylicPolicyManager *)((char *)this - 48));
    v7 = v14;
    if ( v14 >= 0 )
    {
      *((_BYTE *)this + 403) = IsBatterySaverEnabled(v15);
      *((_BYTE *)this + 404) = IsDeviceAcrylicCapable();
      *((_BYTE *)this + 401) = AcrylicPolicyManager::_IsHighContrast();
      *((_BYTE *)this + 402) = AcrylicPolicyManager::_IsTransparencyEnabled();
      updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 48), 1);
      v7 = updated;
      if ( updated >= 0 )
      {
        v7 = 0;
        goto LABEL_22;
      }
      v8 = (unsigned int)updated;
      v9 = 119LL;
    }
    else
    {
      v8 = (unsigned int)v14;
      v9 = 112LL;
    }
  }
  else
  {
    v8 = (unsigned int)v13;
    v9 = 111LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)v8);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return (unsigned int)v7;
}
