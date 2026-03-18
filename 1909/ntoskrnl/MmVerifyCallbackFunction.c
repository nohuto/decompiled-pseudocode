/*
 * XREFs of MmVerifyCallbackFunction @ 0x14088A7A8
 * Callers:
 *     KeRegisterBoundCallback @ 0x1402A58E0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14018A350 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
