/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02513E4
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C024FB44 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0250F90 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C00410FC (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0235450 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0250590 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
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
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  PERESOURCE *Global; // rax
  __int64 v25; // rcx
  PERESOURCE *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v33; // r14d
  unsigned int v34; // ecx
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  bool v38; // zf
  struct DXGSYNCOBJECT *v39; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v40[8]; // [rsp+48h] [rbp-50h] BYREF
  char v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+A0h] [rbp+8h]
  unsigned int v43; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2135LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v11 = v9 == 0 ? 0x30 : 0;
  v12 = *(__int64 *)((char *)this + v11 + 104);
  if ( !v12 )
    return 3221225558LL;
  v14 = 32LL * v9;
  v42 = 32LL * (a3 == 0);
  LOBYTE(v10) = -(v9 == 0);
  CurrentProcess = PsGetCurrentProcess(v10, v11);
  v16 = ObDuplicateObject(
          v12,
          *(_QWORD *)((char *)a2 + v14 + 56),
          CurrentProcess,
          (char *)a2 + v42 + 56,
          *((_DWORD *)this + 16),
          0,
          4,
          1);
  v18 = v16;
  if ( v16 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v42 + 56);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40);
    v26 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25);
    LODWORD(v18) = DXGGLOBAL::OpenSyncObject(v26, *((_DWORD *)a2 + 7), &v39, &v43, 0LL);
    if ( (int)v18 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v33 = v43;
      v34 = (v43 >> 6) & 0xFFFFFF;
      if ( v34 < *((_DWORD *)Current + 62) )
      {
        v35 = *((_QWORD *)Current + 29);
        if ( ((v43 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x60)
          && (*(_DWORD *)(v35 + 16LL * v34 + 8) & 0x1F) != 0 )
        {
          v36 = 2 * (((unsigned __int64)v43 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v35 + 16 * (((unsigned __int64)v43 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v37 = WdLogNewEntry5_WdAssertion((v43 >> 25) & 0x60);
            *(_QWORD *)(v37 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v37);
            v35 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v35 + 8 * v36 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v38 = v41 == 0;
      *(_DWORD *)((char *)a2 + v42 + 40) = v33;
      if ( !v38 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
      *((_BYTE *)a2 + v42 + 32) = 1;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v27);
      v29 = *((unsigned int *)a2 + 7);
      v30 = v28;
      *(_QWORD *)(v28 + 24) = v29;
      *(_QWORD *)(v28 + 32) = PsGetCurrentProcess(v29, v31);
      WdLogEvent5_WdError(v30);
      if ( v41 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v17);
    v20 = *(_QWORD *)((char *)a2 + v14 + 56);
    v21 = v19;
    *(_QWORD *)(v19 + 24) = v20;
    *(_QWORD *)(v19 + 32) = v12;
    v23 = PsGetCurrentProcess(v20, v22);
    *(_QWORD *)(v21 + 48) = v18;
    *(_QWORD *)(v21 + 40) = v23;
    WdLogEvent5_WdError(v21);
  }
  if ( (int)v18 < 0 )
    DXGSWAPCHAIN::DestroySwapchainLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 136LL : 88LL)));
  return (unsigned int)v18;
}
