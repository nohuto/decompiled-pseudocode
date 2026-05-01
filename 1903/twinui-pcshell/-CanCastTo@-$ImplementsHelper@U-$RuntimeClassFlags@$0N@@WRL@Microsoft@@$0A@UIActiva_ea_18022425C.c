/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022425C
 * Callers:
 *     ??$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180223E00 (--$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBU.c)
 *     ?QueryInterface@BrokeredViewTabConverterStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802244A0 (-QueryInterface@BrokeredViewTabConverterStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025AC0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r11
  __int64 v6; // rbx
  unsigned int CanCastTo; // eax
  _DWORD *v8; // r11
  unsigned int v9; // r9d
  _QWORD *v10; // r8
  unsigned int v11; // r10d

  if ( InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v2 = (void *)v3;
    return 0LL;
  }
  v6 = v3 + 8;
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
  v9 = -2147467262;
  if ( CanCastTo != -2147467262 )
    goto LABEL_7;
  if ( !InlineIsEqualGUID(v8, &GUID_fb7d2c9e_f26c_49db_8031_0da0f4ed5643) )
  {
    CanCastTo = v9;
LABEL_7:
    v11 = CanCastTo;
    if ( CanCastTo == v9 )
      return v9;
    return v11;
  }
  *v10 = v6 + 32;
  return v11;
}
