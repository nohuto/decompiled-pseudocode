/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00DEF20
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00DEF00 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C02377B0 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0235450 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  ULONG64 v7; // rcx
  __int64 v8; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v15; // rax
  D3DKMT_HANDLE hSharedHandle; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  PERESOURCE *v23; // rbx
  __int64 v24; // rcx
  DXGGLOBAL *v25; // rax
  ULONG64 v26; // rcx
  const GUID *v27; // r8
  int v28; // r14d
  _DWORD *p_hSyncObject; // rdx
  unsigned __int64 v30; // rbx
  struct DXGSYNCOBJECT *v31; // r15
  PERESOURCE *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  struct DXGADAPTERSYNCOBJECT *v41; // [rsp+38h] [rbp-60h] BYREF
  PERESOURCE *v42; // [rsp+40h] [rbp-58h] BYREF
  char v43; // [rsp+48h] [rbp-50h]
  int v44; // [rsp+50h] [rbp-48h] BYREF
  __int64 v45; // [rsp+58h] [rbp-40h]
  char v46; // [rsp+60h] [rbp-38h]
  unsigned int v47; // [rsp+B0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v48; // [rsp+B8h] [rbp+20h] BYREF

  v44 = -1;
  v45 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v46 = 1;
    v44 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2050);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2050);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v10 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v10;
      }
    }
  }
  if ( v8 )
  {
    if ( a2 )
    {
      v7 = MmUserProbeAddress;
      v15 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v15 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v15->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v48 = 0LL;
    v41 = 0LL;
    v47 = 0;
    Global = DXGGLOBAL::GetGlobal(v7);
    v42 = (PERESOURCE *)Global;
    v43 = 0;
    if ( !Global )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = 2306LL;
      WdLogEvent5_WdAssertion(v19);
      Global = (struct DXGGLOBAL *)v42;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v21 + 24) = 2311LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( v43 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
      v22[3] = 275LL;
      v22[4] = 4LL;
      v22[5] = &v42;
      v22[6] = 0LL;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    v23 = v42;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v23[43], 1u);
    v43 = 1;
    v25 = DXGGLOBAL::GetGlobal(v24);
    v28 = DXGGLOBAL::OpenSyncObject(v25, hSharedHandle, &v48, &v47, &v41);
    if ( v43 )
    {
      v43 = 0;
      ExReleaseResourceLite(v42[43]);
      KeLeaveCriticalRegion();
    }
    if ( v28 < 0 )
    {
      v30 = v47;
    }
    else if ( a2 )
    {
      p_hSyncObject = &a1->hSyncObject;
      v26 = MmUserProbeAddress;
      if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
        p_hSyncObject = (_DWORD *)MmUserProbeAddress;
      v30 = v47;
      *p_hSyncObject = v47;
    }
    else
    {
      v30 = v47;
      a1->hSyncObject = v47;
    }
    if ( v28 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v33 = v41 ? *((_QWORD *)v41 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp(v26, &EventOpenSyncObject, v27, v33, (unsigned int)v30, 0LL, v8);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 208));
      v34 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *(_DWORD *)(v8 + 248) )
      {
        v35 = *(_QWORD *)(v8 + 232);
        v36 = ((unsigned int)v30 >> 25) & 0x60;
        if ( (((unsigned int)v30 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
          && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0x1F) != 0 )
        {
          v37 = 2 * ((v30 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v35 + 8 * v37 + 8) & 0x2000) == 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v36);
            *(_QWORD *)(v38 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v38);
            v35 = *(_QWORD *)(v8 + 232);
          }
          *(_DWORD *)(v35 + 8 * v37 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v8 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v31 = v48;
      if ( v48 )
      {
        v32 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v26);
        DXGGLOBAL::DestroySyncObject(v32, v31, v30);
      }
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v44);
    return (unsigned int)v28;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v44);
    }
    return 3221225485LL;
  }
}
