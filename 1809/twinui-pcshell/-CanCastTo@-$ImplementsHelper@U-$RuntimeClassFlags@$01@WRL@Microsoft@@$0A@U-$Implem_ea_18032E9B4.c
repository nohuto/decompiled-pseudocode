/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18032E9B4
 * Callers:
 *     ??$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18032E340 (--$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E6028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  unsigned int CanCastTo; // r10d
  _DWORD *v7; // r11
  BOOL IsEqualGUID; // eax
  void **v9; // r8
  __int64 v10; // r9
  const struct _GUID *v11; // r11

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    if ( *v4 == 720388634
      && v4[1] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data2
      && v4[2] == *(_DWORD *)GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4
      && v4[3] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4[4] )
    {
      *v5 = a1 + 104;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v7, &GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07);
      CanCastTo = 0;
      if ( IsEqualGUID )
      {
        *v9 = (void *)v10;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), v11, v9);
        if ( CanCastTo == -2147467262 )
          return (unsigned int)-2147467262;
      }
    }
  }
  return CanCastTo;
}
