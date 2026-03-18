/*
 * XREFs of ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018BC40
 * Callers:
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017DA7C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C017DE10 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C017EE94 (-ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017F010 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0185188 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C018586C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C0187B58 (-IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ivrIVSend(
        void *a1,
        unsigned int a2,
        struct _ETHREAD *a3,
        struct _ETHREAD *a4,
        void *a5,
        unsigned int a6,
        const struct CONTAINER_ID *a7)
{
  if ( gpfnIVSend )
    return gpfnIVSend(a1, a2, a3, a4, a5, a6, (int (*)(struct _IVSRContext *))ivDefaultSendCallbackHandler, a7);
  else
    return -1073741637;
}
