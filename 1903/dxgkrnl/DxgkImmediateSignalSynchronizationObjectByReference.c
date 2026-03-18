/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C012EFA8
 * Callers:
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0007C50 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000FC24 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0013880 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C005D118 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C012EFE4 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9; // rax

  v3 = DXGSYNCOBJECT::SignalFence(*(_QWORD *)a1, a2, *(unsigned int *)(a1 + 8), 0LL);
  v7 = v3;
  if ( v3 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 32) = v7;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v7;
}
