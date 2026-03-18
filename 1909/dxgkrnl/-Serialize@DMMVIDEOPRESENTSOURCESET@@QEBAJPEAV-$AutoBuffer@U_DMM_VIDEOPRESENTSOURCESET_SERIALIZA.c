/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BFF40
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B1A08 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549E0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C02BFDF8 (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  SIZE_T v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // r14
  _BYTE *v17; // rcx
  unsigned __int8 v18; // si
  __int64 v19; // rdi
  DMMVIDEOPRESENTSOURCE *i; // rdi
  __int64 v21; // rax
  __int64 v22; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v8 = *(_QWORD *)(a1 + 40);
    v9 = 8 * v8 + 4;
    v10 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v9, a3);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = a1 + 24;
      v17 = *(_BYTE **)(a2 + 32);
      v18 = 0;
      *v17 = *(_BYTE *)(a1 + 40);
      v19 = *(_QWORD *)(a1 + 24);
      if ( v19 != v16 )
      {
        for ( i = (DMMVIDEOPRESENTSOURCE *)(v19 - 8); i; ++v18 )
        {
          DMMVIDEOPRESENTSOURCE::Serialize(
            i,
            (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(*(_QWORD *)(a2 + 32) + 4LL + 8LL * v18));
          v21 = *((_QWORD *)i + 1);
          i = (DMMVIDEOPRESENTSOURCE *)(v21 - 8);
          if ( v21 == v16 )
            i = 0LL;
        }
      }
      if ( v18 != **(_BYTE **)(a2 + 32) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17, v11);
        WdLogEvent5_WdAssertion(v22);
      }
      return 0LL;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v15[3] = v9;
      v15[4] = a1;
      v15[5] = v14;
      WdLogEvent5_WdError(v15);
      return (unsigned int)v14;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
