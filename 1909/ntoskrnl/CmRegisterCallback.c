/*
 * XREFs of CmRegisterCallback @ 0x1407889D0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1407889F8 (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&CmLegacyAltitude,
           1,
           0,
           (__int64)Cookie);
}
