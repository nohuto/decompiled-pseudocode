/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180337A2C
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180337920 (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180053918 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotif.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E6028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r10

  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
             a1,
             a2,
             a3);
  if ( (_DWORD)result == -2147467262 )
  {
    v7 = v6 + 104;
    if ( *v4 == 2018553963
      && v4[1] == *(_DWORD *)&GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa.Data2
      && v4[2] == *(_DWORD *)GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa.Data4
      && v4[3] == *(_DWORD *)&GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa.Data4[4] )
    {
      goto LABEL_10;
    }
    if ( *v4 == 684124641
      && v4[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
      && v4[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
      && v4[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
    {
      goto LABEL_10;
    }
    v7 = v6 + 112;
    if ( *v4 == -2146612166
      && v4[1] == *(_DWORD *)&GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3.Data2
      && v4[2] == *(_DWORD *)GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3.Data4
      && v4[3] == *(_DWORD *)&GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3.Data4[4] )
    {
      goto LABEL_10;
    }
    if ( *v4 == 684124641
      && v4[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
      && v4[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
      && v4[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
    {
      goto LABEL_10;
    }
    v8 = v6 + 120;
    if ( *v4 == 849159280
      && v4[1] == *(_DWORD *)&GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data2
      && v4[2] == *(_DWORD *)GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data4
      && v4[3] == *(_DWORD *)&GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data4[4]
      || *v4 == 684124641
      && v4[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
      && v4[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
      && v4[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
    {
      *v5 = v8;
      return 0LL;
    }
    if ( (v7 += 16LL, *v4 == -562095821)
      && v4[1] == *(_DWORD *)&GUID_de7f1933_0d90_43a7_a407_4a7ea255714f.Data2
      && v4[2] == *(_DWORD *)GUID_de7f1933_0d90_43a7_a407_4a7ea255714f.Data4
      && v4[3] == *(_DWORD *)&GUID_de7f1933_0d90_43a7_a407_4a7ea255714f.Data4[4]
      || (v7 += 8LL, *v4 == -301920745)
      && v4[1] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
      && v4[2] == *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4
      && v4[3] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4] )
    {
LABEL_10:
      *v5 = v7;
      return 0LL;
    }
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::CanCastTo(
             v7 + 8,
             v4);
  }
  return result;
}
