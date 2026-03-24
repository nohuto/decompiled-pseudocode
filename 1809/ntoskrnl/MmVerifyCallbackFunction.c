/*
 * XREFs of MmVerifyCallbackFunction @ 0x14084EED8
 * Callers:
 *     KeRegisterBoundCallback @ 0x14028F0C0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186740 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
