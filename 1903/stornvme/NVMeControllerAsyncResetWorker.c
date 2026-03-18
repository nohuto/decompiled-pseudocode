/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1C000AB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00050B0 (_guard_dispatch_icall_nop.c)
 *     NVMeControllerReset @ 0x1C000B7AC (NVMeControllerReset.c)
 */

__int64 __fastcall NVMeControllerAsyncResetWorker(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  __int64 v7; // rdx

  StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset START\n");
  v6 = NVMeControllerReset(a1);
  if ( *(_QWORD *)(a2 + 8) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset Callback START\n");
    LOBYTE(v7) = v6;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(a2 + 8))(a1, v7, *(_QWORD *)(a2 + 16));
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset Callback END\n");
  }
  StorPortExtendedFunction(1LL, a1, a2);
  if ( a3 )
    StorPortExtendedFunction(31LL, a1, a3);
  return StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset END\n");
}
