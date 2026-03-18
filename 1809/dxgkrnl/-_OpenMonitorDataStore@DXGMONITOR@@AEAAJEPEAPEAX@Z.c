/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934
 * Callers:
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0294F5C (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C02954D4 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C029577C (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02958C8 (-_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0295B10 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295C44 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295E34 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0296620 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0296700 (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02967C0 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0296880 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02969A4 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C0296A6C (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0296B30 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C001A318 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C01471F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C029448C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(DXGMONITOR *this, char a2, void **a3)
{
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v8; // rax
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  wchar_t *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-10h] BYREF

  if ( *((_DWORD *)this + 108) != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_WORD *)this + 260);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v8);
    return 3221225659LL;
  }
  v10 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  if ( (*(_DWORD *)(v11 + 308) & 0x40000) != 0 )
  {
    if ( (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v11 + 2520)) )
    {
      v16 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = -1073741637LL;
      return 3221225659LL;
    }
    v7 = *((_WORD *)this + 260);
    v10 = 1;
  }
  Destination.Length = 0;
  v17 = v7 + 170;
  Destination.MaximumLength = v17;
  if ( v10 )
  {
    v17 += *((_WORD *)this + 276);
    Destination.MaximumLength = v17;
  }
  v18 = (wchar_t *)operator new(v17, 0x4D677844u, PagedPool);
  Destination.Buffer = v18;
  if ( v18 )
  {
    memset(v18, 0, Destination.MaximumLength);
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 520));
    if ( v10 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 552));
    v21 = a2 != 0 ? 0xFFF2FFDA : 0;
    v24 = DxgkOpenRegistrySubkey(a3, v21 + 983103, 0LL, &Destination);
    if ( v24 == -1073741772
      && (a2 || (v24 = DxgkCreateRegistrySubkey(a3, v21 + 983103, 0LL, &Destination), v24 == -1073741772)) )
    {
      v27 = WdLogNewEntry5_WdTrace(v23, v22, v25, v26);
      *(_QWORD *)(v27 + 24) = this;
      *(_QWORD *)(v27 + 32) = -1073741772LL;
    }
    else if ( v24 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v28 + 32) = v24;
      *(_QWORD *)(v28 + 24) = this;
      WdLogEvent5_WdError(v28);
    }
    operator delete[](Destination.Buffer);
    return (unsigned int)v24;
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
