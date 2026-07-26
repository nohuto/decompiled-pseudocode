/*
 * XREFs of ndisMInvokeReset @ 0x1C0063104
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0063F8C (ndisMResetMiniportInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeReset(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 3792);
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0xF8u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 216))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_qD(0xF9u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v5);
  return v6;
}
