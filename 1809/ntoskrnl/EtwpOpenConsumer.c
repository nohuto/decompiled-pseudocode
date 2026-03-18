/*
 * XREFs of EtwpOpenConsumer @ 0x1406C3050
 * Callers:
 *     EtwpRealtimeConnect @ 0x1406C2B18 (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1406470E0 (ObOpenObjectByPointer.c)
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
