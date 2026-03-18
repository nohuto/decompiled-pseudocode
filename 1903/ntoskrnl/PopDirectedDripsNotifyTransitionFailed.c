/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x1408A4758
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408B8A04 (PopDirectedDripsDiagTraceProblemDevice.c)
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
  byte_140444ED0 = 1;
  return result;
}
