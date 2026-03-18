/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0156398
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C01563EC (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0156438 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 */

NTSTATUS __fastcall REMOTE_VSYNC::WaitForVSync(BLTQUEUE **this)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  result = REMOTE_VSYNC::EnsureEmulationRunning((REMOTE_VSYNC *)this);
  if ( result >= 0 )
  {
    BLTQUEUE::EnableVSyncEventSignaling(this[1]);
    Timeout.QuadPart = -5000000LL;
    return KeWaitForSingleObject(this + 2, UserRequest, 0, 0, &Timeout);
  }
  return result;
}
