/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18004B4B0
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18004B964 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18004B964.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18004A894 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x18004B47C (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x18004B904 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x18004B930 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068C30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
        _QWORD *a1,
        unsigned int *a2,
        __int128 *a3)
{
  CCommonApplicationViewOcclusionPosition *v6; // rax
  CCommonApplicationViewOcclusionPosition *v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  unsigned int v15; // edi
  _OWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v6);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v19, v7);
    v8 = *a2;
    v9 = v19;
    *(_QWORD *)(v19 + 48) = v8;
    *(_OWORD *)(v9 + 16) = 0uLL;
    v10 = *a3;
    *(_DWORD *)(v9 + 56) = 0;
    *(_OWORD *)(v9 + 32) = v10;
    memset_0(v17, 0, 0x28uLL);
    v11 = v17[1];
    LODWORD(v19) = -1;
    *(_OWORD *)(v9 + 60) = v17[0];
    HIDWORD(v19) = -1;
    v12 = v19;
    *(_QWORD *)&v10 = v18;
    *(_OWORD *)(v9 + 76) = v11;
    LODWORD(v19) = -1;
    *(_QWORD *)(v9 + 92) = v10;
    v13 = *(_OWORD *)(v9 + 32);
    *(_DWORD *)(v9 + 60) = 0;
    HIDWORD(v19) = -1;
    *(_QWORD *)(v9 + 76) = v12;
    v14 = v19;
    *(_OWORD *)(v9 + 84) = v13;
    *(_QWORD *)(v9 + 68) = v14;
    *(_DWORD *)(v9 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(v8);
    v15 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>>(
            v9,
            &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
            a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v15;
}
