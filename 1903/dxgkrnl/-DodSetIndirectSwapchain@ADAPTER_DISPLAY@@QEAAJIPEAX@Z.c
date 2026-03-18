/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01F1468
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C0204E40 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C02751C0 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C027D5C8 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C0288238 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

int __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  struct DXGSWAPCHAIN_CONTAINER *v7; // rax
  struct _LUID *v8; // rdx
  __int64 v9; // rcx
  struct _LUID v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  OUTPUTDUPL_MGR_INDIRECT *v16; // rsi
  __int64 v17; // rcx
  int updated; // r15d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(_QWORD, _QWORD, void *, struct _LUID); // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  LONG HighPart; // [rsp+54h] [rbp+Ch]

  v4 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 46) )
    return -1073741811;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = v4;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return -1073741811;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 308LL) & 0x100) == 0 )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
  v7 = SwapChainOpenInternal(a3);
  if ( !v7 || (v8 = *(struct _LUID **)v7) == 0LL )
  {
    v29 = WdLogNewEntry5_WdError(v9, v8, v7);
    *(_QWORD *)(v29 + 24) = a3;
    WdLogEvent5_WdError(v29);
    return -1073741811;
  }
  v10 = v8[25];
  HighPart = v10.HighPart;
  if ( v10.LowPart
    || (v11 = HIDWORD(*(unsigned __int64 *)&v10), v10.HighPart)
    || (v10 = v8[24], HighPart = v10.HighPart, *(_QWORD *)&v10) )
  {
    ObfDereferenceObject(v7);
    v16 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 13) - 24LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL));
    if ( __PAIR64__(HighPart, v10.LowPart) == *((_QWORD *)v16 + 14)
      || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v16, v10), updated >= 0) )
    {
      v20 = *((_QWORD *)this + 2);
      v21 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v20 + 1768);
      if ( v21 )
      {
        v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v21)(
                *(_QWORD *)(v20 + 1744),
                (unsigned int)v4,
                a3,
                v10);
        v26 = v22;
        if ( v22 >= 0 )
        {
          return BLTQUEUE::SetIndirectSwapChainHandles(
                   (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 46) + 8LL) + 2760 * v4),
                   a3);
        }
        else
        {
          v27 = WdLogNewEntry5_WdError(v24, v23, v25);
          *(_QWORD *)(v27 + 24) = v26;
          *(_QWORD *)(v27 + 32) = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v27);
          return v26;
        }
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v20, v14, v15);
        *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v28);
        return -1073741637;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17, v14, v15);
      *(_QWORD *)(v19 + 24) = v16;
      WdLogEvent5_WdError(v19);
      return updated;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11, v8, v7);
    *(_QWORD *)(v12 + 24) = 8208LL;
    WdLogEvent5_WdError(v12);
    return -1073741595;
  }
}
