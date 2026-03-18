/*
 * XREFs of MiInitializeProcessAwe @ 0x1408960D4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140685748 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140788140 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x140117730 (ExInitializeAutoExpandPushLock.c)
 */

__int64 __fastcall MiInitializeProcessAwe(__int64 a1)
{
  return ExInitializeAutoExpandPushLock((_QWORD *)(a1 + 360), 1);
}
