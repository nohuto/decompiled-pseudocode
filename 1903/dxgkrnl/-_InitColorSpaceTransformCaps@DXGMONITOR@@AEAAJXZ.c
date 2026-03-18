/*
 * XREFs of ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C0174B0C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C00C3DF0 (-_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ.c)
 *     DpiGetDriverVersion @ 0x1C0167D80 (DpiGetDriverVersion.c)
 */

__int64 __fastcall DXGMONITOR::_InitColorSpaceTransformCaps(DXGMONITOR *this, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  __int128 v9; // xmm0
  __int128 v11; // [rsp+20h] [rbp-10h]

  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v5);
    v4 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, a2);
    WdLogEvent5_WdAssertion(v6);
    v4 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, a2);
    WdLogEvent5_WdAssertion(v7);
    v4 = *((_QWORD *)this + 4);
  }
  if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) + 192LL)) >= 0xB003
    && DXGMONITOR::_IsTargetMatrix_3x4Supported(this) )
  {
    *((_DWORD *)this + 281) = 4096;
    *(_QWORD *)&v11 = 0x5C800000001LL;
    v8 = *((_DWORD *)this + 276) & 0xFFF00000 | 0xC03;
    *((_QWORD *)&v11 + 1) = 0x7F7FFFFFFF7FFFFFLL;
    *((_OWORD *)this + 68) = 0uLL;
    *((_QWORD *)this + 135) = 1LL;
    v9 = v11;
    *(_QWORD *)&v11 = 0x5C800000001LL;
    *(_OWORD *)((char *)this + 1128) = v9;
    *((_QWORD *)&v11 + 1) = 0x7F7FFFFFFF7FFFFFLL;
    *((_DWORD *)this + 276) = v8;
    *(_OWORD *)((char *)this + 1108) = v11;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
