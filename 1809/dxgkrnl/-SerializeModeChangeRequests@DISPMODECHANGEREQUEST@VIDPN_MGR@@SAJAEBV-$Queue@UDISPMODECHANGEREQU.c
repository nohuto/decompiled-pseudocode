/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C027EAE8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  char v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  char v16; // r14
  _QWORD *v17; // rcx
  _BYTE *v18; // r8
  _BYTE *v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

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
    v8 = 96 * v7 + 8;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v13 = *(_BYTE *)(a1 + 40);
      v14 = 0LL;
      v15 = (_QWORD *)(a1 + 24);
      v16 = 0;
      **(_BYTE **)(a2 + 32) = v13;
      v17 = (_QWORD *)*v15;
      v18 = *(_BYTE **)(a2 + 32);
      if ( (_QWORD *)*v15 != v15 )
        v14 = *v15 - 8LL;
      v19 = v18 + 8;
      if ( v14 )
      {
        do
        {
          *(_DWORD *)v19 = *(_DWORD *)(v14 + 48);
          *(_OWORD *)(v19 + 4) = *(_OWORD *)(v14 + 52);
          *(_OWORD *)(v19 + 20) = *(_OWORD *)(v14 + 68);
          *(_QWORD *)(v19 + 36) = *(_QWORD *)(v14 + 84);
          *((_DWORD *)v19 + 11) = *(_DWORD *)(v14 + 92);
          *((_DWORD *)v19 + 12) = *(_DWORD *)(v14 + 96);
          *((_DWORD *)v19 + 13) = *(_DWORD *)(v14 + 100);
          *((_DWORD *)v19 + 14) = *(_DWORD *)(v14 + 104);
          *((_QWORD *)v19 + 8) = *(_QWORD *)(v14 + 112);
          *((_DWORD *)v19 + 23) = *(_DWORD *)(v14 + 140);
          *(_OWORD *)(v19 + 72) = *(_OWORD *)(v14 + 120);
          *((_DWORD *)v19 + 22) = *(_DWORD *)(v14 + 136);
          v19 += 96;
          v20 = *(_QWORD **)(v14 + 8);
          v14 = (__int64)(v20 - 1);
          if ( v20 == v15 )
            v14 = 0LL;
          ++v16;
        }
        while ( v14 );
        v18 = *(_BYTE **)(a2 + 32);
      }
      if ( v16 != *v18 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( v16 )
      {
        if ( (_BYTE *)v8 != &v19[-*(_QWORD *)(a2 + 32)] )
        {
          v22 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v22);
        }
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
