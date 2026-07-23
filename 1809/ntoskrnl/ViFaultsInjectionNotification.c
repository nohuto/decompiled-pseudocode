/*
 * XREFs of ViFaultsInjectionNotification @ 0x140939C20
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140939308 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 */

char __fastcall ViFaultsInjectionNotification(int a1)
{
  USHORT v2; // ax
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v2) = ++dword_14041BA8C;
  if ( (MmVerifierData & 0x1000) != 0 )
    LOBYTE(v2) = ViTargetIncrementCounter(retaddr, 164LL);
  if ( ViFaultTraces )
  {
    v3 = ViFaultTraces + 72LL * (_InterlockedIncrement(&ViFaultTracesIndex) & (unsigned int)(ViFaultTracesLength - 1));
    *(_QWORD *)v3 = KeGetCurrentThread();
    v2 = RtlCaptureStackBackTrace(a1 + 1, 8u, (PVOID *)(v3 + 8), 0LL);
    if ( v2 < 8u )
      *(_QWORD *)(v3 + 8LL * v2 + 8) = 0LL;
  }
  return v2;
}
