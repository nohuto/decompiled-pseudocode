/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C00B3B1C
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0008570 (ndisQueuedCheckForHang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di

  v1 = *(_QWORD *)(a1 + 3792);
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0xF2u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_qD(0xF3u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v3);
  return v4;
}
