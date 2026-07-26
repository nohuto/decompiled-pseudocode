/*
 * XREFs of ndisFInvokeSetOptions @ 0x1C00CE774
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00220A0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeSetOptions(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, _QWORD); // rax
  unsigned int v2; // edi
  int v4; // eax

  v1 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 160);
  v2 = 0;
  if ( v1 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0x66u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 160))(a1, *(_QWORD *)(a1 + 32));
    }
    else
    {
      v4 = v1(a1, *(_QWORD *)(a1 + 32));
    }
    v2 = v4;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x67u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v4);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x68u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  }
  return v2;
}
