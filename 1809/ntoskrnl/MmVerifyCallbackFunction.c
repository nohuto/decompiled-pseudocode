/*
 * XREFs of MmVerifyCallbackFunction @ 0x14084EEF8
 * Callers:
 *     KeRegisterBoundCallback @ 0x14028EFC0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186720 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
