/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x140158BD4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x140718434 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PpMarkDeviceStackExtensionFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // r9
  __int64 v7; // rcx
  int v8; // edx
  int v9; // edx

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 312);
    v8 = *(_DWORD *)(v7 + 32);
    if ( a3 )
      v9 = a2 | v8;
    else
      v9 = ~a2 & v8;
    *(_DWORD *)(v7 + 32) = v9;
    a1 = *(_QWORD *)(a1 + 24);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
