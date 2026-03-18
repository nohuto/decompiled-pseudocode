/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02B248C
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02B4048 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00050D0 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C014E414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3DF4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C026E2E0 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        DXGADAPTER ***this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _DXGK_WIN32K_PARAM_DATA *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  DXGADAPTER **v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  DXGADAPTER **v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbp
  DXGADAPTER **v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  DXGADAPTER **v44; // rcx
  _QWORD *v45; // rsi
  __int64 v46; // rax
  _QWORD *v47; // rcx
  PVOID ModesArray; // rcx

  if ( this[5][2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 12), (__int64)a2) )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v12 + 32) = this;
LABEL_5:
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdError(v12);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    v12 = WdLogNewEntry5_WdError(v15, v14, v16);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v22 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    v29 = this[1];
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28, 0LL);
      WdLogEvent5_WdAssertion(v30);
      v29 = this[1];
    }
    v31 = DispConfigConvertFromVidPn(v22, v29[2], a2, a3);
    v35 = v31;
    if ( v31 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
      v47[3] = a2;
      v47[4] = v22;
      v47[5] = v35;
    }
    else
    {
      v36 = this[1];
      if ( !v36 )
      {
        v37 = WdLogNewEntry5_WdAssertion(0LL, v32);
        WdLogEvent5_WdAssertion(v37);
        v36 = this[1];
      }
      v38 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(v36, v22, a4);
      v35 = v38;
      if ( v38 >= 0 )
        return (unsigned int)v35;
      v42 = WdLogNewEntry5_WdError(v40, v39, v41);
      v44 = this[1];
      v45 = (_QWORD *)v42;
      if ( !v44 )
      {
        v46 = WdLogNewEntry5_WdAssertion(0LL, v43);
        WdLogEvent5_WdAssertion(v46);
        v44 = this[1];
      }
      v45[3] = v44[2];
      v47 = v45;
      v45[4] = v35;
    }
    WdLogEvent5_WdError(v47);
    ModesArray = v22->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v22->ModesArray = 0LL;
    }
    if ( v22->PathsArray )
    {
      ExFreePoolWithTag(v22->PathsArray, 0);
      v22->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v22, 0);
    return (unsigned int)v35;
  }
  v23 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
  v25 = this[1];
  v26 = v23;
  if ( !v25 )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL, v24);
    WdLogEvent5_WdAssertion(v27);
    v25 = this[1];
  }
  *(_QWORD *)(v26 + 24) = v25[2];
  *(_QWORD *)(v26 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v26);
  return 3221225495LL;
}
