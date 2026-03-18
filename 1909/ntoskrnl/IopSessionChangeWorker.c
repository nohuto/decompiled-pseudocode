/*
 * XREFs of IopSessionChangeWorker @ 0x140181B60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExNotifyWithProcessing @ 0x1400F2CF8 (ExNotifyWithProcessing.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x1407485D0 (MmSetSessionObjectIoEvent.c)
 */

void __fastcall IopSessionChangeWorker(__int64 P)
{
  void *v2; // rcx

  ExNotifyWithProcessing((__int64)IopSessionCallbackObject, P, 0LL, 0LL);
  MmSetSessionObjectIoEvent(*(_QWORD *)(P + 56));
  ObfDereferenceObjectWithTag(*(PVOID *)(P + 56), 0x746C6644u);
  v2 = *(void **)(P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag((PVOID)P, 0);
}
