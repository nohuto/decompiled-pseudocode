/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800C8D00 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x1800CC774 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180056DB0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x18006099C (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&___ptr64_ @ 0x180069BF0 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180069BF0.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x18006BE20 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode @ 0x1800C45E8 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a6.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800C4BAC (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x1800C531C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x1800D9C50 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800DA124 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequence(char a1)
{
  _QWORD *v1; // rbx
  LARGE_INTEGER v3; // rcx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 *v7; // rdi
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
  _BYTE v21[408]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v22; // [rsp+1C0h] [rbp+B8h]
  __int128 v23; // [rsp+1D0h] [rbp+C8h]
  __int128 v24; // [rsp+1E8h] [rbp+E0h]
  __int64 v25; // [rsp+1F8h] [rbp+F0h]
  __int64 v26; // [rsp+200h] [rbp+F8h]
  _BYTE ppsmemCounters[80]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v28; // [rsp+258h] [rbp+150h]

  v1 = 0LL;
  if ( dword_1803080B8 )
  {
    memset_0(ppsmemCounters, 0, 0x58uLL);
    `anonymous namespace'::_etwEndFrameSnapshot = *(_OWORD *)ppsmemCounters;
    xmmword_180307F80 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_180307F90 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_180307FA0 = *(_OWORD *)&ppsmemCounters[48];
    xmmword_180307FB0 = *(_OWORD *)&ppsmemCounters[64];
    qword_180307FC0 = v28;
    CProcessAttributionManager::EnumerateChangedProcessAttributions(
      *(void ****)(*(_QWORD *)qword_180307FC8 + 8LL),
      *(struct CProcessAttributionObserver **)qword_180307FC8,
      0LL,
      (void (__high *)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_f08f89e48aea7a3cf710738a505e63f5_::_lambda_invoker_cdecl_);
    v3 = g_qpcFrequency;
    v4 = qword_180308208;
    v5 = qword_180308200;
    dword_1803080D0 = 1000 * ((unsigned __int64)(qword_180308208 - qword_180308200) / g_qpcFrequency.QuadPart)
                    + 1000
                    * ((unsigned __int64)(qword_180308208 - qword_180308200) % g_qpcFrequency.QuadPart)
                    / g_qpcFrequency.QuadPart;
    v6 = xmmword_180307F50 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)xmmword_180307F50 == *(_QWORD *)&GUID_NULL.Data1 )
      v6 = *((_QWORD *)&xmmword_180307F50 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v6 )
    {
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession = 0;
      `anonymous namespace'::_startOfScreenOff = 0LL;
    }
    else
    {
      v19 = dword_1803080C0;
      if ( (unsigned int)dword_1803080C0 > 0x37
        && (dword_180307F1C & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v4 = qword_180308208;
        v5 = qword_180308200;
        v19 = dword_1803080C0;
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
    v7 = (__int64 *)*((_QWORD *)qword_180307FC8 + 5);
    if ( v7[4] == v7[3] )
    {
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_____ptr64_(
        v7 + 2,
        v7[3],
        (__int64)&unk_180308030);
    }
    else
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v7[3], &unk_180308030);
      v7[3] += 480LL;
    }
    v25 = 0LL;
    v26 = 0LL;
    memset_0(v21, 0, sizeof(v21));
    v22 = 0LL;
    *(_QWORD *)&v22 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
    v23 = 0LL;
    *(_QWORD *)&v23 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
    v24 = 0LL;
    *(_QWORD *)&v24 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_180308030, v21);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v21);
    v8 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
           *((_QWORD *)qword_180307FC8 + 5),
           qword_180307F10);
    if ( a1
      || v8 >= CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v8 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_180307F00) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_180307F00) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v10 = qword_180307FC8;
      v11 = xmmword_180307ED0;
      *(_OWORD *)(*((_QWORD *)qword_180307FC8 + 5) + 176LL) = xmmword_180307F50;
      v12 = v10[5];
      *(_OWORD *)(v12 + 40) = xmmword_180307EC0;
      v13 = unk_180307EE0;
      *(_OWORD *)(v12 + 56) = v11;
      v14 = xmmword_180307EF0;
      *(_OWORD *)(v12 + 72) = v13;
      *(_QWORD *)&v13 = qword_180307F00;
      *(_OWORD *)(v12 + 88) = v14;
      *(_QWORD *)(v12 + 104) = v13;
      v15 = operator new(0xC0uLL);
      v16 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, 0xC0uLL);
        v1 = anonymous_namespace_::FramesReport::FramesReport(v16);
      }
      v17 = (union _SLIST_HEADER *)qword_180307FC8;
      v18 = (struct _SLIST_ENTRY *)*((_QWORD *)qword_180307FC8 + 5);
      *((_QWORD *)qword_180307FC8 + 5) = v1;
      InterlockedPushEntrySList(v17 + 3, v18);
      SubmitThreadpoolWork(*((PTP_WORK *)qword_180307FC8 + 1));
    }
  }
}
