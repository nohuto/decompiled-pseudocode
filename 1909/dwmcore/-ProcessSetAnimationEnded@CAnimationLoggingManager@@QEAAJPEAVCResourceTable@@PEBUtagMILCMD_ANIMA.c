/*
 * XREFs of ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x1801BF56C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801BE460 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetAnimationEnded(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v4; // r8
  unsigned int v5; // r9d
  WCHAR *v6; // r11

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  CAnimationLoggingManager::LogAnimationEnded(
    v6,
    *(_QWORD *)(*((_QWORD *)v6 + 2) + 384LL),
    ResourceWithoutType,
    v5,
    *(_DWORD *)(v4 + 12),
    *(_DWORD *)(v4 + 16));
  return 0LL;
}
