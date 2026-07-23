/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644
 * Callers:
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x1400D6480 (KiSetSystemAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400F48B0 (KeUpdateThreadSchedulingProperties.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 result; // rax

  v2 = 0;
  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v3 = *(_QWORD *)(a1 + 24896);
  if ( v3 )
    LOBYTE(v2) = (v3 & *(_QWORD *)(a2 + 576)) == v3;
  result = (*(_DWORD *)(a2 + 120) >> 13) & 1;
  if ( v2 != (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
