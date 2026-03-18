/*
 * XREFs of ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F05C8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0137790 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C01563EC (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
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
