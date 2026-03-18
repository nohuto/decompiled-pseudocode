/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D906C
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180071034 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     McTemplateU0xxxxx @ 0x180178438 (McTemplateU0xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx(
      *((_QWORD *)this + 4456),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 4455) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 4455) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 4455) - *((_QWORD *)this + 4454)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 4455) - *((_QWORD *)this + 4454)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 4455),
      *((_QWORD *)this + 4456),
      *((_QWORD *)this + 4453));
}
