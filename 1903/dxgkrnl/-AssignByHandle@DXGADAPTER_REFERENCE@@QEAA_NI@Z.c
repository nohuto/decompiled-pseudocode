/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C01EBF2C
 * Callers:
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C01F68EC (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205304 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C0234438 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, __int64 a2)
{
  __int64 v3; // rsi
  DXGADAPTER *v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  DXGADAPTER *v18; // [rsp+30h] [rbp-18h] BYREF

  v3 = (unsigned int)a2;
  v4 = *this;
  if ( v4 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v4);
    *this = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4, a2);
  if ( Current )
  {
    v13 = 1;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v18, (unsigned int)v3, Current, this, 1);
    if ( *this )
    {
      _InterlockedAdd64((volatile signed __int64 *)*this + 3, 1uLL);
      this[1] = (struct DXGADAPTER *)-1LL;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v3;
      WdLogEvent5_WdWarning(v17);
      v13 = 0;
    }
    if ( v18 )
      DXGADAPTER::ReleaseReferenceNoTracking(v18);
    return v13;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    return 0;
  }
}
