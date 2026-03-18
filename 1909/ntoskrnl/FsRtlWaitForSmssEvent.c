/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x14078CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall FsRtlWaitForSmssEvent(PVOID Object)
{
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  return ObfDereferenceObject(Object);
}
