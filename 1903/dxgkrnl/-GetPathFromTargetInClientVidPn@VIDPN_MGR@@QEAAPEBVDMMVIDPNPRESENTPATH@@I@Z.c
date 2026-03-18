/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02B5684
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6444 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(VIDPN_MGR *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  struct DMMVIDPNPRESENTPATH *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v26; // rax
  __int64 v28; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 16LL) != CurrentThread )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)this + 11);
  v7 = 0LL;
  v28 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
    v8 = *((_QWORD *)this + 11);
  }
  else
  {
    v8 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v28, v8, (__int64)CurrentThread);
  if ( !v28 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v10, v9);
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11);
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
    v18 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v18);
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v17, (unsigned int)v4);
  if ( PathSourceFromTarget == -1 )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v21, v20);
    *(_QWORD *)(v16 + 24) = v4;
LABEL_14:
    WdLogEvent5_WdDmmEvent(v16);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v17, PathSourceFromTarget, v4);
  if ( !Path )
  {
    v26 = WdLogNewEntry5_WdAssertion(v24, v23);
    WdLogEvent5_WdAssertion(v26);
  }
  v7 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v28, 0LL, v22);
  return v7;
}
