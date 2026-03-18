/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A65CC
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x1800A6570 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A677C (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A6B2C (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A6D50 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     McTemplateU0xzqqqz @ 0x18018E180 (McTemplateU0xzqqqz.c)
 *     McTemplateU0zqqqqx @ 0x18018E450 (McTemplateU0zqqqqx.c)
 */

__int64 __fastcall CAnimationTracking::RefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  int v5; // edi
  const struct _GUID *v6; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r9d
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rbx
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  int v17; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int v21; // r9d
  unsigned int *v22; // rcx
  char *v23; // rax
  const unsigned __int16 *ScenarioDetails; // rax
  signed int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v28; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v29[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v30[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v27 = a3;
  v28 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v28);
  v12 = v28;
  v13 = v9;
  if ( v28 )
  {
    v14 = *((_DWORD *)v28 + 46);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      v13 = 0;
      if ( v15 > *((_DWORD *)v28 + 45) )
      {
        v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v28 + 160, 8, 1, &v27);
        v13 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v25, 0xC3u, 0LL);
      }
      else
      {
        v16 = v14;
        *(_QWORD *)(*((_QWORD *)v28 + 20) + 8LL * v14) = v27;
        *((_DWORD *)v12 + 46) = v15;
      }
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName((CAnimationTracking *)v16, v12, v29, v11);
    if ( !*((_QWORD *)v12 + 7) )
    {
      *((_QWORD *)v12 + 7) = *((_QWORD *)a5 + 1);
      TickCount64 = GetTickCount64();
      *((_QWORD *)v12 + 15) = TickCount64;
      v22 = (unsigned int *)*((_QWORD *)v12 + 19);
      if ( v22 )
      {
        if ( v22[6] )
        {
          v22 = (unsigned int *)(v22[6] + 500LL);
          v23 = (char *)v22 + TickCount64;
          if ( *((_QWORD *)v12 + 16) < (unsigned __int64)v23 )
            *((_QWORD *)v12 + 16) = v23;
        }
      }
      ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v22, v12, v30, v21);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        v26 = *((_QWORD *)v12 + 19);
        if ( v26 )
          v5 = *(_DWORD *)(v26 + 28);
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
        v27);
  }
  return v13;
}
