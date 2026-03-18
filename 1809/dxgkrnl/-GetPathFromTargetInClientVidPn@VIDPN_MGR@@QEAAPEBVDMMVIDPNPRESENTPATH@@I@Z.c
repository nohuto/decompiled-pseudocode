/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C027D3F4
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  struct DMMVIDPNPRESENTPATH *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  DMMVIDPNTOPOLOGY *v17; // rdi
  __int64 v18; // rax
  int PathSourceFromTarget; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v26; // rax
  __int64 v28; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_QWORD *)this + 11);
  v6 = 0LL;
  v28 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
    v7 = *((_QWORD *)this + 11);
  }
  else
  {
    v7 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v28, v7);
  if ( !v28 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v15);
      v14 = *((_QWORD *)this + 1);
    }
    v16 = v13;
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v14 + 16);
    goto LABEL_14;
  }
  v17 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
  if ( v28 == -96 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v18);
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v17, (unsigned int)v3, v10);
  if ( PathSourceFromTarget == -1 )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
    *(_QWORD *)(v16 + 24) = v3;
LABEL_14:
    WdLogEvent5_WdDmmEvent(v16);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v17, PathSourceFromTarget, v3);
  if ( !Path )
  {
    v26 = WdLogNewEntry5_WdAssertion(v24);
    WdLogEvent5_WdAssertion(v26);
  }
  v6 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
  return v6;
}
