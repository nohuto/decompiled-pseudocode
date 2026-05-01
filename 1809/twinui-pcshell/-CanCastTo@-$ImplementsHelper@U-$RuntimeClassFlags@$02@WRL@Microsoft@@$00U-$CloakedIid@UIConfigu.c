/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803BE808
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803BE878 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@VCWrlLigh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1612534243
    && a2[1] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2
    && a2[2] == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
    && a2[3] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 142386596
    && a2[1] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2
    && a2[2] == *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
    && a2[3] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
