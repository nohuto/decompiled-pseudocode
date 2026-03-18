/*
 * XREFs of NVMeControllerAsyncReset @ 0x1C000A85C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00041E0 (NVMeCompletionDpcRoutine.c)
 *     NVMeHwResetBus @ 0x1C00085F0 (NVMeHwResetBus.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0010C80 (NVMeFirmwareActivateCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeControllerAsyncReset(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  if ( (unsigned int)StorPortExtendedFunction(29LL, a1, &v9)
    || (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL)
    || (MEMORY[0] = a2,
        MEMORY[8] = a3,
        MEMORY[0x10] = a4,
        (unsigned int)StorPortExtendedFunction(30LL, a1, NVMeControllerAsyncResetWorker)) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset FAILED\n");
    if ( v9 )
      StorPortExtendedFunction(31LL, a1, v9);
    return 0;
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset QUEUED\n");
    return 1;
  }
}
