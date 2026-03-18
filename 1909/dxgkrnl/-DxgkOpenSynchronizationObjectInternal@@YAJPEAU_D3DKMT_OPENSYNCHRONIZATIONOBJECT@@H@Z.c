/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0153238
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0153220 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C026C710 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0153448 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hSharedHandle; // esi
  PERESOURCE *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *v15; // rax
  __int64 v16; // rdx
  ULONG64 v17; // rcx
  int v18; // esi
  const GUID *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v32; // rax
  _DWORD *p_hSyncObject; // rdx
  PERESOURCE *v34; // rax
  struct DXGADAPTERSYNCOBJECT *v35[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+50h] [rbp-38h] BYREF
  __int64 v38; // [rsp+58h] [rbp-30h]
  char v39; // [rsp+60h] [rbp-28h]
  unsigned int v40; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v41; // [rsp+A8h] [rbp+20h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2050);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2050LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v35[1] = Current;
  if ( Current )
  {
    if ( a2 )
    {
      v8 = MmUserProbeAddress;
      v32 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v32 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v32->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v41 = 0LL;
    v35[0] = 0LL;
    v40 = 0;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36);
    v15 = DXGGLOBAL::GetGlobal(v14, v13);
    v18 = DXGGLOBAL::OpenSyncObject(v15, hSharedHandle, &v41, &v40, v35);
    if ( v36[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
    if ( v18 < 0 )
    {
      if ( v41 )
      {
        v34 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17, v16);
        DXGGLOBAL::DestroySyncObject(v34, v41, v40);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        v17 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        *p_hSyncObject = v40;
      }
      else
      {
        a1->hSyncObject = v40;
      }
      if ( bTracingEnabled )
      {
        v20 = v35[0] ? *((_QWORD *)v35[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp(v17, &EventOpenSyncObject, v19, v20, v40, 0LL);
      }
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
      v21 = (v40 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *((_DWORD *)Current + 56) )
      {
        v22 = *((_QWORD *)Current + 26);
        if ( ((v40 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16 * v21 + 8) & 0x1F) != 0 )
        {
          v23 = 2 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v22 + 16 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v24 = WdLogNewEntry5_WdAssertion((v40 >> 25) & 0x60, v22);
            *(_QWORD *)(v24 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v24);
            v22 = *((_QWORD *)Current + 26);
          }
          *(_DWORD *)(v22 + 8 * v23 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v16);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v37);
    }
    return (unsigned int)v18;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v29);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v37);
    return 3221225485LL;
  }
}
