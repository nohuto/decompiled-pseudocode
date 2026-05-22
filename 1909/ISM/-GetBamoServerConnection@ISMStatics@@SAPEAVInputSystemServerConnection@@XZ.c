/*
 * XREFs of ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B064
 * Callers:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DE7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     _lambda_d6825bbef0718a568adec6fcdf443266_::operator() @ 0x18003536C (_lambda_d6825bbef0718a568adec6fcdf443266_--operator().c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057BE8 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x18006BEE0 (-Initialize@DragNDropProcessor@@AEAAJXZ.c)
 *     ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x18007B1A4 (-PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A4E30 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800A4FD0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800A50D0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1800FFFF8 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ @ 0x180105718 (-RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ.c)
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x180127BD4 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180021D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180022044 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct InputSystemServerConnection *ISMStatics::GetBamoServerConnection(void)
{
  struct InputSystemServerConnection *result; // rax
  int v1; // eax
  char *v2; // rax
  Microsoft::Bamo::BaseBamoConnection *v3; // rdx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  result = ISMStatics::s_inputSystemBamoConnection;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v7);
    v1 = CoreUICreate(&v7);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v1,
        -2);
      __debugbreak();
    }
    v2 = (char *)InputSystemServerConnection::Create((unsigned int)&v8);
    v3 = 0LL;
    if ( &v9 != v2 )
    {
      v3 = *(Microsoft::Bamo::BaseBamoConnection **)v2;
      *(_QWORD *)v2 = 0LL;
    }
    v4 = ISMStatics::s_inputSystemBamoConnection;
    ISMStatics::s_inputSystemBamoConnection = v3;
    if ( v4 )
      Microsoft::Bamo::BaseBamoConnection::Release(v4);
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v5);
    }
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v7);
    return ISMStatics::s_inputSystemBamoConnection;
  }
  return result;
}
