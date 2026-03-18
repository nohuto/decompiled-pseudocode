/*
 * XREFs of ?ProcessSetProjectedShadowPolicy@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWRECEIVER_SETPROJECTEDSHADOWPOLICY@@@Z @ 0x1801AF4FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetProjectedShadowPolicy(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWRECEIVER_SETPROJECTEDSHADOWPOLICY *a3)
{
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
