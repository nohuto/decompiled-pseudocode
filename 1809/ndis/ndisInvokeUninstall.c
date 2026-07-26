/*
 * XREFs of ndisInvokeUninstall @ 0x1C00EE2A8
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00EA8F4 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x68u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x69u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
}
