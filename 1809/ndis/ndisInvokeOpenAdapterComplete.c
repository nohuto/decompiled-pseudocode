/*
 * XREFs of ndisInvokeOpenAdapterComplete @ 0x1C00EE19C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

void __fastcall ndisInvokeOpenAdapterComplete(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qqd(0x62u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v2, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 112))(*(_QWORD *)(a1 + 32), a2);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x63u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v2, a1);
}
