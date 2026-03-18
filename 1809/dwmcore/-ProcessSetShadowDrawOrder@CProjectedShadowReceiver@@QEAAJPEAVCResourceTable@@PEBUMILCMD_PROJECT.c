/*
 * XREFs of ?ProcessSetShadowDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWRECEIVER_SETSHADOWDRAWORDER@@@Z @ 0x1801ADD74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetShadowDrawOrder(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWRECEIVER_SETSHADOWDRAWORDER *a3)
{
  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
