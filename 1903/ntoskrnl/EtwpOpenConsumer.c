/*
 * XREFs of EtwpOpenConsumer @ 0x1406CC5DC
 * Callers:
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall EtwpOpenConsumer(PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           KeGetCurrentThread()->ApcState.Process,
           0x200u,
           0LL,
           0x28u,
           (POBJECT_TYPE)PsProcessType,
           0,
           Handle);
}
