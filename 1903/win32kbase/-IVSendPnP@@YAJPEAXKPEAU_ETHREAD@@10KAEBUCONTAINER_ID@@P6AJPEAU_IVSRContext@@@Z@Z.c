/*
 * XREFs of ?IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C0189D48
 * Callers:
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018EE80 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018F12C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DD60 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DE30 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall IVSendPnP(
        void *a1,
        unsigned int a2,
        struct _ETHREAD *a3,
        struct _ETHREAD *a4,
        void *a5,
        unsigned int a6,
        const struct CONTAINER_ID *a7)
{
  int (*v8)(struct _IVSRContext *); // [rsp+38h] [rbp-10h]

  if ( *(_WORD *)a7 || *((_WORD *)a7 + 1) )
    return ivrIVSend(a1, a2, a3, a4, a5, a6, a7, v8);
  else
    return ivrIVBroadcast(a1, a2, a3, a4, a5, a6, a7, v8);
}
