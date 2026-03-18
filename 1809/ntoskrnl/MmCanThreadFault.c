/*
 * XREFs of MmCanThreadFault @ 0x1400CC1D4
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     RtlWalkFrameChain @ 0x1400CCBB0 (RtlWalkFrameChain.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x14030F41C (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140317398 (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400CAAB0 (KeGetEffectiveIrql.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( KeGetEffectiveIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc )
    {
      if ( MmPhysicalMemoryBlock )
      {
        v1 = *(_QWORD *)(*(_QWORD *)(qword_14043A748
                                   + 8LL
                                   * *((unsigned __int16 *)&CurrentThread->ApcState.Process[1].SecureState.Flags + 3))
                       + 7024LL);
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
