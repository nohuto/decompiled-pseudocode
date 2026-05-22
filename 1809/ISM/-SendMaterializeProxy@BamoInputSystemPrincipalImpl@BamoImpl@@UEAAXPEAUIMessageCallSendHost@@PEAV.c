/*
 * XREFs of ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C190
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDragNDropContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C3D0 (-UpdateDragNDropContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVB.c)
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C500 (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateMagnifierServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C630 (-UpdateMagnifierServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C760 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C890 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C9C0 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001CAF0 (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 *     ?UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001CC20 (-UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 *     ?UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001CD50 (-UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  v10 = *((_DWORD *)this + 6);
  v12 = *(unsigned int *)(v3 + 36);
  v13 = *(unsigned int *)(v3 + 40);
  v7 = CoreUICallSend(
         a2,
         &v12,
         2LL,
         37LL,
         19,
         &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_W5F7ibfRa_dGUOpJCFjzCM2nBDk_BamoGroup$86a4239f,
         v10);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBA16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateDragNDropContextualProcessorRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateMagnifierServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCache(this, a3);
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBA34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v11 = *((_DWORD *)this + 6);
  v12 = *(unsigned int *)(v3 + 36);
  v13 = *(unsigned int *)(v3 + 40);
  v9 = CoreUICallSend(
         a2,
         &v12,
         2LL,
         37LL,
         26,
         &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_W5F7ibfRa_dGUOpJCFjzCM2nBDk_BamoGroup$86a4239f,
         v11);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBA3F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18001C31ELL);
  }
}
