/*
 * XREFs of PoSetSystemWakeDevice @ 0x1402EDB40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopUpdateWakeSource @ 0x1402F728C (PopUpdateWakeSource.c)
 */

void *__fastcall PoSetSystemWakeDevice(__int64 a1)
{
  void *result; // rax
  void *v2; // rbx

  result = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x72496F50u);
  v2 = result;
  if ( result )
  {
    PopUpdateWakeSource(result);
    return (void *)ObfDereferenceObjectWithTag(v2, 0x72496F50u);
  }
  return result;
}
