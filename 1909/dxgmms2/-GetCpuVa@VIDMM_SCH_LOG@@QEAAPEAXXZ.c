/*
 * XREFs of ?GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ @ 0x1C003BD18
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x1C00CD1A8 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_SCH_LOG::GetCpuVa(VIDMM_SCH_LOG *this)
{
  return (void *)*((_QWORD *)this + 4);
}
