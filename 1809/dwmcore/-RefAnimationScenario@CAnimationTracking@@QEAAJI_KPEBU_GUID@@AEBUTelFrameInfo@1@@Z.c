/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180082C1C
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180082BC0 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800827A0 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180082DD4 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800839E4 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     McTemplateU0xzqqqz @ 0x18014D19C (McTemplateU0xzqqqz.c)
 *     McTemplateU0zqqqqx @ 0x18014D46C (McTemplateU0zqqqqx.c)
 */

__int64 __fastcall CAnimationTracking::RefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  int v5; // esi
  const struct _GUID *v6; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rbx
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // edx
  CAnimationTracking *v16; // rcx
  int v17; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int *v21; // rcx
  char *v22; // rax
  wchar_t *ScenarioDetails; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v27; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v28[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v29[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v26 = a3;
  v27 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v27);
  v12 = v27;
  v13 = v9;
  if ( v27 )
  {
    v14 = *((_DWORD *)v27 + 46);
    v15 = v14 + 1;
    v13 = v14 + 1 < v14 ? 0x80070216 : 0;
    if ( v14 + 1 < v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, 0xB5u);
    }
    else if ( v15 > *((_DWORD *)v27 + 45) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v27 + 160, 8, 1, &v26);
      v13 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v24, 0xC0u);
    }
    else
    {
      v16 = (CAnimationTracking *)v14;
      *(_QWORD *)(*((_QWORD *)v27 + 20) + 8LL * v14) = v26;
      *((_DWORD *)v12 + 46) = v15;
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v16, v12, v28, v11);
    if ( !*((_QWORD *)v12 + 7) )
    {
      *((_QWORD *)v12 + 7) = *((_QWORD *)a5 + 1);
      TickCount64 = GetTickCount64();
      *((_QWORD *)v12 + 15) = TickCount64;
      v21 = (unsigned int *)*((_QWORD *)v12 + 19);
      if ( v21 )
      {
        if ( v21[6] )
        {
          v21 = (unsigned int *)(v21[6] + 500LL);
          v22 = (char *)v21 + TickCount64;
          if ( *((_QWORD *)v12 + 16) < (unsigned __int64)v22 )
            *((_QWORD *)v12 + 16) = v22;
        }
      }
      ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v21, v12, v29);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        v25 = *((_QWORD *)v12 + 19);
        if ( v25 )
          v5 = *(_DWORD *)(v25 + 28);
        McTemplateU0xzqqqz(
          *((_DWORD *)v12 + 14) - *((_DWORD *)v12 + 12),
          v17,
          *((_QWORD *)v12 + 7),
          ScenarioName,
          *((_BYTE *)v12 + 56) - *((_BYTE *)v12 + 48),
          *((_DWORD *)v12 + 5),
          v5,
          (__int64)ScenarioDetails);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0zqqqqx(
        *((_DWORD *)v12 + 7) - *((_DWORD *)v12 + 6),
        v17,
        ScenarioName,
        *((_DWORD *)v12 + 46),
        *((_BYTE *)v12 + 28) - *((_BYTE *)v12 + 24),
        *((_DWORD *)v12 + 8),
        *((_DWORD *)v12 + 5),
        v26);
  }
  return v13;
}
