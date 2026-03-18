/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01C21D0
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C01D6F90 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0040504 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C023FE10 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C0252388 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  struct DXGSWAPCHAIN_CONTAINER *v7; // rax
  __int64 v8; // rcx
  struct _LUID v9; // rbx
  OUTPUTDUPL_MGR_INDIRECT *v10; // r14
  __int64 v11; // rcx
  int updated; // r15d
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, _QWORD, void *, struct _LUID); // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v4 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 33) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = v4;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 308LL) & 0x100) == 0 )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
  v7 = SwapChainOpenInternal(a3);
  if ( !v7 || !*(_QWORD *)v7 )
  {
    v22 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v22 + 24) = a3;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v9 = *(struct _LUID *)(*(_QWORD *)v7 + 200LL);
  ObfDereferenceObject(v7);
  v10 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 13) - 24LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL));
  if ( v9 == *((_QWORD *)v10 + 14)
    || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v10, v9), updated >= 0) )
  {
    v15 = *((_QWORD *)this + 2);
    v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v15 + 1752);
    if ( v16 )
    {
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v16)(
              *(_QWORD *)(v15 + 1728),
              (unsigned int)v4,
              a3,
              v9);
      v19 = v17;
      if ( v17 >= 0 )
      {
        return BLTQUEUE::SetIndirectSwapChainHandles(
                 (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704 * v4),
                 a3);
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = v19;
        *(_QWORD *)(v20 + 32) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v20);
        return (unsigned int)v19;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v21 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdError(v21);
      return 3221225659LL;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v10;
    WdLogEvent5_WdError(v13);
    return (unsigned int)updated;
  }
}
