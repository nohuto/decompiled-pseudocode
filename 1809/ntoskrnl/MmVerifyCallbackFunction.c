/*
 * XREFs of MmVerifyCallbackFunction @ 0x140850138
 * Callers:
 *     KeRegisterBoundCallback @ 0x14028F2B0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186880 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
