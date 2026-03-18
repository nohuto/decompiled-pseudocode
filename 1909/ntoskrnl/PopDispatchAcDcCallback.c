/*
 * XREFs of PopDispatchAcDcCallback @ 0x1408B2F30
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140443A2C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
