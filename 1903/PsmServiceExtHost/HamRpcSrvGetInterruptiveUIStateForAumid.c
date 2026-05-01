/*
 * XREFs of HamRpcSrvGetInterruptiveUIStateForAumid @ 0x180079D50
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180073F8C (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

void __fastcall __noreturn HamRpcSrvGetInterruptiveUIStateForAumid(
        __int64 a1,
        const unsigned __int16 *a2,
        SID *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  HamSrvGetInterruptiveUIStateForAumid((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1608), a2, a3, a4, a5, v5);
}
