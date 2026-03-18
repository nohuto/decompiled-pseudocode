/*
 * XREFs of ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01F08D8
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C027F630 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe(DISPLAY_SOURCE *this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 520LL) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 9542LL;
    WdLogEvent5_WdAssertion(v3);
  }
  *((_BYTE *)this + 3696) = 0;
}
