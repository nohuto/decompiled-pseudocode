/*
 * XREFs of ndisFInvokeSetFilterModuleOptions @ 0x1C0105A68
 * Callers:
 *     ndisQueryFilterInstanceHandlers @ 0x1C0029D44 (ndisQueryFilterInstanceHandlers.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BD5C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeSetFilterModuleOptions(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // edi
  __int64 (__fastcall *v4)(_QWORD); // rax
  unsigned int v5; // eax
  int v6; // edx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v4 = *(__int64 (__fastcall **)(_QWORD))(v1 + 168);
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        102,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        a1);
      v4 = *(__int64 (__fastcall **)(_QWORD))(v1 + 168);
    }
    v5 = v4(*(_QWORD *)(a1 + 24));
    v2 = v5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1,
        103,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        a1,
        v5);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      104,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1);
  }
  return v2;
}
