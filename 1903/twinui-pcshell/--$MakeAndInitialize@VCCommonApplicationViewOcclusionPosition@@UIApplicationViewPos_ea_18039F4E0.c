/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x18039F4E0
 * Callers:
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1803A58A8 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 * Callees:
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180053C94 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x180053CC0 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x180053CF4 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800553B8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180066B20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
        _QWORD *a1,
        _OWORD *a2,
        __int128 *a3,
        int *a4)
{
  CCommonApplicationViewOcclusionPosition *v8; // rax
  unsigned int v9; // edi
  CCommonApplicationViewOcclusionPosition *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  _OWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF

  *a1 = 0LL;
  v8 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v8);
    v21 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v21, (__int64)v10);
    v11 = *a4;
    v12 = v21;
    *(_OWORD *)(v21 + 16) = *a2;
    *(_DWORD *)(v12 + 52) = v11;
    *(_DWORD *)(v12 + 48) = 4;
    v13 = *a3;
    *(_DWORD *)(v12 + 56) = 0;
    *(_OWORD *)(v12 + 32) = v13;
    memset_0(v19, 0, 0x28uLL);
    v14 = v19[1];
    LODWORD(v21) = -1;
    *(_OWORD *)(v12 + 60) = v19[0];
    HIDWORD(v21) = -1;
    v15 = v21;
    *(_QWORD *)&v13 = v20;
    *(_OWORD *)(v12 + 76) = v14;
    LODWORD(v21) = -1;
    *(_QWORD *)(v12 + 92) = v13;
    v16 = *(_OWORD *)(v12 + 32);
    *(_DWORD *)(v12 + 60) = 0;
    *(_QWORD *)(v12 + 76) = v15;
    HIDWORD(v21) = -1;
    v17 = v21;
    *(_OWORD *)(v12 + 84) = v16;
    *(_QWORD *)(v12 + 68) = v17;
    *(_DWORD *)(v12 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(4);
    v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>>(
           v12,
           &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
