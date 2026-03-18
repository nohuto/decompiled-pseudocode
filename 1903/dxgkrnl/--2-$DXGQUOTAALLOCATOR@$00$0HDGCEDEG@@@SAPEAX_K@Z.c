/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C0061E60
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0061FA8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C00634F8 (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 * Callees:
 *     <none>
 */

PVOID DXGQUOTAALLOCATOR<1,1935819590>::operator new()
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x28uLL, 0x73624346u);
}
