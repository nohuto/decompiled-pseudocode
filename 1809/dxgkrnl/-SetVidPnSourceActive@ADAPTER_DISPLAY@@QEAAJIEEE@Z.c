/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0120094
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02821D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282754 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00135B8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C011F6B4 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C02460B0 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0246284 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v6; // r14
  __int64 v8; // rcx
  PERESOURCE *v9; // rdx
  _QWORD *v10; // r13
  bool v11; // zf
  PERESOURCE *v12; // rax
  bool v13; // bp
  PERESOURCE v14; // rcx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  const GUID *v20; // r8
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v22; // rcx
  struct DXGADAPTERALLOCATION *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  PERESOURCE *v37; // rbx
  BLTQUEUE *v38; // rcx
  ULONG v39; // eax
  __int64 v40; // rcx
  char *v41; // rdi
  __int64 v42; // rax
  PDRIVER_OBJECT v43; // rcx
  PERESOURCE *v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  PERESOURCE *v48; // rcx
  PERESOURCE *v49; // rcx
  __int64 v50; // rax
  int v51; // [rsp+38h] [rbp-50h] BYREF
  __int64 v52; // [rsp+40h] [rbp-48h]
  void *v53; // [rsp+90h] [rbp+8h] BYREF
  char v54; // [rsp+A8h] [rbp+20h]

  v54 = a4;
  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v35 + 24) = 436LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v36 + 24) = 437LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v9 = this[14];
  v10 = 0LL;
  v11 = LOBYTE(v9[470 * v6 + 90]) == 0;
  LOBYTE(v9[470 * v6 + 90]) = a3;
  v12 = this[2];
  v13 = v11 != (a3 == 0);
  v14 = v12[316];
  if ( v14 )
  {
    Blink = v14[5].SystemResourcesList.Blink;
    v10 = v12[316];
    Flink = v14[5].SystemResourcesList.Flink;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)this, v6);
    LOBYTE(v18) = a3;
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *))Flink->Blink[32].Blink)(
      Blink,
      (unsigned int)v6,
      v18,
      DisplayModeInfo);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v10[65] + 8LL) + 880LL))(v10[66], (unsigned int)v6);
  }
  else
  {
    v37 = this[33];
    if ( v37 )
    {
      v38 = (BLTQUEUE *)&v37[1][26 * v6];
      if ( a3 )
        BLTQUEUE::EnableVSync(v38);
      else
        BLTQUEUE::DisableVSync(v38);
      _InterlockedExchange((volatile __int32 *)&v37[1][26 * v6 + 8].ActiveCount, 0);
    }
  }
  if ( !a3 )
  {
    ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v6, 0, 0x800u, a5);
    goto LABEL_18;
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v6) )
    {
      if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v6, 0) )
      {
        v39 = IoSizeofWorkItem();
        v41 = (char *)operator new[](v39 + 12LL, 0x4B677844u, (POOL_TYPE)512);
        if ( !v41 )
        {
          v42 = WdLogNewEntry5_WdLowResource(v40);
          *(_QWORD *)(v42 + 24) = this;
          WdLogEvent5_WdLowResource(v42);
          return 3221225495LL;
        }
        *(_QWORD *)v41 = *(PERESOURCE *)((char *)this[2] + 276);
        v43 = g_pDriverObject;
        *((_DWORD *)v41 + 2) = v6;
        IoInitializeWorkItem(v43, (PIO_WORKITEM)(v41 + 12));
        IoQueueWorkItemEx((PIO_WORKITEM)(v41 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v41);
      }
      goto LABEL_18;
    }
    v44 = this[2];
    goto LABEL_44;
  }
  if ( *(_QWORD *)(v19 + 2528) )
  {
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)this, v6);
    v23 = DisplayedPrimaryAllocation;
    if ( !DisplayedPrimaryAllocation || (v22 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v22 & 0x10) != 0) )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v32 = -1071775482LL;
LABEL_41:
      v48 = this[2];
      v47[4] = v6;
      v47[3] = v48;
      v47[5] = v32;
      WdLogEvent5_WdError(v47);
      return (unsigned int)v32;
    }
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v53);
    v25 = v53;
    if ( v53 )
    {
      memset(v53, 0, 0x840uLL);
      *(_DWORD *)v25 = v6;
      v25[2] = *((_QWORD *)v23 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(v10[68] + 8LL) + 216LL))(
        v10[69],
        *((_QWORD *)v23 + 1),
        (__int64)v25 + 4,
        v25 + 1);
      *((_DWORD *)v25 + 138) |= 1u;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v10[65] + 8LL) + 816LL))(v10[66], v25);
      v28 = v26;
      if ( v26 >= 0 )
      {
        operator delete(v25);
        goto LABEL_15;
      }
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v46[3] = this[2];
      v46[4] = v6;
      v46[5] = v28;
      WdLogEvent5_WdError(v46);
    }
    else
    {
      v45 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v45 + 24) = 557LL;
      WdLogEvent5_WdLowResource(v45);
      LODWORD(v28) = -1073741801;
    }
    operator delete(v25);
    return (unsigned int)v28;
  }
LABEL_15:
  if ( ((_DWORD)this[40] & 2) != 0
    || v54 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v6) == 1 )
  {
    v44 = this[2];
    if ( *((_DWORD *)v44 + 71) != 1297040209 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v44) > 1300 )
    {
LABEL_44:
      v30 = 3760 * v6;
      LOBYTE(v30) = BYTE1(this[14][470 * v6 + 90]);
      if ( !(_BYTE)v30 )
        v13 = 1;
      if ( v44[316] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v10[65] + 8LL) + 888LL))(v10[66], (unsigned int)v6);
      }
      else
      {
        v49 = this[33];
        if ( v49 )
        {
          v30 = 2704 * v6;
          _InterlockedExchange((volatile __int32 *)&v49[1][26 * v6 + 8].ActiveCount, 1);
        }
      }
      goto LABEL_18;
    }
  }
  v29 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v6, 1u, 0x800u, a5);
  v32 = v29;
  if ( v29 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    goto LABEL_41;
  }
LABEL_18:
  if ( v13 )
  {
    v52 = 0LL;
    v51 = 1;
    if ( (int)DxgkStatusChangeNotify(&v51, v30, v20) < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v50 + 24) = 687LL;
      WdLogEvent5_WdAssertion(v50);
    }
  }
  return 0LL;
}
