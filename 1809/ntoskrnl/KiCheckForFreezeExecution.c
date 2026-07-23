/*
 * XREFs of KiCheckForFreezeExecution @ 0x14028D848
 * Callers:
 *     KiYieldWaitForDebugger @ 0x1401B4468 (KiYieldWaitForDebugger.c)
 *     KiProcessNMI @ 0x14028DA80 (KiProcessNMI.c)
 * Callees:
 *     KiFreezeTargetExecution @ 0x1402978CC (KiFreezeTargetExecution.c)
 */

char __fastcall KiCheckForFreezeExecution(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  _QWORD *v5; // r8
  unsigned __int64 v6; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IpiFrozen != 5 )
    return 0;
  KiFreezeTargetExecution();
  if ( KiResumeForReboot && a1 )
  {
    if ( *(_WORD *)(a1 + 368) != 16 )
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
      *(_QWORD *)(a1 + 384) = CurrentPrcb->RspBase;
    }
    *(_DWORD *)(a1 + 376) &= ~0x200u;
    v3 = __readmsr(0xC0000101);
    *(_QWORD *)(a1 + 104) = ((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3;
    *(_QWORD *)(a1 + 360) = KiWaitForReboot;
    if ( KiKvaShadow )
    {
      v4 = 7LL;
      v5 = (_QWORD *)(CurrentPrcb[-1].PrcbPad140[467] + 5184);
      do
      {
        v6 = __readcr3();
        v5[1] = v6;
        *v5 = __readmsr(0xC0000101);
        v5 += 64;
        --v4;
      }
      while ( v4 );
    }
  }
  return 1;
}
