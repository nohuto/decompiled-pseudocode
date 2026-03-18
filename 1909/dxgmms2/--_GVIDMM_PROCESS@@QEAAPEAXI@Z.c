/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C0024134
 * Callers:
 *     VidMmCreateProcess @ 0x1C0001F10 (VidMmCreateProcess.c)
 * Callees:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B43C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *P)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
