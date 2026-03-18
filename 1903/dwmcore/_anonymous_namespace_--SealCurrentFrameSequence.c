/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728
 * Callers:
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180096A64 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800977A8 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x1800310EC (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180072148 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180072624 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800729C8 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode @ 0x180077E60 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a6.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077E8C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@XZ @ 0x1800782EC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x1800A1EC0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800C671C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequence(char a1)
{
  _QWORD *v1; // rbx
  LARGE_INTEGER v3; // rcx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  union _SLIST_HEADER *v17; // rcx
  struct _SLIST_ENTRY *v18; // rdx
  int v19; // edx
  unsigned int v20; // r8d
  _QWORD *v21[51]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v22; // [rsp+1C0h] [rbp+B8h]
  __int128 v23; // [rsp+1D0h] [rbp+C8h]
  __int128 v24; // [rsp+1E8h] [rbp+E0h]
  __int64 v25; // [rsp+1F8h] [rbp+F0h]
  __int64 v26; // [rsp+200h] [rbp+F8h]
  _BYTE ppsmemCounters[80]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v28; // [rsp+258h] [rbp+150h]

  v1 = 0LL;
  if ( dword_18033C798 )
  {
    memset_0(ppsmemCounters, 0, 0x58uLL);
    `anonymous namespace'::_etwEndFrameSnapshot = *(_OWORD *)ppsmemCounters;
    xmmword_18033C9F0 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_18033CA00 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_18033CA10 = *(_OWORD *)&ppsmemCounters[48];
    xmmword_18033CA20 = *(_OWORD *)&ppsmemCounters[64];
    qword_18033CA30 = v28;
    CProcessAttributionManager::EnumerateChangedProcessAttributions(
      *(CProcessAttributionManager **)(*(_QWORD *)qword_18033CC40 + 8LL),
      *(struct CProcessAttributionObserver **)qword_18033CC40,
      0LL,
      (void (__high *)(void *, unsigned int, unsigned __int64, const unsigned __int16 *, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_8095cef1b1d93dcc9366060e44ed075d_::_lambda_invoker_cdecl_);
    v3 = g_qpcFrequency;
    v4 = qword_18033C8E8;
    v5 = qword_18033C8E0;
    dword_18033C7B0 = 1000 * ((unsigned __int64)(qword_18033C8E8 - qword_18033C8E0) / g_qpcFrequency.QuadPart)
                    + 1000
                    * ((unsigned __int64)(qword_18033C8E8 - qword_18033C8E0) % g_qpcFrequency.QuadPart)
                    / g_qpcFrequency.QuadPart;
    v6 = xmmword_18033C9D0 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)xmmword_18033C9D0 == *(_QWORD *)&GUID_NULL.Data1 )
      v6 = *((_QWORD *)&xmmword_18033C9D0 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v6 )
    {
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession = 0;
      `anonymous namespace'::_startOfScreenOff = 0LL;
    }
    else
    {
      v19 = dword_18033C7A0;
      if ( (unsigned int)dword_18033C7A0 > 0x37
        && (dword_18033C9B4 & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v4 = qword_18033C8E8;
        v5 = qword_18033C8E0;
        v19 = dword_18033C7A0;
        v3 = g_qpcFrequency;
      }
      v20 = v19 + `anonymous namespace'::_unpresentedFramesOnScreenOffSession;
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession += v19;
      if ( `anonymous namespace'::_startOfScreenOff )
      {
        if ( v20 >= 0x30570
          && (v4 - `anonymous namespace'::_startOfScreenOff) / v3.QuadPart
           + (v4 - `anonymous namespace'::_startOfScreenOff) % v3.QuadPart / v3.QuadPart < 0xE10
          && (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq)(
            (LARGE_INTEGER)v3.QuadPart,
            &EVTDESC_DIAGTRACK_TRIGGER,
            16525050LL,
            1LL);
        }
      }
      else
      {
        `anonymous namespace'::_startOfScreenOff = v5;
      }
    }
    v7 = *((_QWORD *)qword_18033CC40 + 5);
    if ( *(_QWORD *)(v7 + 32) == *(_QWORD *)(v7 + 24) )
    {
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        v7 + 16,
        *(_QWORD *)(v7 + 24),
        &unk_18033C710);
    }
    else
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(*(_QWORD *)(v7 + 24), &unk_18033C710);
      *(_QWORD *)(v7 + 24) += 480LL;
    }
    v25 = 0LL;
    v26 = 0LL;
    memset_0(v21, 0, sizeof(v21));
    v22 = 0LL;
    *(_QWORD *)&v22 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Buyheadnode();
    v23 = 0LL;
    *(_QWORD *)&v23 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Buyheadnode();
    v24 = 0LL;
    *(_QWORD *)&v24 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode();
    anonymous_namespace_::FrameSequenceInfo::operator_((__int64)&unk_18033C710, (__int64)v21);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v21);
    v8 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
           *((_QWORD *)qword_18033CC40 + 5),
           qword_18033C9A8);
    if ( a1
      || v8 >= CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v8 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_18033C9A0) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_18033C9A0) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v10 = qword_18033CC40;
      v11 = xmmword_18033C970;
      *(_OWORD *)(*((_QWORD *)qword_18033CC40 + 5) + 176LL) = xmmword_18033C9D0;
      v12 = v10[5];
      *(_OWORD *)(v12 + 40) = xmmword_18033C960;
      v13 = xmmword_18033C980;
      *(_OWORD *)(v12 + 56) = v11;
      v14 = xmmword_18033C990;
      *(_OWORD *)(v12 + 72) = v13;
      *(_QWORD *)&v13 = qword_18033C9A0;
      *(_OWORD *)(v12 + 88) = v14;
      *(_QWORD *)(v12 + 104) = v13;
      v15 = operator new(0xC0uLL);
      v16 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, 0xC0uLL);
        v1 = anonymous_namespace_::FramesReport::FramesReport(v16);
      }
      v17 = (union _SLIST_HEADER *)qword_18033CC40;
      v18 = (struct _SLIST_ENTRY *)*((_QWORD *)qword_18033CC40 + 5);
      *((_QWORD *)qword_18033CC40 + 5) = v1;
      InterlockedPushEntrySList(v17 + 3, v18);
      SubmitThreadpoolWork(*((PTP_WORK *)qword_18033CC40 + 1));
    }
  }
}
