/*
 * XREFs of ExGetCallBackBlockContext @ 0x140088F00
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1405F4C14 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F4F90 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1405F50F0 (PsCallImageNotifyRoutines.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748480 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkpLkmdFireCallbacks @ 0x140811C0C (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088C830 (PsRemoveCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockContext(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
