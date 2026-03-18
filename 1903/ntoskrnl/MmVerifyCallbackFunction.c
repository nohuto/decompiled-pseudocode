/*
 * XREFs of MmVerifyCallbackFunction @ 0x14088AF88
 * Callers:
 *     KeRegisterBoundCallback @ 0x1402A5B80 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14018F410 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
