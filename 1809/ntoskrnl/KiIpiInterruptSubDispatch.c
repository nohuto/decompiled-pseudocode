/*
 * XREFs of KiIpiInterruptSubDispatch @ 0x1401C4020
 * Callers:
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiIpiProcessRequests @ 0x140103F70 (KiIpiProcessRequests.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 */

__int64 __fastcall KiIpiInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CurrentThread; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  __int64 result; // rax

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(14LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v4 = __rdtsc() - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v4;
    v5 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v4;
    v6 = v4 + v5;
    v7 = v6;
    if ( HIDWORD(v6) )
      v7 = -1;
    *(_DWORD *)(CurrentThread + 80) = v7;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v4);
  }
  _enable();
  result = KiIpiProcessRequests();
  _disable();
  return result;
}
