/*
 * XREFs of MmCanThreadFault @ 0x14009F55C
 * Callers:
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x14032CC1C (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140335928 (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
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
        v1 = *(_QWORD *)(*(_QWORD *)(qword_140465E88
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
