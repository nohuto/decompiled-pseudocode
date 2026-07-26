/*
 * XREFs of ndisMInvokeShutdown @ 0x1C006318C
 * Callers:
 *     ndisBugcheckHandler @ 0x1C0065530 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C0119B2C (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3792);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xFCu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xFDu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
}
