/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A677C
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800A5CA8 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A65CC (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A6A30 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800A6F30 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x1800A7658 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAnimationTracking::EnsureScenario(
        CAnimationTracking *this,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        const struct _GUID *a5,
        const struct CAnimationTracking::TelFrameInfo *a6,
        struct CAnimationTracking::AnimationScenarioRunningStatistics **a7)
{
  int v11; // ebx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // r9
  char *v14; // rax
  __int64 v15; // r8
  char *v16; // rbx
  int v17; // ecx
  ULONGLONG TickCount64; // rcx
  CAnimationTracking *v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  LPVOID v25; // rax
  void *v26; // r14
  wchar_t *v27; // rax
  const wchar_t *v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v31[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v31[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v31);
  v12 = v31[0];
  if ( v31[0] )
    goto LABEL_2;
  if ( !a5
    && (!a2
     || !*((_WORD *)a2 + 17)
     || !(const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)((char *)a2
                                                                              + *((unsigned __int16 *)a2 + 17))) )
  {
    v11 = -2147024809;
LABEL_6:
    v12 = 0LL;
    goto LABEL_2;
  }
  if ( *((_DWORD *)this + 6) >= 8u )
  {
    v11 = -2147024827;
    goto LABEL_6;
  }
  v14 = (char *)DefaultHeap::AllocClear(0x140uLL);
  v16 = v14;
  if ( !v14 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v15);
  memset_0(v14, 0, 0x140uLL);
  *((_QWORD *)v16 + 20) = v16 + 192;
  *((_QWORD *)v16 + 21) = v16 + 192;
  *((_DWORD *)v16 + 44) = 16;
  *(_QWORD *)(v16 + 180) = 16LL;
  v31[0] = (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v16;
  if ( a5 )
  {
    *(struct _GUID *)(v16 + 4) = *a5;
  }
  else
  {
    *(_DWORD *)v16 = a4;
    if ( a3 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a3[v23] );
      v24 = v23 + 1;
      v25 = operator new(saturated_mul(v24, 2uLL));
      v26 = v25;
      if ( v25 )
      {
        if ( (unsigned int)_o_wcscpy_s(v25, v24, a3) )
        {
          operator delete(v26);
          *((_QWORD *)v31[0] + 17) = a3;
          *((_QWORD *)v31[0] + 18) = 0LL;
        }
        else
        {
          v27 = wcschr((const wchar_t *)v26, 1u);
          if ( v27 )
            *v27 = 0;
          *((_QWORD *)v31[0] + 17) = v26;
          if ( v27 )
            v28 = v27 + 1;
          else
            v28 = L"0.0.0.0";
          *((_QWORD *)v31[0] + 18) = v28;
        }
      }
    }
  }
  v17 = *((_DWORD *)this + 142);
  *((_DWORD *)this + 142) = v17 + 1;
  *((_DWORD *)v31[0] + 5) = v17;
  *((_QWORD *)v31[0] + 6) = *((_QWORD *)a6 + 1);
  TickCount64 = GetTickCount64();
  *((_QWORD *)v31[0] + 14) = TickCount64;
  if ( a5 )
  {
    v19 = (CAnimationTracking *)(TickCount64 + 5000);
    *((_QWORD *)v31[0] + 16) = v19;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    v19 = (CAnimationTracking *)(*((_QWORD *)v31[0] + 14) + 500LL + *((unsigned int *)a2 + 6));
    *((_QWORD *)v31[0] + 16) = v19;
  }
  else
  {
    v19 = v31[0];
    *((_QWORD *)v31[0] + 16) = *((_QWORD *)v31[0] + 14) + 5000LL;
  }
  if ( a2 )
  {
    v11 = CAnimationTracking::CopyScenarioInfo(v19, v31[0], a2);
    if ( v11 < 0 )
    {
      if ( v31[0] )
        CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v31[0], v20);
      goto LABEL_6;
    }
  }
  v21 = *((_DWORD *)this + 6);
  v22 = v21 + 1;
  if ( v21 + 1 < v21 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v11 = 0;
    if ( v22 > *((_DWORD *)this + 5) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8, 1, v31);
      v11 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC3u, 0LL);
    }
    else
    {
      *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * v21) = v31[0];
      *((_DWORD *)this + 6) = v22;
    }
  }
  v12 = v31[0];
LABEL_2:
  *a7 = v12;
  return (unsigned int)v11;
}
