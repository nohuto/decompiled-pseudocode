/*
 * XREFs of ndisInvokeNetPnPEvent @ 0x1C00C2ED4
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisInvokeNetPnPEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a3 + 8);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    v12 = *(_DWORD *)(a3 + 8);
    WPP_SF_qqd(0x66u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2, v12);
  }
  v7 = 0LL;
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 32);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 128))(v7, a3);
  v9 = v8;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    v13 = v8;
    LODWORD(v11) = v3;
    WPP_SF_qqDD(0x67u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2, v11, v13);
  }
  return v9;
}
