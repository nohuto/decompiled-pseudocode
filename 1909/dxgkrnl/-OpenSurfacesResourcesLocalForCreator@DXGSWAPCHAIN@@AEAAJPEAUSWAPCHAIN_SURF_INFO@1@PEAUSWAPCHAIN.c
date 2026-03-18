/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02871BC
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0285DDC (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pqp @ 0x1C00484C4 (McTemplateK0pqp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0153448 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  PVOID v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rax
  const GUID *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  PERESOURCE *Global; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r14d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  struct DXGPROCESS *Current; // rsi
  unsigned int v41; // edi
  unsigned int v42; // ecx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rax
  bool v46; // zf
  PVOID *Object; // [rsp+20h] [rbp-40h]
  char v48; // [rsp+38h] [rbp-28h]
  __int64 v49; // [rsp+40h] [rbp-20h] BYREF
  struct DXGSYNCOBJECT *v50; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v51[8]; // [rsp+50h] [rbp-10h] BYREF
  char v52; // [rsp+58h] [rbp-8h]
  unsigned int v53; // [rsp+90h] [rbp+30h] BYREF
  PVOID v54; // [rsp+98h] [rbp+38h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2068LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = 0;
  v9 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v54, 0LL);
  v13 = v9;
  if ( v9 < 0 )
    goto LABEL_4;
  v16 = v54;
  if ( v54 )
  {
    v17 = *((_QWORD *)v54 + 2);
    if ( v17 )
    {
      v18 = (__int64 *)(v17 + 128);
      v19 = 0LL;
      v20 = *v18;
      if ( (__int64 *)*v18 != v18 )
        v19 = *(const GUID **)(v20 - 40);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        LODWORD(Object) = (a2 - this[7]) / 112;
        McTemplateK0pqp(v20, (a2 - this[7]) / 112, v19, this, Object, v19);
      }
    }
  }
  ObfDereferenceObject(v16);
  CurrentProcess = PsGetCurrentProcess(v22, v21);
  v26 = PsGetCurrentProcess(v25, v24);
  v48 = 1;
  v27 = ObDuplicateObject(v26, a4, CurrentProcess, &v49, 0, 0, 6, v48);
  v13 = v27;
  if ( v27 < 0 )
  {
LABEL_4:
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = a4;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  else
  {
    *((_QWORD *)a3 + 3) = v49;
    *((_QWORD *)a3 + 2) = a4;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v51, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v51);
    v31 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v30, v29);
    v35 = DXGGLOBAL::OpenSyncObject(v31, *((unsigned int *)a2 + 7), &v50, &v53, 0LL);
    if ( v35 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v33, v32);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
      v41 = v53;
      v42 = (v53 >> 6) & 0xFFFFFF;
      if ( v42 < *((_DWORD *)Current + 56) )
      {
        v43 = *((_QWORD *)Current + 26);
        v44 = *(_DWORD *)(v43 + 16LL * v42 + 8);
        if ( ((v53 >> 25) & 0x60) == (v44 & 0x60) && (v44 & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v43 + 16 * (((unsigned __int64)v53 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v45 = WdLogNewEntry5_WdAssertion((v53 >> 25) & 0x60, v43);
            *(_QWORD *)(v45 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v45);
            v43 = *((_QWORD *)Current + 26);
          }
          *(_DWORD *)(v43 + 16 * (((unsigned __int64)v41 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
      v46 = v52 == 0;
      *((_DWORD *)a3 + 2) = v41;
      if ( !v46 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
      *(_BYTE *)a3 = 1;
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v33, v32, v34);
      v37 = *((unsigned int *)a2 + 7);
      v38 = v36;
      *(_QWORD *)(v36 + 24) = v37;
      *(_QWORD *)(v36 + 32) = PsGetCurrentProcess(v37, v39);
      WdLogEvent5_WdError(v38);
      if ( v52 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
    }
    return (unsigned int)v35;
  }
}
