/*
 * XREFs of ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B23D4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00548E8 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagVersion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v9 = DMM::AutoBuffer<unsigned char>::Initialize(a2, 2uLL, 0LL, PagedPool);
    if ( v9 >= 0 )
    {
      **(_WORD **)(a2 + 32) = 20480;
      return 0LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v8, v7, v10);
      *(_QWORD *)(v11 + 24) = a2;
      WdLogEvent5_WdError(v11);
      return (unsigned int)v9;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
