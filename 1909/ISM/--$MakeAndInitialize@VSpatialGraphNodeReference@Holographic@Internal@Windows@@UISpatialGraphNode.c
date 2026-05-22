/*
 * XREFs of ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x18014B074
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153E50 (-CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAA.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153EB0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ @ 0x180151190 (--0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x18015D128 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialGraphNodeReference,Windows::Internal::Holographic::ISpatialGraphNodeReference,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper> &,Windows::Internal::Holographic::DynamicNodeInfo const &,enum SPATIAL_TRACKING_STATE &,Windows::Internal::Holographic::SpatialGraphSettings &>(
        _QWORD *a1,
        int a2,
        int a3,
        _DWORD *a4,
        char *a5)
{
  Windows::Internal::Holographic::SpatialGraphNodeReference *v9; // rax
  int v10; // edi
  __int64 v11; // rbx

  *a1 = 0LL;
  v9 = (Windows::Internal::Holographic::SpatialGraphNodeReference *)operator new(
                                                                      0x80uLL,
                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = Windows::Internal::Holographic::SpatialGraphNodeReference::SpatialGraphNodeReference(v9);
    v10 = Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(v11, a2, a3, *a4, *a5);
    if ( v10 >= 0 )
      v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v11)(
              v11,
              &GUID_6f1efb69_538f_4335_a3c1_41a4d9e637cf,
              a1);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
