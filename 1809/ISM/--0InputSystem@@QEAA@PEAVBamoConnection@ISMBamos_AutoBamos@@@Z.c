/*
 * XREFs of ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18001741C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SetDragNDropContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragNDropContextualProcessorPrincipal@@@Z @ 0x18001B8E0 (-SetDragNDropContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragNDropContextualProce.c)
 *     ?SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@Z @ 0x18001B990 (-SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@.c)
 *     ?SetMagnifierServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoMagnifierServerPrincipal@@@Z @ 0x18001BA50 (-SetMagnifierServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoMagnifierServerPrincipal@@@Z.c)
 *     ?SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x18001BB10 (-SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z.c)
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x18001BBD0 (-SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z.c)
 *     ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x18001BC90 (-SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z.c)
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x18001BD50 (-SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManag.c)
 *     ?SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x18001BED0 (-SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipa.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180029EF4 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0ControllerNavigationManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800300B4 (--0ControllerNavigationManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180091960 (--0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800C9D70 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
InputSystem *__fastcall InputSystem::InputSystem(InputSystem *this, struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v4; // r14
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  struct EdgyConnection *v8; // rax
  const char *v9; // r9
  _QWORD *v10; // rdi
  InputDeliveryServer *v11; // rax
  struct BamoInputDeliveryServerPrincipal *v12; // rax
  _QWORD *v13; // rdi
  ControllerNavigationManager *v14; // rax
  struct BamoControllerNavigationManagerPrincipal *v15; // rax
  _QWORD *v16; // rdi
  struct BamoSystemCursorControllerPrincipal *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  SystemCursorController *v20; // [rsp+80h] [rbp+18h]

  *(_QWORD *)this = &InputSystem::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (struct Microsoft::BamoImpl::ConnectionIndirector **)((char *)this + 8);
  *((_QWORD *)this + 1) = &BamoInputSystemPrincipal::`vftable'{for `IInputSystemPrincipal'};
  v5 = (_QWORD *)((char *)this + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputSystem *)((char *)this + 16), a2);
  *v5 = &BamoImpl::BamoInputSystemPrincipalImpl::`vftable';
  v5[5] = 0LL;
  v5[6] = 0LL;
  v5[7] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  v5[10] = 0LL;
  v5[11] = 0LL;
  v5[12] = 0LL;
  v5[13] = 0LL;
  *(_QWORD *)this = &InputSystem::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *v4 = (struct Microsoft::BamoImpl::ConnectionIndirector *)&BamoInputSystemPrincipal::`vftable'{for `IInputSystemPrincipal'};
  v6 = operator new(0x40uLL);
  *v6 = &BamoDragNDropContextualProcessorPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDragNDropContextualProcessorPrincipal::`vftable'{for `IDragNDropContextualProcessorPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 2), a2);
  v6[2] = &BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::`vftable';
  *v6 = &DragManagerHost::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDragNDropContextualProcessorPrincipal::`vftable'{for `IDragNDropContextualProcessorPrincipal'};
  v6[7] = 0LL;
  BamoInputSystemPrincipal::SetDragNDropContextualProcessor(v4, (struct BamoDragNDropContextualProcessorPrincipal *)v6);
  v7 = operator new(0x40uLL);
  *v7 = &BamoEdgyControllerServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v7[1] = &EdgyControllerServer::`vftable'{for `IEdgyControllerServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v7 + 2), a2);
  v7[2] = &BamoImpl::BamoEdgyControllerServerPrincipalImpl::`vftable';
  *v7 = &EdgyControllerServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v7[1] = &EdgyControllerServer::`vftable'{for `IEdgyControllerServerPrincipal'};
  v8 = EdgyConnection::Get();
  v7[7] = v8;
  if ( !v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerserver.cpp",
      v9);
    JUMPOUT(0x18001D30FLL);
  }
  BamoInputSystemPrincipal::SetEdgyControllerServer(v4, (struct BamoEdgyControllerServerPrincipal *)v7);
  v10 = operator new(0x40uLL);
  *v10 = &BamoHeatGripServicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v10[1] = &HeatGripServiceHost::`vftable'{for `IHeatGripServicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v10 + 2), a2);
  v10[2] = &BamoImpl::BamoHeatGripServicePrincipalImpl::`vftable';
  *v10 = &HeatGripServiceHost::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v10[1] = &HeatGripServiceHost::`vftable'{for `IHeatGripServicePrincipal'};
  v10[7] = 0LL;
  BamoInputSystemPrincipal::SetHeatGripService(v4, (struct BamoHeatGripServicePrincipal *)v10);
  v11 = (InputDeliveryServer *)operator new(0xF0uLL);
  v12 = InputDeliveryServer::InputDeliveryServer(v11, a2);
  BamoInputSystemPrincipal::SetInputDeliveryServer(v4, v12);
  v13 = operator new(0x68uLL);
  *v13 = &BamoInputSiteManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v13[1] = &BamoInputSiteManagerPrincipal::`vftable'{for `IInputSiteManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v13 + 2), a2);
  v13[2] = &BamoImpl::BamoInputSiteManagerPrincipalImpl::`vftable';
  *v13 = &InputSiteManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v13[1] = &BamoInputSiteManagerPrincipal::`vftable'{for `IInputSiteManagerPrincipal'};
  v13[7] = 0LL;
  v13[8] = 0LL;
  v13[9] = 0LL;
  v13[10] = 0LL;
  v13[11] = 0LL;
  v13[12] = 0LL;
  BamoInputSystemPrincipal::SetInputSiteManager(v4, (struct BamoInputSiteManagerPrincipal *)v13);
  v14 = (ControllerNavigationManager *)operator new(0xE8uLL);
  v15 = ControllerNavigationManager::ControllerNavigationManager(v14, a2);
  BamoInputSystemPrincipal::SetControllerNavigationManager(v4, v15);
  v16 = operator new(0x40uLL);
  *v16 = &BamoMagnifierServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v16[1] = &BamoMagnifierServerPrincipal::`vftable'{for `IMagnifierServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v16 + 2), a2);
  v16[2] = &BamoImpl::BamoMagnifierServerPrincipalImpl::`vftable';
  *v16 = &MagnifierServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v16[1] = &BamoMagnifierServerPrincipal::`vftable'{for `IMagnifierServerPrincipal'};
  v16[7] = 0LL;
  BamoInputSystemPrincipal::SetMagnifierServer(v4, (struct BamoMagnifierServerPrincipal *)v16);
  v20 = (SystemCursorController *)operator new(0x80uLL);
  v17 = SystemCursorController::SystemCursorController(v20, a2);
  BamoInputSystemPrincipal::SetSystemCursorController(v4, v17);
  return this;
}
