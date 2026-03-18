/*
 * XREFs of MiInitializeProcessAwe @ 0x1408968B4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406921D8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140785DE0 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x1401160A0 (ExInitializeAutoExpandPushLock.c)
 */

__int64 __fastcall MiInitializeProcessAwe(__int64 a1)
{
  return ExInitializeAutoExpandPushLock((_QWORD *)(a1 + 360), 1);
}
