/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6F34
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B1A08 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549E0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  SIZE_T v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  _QWORD *v15; // rax
  char v16; // al
  char v17; // r14
  _QWORD *v18; // rbp
  _BYTE *v19; // rax
  _BYTE *v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

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
    v9 = 96 * v8 + 8;
    v10 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v9, a3);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = *(_BYTE *)(a1 + 40);
      v17 = 0;
      v18 = (_QWORD *)(a1 + 24);
      **(_BYTE **)(a2 + 32) = v16;
      v19 = *(_BYTE **)(a2 + 32);
      v20 = v19 + 8;
      if ( (_QWORD *)*v18 == v18 )
        v21 = 0LL;
      else
        v21 = *v18 - 8LL;
      if ( v21 )
      {
        do
        {
          *(_DWORD *)v20 = *(_DWORD *)(v21 + 48);
          *(_OWORD *)(v20 + 4) = *(_OWORD *)(v21 + 52);
          *(_OWORD *)(v20 + 20) = *(_OWORD *)(v21 + 68);
          *(_QWORD *)(v20 + 36) = *(_QWORD *)(v21 + 84);
          *((_DWORD *)v20 + 11) = *(_DWORD *)(v21 + 92);
          *((_DWORD *)v20 + 12) = *(_DWORD *)(v21 + 96);
          *((_DWORD *)v20 + 13) = *(_DWORD *)(v21 + 100);
          *((_DWORD *)v20 + 14) = *(_DWORD *)(v21 + 104);
          *((_QWORD *)v20 + 8) = *(_QWORD *)(v21 + 112);
          *((_DWORD *)v20 + 23) = *(_DWORD *)(v21 + 140);
          *(_OWORD *)(v20 + 72) = *(_OWORD *)(v21 + 120);
          *((_DWORD *)v20 + 22) = *(_DWORD *)(v21 + 136);
          v20 += 96;
          v22 = *(_QWORD **)(v21 + 8);
          v21 = (__int64)(v22 - 1);
          if ( v22 == v18 )
            v21 = 0LL;
          ++v17;
        }
        while ( v21 );
        v19 = *(_BYTE **)(a2 + 32);
      }
      if ( v17 != *v19 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21, v11);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( v17 )
      {
        if ( (_BYTE *)v9 != &v20[-*(_QWORD *)(a2 + 32)] )
        {
          v24 = WdLogNewEntry5_WdAssertion(v21, v11);
          WdLogEvent5_WdAssertion(v24);
        }
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
