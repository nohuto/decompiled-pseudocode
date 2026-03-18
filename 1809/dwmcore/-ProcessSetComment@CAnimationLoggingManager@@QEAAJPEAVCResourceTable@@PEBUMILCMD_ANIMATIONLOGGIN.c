/*
 * XREFs of ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x1800C363C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18005D6A4 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x1800C3540 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ??$SetCommentHelper@$$CBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x1800C36C8 (--$SetCommentHelper@$$CBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV-$basic_string@GU-$.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v8; // ebp
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v10; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rsi

  v8 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  v10 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, ResourceWithoutType);
    v8 = SetCommentHelper<MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT const>((char *)DebugInfoForResource + 8, a3, a4, a5);
    if ( !*((_QWORD *)DebugInfoForResource + 3) && !*((_DWORD *)DebugInfoForResource + 10) )
      CAnimationLoggingManager::RemoveResourceDebugInfo(this, v10);
  }
  return v8;
}
