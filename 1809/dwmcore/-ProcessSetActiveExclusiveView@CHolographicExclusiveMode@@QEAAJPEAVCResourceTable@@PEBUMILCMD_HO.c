/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW@@@Z @ 0x18020C5C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x18020BC10 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 */

__int64 __fastcall CHolographicExclusiveMode::ProcessSetActiveExclusiveView(
        CHolographicExclusiveMode *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW *a3)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 7);
  if ( v3 )
    CHolographicManager::SetActiveExclusiveView(v3, *((_DWORD *)a3 + 2));
  return 0LL;
}
