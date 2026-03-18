/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C9660
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00C47B0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00017BC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00CAFAC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD4B0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00EDC78 (MonitorGetLinkInfoFromTarget.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C015A4B8 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C027C084 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  PERESOURCE *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r13
  bool v13; // zf
  PERESOURCE *v14; // rcx
  bool v15; // bp
  __int64 v16; // rbx
  int LinkInfoFromTarget; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGADAPTERALLOCATION *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  PERESOURCE *v54; // rbx
  BLTQUEUE *v55; // rcx
  ULONG v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  char *v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  PDRIVER_OBJECT v63; // rcx
  PERESOURCE *v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  PERESOURCE *v68; // rcx
  PERESOURCE *v69; // rcx
  __int64 v70; // rax
  void *v72; // [rsp+38h] [rbp-70h] BYREF
  __int64 v73; // [rsp+40h] [rbp-68h]
  _QWORD v74[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v75; // [rsp+58h] [rbp-50h] BYREF
  int v76; // [rsp+60h] [rbp-48h]

  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v51 + 24) = 434LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( (unsigned int)v7 >= *((_DWORD *)this + 20) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v52 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v10 = this[14];
  v11 = 496 * v7;
  v12 = 0LL;
  v73 = v11 * 8;
  v13 = LOBYTE(v10[496 * v7 + 90]) == 0;
  LOBYTE(v10[v11 + 90]) = a3;
  v14 = this[2];
  v15 = v13 != (a3 == 0);
  if ( v14[320] )
  {
    v12 = v14[320];
    v75 = 0LL;
    v76 = 0;
    if ( a3 )
    {
      v16 = HIDWORD(this[14][v11 + 133]);
      if ( (_DWORD)v16 == -1 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v14, v10);
        *(_QWORD *)(v53 + 24) = 456LL;
        WdLogEvent5_WdAssertion(v53);
        v14 = this[2];
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v14, (unsigned int)v16, &v75);
      v21 = LinkInfoFromTarget;
      if ( LinkInfoFromTarget < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
        v22[3] = v21;
        v22[4] = v7;
        v22[5] = v16;
        WdLogEvent5_WdWarning(v22);
      }
    }
    v23 = v12[66];
    v24 = v12[65];
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)this, v7);
    LOBYTE(v26) = a3;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, char *))(*(_QWORD *)(v24 + 8) + 520LL))(
      v23,
      (unsigned int)v7,
      v26,
      DisplayModeInfo,
      (char *)&v75 + 4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v12[65] + 8LL) + 880LL))(v12[66], (unsigned int)v7);
  }
  else
  {
    v54 = this[46];
    if ( v54 )
    {
      v55 = (BLTQUEUE *)((char *)v54[1] + 2760 * v7);
      if ( a3 )
        BLTQUEUE::EnableVSync(v55);
      else
        BLTQUEUE::DisableVSync(v55);
      _InterlockedExchange((volatile __int32 *)&v54[1][8].ActiveCount + 690 * v7, 0);
    }
  }
  if ( !a3 )
  {
    ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v7, 0, 0x800u, a5);
    goto LABEL_23;
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v7) )
    {
      if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v7, 0) )
      {
        v56 = IoSizeofWorkItem();
        v59 = (char *)operator new[](v56 + 12LL, 0x4B677844u, (POOL_TYPE)512);
        if ( !v59 )
        {
          v62 = WdLogNewEntry5_WdLowResource(v58, v57, v60, v61);
          *(_QWORD *)(v62 + 24) = this;
          WdLogEvent5_WdLowResource(v62);
          return 3221225495LL;
        }
        *(_QWORD *)v59 = *(PERESOURCE *)((char *)this[2] + 276);
        v63 = g_pDriverObject;
        *((_DWORD *)v59 + 2) = v7;
        IoInitializeWorkItem(v63, (PIO_WORKITEM)(v59 + 12));
        IoQueueWorkItemEx((PIO_WORKITEM)(v59 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v59);
      }
      goto LABEL_23;
    }
    v64 = this[2];
    goto LABEL_49;
  }
  if ( *(_QWORD *)(v27 + 2560) )
  {
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)this, v7);
    v32 = DisplayedPrimaryAllocation;
    if ( !DisplayedPrimaryAllocation || (v30 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v30 & 0x10) != 0) )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
      v47 = -1071775482LL;
LABEL_46:
      v68 = this[2];
      v67[4] = v7;
      v67[3] = v68;
      v67[5] = v47;
      WdLogEvent5_WdError(v67);
      return (unsigned int)v47;
    }
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v72);
    v37 = v72;
    if ( v72 )
    {
      memset(v72, 0, 0x840uLL);
      *(_DWORD *)v37 = v7;
      v37[2] = *((_QWORD *)v32 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)(v12[68] + 8LL) + 216LL))(
        v12[69],
        *((_QWORD *)v32 + 1),
        (__int64)v37 + 4,
        v37 + 1,
        0LL);
      *((_DWORD *)v37 + 138) |= 1u;
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v12[65] + 8LL) + 816LL))(v12[66], v37);
      v42 = v38;
      if ( v38 >= 0 )
      {
        operator delete(v37);
        goto LABEL_20;
      }
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
      v66[3] = this[2];
      v66[4] = v7;
      v66[5] = v42;
      WdLogEvent5_WdError(v66);
    }
    else
    {
      v65 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
      *(_QWORD *)(v65 + 24) = 572LL;
      WdLogEvent5_WdLowResource(v65);
      LODWORD(v42) = -1073741801;
    }
    operator delete(v37);
    return (unsigned int)v42;
  }
LABEL_20:
  if ( ((_DWORD)this[53] & 2) != 0
    || a4 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v7) == 1 )
  {
    v64 = this[2];
    if ( *((_DWORD *)v64 + 71) != 1297040209 || *((int *)v64 + 613) > 1300 )
    {
LABEL_49:
      if ( !*((_BYTE *)this[14] + v73 + 721) )
        v15 = 1;
      if ( v64[320] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v12[65] + 8LL) + 888LL))(v12[66], (unsigned int)v7);
      }
      else
      {
        v69 = this[46];
        if ( v69 )
          _InterlockedExchange((volatile __int32 *)&v69[1][8].ActiveCount + 690 * v7, 1);
      }
      goto LABEL_23;
    }
  }
  v43 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v7, 1u, 0x800u, a5);
  v47 = v43;
  if ( v43 < 0 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46);
    goto LABEL_46;
  }
LABEL_23:
  if ( v15 )
  {
    v74[1] = 0LL;
    v74[0] = 1LL;
    if ( (int)DxgkStatusChangeNotify(v74) < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v70 + 24) = 702LL;
      WdLogEvent5_WdAssertion(v70);
    }
  }
  return 0LL;
}
