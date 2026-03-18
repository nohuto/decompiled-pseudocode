/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0279C58
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C027B850 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00046A0 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00D50E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C48B4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0239304 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        DXGADAPTER ***this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v14; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *v15; // rdi
  __int64 v16; // rax
  DXGADAPTER **v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  DXGADAPTER **v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbp
  DXGADAPTER **v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  DXGADAPTER **v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rcx
  PVOID ModesArray; // rcx

  if ( this[5][1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 12), (__int64)a2) )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = this;
LABEL_5:
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    v10 = WdLogNewEntry5_WdError(v12);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    v21 = this[1];
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v22);
      v21 = this[1];
    }
    v23 = DispConfigConvertFromVidPn(v15, v21[2], a2, a3);
    v25 = v23;
    if ( v23 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v34[3] = a2;
      v34[4] = v15;
      v34[5] = v25;
    }
    else
    {
      v26 = this[1];
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v27);
        v26 = this[1];
      }
      v28 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(v26, v15, a4);
      v25 = v28;
      if ( v28 >= 0 )
        return (unsigned int)v25;
      v30 = WdLogNewEntry5_WdError(v29);
      v31 = this[1];
      v32 = (_QWORD *)v30;
      if ( !v31 )
      {
        v33 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v33);
        v31 = this[1];
      }
      v32[3] = v31[2];
      v34 = v32;
      v32[4] = v25;
    }
    WdLogEvent5_WdError(v34);
    ModesArray = v15->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v15->ModesArray = 0LL;
    }
    if ( v15->PathsArray )
    {
      ExFreePoolWithTag(v15->PathsArray, 0);
      v15->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v25;
  }
  v16 = WdLogNewEntry5_WdLowResource(v14);
  v17 = this[1];
  v18 = v16;
  if ( !v17 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v19);
    v17 = this[1];
  }
  *(_QWORD *)(v18 + 24) = v17[2];
  *(_QWORD *)(v18 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v18);
  return 3221225495LL;
}
