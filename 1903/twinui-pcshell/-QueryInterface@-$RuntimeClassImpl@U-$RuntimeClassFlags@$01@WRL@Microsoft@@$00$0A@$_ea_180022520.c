/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022520
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFF30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800BFF30.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFF40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800BFF40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFF50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800BFF50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFF60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800BFF60.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFF70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800BFF70.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025AC0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  void **v8; // r8
  _DWORD *v9; // r9
  char *v10; // r10
  __int64 v11; // rcx
  void *v12; // r11
  __int64 v13; // r11
  int CanCastTo; // ebx
  void *v15; // r10
  const struct _GUID *v17; // r9
  __int64 v18; // r10

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a2) )
  {
    *v4 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352, v4, v5) )
  {
    *v8 = v10;
LABEL_21:
    CanCastTo = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4, v8, v9) )
  {
    *v8 = v12;
    goto LABEL_21;
  }
  if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, v8, v9) )
  {
    CanCastTo = 0;
    *v8 = (void *)(v13 + 8);
  }
  else
  {
    CanCastTo = -2147467262;
  }
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_8:
  if ( CanCastTo != -2147467262 )
    goto LABEL_17;
  v15 = v10 + 104;
  if ( *v9 != 720388634
    || v9[1] != *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data2
    || v9[2] != *(_DWORD *)GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4
    || v9[3] != *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4[4] )
  {
    if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07, v8, v9) )
    {
      *v8 = (void *)v18;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v18 + 8), v17, v8);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
LABEL_17:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_14;
  }
  *v8 = v15;
  CanCastTo = 0;
LABEL_14:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)CanCastTo;
}
