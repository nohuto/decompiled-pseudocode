/*
 * XREFs of ?OnMagnifierClientUnregistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x180105890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?clear@?$list@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x1800C5940 (-clear@-$list@U-$pair@$$CB_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MagnifierProcessor::OnMagnifierClientUnregistered(
        MagnifierProcessor *this,
        struct BamoMagnifierClientProxy *a2)
{
  __int64 *v3; // rcx

  v3 = (__int64 *)((char *)this + 16);
  if ( (struct BamoMagnifierClientProxy *)*v3 == a2 )
  {
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(v3);
    std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::clear((__int64)this + 32);
    std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
      (_QWORD *)this + 3,
      8LL);
  }
}
