/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1802453A4
 * Callers:
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025550C (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18004A894 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x18004AC64 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x18004B47C (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x18004B930 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068C30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagWINDOWPLACEMENT &>(
        _QWORD *a1,
        __int128 *a2)
{
  CCommonApplicationViewOcclusionPosition *v4; // rax
  int v5; // edi
  CCommonApplicationViewOcclusionPosition *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  CCommonApplicationViewOcclusionPosition *v9; // rbx
  volatile int *v10; // rdx
  struct tagWINDOWPLACEMENT v12; // [rsp+20h] [rbp-38h] BYREF
  CCommonApplicationViewOcclusionPosition *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v4);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((__int64 *)&v13, (__int64)v6);
    v7 = *a2;
    v8 = a2[1];
    v12.rcNormalPosition.bottom = *((_DWORD *)a2 + 10);
    *(_OWORD *)&v12.length = v7;
    *(_QWORD *)&v7 = *((_QWORD *)a2 + 4);
    v9 = v13;
    *(_OWORD *)&v12.ptMinPosition.y = v8;
    *(_QWORD *)&v12.rcNormalPosition.top = v7;
    v5 = CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(v13, &v12);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>>(
             (__int64)v9,
             &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             a1);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v9,
        v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
