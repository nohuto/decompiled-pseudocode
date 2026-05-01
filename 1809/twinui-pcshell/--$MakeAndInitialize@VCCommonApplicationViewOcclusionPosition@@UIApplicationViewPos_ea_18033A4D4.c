/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x18033A4D4
 * Callers:
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x180340640 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180056D00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180056ED0 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1801D4660 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x1801D8778 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
        void **a1,
        _OWORD *a2,
        __int128 *a3,
        int *a4)
{
  CCommonApplicationViewOcclusionPosition *v8; // rax
  int CanCastTo; // edi
  volatile int *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  _DWORD *v18; // rcx
  struct _GUID *v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // r9
  _OWORD v24[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+70h] [rbp+20h] BYREF

  *a1 = 0LL;
  v8 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v8);
    v26 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v26, v10);
    v11 = *a4;
    v12 = v26;
    *(_OWORD *)(v26 + 16) = *a2;
    *(_DWORD *)(v12 + 52) = v11;
    *(_DWORD *)(v12 + 48) = 4;
    v13 = *a3;
    *(_DWORD *)(v12 + 56) = 0;
    *(_OWORD *)(v12 + 32) = v13;
    memset_0(v24, 0, 0x28uLL);
    v14 = v24[1];
    LODWORD(v26) = -1;
    *(_OWORD *)(v12 + 60) = v24[0];
    HIDWORD(v26) = -1;
    v15 = v26;
    *(_QWORD *)&v13 = v25;
    *(_OWORD *)(v12 + 76) = v14;
    LODWORD(v26) = -1;
    *(_QWORD *)(v12 + 92) = v13;
    v16 = *(_OWORD *)(v12 + 32);
    *(_DWORD *)(v12 + 60) = 0;
    *(_QWORD *)(v12 + 76) = v15;
    HIDWORD(v26) = -1;
    v17 = v26;
    *(_OWORD *)(v12 + 84) = v16;
    *(_QWORD *)(v12 + 68) = v17;
    *(_DWORD *)(v12 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(4);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = (void *)v12;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v18, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1)
        || InlineIsEqualGUID(v20, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2)
        || InlineIsEqualGUID(v21, v22) )
      {
        *a1 = (void *)v12;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 104), v19, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
      v12,
      (volatile int *)v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
