/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003A5F4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080C90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180080C90.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  _DWORD *v9; // rcx
  __int64 v10; // r10
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  int v18; // ebx
  __int64 v20; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
    {
      *v7 = v8;
      v18 = 0;
      goto LABEL_14;
    }
    if ( InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v9, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352)
      || InlineIsEqualGUID(v11, &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee)
      || InlineIsEqualGUID(v12, &GUID_268b7798_2d57_434c_b84f_eabec0ffee84)
      || InlineIsEqualGUID(v13, &GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5)
      || InlineIsEqualGUID(v14, &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84)
      || InlineIsEqualGUID(v15, &GUID_2c464444_1696_4977_b07c_617cf0de9c17)
      || InlineIsEqualGUID(v16, &GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3) )
    {
      *v7 = v10;
    }
    else
    {
      if ( !InlineIsEqualGUID(v17, &GUID_9004b409_618f_4892_959c_26fcf2cbafa3) )
      {
        v18 = -2147467262;
LABEL_13:
        if ( v18 < 0 )
          return (unsigned int)v18;
LABEL_14:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
        return (unsigned int)v18;
      }
      *v7 = v20 + 8;
    }
    v18 = 0;
    goto LABEL_13;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
