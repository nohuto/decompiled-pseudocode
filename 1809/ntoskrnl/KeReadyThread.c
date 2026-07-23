/*
 * XREFs of KeReadyThread @ 0x1400A2760
 * Callers:
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14010CA40 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 572) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  result = KiInSwapSingleProcess(a1, v1, CurrentIrql);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1);
  return result;
}
