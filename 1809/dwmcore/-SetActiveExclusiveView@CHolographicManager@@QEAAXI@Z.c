/*
 * XREFs of ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x18020BC10
 * Callers:
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x18020B47C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW@@@Z @ 0x18020C5C0 (-ProcessSetActiveExclusiveView@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HO.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::SetActiveExclusiveView(CHolographicManager *this, unsigned int a2)
{
  *((_DWORD *)this + 18) = a2;
  if ( *((_QWORD *)this + 5) )
  {
    if ( *((_BYTE *)this + 216) )
      CHolographicInteropTaskQueue::PostMessageW(
        *((CHolographicInteropTaskQueue **)this + 5),
        0x10u,
        0LL,
        (void *)a2,
        0LL,
        0LL,
        0LL);
  }
}
