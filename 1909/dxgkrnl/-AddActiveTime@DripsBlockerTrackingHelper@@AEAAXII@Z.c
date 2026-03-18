/*
 * XREFs of ?AddActiveTime@DripsBlockerTrackingHelper@@AEAAXII@Z @ 0x1C024148C
 * Callers:
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z @ 0x1C0243598 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0qqqszq @ 0x1C00245C0 (McTemplateK0qqqszq.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C0244360 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 *     ?EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C0299004 (-EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::AddActiveTime(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bp
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 Elapsed; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  const wchar_t *v12; // r8
  char v13; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v6 = 4720LL * a2;
  v7 = v6 + 72LL * a3;
  if ( *((_BYTE *)this + v7 + 112) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*(_QWORD *)((char *)this + v7 + 120));
    v11 = Elapsed;
    if ( *(int *)((char *)this + v6 + 104) <= 0 )
      *(_QWORD *)((char *)this + v7 + 128) += Elapsed;
    else
      *(_QWORD *)((char *)this + v7 + 136) += Elapsed;
    if ( bTracingEnabled )
    {
      DXGGLOBAL::GetGlobal(v10, v9);
      v12 = (const wchar_t *)DXGGLOBAL::EtwProfilerTypeName(*(unsigned int *)((char *)this + v7 + 172), &v13);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0qqqszq(
          (__int64)this + v6 + 8,
          &DripsBlockerTracking_AddActiveTime,
          (__int64)v12,
          a2,
          v3,
          *(_DWORD *)((char *)this + v6 + 104),
          (const GUID *)((char *)this + v6 + 8),
          v12,
          v11 / 0x2710);
    }
  }
}
