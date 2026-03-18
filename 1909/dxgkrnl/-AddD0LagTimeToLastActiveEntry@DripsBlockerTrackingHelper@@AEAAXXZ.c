/*
 * XREFs of ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C0241584
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02419A0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C024384C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02461E4 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     DpiReportDevicePowerStateDownWorkItemCallback @ 0x1C029D520 (DpiReportDevicePowerStateDownWorkItemCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0qqqszq @ 0x1C00245C0 (McTemplateK0qqqszq.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C0244360 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 *     ?EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C0299004 (-EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(DripsBlockerTrackingHelper *this)
{
  unsigned __int64 Elapsed; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  char v8; // r10
  const wchar_t *v9; // r11
  char v10; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 302152) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 37767));
    v3 = Elapsed;
    v4 = *((unsigned int *)this + 75537);
    v5 = (char *)this + 4720 * *((unsigned int *)this + 75536);
    if ( *((_BYTE *)this + 302153) )
      *(_QWORD *)&v5[72 * v4 + 160] += Elapsed;
    else
      *(_QWORD *)&v5[72 * v4 + 152] += Elapsed;
    if ( bTracingEnabled )
    {
      DXGGLOBAL::GetGlobal((__int64)v5, v4);
      v9 = (const wchar_t *)DXGGLOBAL::EtwProfilerTypeName(
                              *((unsigned int *)this
                              + 1180 * *((unsigned int *)this + 75536)
                              + 18 * *((unsigned int *)this + 75537)
                              + 43),
                              &v10);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0qqqszq(
          (__int64)this + v6 + 8,
          &DripsBlockerTracking_AddD0LagTime,
          *((unsigned __int8 *)this + 302153),
          v7,
          v8,
          *((_BYTE *)this + 302153),
          (const GUID *)((char *)this + v6 + 8),
          v9,
          v3 / 0x2710);
    }
    *((_BYTE *)this + 302152) = 0;
  }
}
