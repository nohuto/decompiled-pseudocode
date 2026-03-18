/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00D81F0
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0007578 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0007620 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C001A480 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00D822C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // rax

  v3 = DXGSYNCOBJECT::SignalFence(*(_QWORD *)a1, a2, *(unsigned int *)(a1 + 8), 0LL);
  v5 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = v5;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
