/*
 * XREFs of TpAllocAlpcCompletion @ 0x1800786B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletion(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  return sub_1800787D4(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
