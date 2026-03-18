/*
 * XREFs of HasHidTable @ 0x1C001E620
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C001D320 (EditionHandleAndPostKeyEvent.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C001DB48 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C001DC7C (HasRawInputForegroundTarget.c)
 *     UpdateRawMouseMode @ 0x1C001E588 (UpdateRawMouseMode.c)
 *     EditionKeyEventLLHook @ 0x1C00551E0 (EditionKeyEventLLHook.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00E72BC (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01CC110 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C01CCFC0 (EditionRawInputRequestedForKeyboard.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D8170 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D8218 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasHidTable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 416);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 824) )
        return 1LL;
    }
  }
  return result;
}
