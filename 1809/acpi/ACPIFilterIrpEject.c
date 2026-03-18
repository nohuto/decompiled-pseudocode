/*
 * XREFs of ACPIFilterIrpEject @ 0x1C00ABB20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009D9CC (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpEject(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, (__int64)ACPIBusAndFilterIrpEject, a4, 0, 1, 0);
}
