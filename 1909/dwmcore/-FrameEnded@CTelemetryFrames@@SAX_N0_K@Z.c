/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180074698
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x18003B678 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C5AF4 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     McTemplateU0qqq @ 0x180159070 (McTemplateU0qqq.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x180171588 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     McTemplateU0qqqqqqqqqqqqq @ 0x18017219C (McTemplateU0qqqqqqqqqqqqq.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  HANDLE CurrentThread; // rax
  BOOL v7; // eax
  LARGE_INTEGER v8; // rcx
  int v9; // r8d
  HANDLE v10; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-28h] BYREF
  unsigned __int64 CycleTime; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( a2 )
    dword_180339880 |= 0x80u;
  byte_1803399E0 = dword_180339908 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_18033988C;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180339AB0 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_1803398A8 += CycleTime - qword_180339AB0;
    }
    v8 = g_qpcFrequency;
    qword_1803399D8 = a3;
    qword_1803398E0 = v3 - v5;
    dword_180337E08 = 3;
    v9 = dword_1803398A4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_180339A48) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_180339A48) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803398A4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_180339A48) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_180339A48) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803398A4 = v9;
  }
  else
  {
    if ( dword_180339908 == `anonymous namespace'::_frameStartSnaphot
      && dword_180339910 == dword_18033D1F0
      && dword_18033990C == dword_18033D1EC
      && dword_180339914 == dword_18033D1F4 )
    {
      ++dword_180339894;
      anonymous_namespace_::MeasureCyclesDelta(&qword_180339AB0, &unk_1803398B8);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_UNPRESENTED_FRAME);
      ++dword_180339890;
      CycleTime = 0LL;
      if ( qword_180339AB0 )
      {
        v10 = GetCurrentThread();
        if ( QueryThreadCycleTime(v10, &CycleTime) )
          qword_1803398B0 += CycleTime - qword_180339AB0;
      }
    }
    if ( byte_180339A99 )
    {
      ++dword_180339924;
      if ( dword_180337E08 )
        --dword_180337E08;
      else
        ++dword_18033987C;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v8 = g_qpcFrequency;
    qword_1803399D8 = PerformanceCount.QuadPart;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq(
      dword_180339950 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180339968 - xmmword_180339AE0,
      dword_180339984 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_180339988 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_18033998C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180339950 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180339968 - xmmword_180339AE0,
      dword_18033995C - BYTE4(xmmword_180339AE0),
      dword_180339838 - BYTE8(xmmword_180339AE0),
      dword_18033983C - BYTE12(xmmword_180339AE0),
      dword_180339840 - xmmword_180339AF0,
      dword_180339844 - BYTE4(xmmword_180339AF0),
      dword_180339848 - BYTE8(xmmword_180339AF0),
      dword_18033984C - BYTE12(xmmword_180339AF0),
      dword_180339850 - xmmword_180339B00);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18033993C - DWORD1(xmmword_180339B00)),
        (unsigned int)(dword_180339940 - DWORD2(xmmword_180339B00)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180339944 - HIDWORD(xmmword_180339B00),
          dword_180339948 - xmmword_180339B10,
          dword_18033994C - BYTE4(xmmword_180339B10));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180339960 - DWORD2(xmmword_180339B10)),
            (unsigned int)(dword_180339964 - HIDWORD(xmmword_180339B10)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18033996C - qword_180339B20),
              (unsigned int)(dword_180339970 - HIDWORD(qword_180339B20)));
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_180339A48 - qword_1803399D0) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_180339A48 - qword_1803399D0) % v8.QuadPart) / v8.QuadPart >= CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
