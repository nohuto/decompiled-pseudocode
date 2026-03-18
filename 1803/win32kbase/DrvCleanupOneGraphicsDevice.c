/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x1C00D3A50
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00424C0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CD0F0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00D3898 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     bSetDeviceSessionUsage @ 0x1C00D68C0 (bSetDeviceSessionUsage.c)
 */

__int64 __fastcall DrvCleanupOneGraphicsDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 176);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a1 + 200);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 224);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(void **)(a1 + 232);
  if ( v7 )
  {
    if ( (*(_DWORD *)(a1 + 164) & 2) != 0 )
    {
      bSetDeviceSessionUsage(a1, 0LL);
      v7 = *(void **)(a1 + 232);
    }
    ObfDereferenceObject(v7);
  }
  v8 = *(_QWORD *)(a1 + 272);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  return Win32FreePool(a1);
}
