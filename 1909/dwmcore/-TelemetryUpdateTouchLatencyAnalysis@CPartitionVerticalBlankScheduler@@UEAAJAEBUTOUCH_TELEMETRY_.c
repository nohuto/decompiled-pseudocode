/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001B390
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18001B5C8 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001BAEC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18002032C (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800263FC (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EC85C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0xxxxxxxqqx @ 0x1801784E4 (McTemplateU0xxxxxxxqqx.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18018DCE8 (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180190078 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v2; // rdi
  unsigned int v5; // r15d
  CDisplayManager *v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // r15d
  struct _LUID v9; // rbx
  char v10; // si
  unsigned int v11; // edx
  CDisplaySet *v12; // rdi
  struct _LUID *PrimaryAdapterLuid; // rax
  unsigned __int64 *v14; // r10
  unsigned __int64 v15; // r8
  bool v16; // zf
  int updated; // eax
  unsigned int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v23; // rbx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r8
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // [rsp+20h] [rbp-40h]
  CTelemetryTouchLatencyAnalysis *v30; // [rsp+A0h] [rbp+40h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v31; // [rsp+B0h] [rbp+50h] BYREF
  CDisplaySet *v32; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)this + 3237);
  v5 = 0;
  if ( !v2 )
    return v5;
  v6 = (CDisplayManager *)*(unsigned int *)(v2 + 1136);
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(v2 + 1112) + 8LL * v7);
      if ( v23 )
      {
        if ( *(_QWORD *)v23 == *(_QWORD *)a2 )
          break;
      }
      if ( ++v7 >= (unsigned int)v6 )
        goto LABEL_3;
    }
    v24 = *(_QWORD *)v2;
    v25 = *(_QWORD *)v2;
    v30 = (CPartitionVerticalBlankScheduler *)((char *)this + 26816);
    if ( !CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
            (CPartitionVerticalBlankScheduler *)((char *)this + 26816),
            a2,
            v25) )
    {
      CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        v30,
        a2,
        (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v23,
        v24);
      return v5;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0xxxxxxxqqx(
        v27,
        v26,
        *(_QWORD *)v23,
        *(_QWORD *)(v23 + 8),
        *(_QWORD *)(v23 + 16),
        *(_QWORD *)(v23 + 24),
        *(_QWORD *)(v23 + 32),
        *(_QWORD *)(v23 + 40),
        *(_QWORD *)(v23 + 48),
        *(_DWORD *)(v23 + 56),
        *(_DWORD *)(v23 + 60),
        v24);
      v2 = *((_QWORD *)this + 3237);
    }
    DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v2 + 1112, v7);
    CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(
      (CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v23,
      v28);
  }
LABEL_3:
  v32 = 0LL;
  v8 = 0;
  LOBYTE(v30) = 0;
  v9 = 0LL;
  v10 = 0;
  CDisplayManager::GetCurrentDisplaySet(v6, &v32);
  v12 = v32;
  if ( v32 )
  {
    CDisplaySet::IsWARPAdapterAtIndex(v32, v11, (bool *)&v30);
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v12);
    v8 = *((_DWORD *)v12 + 18);
    v9 = *PrimaryAdapterLuid;
    CDisplaySet::Release(v12);
    v10 = (char)v30;
  }
  v14 = (unsigned __int64 *)*((_QWORD *)this + 3237);
  v31 = 0LL;
  v15 = *v14;
  v16 = *((_DWORD *)this + 7725) == 0;
  v30 = (CTelemetryTouchLatencyAnalysis *)(10000000 * (v14[183] / g_qpcFrequency.QuadPart)
                                         + 10000000 * (v14[183] % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
  updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
              (CPartitionVerticalBlankScheduler *)((char *)this + 26816),
              a2,
              v15,
              !v16,
              (const unsigned __int64 *)&v30,
              v8,
              v9,
              v10,
              &v31);
  v5 = updated;
  if ( updated < 0 )
  {
    v29 = 2368;
    goto LABEL_24;
  }
  if ( v31 )
  {
    v19 = *((_QWORD *)this + 3237);
    v20 = *(unsigned int *)(v19 + 1136);
    v21 = v20 + 1;
    if ( (int)v20 + 1 < (unsigned int)v20 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB8u, 0LL);
      return v5;
    }
    if ( v21 <= *(_DWORD *)(v19 + 1132) )
    {
      *(_QWORD *)(*(_QWORD *)(v19 + 1112) + 8 * v20) = v31;
      *(_DWORD *)(v19 + 1136) = v21;
      return v5;
    }
    updated = DynArrayImpl<0>::AddMultipleAndSet(v19 + 1112, 8LL, 1LL, &v31);
    if ( updated < 0 )
    {
      v29 = 195;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, updated, v29, 0LL);
    }
  }
  return v5;
}
