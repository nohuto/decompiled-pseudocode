/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C00F0888
 * Callers:
 *     ndisMUnloadEx @ 0x1C00F2DC0 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xE9u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xEAu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
}
