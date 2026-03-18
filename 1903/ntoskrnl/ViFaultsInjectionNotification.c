/*
 * XREFs of ViFaultsInjectionNotification @ 0x14097A540
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140979C20 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 */

char __fastcall ViFaultsInjectionNotification(int a1)
{
  USHORT v2; // ax
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v2) = ++dword_14044660C;
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
