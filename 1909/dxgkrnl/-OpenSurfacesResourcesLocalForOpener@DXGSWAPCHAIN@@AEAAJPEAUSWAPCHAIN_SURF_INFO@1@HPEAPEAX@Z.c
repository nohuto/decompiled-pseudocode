/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02874D4
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0285BAC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0287080 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C00480A0 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0153448 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0286684 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v14; // r15
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  PERESOURCE *Global; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v38; // r14d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  bool v43; // zf
  struct DXGSYNCOBJECT *v44; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v45[8]; // [rsp+48h] [rbp-50h] BYREF
  char v46; // [rsp+50h] [rbp-48h]
  __int64 v47; // [rsp+A0h] [rbp+8h]
  unsigned int v48; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2165LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v11 = v9 == 0 ? 0x30 : 0;
  v12 = *(__int64 *)((char *)this + v11 + 104);
  if ( !v12 )
    return 3221225558LL;
  v14 = 32LL * v9;
  v47 = 32LL * (a3 == 0);
  LOBYTE(v10) = -(v9 == 0);
  CurrentProcess = PsGetCurrentProcess(v10, v11);
  v16 = ObDuplicateObject(
          v12,
          *(_QWORD *)((char *)a2 + v14 + 72),
          CurrentProcess,
          (char *)a2 + v47 + 72,
          *((_DWORD *)this + 16),
          0,
          4,
          1);
  v20 = v16;
  if ( v16 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v47 + 72);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18, v17);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v45, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v45);
    v29 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28, v27);
    LODWORD(v20) = DXGGLOBAL::OpenSyncObject(v29, *((unsigned int *)a2 + 7), &v44, &v48, 0LL);
    if ( (int)v20 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v31, v30);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
      v38 = v48;
      v39 = (v48 >> 6) & 0xFFFFFF;
      if ( v39 < *((_DWORD *)Current + 56) )
      {
        v40 = *((_QWORD *)Current + 26);
        if ( ((v48 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0x60)
          && (*(_DWORD *)(v40 + 16LL * v39 + 8) & 0x1F) != 0 )
        {
          v41 = 2 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v40 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion((v48 >> 25) & 0x60, v40);
            *(_QWORD *)(v42 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v42);
            v40 = *((_QWORD *)Current + 26);
          }
          *(_DWORD *)(v40 + 8 * v41 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
      v43 = v46 == 0;
      *(_DWORD *)((char *)a2 + v47 + 56) = v38;
      if ( !v43 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
      *((_BYTE *)a2 + v47 + 48) = 1;
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(v31, v30, v32);
      v34 = *((unsigned int *)a2 + 7);
      v35 = v33;
      *(_QWORD *)(v33 + 24) = v34;
      *(_QWORD *)(v33 + 32) = PsGetCurrentProcess(v34, v36);
      WdLogEvent5_WdError(v35);
      if ( v46 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v18, v17, v19);
    v22 = *(_QWORD *)((char *)a2 + v14 + 72);
    v23 = v21;
    *(_QWORD *)(v21 + 24) = v22;
    *(_QWORD *)(v21 + 32) = v12;
    v25 = PsGetCurrentProcess(v22, v24);
    *(_QWORD *)(v23 + 48) = v20;
    *(_QWORD *)(v23 + 40) = v25;
    WdLogEvent5_WdError(v23);
  }
  if ( (int)v20 < 0 )
    DXGSWAPCHAIN::DestroySwapchainLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 136LL : 88LL)));
  return (unsigned int)v20;
}
