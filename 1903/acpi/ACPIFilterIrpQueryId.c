/*
 * XREFs of ACPIFilterIrpQueryId @ 0x1C00A13C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001740 (ACPIDispatchForwardIrp.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009F02C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryId(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  if ( (AcpiOverrideAttributes & 0x300000) != 0 )
    return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, (__int64)ACPIFilterIrpQueryIdCompletion, a4, 1, 0, 0);
  else
    return ACPIDispatchForwardIrp((ULONG_PTR)a1, a2);
}
