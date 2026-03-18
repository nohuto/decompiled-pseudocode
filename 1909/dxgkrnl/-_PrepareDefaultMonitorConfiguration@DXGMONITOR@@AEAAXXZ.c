/*
 * XREFs of ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C017928C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C0183970 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C02AF6D4 (DpiGetIntegratedDisplayOrientationOverrides.c)
 */

void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  int v2; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v3; // ecx
  int *v4; // rdi
  unsigned int *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+38h] [rbp-79h] BYREF
  int v12; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v13; // [rsp+48h] [rbp-69h] BYREF
  int v14; // [rsp+50h] [rbp-61h]
  const wchar_t *v15; // [rsp+58h] [rbp-59h]
  char *v16; // [rsp+60h] [rbp-51h]
  int v17; // [rsp+68h] [rbp-49h]
  unsigned int *v18; // [rsp+70h] [rbp-41h]
  int v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  int v21; // [rsp+88h] [rbp-29h]
  const wchar_t *v22; // [rsp+90h] [rbp-21h]
  char *v23; // [rsp+98h] [rbp-19h]
  int v24; // [rsp+A0h] [rbp-11h]
  int *v25; // [rsp+A8h] [rbp-9h]
  int v26; // [rsp+B0h] [rbp-1h]
  __int64 v27; // [rsp+B8h] [rbp+7h]
  int v28; // [rsp+C0h] [rbp+Fh]
  _BYTE v29[40]; // [rsp+C8h] [rbp+17h] BYREF

  v11 = *((_DWORD *)this + 112);
  v2 = *((_DWORD *)this + 10);
  v3 = *((_DWORD *)this + 12);
  v12 = (v2 & 0x100) != 0 ? 3 : 0;
  if ( IsInternalVideoOutput(v3) )
  {
    v4 = (int *)((char *)this + 460);
    v5 = (unsigned int *)((char *)this + 452);
    if ( (int)DpiGetIntegratedDisplayOrientationOverrides(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL),
                *((unsigned int *)this + 11),
                (char *)this + 452,
                (char *)this + 460) < 0 )
    {
      v13 = 0LL;
      v20 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v15 = L"MonitorOrientation";
      v18 = &v11;
      v22 = L"DockedOrientation";
      v14 = 292;
      v21 = 292;
      v17 = 67108868;
      v19 = 4;
      v24 = 67108868;
      v26 = 4;
      v25 = &v12;
      v16 = (char *)this + 452;
      v23 = (char *)this + 460;
      memset(v29, 0, sizeof(v29));
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v13, 0LL, 0LL) < 0 )
      {
        *v5 = v11;
        *v4 = v12;
      }
    }
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this, *v5) )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v9 + 24) = *v5;
      WdLogEvent5_WdError(v9);
      *v5 = v11;
    }
    if ( (unsigned int)*v4 > 3 )
    {
      v10 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = (unsigned int)*v4;
      WdLogEvent5_WdError(v10);
      *v4 = v12;
    }
  }
  *((_DWORD *)this + 114) = *((_DWORD *)this + 113);
  *((_DWORD *)this + 116) = *((_DWORD *)this + 115);
}
