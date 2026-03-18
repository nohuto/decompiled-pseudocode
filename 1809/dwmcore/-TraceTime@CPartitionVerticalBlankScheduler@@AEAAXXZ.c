/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007AF24
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800C967C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     McTemplateU0xxxxx @ 0x180149FD0 (McTemplateU0xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx(
      *((_QWORD *)this + 4415),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 4414) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 4414) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 4414) - *((_QWORD *)this + 4413)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 4414) - *((_QWORD *)this + 4413)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 4414),
      *((_QWORD *)this + 4415),
      *((_QWORD *)this + 4412));
}
