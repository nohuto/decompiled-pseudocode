/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180022E24
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020D70 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManag.c)
 *     ??$CreateActivationFactory@VContentDeliveryManagerConfigurationStatics@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021E80 (--$CreateActivationFactory@VContentDeliveryManagerConfigurationStatics@ContentManagement@@@Detai.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  if ( *a2 == 53
    && a2[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  a1 += 8LL;
  if ( *a2 == -1796592748
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    goto LABEL_9;
  }
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    result = 0LL;
  }
  else
  {
    a1 += 32LL;
    if ( *a2 == -1289230708
      && a2[1] == *(_DWORD *)&GUID_b327e68c_b800_42f5_b32c_2ceb8ba5921d.Data2
      && a2[2] == *(_DWORD *)GUID_b327e68c_b800_42f5_b32c_2ceb8ba5921d.Data4
      && a2[3] == *(_DWORD *)&GUID_b327e68c_b800_42f5_b32c_2ceb8ba5921d.Data4[4] )
    {
LABEL_9:
      *a3 = a1;
      return 0LL;
    }
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
    return 2147500034LL;
  return result;
}
