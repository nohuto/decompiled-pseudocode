/*
 * XREFs of MiLockVadCore @ 0x1400727A0
 * Callers:
 *     MiSetVadFlags @ 0x1400726E0 (MiSetVadFlags.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v4 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v4 & 1) != 0 )
    {
      if ( (v4 & 2) != 0 )
      {
        v7 = 0;
        do
        {
          KeYieldProcessorEx(&v7);
          v4 = *(_DWORD *)(a1 + 48);
        }
        while ( (v4 & 1) != 0 );
      }
      else
      {
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 | 2, v4);
      }
    }
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 & 0xFFFFFFFC | 1, v4);
  }
  while ( v5 != v4 );
  return CurrentIrql;
}
