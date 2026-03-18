/*
 * XREFs of MmCanThreadFault @ 0x1400BF6DC
 * Callers:
 *     RtlWalkFrameChain @ 0x140017230 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x14032D1BC (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140335EC8 (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)KeGetEffectiveIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc )
    {
      if ( MmPhysicalMemoryBlock )
      {
        v1 = *(_QWORD *)(*(_QWORD *)(qword_140466188
                                   + 8LL * *(unsigned __int16 *)&CurrentThread->ApcState.Process[1].Spare2[69])
                       + 7800LL);
        if ( v1 )
        {
          if ( CurrentThread != *(struct _KTHREAD **)(v1 + 96) )
            return 1;
        }
      }
    }
  }
  return result;
}
