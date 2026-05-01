/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037FCC
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002824C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028A60 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002BEE8 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180011224 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180015A3C (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x180015E1C (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180016438 (-GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$C.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037D28 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180038D78 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA?AW4Variant_AutoGameMode@@XZ @ 0x1800398B4 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA-AW4Variant_A.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@SA?AW4Variant_AutoGameMode@@W4VariantReportingKind@2@_N@Z @ 0x180039A04 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@SA-AW4Variant_Au.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180039A30 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA-AW4wi.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  HSTRING v5; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rcx
  int RelatedProcessesFromGameConfigStore; // eax
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int NullableInt; // ebx
  unsigned int v20; // esi
  unsigned int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  HSTRING string[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v38; // [rsp+40h] [rbp-20h]
  struct _GUID v39; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v41; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp+48h] BYREF
  UINT32 length; // [rsp+B0h] [rbp+50h] BYREF
  int v44; // [rsp+B8h] [rbp+58h] BYREF
  __int16 v45; // [rsp+BCh] [rbp+5Ch]

  v38 = -2LL;
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  v3 = *(_QWORD *)(FirstGameConfig + 16);
  v4 = (*(_DWORD *)(v3 + 32) & 0x80) == 0;
  *((_BYTE *)this + 96) = (*(_DWORD *)(v3 + 32) & 0x80) != 0;
  if ( v4 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedFeatureEnabledState();
    LODWORD(v41) = 0;
    BYTE4(v41) = 3;
    v44 = 0;
    v45 = WORD2(v41);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeaturePropertyCache'::`2'::data,
      0xA8161Eu,
      (const struct FEATURE_LOGGED_TRAITS *)&v44,
      3);
    LODWORD(v41) = 0;
    *(_OWORD *)string = *(_OWORD *)FirstGameConfig;
    if ( (*(int (__fastcall **)(_QWORD, HSTRING *, __int64, __int64 *))(**((_QWORD **)this + 8) + 112LL))(
           *((_QWORD *)this + 8),
           string,
           17LL,
           &v41) >= 0
      && !(_DWORD)v41 )
    {
      string[0] = 0LL;
      v39 = *(struct _GUID *)FirstGameConfig;
      WindowsDeleteString(0LL);
      string[0] = 0LL;
      if ( (int)GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v39, 15LL, string) >= 0 )
      {
        v5 = string[0];
        if ( !string[0] )
        {
LABEL_15:
          WindowsDeleteString(v5);
          goto LABEL_16;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], &length);
        if ( StringRawBuffer )
        {
          if ( length )
          {
            v7 = wcstoul(StringRawBuffer, 0LL, 10);
            if ( v7 - 1 <= 0xFFFFFFFD )
            {
              wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState();
              if ( v7 == dword_18005CD34
                && (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant() == 1 )
              {
                *((_BYTE *)this + 96) = 1;
              }
            }
          }
        }
      }
      v5 = string[0];
      goto LABEL_15;
    }
  }
LABEL_16:
  v8 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(this, 0LL);
  *((_BYTE *)this + 160) = (*(_DWORD *)(*(_QWORD *)(v8 + 16) + 32LL) & 0x100) == 0;
  v9 = (__int64 *)((char *)this + 104);
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v41 = 0LL;
  v39 = *(struct _GUID *)v8;
  RelatedProcessesFromGameConfigStore = GetRelatedProcessesFromGameConfigStore(
                                          *((_QWORD *)this + 8),
                                          (__int128 *)&v39,
                                          &v41);
  v12 = RelatedProcessesFromGameConfigStore;
  v13 = v41;
  if ( RelatedProcessesFromGameConfigStore >= 0 )
  {
    v15 = *v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    RelatedProcessesFromGameConfigStore = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v13)(
                                            v13,
                                            &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
                                            (char *)this + 104);
    v12 = RelatedProcessesFromGameConfigStore;
    if ( RelatedProcessesFromGameConfigStore < 0 )
    {
      v14 = 370LL;
      goto LABEL_24;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v17 = *((_QWORD *)this + 8);
    LODWORD(v41) = 0;
    length = 4;
    v39 = *(struct _GUID *)v8;
    v18 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, __int64 *, UINT32 *))(*(_QWORD *)v17 + 64LL))(
            v17,
            &v39,
            19LL,
            &v41,
            &length);
    NullableInt = v18;
    if ( v18 >= 0 )
    {
      v22 = BYTE3(v41);
      v21 = WORD1(v41);
      v20 = (unsigned int)v41 >> 8;
      NullableInt = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v18);
      LOBYTE(v20) = v41;
      LOBYTE(v21) = v41;
      LOBYTE(v22) = v41;
    }
    if ( (_WORD)NullableInt == 2 )
    {
      v23 = *((_QWORD *)this + 14);
      if ( v23 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = *((_QWORD *)this + 15);
      if ( v24 )
      {
        *((_QWORD *)this + 15) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = *((_QWORD *)this + 16);
      if ( v25 )
      {
        *((_QWORD *)this + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v33 = 386LL;
        goto LABEL_50;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v22,
                      (__int64 *)this + 14,
                      (unsigned __int8)v22);
      if ( NullableInt < 0 )
      {
        v33 = 387LL;
        goto LABEL_50;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v34,
                      (__int64 *)this + 15,
                      (unsigned __int8)v21);
      if ( NullableInt < 0 )
      {
        v33 = 388LL;
        goto LABEL_50;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v35,
                      (__int64 *)this + 16,
                      (unsigned __int8)v20);
      if ( NullableInt < 0 )
      {
        v33 = 389LL;
        goto LABEL_50;
      }
    }
    v42 = 0;
    v26 = *((_QWORD *)this + 8);
    LODWORD(v41) = 4;
    v39 = *(struct _GUID *)v8;
    v27 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *, __int64 *))(*(_QWORD *)v26 + 64LL))(
            v26,
            &v39,
            20LL,
            &v42,
            &v41);
    NullableInt = v27;
    if ( v27 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v27);
    if ( (_WORD)NullableInt == 2 )
    {
      v29 = *((_QWORD *)this + 17);
      if ( v29 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v33 = 400LL;
        goto LABEL_50;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v28,
                      (__int64 *)this + 17,
                      v42);
      if ( NullableInt < 0 )
      {
        v33 = 401LL;
        goto LABEL_50;
      }
    }
    v39 = *(struct _GUID *)v8;
    NullableInt = GetGameCpuMask(
                    *((struct ExecutionModel::IGameConfigStore **)this + 8),
                    &v39,
                    (unsigned int *)&v41,
                    &length);
    if ( (_WORD)NullableInt == 2 )
    {
      v31 = *((_QWORD *)this + 18);
      if ( v31 )
      {
        *((_QWORD *)this + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = *((_QWORD *)this + 19);
      if ( v32 )
      {
        *((_QWORD *)this + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      return 0LL;
    }
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v30,
                      (__int64 *)this + 18,
                      v41);
      if ( NullableInt >= 0 )
      {
        NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                        v36,
                        (__int64 *)this + 19,
                        length);
        if ( NullableInt >= 0 )
          return 0LL;
        v33 = 416LL;
      }
      else
      {
        v33 = 415LL;
      }
    }
    else
    {
      v33 = 414LL;
    }
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v14 = 368LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)(unsigned int)RelatedProcessesFromGameConfigStore);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v12;
}
