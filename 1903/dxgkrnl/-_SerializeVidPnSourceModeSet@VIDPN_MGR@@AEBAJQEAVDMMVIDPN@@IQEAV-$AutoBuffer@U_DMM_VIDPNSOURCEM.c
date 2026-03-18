/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B70DC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BF5C8 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  DMMVIDPNSOURCEMODESET *v31; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(a2 + 304), v4);
  v15 = v11;
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v4;
    WdLogEvent5_WdError(v16);
    return 3223192324LL;
  }
  v31 = 0LL;
  v18 = *(_QWORD *)(v11 + 104);
  if ( !v18 )
  {
    v19 = 0LL;
LABEL_12:
    v20 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v20);
    goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD *)(v15 + 104);
  if ( !v19 )
    goto LABEL_12;
LABEL_13:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v31, v19);
  v21 = DMMVIDPNSOURCEMODESET::Serialize(v31);
  v25 = v21;
  if ( v21 >= 0 )
  {
    LODWORD(v25) = 0;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v28[3] = v4;
    v29 = *(_QWORD *)(a1 + 8);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26);
      WdLogEvent5_WdAssertion(v30);
      v29 = *(_QWORD *)(a1 + 8);
    }
    v28[4] = *(_QWORD *)(v29 + 16);
    v28[5] = v25;
    WdLogEvent5_WdError(v28);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v31, 0LL);
  return (unsigned int)v25;
}
