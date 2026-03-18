/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800C8D00
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x18006A2F0 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x1801488B8 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     McTemplateU0qqq @ 0x180149014 (McTemplateU0qqq.c)
 *     McTemplateU0qqqqqqqqqqqqq @ 0x18014908C (McTemplateU0qqqqqqqqqqqqq.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  HANDLE v5; // rax
  LARGE_INTEGER v6; // rcx
  unsigned __int64 v7; // rsi
  HANDLE CurrentThread; // rax
  BOOL v9; // eax
  int v10; // r8d
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-28h] BYREF
  unsigned __int64 CycleTime; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( a2 )
    dword_1803080B0 |= 0x80u;
  byte_180308210 = dword_180308138 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_1803080BC;
    v7 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180307F28 )
    {
      CurrentThread = GetCurrentThread();
      v9 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v9 )
        qword_1803080D8 += CycleTime - qword_180307F28;
    }
    v6 = g_qpcFrequency;
    qword_180308208 = a3;
    qword_180308110 = v3 - v7;
    dword_180306870 = 3;
    v10 = dword_1803080D4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_180307F10) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_180307F10) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803080D4 )
      v10 = 1000000 * ((unsigned __int64)(a3 - qword_180307F10) / g_qpcFrequency.QuadPart)
          + 1000000 * ((unsigned __int64)(a3 - qword_180307F10) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803080D4 = v10;
  }
  else
  {
    if ( dword_180308138 == `anonymous namespace'::_frameStartSnaphot
      && dword_180308140 == dword_180308610
      && dword_18030813C == dword_18030860C
      && dword_180308144 == dword_180308614 )
    {
      ++dword_1803080C4;
      anonymous_namespace_::MeasureCyclesDelta(&qword_180307F28, &qword_1803080E8);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_UNPRESENTED_FRAME);
      ++dword_1803080C0;
      CycleTime = 0LL;
      if ( qword_180307F28 )
      {
        v5 = GetCurrentThread();
        if ( QueryThreadCycleTime(v5, &CycleTime) )
          qword_1803080E0 += CycleTime - qword_180307F28;
      }
    }
    if ( byte_180307F18 )
    {
      ++dword_180308154;
      if ( dword_180306870 )
        --dword_180306870;
      else
        ++dword_1803080AC;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v6 = g_qpcFrequency;
    qword_180308208 = PerformanceCount.QuadPart;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq(
      dword_180308180 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180308198 - xmmword_180307F80,
      dword_1803081B4 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_1803081B8 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_1803081BC - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180308180 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180308198 - xmmword_180307F80,
      dword_18030818C - BYTE4(xmmword_180307F80),
      dword_180308068 - BYTE8(xmmword_180307F80),
      dword_18030806C - BYTE12(xmmword_180307F80),
      dword_180308070 - xmmword_180307F90,
      dword_180308074 - BYTE4(xmmword_180307F90),
      dword_180308078 - BYTE8(xmmword_180307F90),
      dword_18030807C - BYTE12(xmmword_180307F90),
      dword_180308080 - xmmword_180307FA0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18030816C - DWORD1(xmmword_180307FA0)),
        (unsigned int)(dword_180308170 - DWORD2(xmmword_180307FA0)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(
          (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180308174 - HIDWORD(xmmword_180307FA0),
          dword_180308178 - xmmword_180307FB0,
          dword_18030817C - BYTE4(xmmword_180307FB0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180308190 - DWORD2(xmmword_180307FB0)),
            (unsigned int)(dword_180308194 - HIDWORD(xmmword_180307FB0)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18030819C - qword_180307FC0),
              (unsigned int)(dword_1803081A0 - HIDWORD(qword_180307FC0)));
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&`anonymous namespace'::_etwEndFrameSnapshot);
    v6 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_180307F10 - qword_180308200) / v6.QuadPart)
     + 1000 * ((unsigned __int64)(qword_180307F10 - qword_180308200) % v6.QuadPart) / v6.QuadPart >= CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
