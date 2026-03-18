/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x1408A3F98
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408B82D4 (PopDirectedDripsDiagTraceProblemDevice.c)
 */

LONG_PTR __fastcall PopDirectedDripsNotifyTransitionFailed(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx
  __int64 v3; // rcx

  result = (LONG_PTR)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67696450u);
  v2 = (void *)result;
  if ( result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL);
    if ( v3 )
      PopDirectedDripsDiagTraceProblemDevice(v3, 5LL);
    result = ObfDereferenceObjectWithTag(v2, 0x67696450u);
  }
  byte_140444BB0 = 1;
  return result;
}
