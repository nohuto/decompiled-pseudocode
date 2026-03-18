/*
 * XREFs of ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x18006310C
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAV1@@Z @ 0x180061210 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x180088E34 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::CCrossThreadComposition(
        CCrossThreadComposition *this,
        struct CKernelTransport *a2,
        struct ICompositorScheduler *a3,
        struct CConnection *a4,
        struct CDebugFrameCounter *a5)
{
  CComposition::CComposition(this, a2, a3, a4, a5);
  *((_DWORD *)this + 316) = 900;
  *(_QWORD *)this = &CCrossThreadComposition::`vftable';
  *((_DWORD *)this + 322) = 37120;
  *(_QWORD *)((char *)this + 1292) = 37120LL;
  *((_DWORD *)this + 325) = 0;
  *((_BYTE *)this + 1304) = 0;
  *((_QWORD *)this + 160) = (*(__int64 (__fastcall **)(struct ICompositorScheduler *))(*(_QWORD *)a3 + 80LL))(a3);
  return this;
}
