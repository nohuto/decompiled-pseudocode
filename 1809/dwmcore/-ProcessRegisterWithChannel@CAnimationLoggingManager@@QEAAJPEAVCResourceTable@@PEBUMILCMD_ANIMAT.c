/*
 * XREFs of ?ProcessRegisterWithChannel@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL@@@Z @ 0x18007618C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessRegisterWithChannel(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *a3)
{
  *(_QWORD *)(*((_QWORD *)this + 6) + 56LL) = this;
  (*(void (__fastcall **)(CAnimationLoggingManager *, struct CResourceTable *, const struct MILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *))(*(_QWORD *)this + 8LL))(
    this,
    a2,
    a3);
  return 0LL;
}
