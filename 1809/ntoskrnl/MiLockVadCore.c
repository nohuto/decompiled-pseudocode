/*
 * XREFs of MiLockVadCore @ 0x140087AC0
 * Callers:
 *     MiSetVadFlags @ 0x1400879D0 (MiSetVadFlags.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) != 0 )
      {
        v8 = 0;
        do
        {
          KeYieldProcessorEx(&v8, a2, a3);
          v5 = *(_DWORD *)(a1 + 48);
        }
        while ( v5 < 0 );
      }
      else
      {
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v5 | 0x40000000, v5);
      }
    }
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v5 & 0x3FFFFFFF | 0x80000000, v5);
  }
  while ( v6 != v5 );
  return CurrentIrql;
}
