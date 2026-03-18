/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800977A8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C5FC4 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     McTemplateU0qqq @ 0x18015A750 (McTemplateU0qqq.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x180172CD8 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     McTemplateU0qqqqqqqqqqqqq @ 0x1801738EC (McTemplateU0qqqqqqqqqqqqq.c)
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
    dword_18033C790 |= 0x80u;
  byte_18033C8F0 = dword_18033C818 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_18033C79C;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_18033C9C0 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_18033C7B8 += CycleTime - qword_18033C9C0;
    }
    v8 = g_qpcFrequency;
    qword_18033C8E8 = a3;
    qword_18033C7F0 = v3 - v5;
    dword_18033AD08 = 3;
    v9 = dword_18033C7B4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_18033C9A8) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_18033C9A8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_18033C7B4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_18033C9A8) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_18033C9A8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_18033C7B4 = v9;
  }
  else
  {
    if ( dword_18033C818 == `anonymous namespace'::_frameStartSnaphot
      && dword_18033C820 == dword_180340110
      && dword_18033C81C == dword_18034010C
      && dword_18033C824 == dword_180340114 )
    {
      ++dword_18033C7A4;
      anonymous_namespace_::MeasureCyclesDelta(&qword_18033C9C0, &unk_18033C7C8);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_UNPRESENTED_FRAME);
      ++dword_18033C7A0;
      CycleTime = 0LL;
      if ( qword_18033C9C0 )
      {
        v10 = GetCurrentThread();
        if ( QueryThreadCycleTime(v10, &CycleTime) )
          qword_18033C7C0 += CycleTime - qword_18033C9C0;
      }
    }
    if ( byte_18033C954 )
    {
      ++dword_18033C834;
      if ( dword_18033AD08 )
        --dword_18033AD08;
      else
        ++dword_18033C78C;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v8 = g_qpcFrequency;
    qword_18033C8E8 = PerformanceCount.QuadPart;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq(
      dword_18033C860 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_18033C878 - xmmword_18033C9F0,
      dword_18033C894 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_18033C898 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_18033C89C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_18033C860 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_18033C878 - xmmword_18033C9F0,
      dword_18033C86C - BYTE4(xmmword_18033C9F0),
      dword_18033C748 - BYTE8(xmmword_18033C9F0),
      dword_18033C74C - BYTE12(xmmword_18033C9F0),
      dword_18033C750 - xmmword_18033CA00,
      dword_18033C754 - BYTE4(xmmword_18033CA00),
      dword_18033C758 - BYTE8(xmmword_18033CA00),
      dword_18033C75C - BYTE12(xmmword_18033CA00),
      dword_18033C760 - xmmword_18033CA10);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18033C84C - DWORD1(xmmword_18033CA10)),
        (unsigned int)(dword_18033C850 - DWORD2(xmmword_18033CA10)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_18033C854 - HIDWORD(xmmword_18033CA10),
          dword_18033C858 - xmmword_18033CA20,
          dword_18033C85C - BYTE4(xmmword_18033CA20));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_18033C870 - DWORD2(xmmword_18033CA20)),
            (unsigned int)(dword_18033C874 - HIDWORD(xmmword_18033CA20)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18033C87C - qword_18033CA30),
              (unsigned int)(dword_18033C880 - HIDWORD(qword_18033CA30)));
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_18033C9A8 - qword_18033C8E0) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_18033C9A8 - qword_18033C8E0) % v8.QuadPart) / v8.QuadPart >= CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
