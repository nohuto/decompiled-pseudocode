/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C0013928
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00041E0 (NVMeCompletionDpcRoutine.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNVMeControllerOnFatalError(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL) & 2) == 0 )
    return 0;
  StorPortExtendedFunction(98LL, a1, 0LL);
  return 1;
}
