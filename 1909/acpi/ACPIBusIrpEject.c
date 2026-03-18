/*
 * XREFs of ACPIBusIrpEject @ 0x1C00AD710
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1C00A02B0 (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpEject(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  return ACPIIrpInvokeDispatchRoutine(
           a1,
           a2,
           a3,
           (__int64 (__fastcall *)(ULONG_PTR, IRP *, _QWORD, _QWORD))ACPIBusAndFilterIrpEject,
           0);
}
