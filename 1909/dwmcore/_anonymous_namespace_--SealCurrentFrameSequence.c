/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x18003B678
 * Callers:
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180073950 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180074698 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x180034ED4 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180037C9C (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180038178 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x18003851C (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode @ 0x18003DB40 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a6.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x18003DB6C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@XZ @ 0x18003DFCC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x1800D1DC8 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     std::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)_::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)___lambda_8095cef1b1d93dcc9366060e44ed075d__void_ @ 0x1800EB714 (std--function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_Pro.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EC7A0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequence(char a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  LARGE_INTEGER v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // edx
  unsigned int v11; // r8d
  __int64 *v12; // rdi
  unsigned int v13; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v15; // rcx
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  void *v20; // rax
  void *v21; // rdi
  union _SLIST_HEADER *v22; // rcx
  struct _SLIST_ENTRY *v23; // rdx
  _QWORD *v24[51]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+1C0h] [rbp+B8h]
  __int128 v26; // [rsp+1D0h] [rbp+C8h]
  __int128 v27; // [rsp+1E8h] [rbp+E0h]
  __int64 v28; // [rsp+1F8h] [rbp+F0h]
  __int64 v29; // [rsp+200h] [rbp+F8h]
  _BYTE ppsmemCounters[80]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v31; // [rsp+258h] [rbp+150h]

  v1 = 0LL;
  if ( dword_180339888 )
  {
    memset_0(ppsmemCounters, 0, 0x58uLL);
    `anonymous namespace'::_etwEndFrameSnapshot = *(_OWORD *)ppsmemCounters;
    xmmword_180339AE0 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_180339AF0 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_180339B00 = *(_OWORD *)&ppsmemCounters[48];
    xmmword_180339B10 = *(_OWORD *)&ppsmemCounters[64];
    qword_180339B20 = v31;
    v5 = std::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const____::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const______lambda_8095cef1b1d93dcc9366060e44ed075d__void_(
           ppsmemCounters,
           v3,
           v4,
           *(_QWORD *)qword_180339D30);
    CProcessAttributionObserver::ForEachChangedProcessAttribution(v6, 0LL, v5);
    v7 = g_qpcFrequency;
    v8 = qword_1803399D8;
    v9 = qword_1803399D0;
    dword_1803398A0 = 1000 * ((unsigned __int64)(qword_1803399D8 - qword_1803399D0) / g_qpcFrequency.QuadPart)
                    + 1000
                    * ((unsigned __int64)(qword_1803399D8 - qword_1803399D0) % g_qpcFrequency.QuadPart)
                    / g_qpcFrequency.QuadPart;
    if ( xmmword_180339AB8 == *(_OWORD *)&GUID_NULL )
    {
      v10 = dword_180339890;
      if ( (unsigned int)dword_180339890 > 0x37
        && (dword_180339A9C & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v8 = qword_1803399D8;
        v9 = qword_1803399D0;
        v10 = dword_180339890;
        v7 = g_qpcFrequency;
      }
      v11 = v10 + `anonymous namespace'::_unpresentedFramesOnScreenOffSession;
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession += v10;
      if ( `anonymous namespace'::_startOfScreenOff )
      {
        if ( v11 >= 0x30570
          && (v8 - `anonymous namespace'::_startOfScreenOff) / v7.QuadPart
           + (v8 - `anonymous namespace'::_startOfScreenOff) % v7.QuadPart / v7.QuadPart < 0xE10
          && (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq)(
            (LARGE_INTEGER)v7.QuadPart,
            &EVTDESC_DIAGTRACK_TRIGGER,
            16525050LL,
            1LL);
        }
      }
      else
      {
        `anonymous namespace'::_startOfScreenOff = v9;
      }
    }
    else
    {
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession = 0;
      `anonymous namespace'::_startOfScreenOff = 0LL;
    }
    v12 = (__int64 *)*((_QWORD *)qword_180339D30 + 5);
    if ( v12[4] == v12[3] )
    {
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        v12 + 2,
        v12[3],
        (__int64)&unk_180339800);
    }
    else
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v12[3], &unk_180339800);
      v12[3] += 480LL;
    }
    v28 = 0LL;
    v29 = 0LL;
    memset_0(v24, 0, sizeof(v24));
    v25 = 0LL;
    *(_QWORD *)&v25 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Buyheadnode();
    v26 = 0LL;
    *(_QWORD *)&v26 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Buyheadnode();
    v27 = 0LL;
    *(_QWORD *)&v27 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode();
    anonymous_namespace_::FrameSequenceInfo::operator_((__int64)&unk_180339800, (__int64)v24);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v24);
    v13 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
            *((_QWORD *)qword_180339D30 + 5),
            qword_180339A48);
    if ( a1
      || v13 >= CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v13 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_180339A90) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_180339A90) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v15 = qword_180339D30;
      v16 = xmmword_180339A60;
      *(_OWORD *)(*((_QWORD *)qword_180339D30 + 5) + 176LL) = xmmword_180339AB8;
      v17 = v15[5];
      *(_OWORD *)(v17 + 40) = xmmword_180339A50;
      v18 = xmmword_180339A70;
      *(_OWORD *)(v17 + 56) = v16;
      v19 = xmmword_180339A80;
      *(_OWORD *)(v17 + 72) = v18;
      *(_QWORD *)&v18 = qword_180339A90;
      *(_OWORD *)(v17 + 88) = v19;
      *(_QWORD *)(v17 + 104) = v18;
      v20 = operator new(0xC0uLL);
      v21 = v20;
      if ( v20 )
      {
        memset_0(v20, 0, 0xC0uLL);
        v1 = anonymous_namespace_::FramesReport::FramesReport(v21);
      }
      v22 = (union _SLIST_HEADER *)qword_180339D30;
      v23 = (struct _SLIST_ENTRY *)*((_QWORD *)qword_180339D30 + 5);
      *((_QWORD *)qword_180339D30 + 5) = v1;
      InterlockedPushEntrySList(v22 + 3, v23);
      SubmitThreadpoolWork(*((PTP_WORK *)qword_180339D30 + 1));
    }
  }
}
