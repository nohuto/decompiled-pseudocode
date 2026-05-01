/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationViewChangeListener@@UIAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801AD354
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801ACF74 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITa_ea_1801ACF74.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  void **v6; // r8
  unsigned int CanCastTo; // r9d
  __int64 v8; // r10
  const struct _GUID *v9; // r11

  if ( InlineIsEqualGUID(a2, &GUID_727f9e97_76ee_497b_a942_b6371328485c) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_ab07595d_1829_43fd_a9fb_83039fa32720) )
    {
      *v6 = (void *)v8;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v9, v6);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
