/*
 * XREFs of ndisInvokeCloseAdapterComplete @ 0x1C00EE12C
 * Callers:
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisInvokeCloseAdapterComplete(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x64u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 120))(*(_QWORD *)(a1 + 32));
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x65u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v1, a1);
}
