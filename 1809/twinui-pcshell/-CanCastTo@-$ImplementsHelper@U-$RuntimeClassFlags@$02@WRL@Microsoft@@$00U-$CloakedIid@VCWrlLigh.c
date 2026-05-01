/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803BE878
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803BE6E8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax

  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
LABEL_6:
    v3 = 0;
    goto LABEL_13;
  }
  if ( *a2 == 24
    && a2[1] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1 + 40;
    goto LABEL_6;
  }
  v3 = -2147467262;
LABEL_13:
  if ( v3 == -2147467262 )
    v3 = -2147467262;
  if ( v3 < 0 )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::CanCastTo(
             a1 + 64,
             a2,
             a3);
  else
    return 0LL;
}
