/*
 * XREFs of TpAllocAlpcCompletionEx @ 0x1800787B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletionEx(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK_EX Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return sub_1800787D4(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
