/*
 * XREFs of ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BF688
 * Callers:
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B74EC (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000EC40 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00547CC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549E0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned __int8 v16; // bp
  _BYTE *v17; // rcx
  DMMVIDPNSOURCEMODESET *v18; // rsi
  const struct DMMVIDPNSOURCEMODE *i; // rsi
  __int64 v20; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v8 = *((_QWORD *)this + 8);
    v9 = 44 * v8;
    v10 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 44 * v8, a3);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = 0;
      v17 = *(_BYTE **)(a2 + 32);
      *v17 = *((_BYTE *)this + 64);
      v18 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v18 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v18 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
          DMMVIDPNSOURCEMODE::Serialize(
            i,
            (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)(*(_QWORD *)(a2 + 32) + 4LL + 40LL * v16++),
            v13);
      }
      if ( v16 != **(_BYTE **)(a2 + 32) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v17, v11);
        WdLogEvent5_WdAssertion(v20);
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
