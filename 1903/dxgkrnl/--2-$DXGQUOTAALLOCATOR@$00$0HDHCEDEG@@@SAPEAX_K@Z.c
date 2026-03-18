/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C0061E8C
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0061FA8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C00638E4 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID DXGQUOTAALLOCATOR<1,1936868166>::operator new()
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x40uLL, 0x73724346u);
}
