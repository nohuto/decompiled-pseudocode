/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8
 * Callers:
 *     _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001520 (_dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800329D4 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??$_Buynode@AEBKAEAG@?$_List_buy@U?$pair@$$CBKG@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKG@std@@PEAX@1@PEAU21@0AEBKAEAG@Z @ 0x180038254 (--$_Buynode@AEBKAEAG@-$_List_buy@U-$pair@$$CBKG@std@@V-$allocator@U-$pair@$$CBKG@std@@@2@@std@@Q.c)
 *     ??$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_List_buy@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@1@PEAU21@0AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180038354 (--$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@-$_List_buy@U-$pair@$$CBGUActiveKeyPr.c)
 *     ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x180039920 (--0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x18003A8C0 (--$_Buynode@AEBQEAUIHeatSystemContextClient@@@-$_List_buy@PEAUIHeatSystemContextClient@@V-$alloc.c)
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180054B20 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$_Buynode@AEBKAEAK@?$_List_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@1@PEAU21@0AEBKAEAK@Z @ 0x180056504 (--$_Buynode@AEBKAEAK@-$_List_buy@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@Q.c)
 *     ??0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x180065010 (--0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??$_Buynode@AEBW4_Button@@@?$_List_buy@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAPEAU?$_List_node@W4_Button@@PEAX@1@PEAU21@0AEBW4_Button@@@Z @ 0x180066BF8 (--$_Buynode@AEBW4_Button@@@-$_List_buy@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAPEAU-$.c)
 *     ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800936CC (--$-0AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientPro.c)
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x18009DAD0 (--0InputConfigContextProvider@@IEAA@XZ.c)
 *     ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EB870 (--0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180103F00 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x180104394 (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x18uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
