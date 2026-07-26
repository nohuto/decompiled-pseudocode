/*
 * XREFs of ndisInvokeOidRequestComplete @ 0x1C0020F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 */

__int64 __fastcall ndisInvokeOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qDqL(106LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, *(unsigned int *)(a2 + 32), a2, a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 320))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    return WPP_SF_qq(107LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2);
  return result;
}
