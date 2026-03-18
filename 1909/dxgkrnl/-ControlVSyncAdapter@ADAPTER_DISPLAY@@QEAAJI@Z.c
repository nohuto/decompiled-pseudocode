/*
 * XREFs of ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F0C38
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0105B60 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C013B4E0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C015A2AC (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ControlVSyncAdapter(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 46);
  if ( !v2 )
    return 3221225485LL;
  BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v2 + 8) + 2760LL * a2));
  return 0LL;
}
