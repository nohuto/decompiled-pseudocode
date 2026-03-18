/*
 * XREFs of DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C0160D7C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoDispatchPnp @ 0x1C017FF20 (DpiFdoDispatchPnp.c)
 * Callees:
 *     DpiIndirectOpenDevice @ 0x1C02ABE78 (DpiIndirectOpenDevice.c)
 */

__int64 __fastcall DpiFdoOpenDeviceFileObjectIfNeeded(__int64 a1)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax

  if ( !*(_BYTE *)(a1 + 1159) )
    return 0LL;
  v3 = a1 + 1168;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 1168);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1224) = KeGetCurrentThread();
  v5 = DpiIndirectOpenDevice(v4, a1 + 1232);
  v9 = v5;
  if ( v5 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  *(_QWORD *)(a1 + 1224) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
  return (unsigned int)v9;
}
