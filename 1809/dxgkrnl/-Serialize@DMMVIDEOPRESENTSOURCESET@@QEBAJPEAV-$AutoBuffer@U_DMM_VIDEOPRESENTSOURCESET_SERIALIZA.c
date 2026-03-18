/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0287B30
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C02879E8 (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r14
  _BYTE *v14; // rcx
  unsigned __int8 v15; // si
  __int64 v16; // rdi
  DMMVIDEOPRESENTSOURCE *i; // rdi
  __int64 v18; // rax
  __int64 v19; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v7 = *(_QWORD *)(a1 + 40);
    v8 = 8 * v7 + 4;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v13 = a1 + 24;
      v14 = *(_BYTE **)(a2 + 32);
      v15 = 0;
      *v14 = *(_BYTE *)(a1 + 40);
      v16 = *(_QWORD *)(a1 + 24);
      if ( v16 != v13 )
      {
        for ( i = (DMMVIDEOPRESENTSOURCE *)(v16 - 8); i; ++v15 )
        {
          DMMVIDEOPRESENTSOURCE::Serialize(
            i,
            (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(*(_QWORD *)(a2 + 32) + 4LL + 8LL * v15));
          v18 = *((_QWORD *)i + 1);
          i = (DMMVIDEOPRESENTSOURCE *)(v18 - 8);
          if ( v18 == v13 )
            i = 0LL;
        }
      }
      if ( v15 != **(_BYTE **)(a2 + 32) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v19);
      }
      return 0LL;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v12[3] = v8;
      v12[4] = a1;
      v12[5] = v11;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v11;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
