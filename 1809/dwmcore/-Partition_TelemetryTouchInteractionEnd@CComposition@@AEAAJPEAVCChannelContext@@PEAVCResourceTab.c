/*
 * XREFs of ?Partition_TelemetryTouchInteractionEnd@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONEND@@@Z @ 0x1800208C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionEnd(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONEND *a4)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, struct CResourceTable *))(**((_QWORD **)this + 67) + 24LL))(
    *((_QWORD *)this + 67),
    *(_QWORD *)((char *)a4 + 4),
    a3);
  return 0LL;
}
