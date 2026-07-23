/*
 * XREFs of KeIsValidTraceCallbackTarget @ 0x140845B80
 * Callers:
 *     KeSetSystemServiceCallback @ 0x140845BC0 (KeSetSystemServiceCallback.c)
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 *     EtwRegisterEventCallback @ 0x1408BF070 (EtwRegisterEventCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186880 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall KeIsValidTraceCallbackTarget(unsigned __int64 a1)
{
  if ( KiDynamicTraceEnabled )
    return (unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, 32) == 0 ? 0xC000000D : 0;
  else
    return 3221225506LL;
}
