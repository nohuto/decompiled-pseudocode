/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283CF0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(DMMVIDEOPRESENTTARGETSET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  unsigned __int8 v13; // si
  _BYTE *v14; // rcx
  DMMVIDEOPRESENTTARGETSET *v15; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v7 = *((_QWORD *)this + 5);
    v8 = 28 * v7 + 4;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v13 = 0;
      v14 = *(_BYTE **)(a2 + 32);
      *v14 = *((_BYTE *)this + 40);
      v15 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
      if ( v15 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
      {
        for ( i = (DMMVIDEOPRESENTTARGETSET *)((char *)v15 - 8); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
        {
          v17 = *(_QWORD *)(a2 + 32);
          v18 = 28LL * v13;
          *(_DWORD *)(v18 + v17 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v18 + v17 + 8) = *((_DWORD *)i + 20);
          *(_DWORD *)(v18 + v17 + 12) = *((_DWORD *)i + 24);
          *(_DWORD *)(v18 + v17 + 16) = *((_DWORD *)i + 25);
          *(_BYTE *)(v18 + v17 + 20) = *((_BYTE *)i + 104);
          *(_DWORD *)(v18 + v17 + 24) = *((_DWORD *)i + 30);
          *(_DWORD *)(v18 + v17 + 28) = *((_DWORD *)i + 21);
          ++v13;
        }
      }
      if ( v13 != **(_BYTE **)(a2 + 32) )
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
      v12[4] = this;
      v12[5] = v11;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v11;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
