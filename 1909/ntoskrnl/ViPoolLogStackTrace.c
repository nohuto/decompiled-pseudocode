/*
 * XREFs of ViPoolLogStackTrace @ 0x14097D6A8
 * Callers:
 *     VfAllocPoolNotification @ 0x14097D2F0 (VfAllocPoolNotification.c)
 *     VfFreePoolNotification @ 0x14097D3B0 (VfFreePoolNotification.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400175E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1400A16D0 (KeExpandKernelStackAndCalloutEx.c)
 *     ViPoolLogStackCallout @ 0x140963AE0 (ViPoolLogStackCallout.c)
 */

void __fastcall ViPoolLogStackTrace(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( VfPoolTraces )
  {
    v2 = VfPoolTraces
       + ((unsigned __int64)(_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1)) << 7);
    *(_QWORD *)(v2 + 16) = KeGetCurrentThread();
    *(_QWORD *)v2 = a1;
    *(_QWORD *)(v2 + 8) = a2;
    if ( (VfOptionFlags & 2) != 0 )
    {
LABEL_3:
      *(_QWORD *)(v2 + 24) = 0LL;
      return;
    }
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
    {
      ViPoolLogStackCallout((PVOID *)v2);
    }
    else if ( KeExpandKernelStackAndCalloutEx(
                (PEXPAND_STACK_CALLOUT)ViPoolLogStackCallout,
                (PVOID)v2,
                0xE30uLL,
                1u,
                0LL) < 0 )
    {
      goto LABEL_3;
    }
  }
}
