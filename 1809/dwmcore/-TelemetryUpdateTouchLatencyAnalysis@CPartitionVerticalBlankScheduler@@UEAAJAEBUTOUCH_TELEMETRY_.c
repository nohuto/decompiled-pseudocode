/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800190F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180019288 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x180019764 (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001EA08 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18008154C (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EE720 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0xxxxxqqx @ 0x18014A07C (McTemplateU0xxxxxqqx.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18014E0A0 (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x18014FE14 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  CDisplayManager *v6; // rcx
  __int64 v7; // rsi
  char v8; // si
  struct _LUID v9; // rbx
  unsigned int v10; // edx
  CDisplaySet *v11; // rdi
  struct _LUID *PrimaryAdapterLuid; // rax
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // r8
  bool v15; // zf
  int updated; // eax
  unsigned int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v22; // rbx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r8
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // [rsp+20h] [rbp-30h]
  CTelemetryTouchLatencyAnalysis *v29; // [rsp+90h] [rbp+40h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v30; // [rsp+A0h] [rbp+50h] BYREF
  CDisplaySet *v31; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)this + 3232);
  v3 = 0;
  if ( !v2 )
    return v3;
  v6 = (CDisplayManager *)*(unsigned int *)(v2 + 1136);
  v7 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v2 + 1112) + 8 * v7);
      if ( v22 )
      {
        if ( *(_QWORD *)v22 == *(_QWORD *)a2 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= (unsigned int)v6 )
        goto LABEL_3;
    }
    v23 = *(_QWORD *)v2;
    v24 = *(_QWORD *)v2;
    v29 = (CPartitionVerticalBlankScheduler *)((char *)this + 26776);
    if ( !CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
            (CPartitionVerticalBlankScheduler *)((char *)this + 26776),
            a2,
            v24) )
    {
      CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        v29,
        a2,
        (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v22,
        v23);
      return v3;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0xxxxxqqx(
        v26,
        v25,
        *(_QWORD *)v22,
        *(_QWORD *)(v22 + 8),
        *(_QWORD *)(v22 + 16),
        *(_QWORD *)(v22 + 24),
        *(_QWORD *)(v22 + 32),
        *(_DWORD *)(v22 + 40),
        *(_DWORD *)(v22 + 44),
        v23);
      v2 = *((_QWORD *)this + 3232);
    }
    DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v2 + 1112, (unsigned int)v7);
    CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(
      (CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v22,
      v27);
  }
LABEL_3:
  v31 = 0LL;
  v8 = 0;
  v9 = 0LL;
  LOBYTE(v29) = 0;
  CDisplayManager::GetCurrentDisplaySet(v6, &v31);
  v11 = v31;
  if ( v31 )
  {
    CDisplaySet::IsWARPAdapterAtIndex(v31, v10, (bool *)&v29);
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v11);
    v3 = *((_DWORD *)v11 + 18);
    v9 = *PrimaryAdapterLuid;
    CDisplaySet::Release(v11);
    v8 = (char)v29;
  }
  v30 = 0LL;
  v13 = (unsigned __int64 *)*((_QWORD *)this + 3232);
  v14 = *v13;
  v15 = *((_DWORD *)this + 7643) == 0;
  v29 = (CTelemetryTouchLatencyAnalysis *)(10000000 * (v13[183] / g_qpcFrequency.QuadPart)
                                         + 10000000 * (v13[183] % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
  updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
              (CPartitionVerticalBlankScheduler *)((char *)this + 26776),
              a2,
              v14,
              !v15,
              (const unsigned __int64 *)&v29,
              v3,
              v9,
              v8,
              &v30);
  v3 = updated;
  if ( updated < 0 )
  {
    v28 = 2372;
    goto LABEL_24;
  }
  if ( v30 )
  {
    v18 = *((_QWORD *)this + 3232);
    v19 = *(unsigned int *)(v18 + 1136);
    v20 = v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, (int)v19 + 1 < (unsigned int)v19 ? 0x80070216 : 0, 0xB5u);
      return v3;
    }
    if ( v20 <= *(_DWORD *)(v18 + 1132) )
    {
      *(_QWORD *)(*(_QWORD *)(v18 + 1112) + 8 * v19) = v30;
      *(_DWORD *)(v18 + 1136) = v20;
      return v3;
    }
    updated = DynArrayImpl<0>::AddMultipleAndSet(v18 + 1112, 8LL, 1LL, &v30);
    if ( updated < 0 )
    {
      v28 = 192;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, updated, v28);
    }
  }
  return v3;
}
