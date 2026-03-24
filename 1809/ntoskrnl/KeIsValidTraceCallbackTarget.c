/*
 * XREFs of KeIsValidTraceCallbackTarget @ 0x140844920
 * Callers:
 *     KeSetSystemServiceCallback @ 0x140844960 (KeSetSystemServiceCallback.c)
 *     KeSetTracepoint @ 0x140844E00 (KeSetTracepoint.c)
 *     EtwRegisterEventCallback @ 0x1408BDDB0 (EtwRegisterEventCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186740 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall KeIsValidTraceCallbackTarget(unsigned __int64 a1)
{
  if ( KiDynamicTraceEnabled )
    return (unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, 32) == 0 ? 0xC000000D : 0;
  else
    return 3221225506LL;
}
