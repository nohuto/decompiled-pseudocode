/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180012110
 * Callers:
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180011F80 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x180012070 (CApplicationFrameService--_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180012170 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006A798 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterface.c)
 */

__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        __int64 a2,
        struct IApplicationFrameProxy **a3)
{
  int FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = 0LL;
  FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
                                                            (_QWORD *)this - 5,
                                                            a2,
                                                            &v6);
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f >= 0 )
    FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>>(
                                                              v6,
                                                              &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                                                              a3);
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v6);
  return (unsigned int)FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f;
}
