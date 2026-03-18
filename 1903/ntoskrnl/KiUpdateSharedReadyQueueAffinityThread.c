/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x14000FAD0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400E9720 (KeUpdateThreadSchedulingProperties.c)
 *     KiSetAffinityThread @ 0x1400F7E40 (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x1400F8B40 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400F8CF0 (KiComputeThreadAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x140126AD0 (KeSetIdealProcessorThreadEx.c)
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
