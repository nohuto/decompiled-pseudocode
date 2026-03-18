/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x140010050
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KeStartThread @ 0x14001C080 (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x1400FC5E0 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400FC790 (KiComputeThreadAffinity.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1401145A8 (KeUpdateThreadSchedulingProperties.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ecx
  __int64 result; // rax

  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v2 = *(_QWORD *)(a1 + 24896);
  v3 = 0;
  if ( v2 )
    v3 = (v2 & *(_QWORD *)(a2 + 576)) == v2;
  result = (*(_DWORD *)(a2 + 120) >> 13) & 1;
  if ( v3 != (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
