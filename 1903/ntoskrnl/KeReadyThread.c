/*
 * XREFs of KeReadyThread @ 0x14001C19C
 * Callers:
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x140090450 (KiInSwapSingleProcess.c)
 */

char __fastcall KeReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  char result; // al
  __int64 CurrentIrql; // r8

  v3 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v3 + 576) & 7) == 0 )
    return KiFastReadyThread(a1, v3, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  result = KiInSwapSingleProcess(a1, v3, CurrentIrql);
  if ( !result )
    return KiFastReadyThread(a1, v3, a3);
  return result;
}
