/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0PEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017AD00
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0GPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C017A7A0 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0GPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a8)
{
  __int64 v12; // rcx
  _BYTE v13[352]; // [rsp+50h] [rbp-168h] BYREF

  memset(v13, 0, sizeof(v13));
  CKeyboardProcessor::CreateKeyboardInputMessage(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    0,
    a8,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v13);
  InputExtensibilityCallout::CoreMsgSendMessage(v12, 9);
}
