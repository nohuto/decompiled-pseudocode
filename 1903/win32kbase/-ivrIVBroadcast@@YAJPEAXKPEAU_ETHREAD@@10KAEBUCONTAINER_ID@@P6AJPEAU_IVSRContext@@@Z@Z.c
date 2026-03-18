/*
 * XREFs of ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DD60
 * Callers:
 *     ?ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z @ 0x1C0180F00 (-ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C0187A5C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C0189D48 (-IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ivrIVBroadcast(
        void *a1,
        unsigned int a2,
        struct _ETHREAD *a3,
        struct _ETHREAD *a4,
        void *a5,
        unsigned int a6,
        const struct CONTAINER_ID *a7)
{
  if ( gpfnIVBroadcast )
    return gpfnIVBroadcast(a1, a2, a3, a4, a5, a6, (int (*)(struct _IVSRContext *))ivDefaultSendCallbackHandler, a7);
  else
    return -1073741637;
}
