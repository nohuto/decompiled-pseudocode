/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02510CC
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C024FD74 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pqp @ 0x1C0041520 (McTemplateK0pqp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0235450 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  PVOID v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rax
  const GUID *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  PERESOURCE *Global; // rax
  __int64 v27; // rcx
  PERESOURCE *v28; // rax
  __int64 v29; // rcx
  int v30; // r14d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  struct DXGPROCESS *Current; // rsi
  unsigned int v36; // edi
  unsigned int v37; // ecx
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // rax
  bool v41; // zf
  PVOID *Object; // [rsp+20h] [rbp-40h]
  char v43; // [rsp+38h] [rbp-28h]
  __int64 v44; // [rsp+40h] [rbp-20h] BYREF
  struct DXGSYNCOBJECT *v45; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v46[8]; // [rsp+50h] [rbp-10h] BYREF
  char v47; // [rsp+58h] [rbp-8h]
  unsigned int v48; // [rsp+90h] [rbp+30h] BYREF
  PVOID v49; // [rsp+98h] [rbp+38h] BYREF

  if ( this[1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2038LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = 0;
  v9 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v49, 0LL);
  v11 = v9;
  if ( v9 < 0 )
    goto LABEL_4;
  v14 = v49;
  if ( v49 )
  {
    v15 = *((_QWORD *)v49 + 2);
    if ( v15 )
    {
      v16 = (__int64 *)(v15 + 128);
      v17 = 0LL;
      v18 = *v16;
      if ( (__int64 *)*v16 != v16 )
        v17 = *(const GUID **)(v18 - 40);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        LODWORD(Object) = (a2 - this[7]) / 96;
        McTemplateK0pqp(v18, (a2 - this[7]) / 96, v17, this, Object, v17);
      }
    }
  }
  ObfDereferenceObject(v14);
  CurrentProcess = PsGetCurrentProcess(v20, v19);
  v24 = PsGetCurrentProcess(v23, v22);
  v43 = 1;
  v25 = ObDuplicateObject(v24, a4, CurrentProcess, &v44, 0, 0, 6, v43);
  v11 = v25;
  if ( v25 < 0 )
  {
LABEL_4:
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = a4;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  else
  {
    *((_QWORD *)a3 + 3) = v44;
    *((_QWORD *)a3 + 2) = a4;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46);
    v28 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v27);
    v30 = DXGGLOBAL::OpenSyncObject(v28, *((_DWORD *)a2 + 7), &v45, &v48, 0LL);
    if ( v30 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v36 = v48;
      v37 = (v48 >> 6) & 0xFFFFFF;
      if ( v37 < *((_DWORD *)Current + 62) )
      {
        v38 = *((_QWORD *)Current + 29);
        v39 = *(_DWORD *)(v38 + 16LL * v37 + 8);
        if ( ((v48 >> 25) & 0x60) == (v39 & 0x60) && (v39 & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v38 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v40 = WdLogNewEntry5_WdAssertion((v48 >> 25) & 0x60);
            *(_QWORD *)(v40 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v40);
            v38 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v38 + 16 * (((unsigned __int64)v36 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v41 = v47 == 0;
      *((_DWORD *)a3 + 2) = v36;
      if ( !v41 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
      *(_BYTE *)a3 = 1;
    }
    else
    {
      v31 = WdLogNewEntry5_WdError(v29);
      v32 = *((unsigned int *)a2 + 7);
      v33 = v31;
      *(_QWORD *)(v31 + 24) = v32;
      *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v32, v34);
      WdLogEvent5_WdError(v33);
      if ( v47 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
    }
    return (unsigned int)v30;
  }
}
