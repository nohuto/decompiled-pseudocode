/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18025638C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180258670 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180258670.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  Microsoft::WRL::FtmBase *v4; // r10
  const struct _GUID *v5; // r11
  int CanCastTo; // ebx
  _QWORD *v7; // r8
  _DWORD *v8; // r11
  _DWORD *v9; // rcx
  __int64 v10; // r10
  int v11; // r9d
  __int64 v12; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v4, v5, v3);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v8, &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35) )
      {
        *v7 = v10;
        CanCastTo = 0;
        goto LABEL_9;
      }
      if ( InlineIsEqualGUID(v9, &GUID_c6144554_2844_43cf_b0ff_9b3c8ad9ba14) )
      {
        CanCastTo = 0;
        *v7 = v12 + 8;
      }
      else
      {
        CanCastTo = v11;
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_9:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
  *v3 = v4;
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v4 + 8LL))(v4);
  return 0LL;
}
