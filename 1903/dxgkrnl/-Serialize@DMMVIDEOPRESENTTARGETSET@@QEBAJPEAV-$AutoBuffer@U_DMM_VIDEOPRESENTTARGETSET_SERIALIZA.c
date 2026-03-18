/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BBFFC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B15F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(DMMVIDEOPRESENTTARGETSET *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  SIZE_T v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  _QWORD *v15; // rax
  unsigned __int8 v16; // si
  _BYTE *v17; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v8 = *((_QWORD *)this + 5);
    v9 = 28 * v8 + 4;
    v10 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v9, a3);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = 0;
      v17 = *(_BYTE **)(a2 + 32);
      *v17 = *((_BYTE *)this + 40);
      i = (const struct DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 3);
      if ( i != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)((char *)i - 8);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
        {
          v19 = *(_QWORD *)(a2 + 32);
          v20 = 28LL * v16;
          *(_DWORD *)(v20 + v19 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v20 + v19 + 8) = *((_DWORD *)i + 20);
          *(_DWORD *)(v20 + v19 + 12) = *((_DWORD *)i + 24);
          *(_DWORD *)(v20 + v19 + 16) = *((_DWORD *)i + 25);
          *(_BYTE *)(v20 + v19 + 20) = *((_BYTE *)i + 104);
          *(_DWORD *)(v20 + v19 + 24) = *((_DWORD *)i + 30);
          *(_DWORD *)(v20 + v19 + 28) = *((_DWORD *)i + 21);
          ++v16;
        }
      }
      if ( v16 != **(_BYTE **)(a2 + 32) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17, i);
        WdLogEvent5_WdAssertion(v21);
      }
      return 0LL;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v15[3] = v9;
      v15[4] = this;
      v15[5] = v14;
      WdLogEvent5_WdError(v15);
      return (unsigned int)v14;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
