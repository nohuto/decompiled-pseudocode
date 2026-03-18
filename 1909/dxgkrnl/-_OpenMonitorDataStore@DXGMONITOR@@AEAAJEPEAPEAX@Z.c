/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01790B0
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178B38 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0178B90 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0178BF4 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178C58 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178CC4 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178D34 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB0EC (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB5FC (-_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02CB660 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02CB748 (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02CB810 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB8D8 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02CBA10 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C02CBAE4 (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02CBBB4 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02CBD7C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000DA44 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0179238 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C02CAB90 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(DXGMONITOR *this, __int64 a2, void **a3)
{
  bool v4; // zf
  char v5; // r15
  __int64 v7; // rdx
  char v8; // r14
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-10h] BYREF

  v4 = *((_DWORD *)this + 108) == 1;
  v5 = a2;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !v4 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  v7 = *((unsigned __int16 *)this + 260);
  if ( !(_WORD)v7 )
  {
    v24 = WdLogNewEntry5_WdError(this, v7, a3);
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v24);
    return 3221225659LL;
  }
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  if ( (*(_DWORD *)(v9 + 308) & 0x40000) != 0 )
  {
    if ( !(unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v9 + 2552), v7) )
    {
      LOWORD(v7) = *((_WORD *)this + 260);
      v8 = 1;
      goto LABEL_5;
    }
    v25 = WdLogNewEntry5_WdTrace(v27, v26);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741637LL;
    return 3221225659LL;
  }
LABEL_5:
  v10 = v7 + 170;
  Destination.MaximumLength = v10;
  if ( v8 )
  {
    v10 += *((_WORD *)this + 276);
    Destination.MaximumLength = v10;
  }
  v11 = (wchar_t *)operator new[](v10, 0x4D677844u, PagedPool);
  Destination.Buffer = v11;
  if ( v11 )
  {
    memset(v11, 0, Destination.MaximumLength);
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 520));
    if ( v8 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 552));
    v16 = v5 != 0 ? 0xFFF2FFDA : 0;
    v19 = DxgkOpenRegistrySubkey(a3, v16 + 983103, 0LL, &Destination);
    if ( v19 == -1073741772
      && (v5 || (v19 = DxgkCreateRegistrySubkey(a3, v16 + 983103, 0LL, &Destination), v19 == -1073741772)) )
    {
      v21 = WdLogNewEntry5_WdTrace(v18, v17);
      *(_QWORD *)(v21 + 24) = this;
      *(_QWORD *)(v21 + 32) = -1073741772LL;
    }
    else if ( v19 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v18, v17, v20);
      *(_QWORD *)(v29 + 32) = v19;
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdError(v29);
    }
    operator delete[](Destination.Buffer);
    return (unsigned int)v19;
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdLowResource(v28);
    return 3221225495LL;
  }
}
