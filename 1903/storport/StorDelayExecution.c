/*
 * XREFs of StorDelayExecution @ 0x1C003A88C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDelayExecution(ULONG MicroSeconds)
{
  __int64 Timer; // rax
  void *v2; // rbx
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  if ( KeGetCurrentIrql() >= 2u || MicroSeconds < StorMinimumTimeInterval / 0xAu )
  {
    KeStallExecutionProcessor(MicroSeconds);
  }
  else
  {
    Interval.QuadPart = -10LL * MicroSeconds;
    if ( MicroSeconds < StorMaximumTimeInterval / 0xAu
      && (Timer = ExAllocateTimer(0LL, 0LL, 4LL, 3435973837LL), (v2 = (void *)Timer) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        Timer,
        (union _LARGE_INTEGER)Interval.QuadPart,
        0LL,
        0LL);
      KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
      ExDeleteTimer(v2, 0LL, 0LL, 0LL);
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
}
