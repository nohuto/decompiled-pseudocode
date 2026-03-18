/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C0157F20
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C001DD10 (DpiPdoDispatchPower.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00D0908 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0157B30 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0157B64 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01584DC (DpiDxgkDdiSetPowerState.c)
 */

__int64 __fastcall DpiPdoSetDevicePower(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KEVENT *v13; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v8 = *(_QWORD *)(v3 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(v3 + 284) != a2 )
  {
    *(_DWORD *)(v3 + 284) = a2;
    if ( (*(_BYTE *)(v9 + 3905) & 4) == 0 )
    {
      v4 = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( v4 >= 0 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3896), 1LL, v10);
        DpiDxgkDdiSetPowerState(v8, *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 504), a2, a3);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3896), v11, v12);
        DpiReleaseCoreSyncAccessSafe(a1, 1);
        v4 = 0;
      }
    }
    v13 = (struct _KEVENT *)(v3 + 984);
    if ( a2 == 1 )
    {
      KeClearEvent(v13);
      KeSetEvent((PRKEVENT)(v3 + 1008), 0, 0);
    }
    else
    {
      KeSetEvent(v13, 0, 0);
      KeClearEvent((PRKEVENT)(v3 + 1008));
    }
  }
  return (unsigned int)v4;
}
