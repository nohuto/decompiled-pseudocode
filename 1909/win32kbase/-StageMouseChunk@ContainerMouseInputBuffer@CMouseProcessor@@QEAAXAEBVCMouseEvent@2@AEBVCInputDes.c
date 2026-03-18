/*
 * XREFs of ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C0191104
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  (**(void (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *, _QWORD))a2)(a2, *((_QWORD *)this + 113));
  *(_DWORD *)((char *)this + 930) = *((_DWORD *)a3 + 29);
  *((_BYTE *)this + 912) = 1;
  *((_BYTE *)this + 928) = 1;
}
