/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C027EEB4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C027DC9C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0284664 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  struct DMMVIDPNSOURCEMODESET *v20; // rbx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  struct DMMVIDPNSOURCEMODESET *v35; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v5);
  v14 = v12;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdError(v15);
    return 3223192324LL;
  }
  v35 = 0LL;
  v17 = *(_QWORD *)(v12 + 104);
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
    v18 = *(_QWORD *)(v14 + 104);
    if ( v18 )
      goto LABEL_13;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = WdLogNewEntry5_WdAssertion(v13);
  WdLogEvent5_WdAssertion(v19);
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, v18);
  v20 = v35;
  v22 = VIDPN_MGR::PinVidPnSourceMode(this, v35, a4, v21);
  v27 = v22;
  if ( v22 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
    v28[3] = a4;
    v28[4] = v20;
    v28[5] = v27;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, 0LL);
    return (unsigned int)v27;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, 0LL);
  v29 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v27 = v29;
  if ( v29 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
    v32[3] = v5;
    v33 = *((_QWORD *)this + 1);
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v34);
      v33 = *((_QWORD *)this + 1);
    }
    v32[4] = *(_QWORD *)(v33 + 16);
    v32[5] = v27;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v27;
  }
  return 0LL;
}
