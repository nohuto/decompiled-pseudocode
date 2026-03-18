/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6EF0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C02B5CE4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02BC9C8 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  struct DMMVIDPNSOURCEMODESET *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  struct DMMVIDPNSOURCEMODESET *v37; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(a2 + 304), v5);
  v16 = v12;
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v5;
    WdLogEvent5_WdError(v17);
    return 3223192324LL;
  }
  v37 = 0LL;
  v19 = *(_QWORD *)(v12 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v16 + 104);
    if ( v20 )
      goto LABEL_13;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = WdLogNewEntry5_WdAssertion(v14, v13);
  WdLogEvent5_WdAssertion(v21);
LABEL_13:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v37, v20);
  v22 = v37;
  v23 = VIDPN_MGR::PinVidPnSourceMode(this, v37, a4);
  v26 = v23;
  if ( v23 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
    v27[3] = a4;
    v27[4] = v22;
    v27[5] = v26;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v37, 0LL);
    return (unsigned int)v26;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v37, 0LL);
  v28 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v26 = v28;
  if ( v28 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
    v34[3] = v5;
    v35 = *((_QWORD *)this + 1);
    if ( !v35 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v33, v32);
      WdLogEvent5_WdAssertion(v36);
      v35 = *((_QWORD *)this + 1);
    }
    v34[4] = *(_QWORD *)(v35 + 16);
    v34[5] = v26;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v26;
  }
  return 0LL;
}
