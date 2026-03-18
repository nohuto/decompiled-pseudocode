/*
 * XREFs of ??0DCOBJA@@QEAA@XZ @ 0x1C0161060
 * Callers:
 *     NtGdiCancelDC @ 0x1C0291820 (NtGdiCancelDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015F030 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  *(_QWORD *)this = 0LL;
  return this;
}
