/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01143A0
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00DA660 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C012DF90 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1C0130CC0 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0134FC8 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EEFC0 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C021E760 (DxgkOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B8B0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0011C28 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00DC48C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        const GUID *a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rdi
  struct DXGSYNCOBJECT *v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  bool v15; // zf
  unsigned int hSyncObject; // edi
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // r14d
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // edx
  __int64 v35; // rcx
  PERESOURCE *Global; // rax
  __int64 v37; // r9
  __int64 v38; // r9
  int v39; // edx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // rcx
  const GUID *v48; // r8
  int v49; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+38h] [rbp-E0h]
  char v51; // [rsp+40h] [rbp-D8h]
  __int64 v52; // [rsp+48h] [rbp-D0h] BYREF
  int v53; // [rsp+50h] [rbp-C8h]
  _BYTE v54[24]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v55[24]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v56[24]; // [rsp+88h] [rbp-90h] BYREF
  char v57[8]; // [rsp+A0h] [rbp-78h] BYREF
  DXGADAPTER *v58; // [rsp+A8h] [rbp-70h] BYREF
  DXGADAPTER *v59; // [rsp+C8h] [rbp-50h] BYREF
  char v60; // [rsp+F0h] [rbp-28h]
  unsigned int v61; // [rsp+130h] [rbp+18h]
  __int64 v62; // [rsp+138h] [rbp+20h] BYREF

  v4 = a1;
  v49 = -1;
  v5 = 0LL;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2042);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2042);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    v15 = v51 == 0;
LABEL_40:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v49);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v61 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v61 = hSyncObject;
  }
  v17 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55, (struct _KTHREAD **)v9);
  v20 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v20 < *(_DWORD *)(v9 + 248)
    && (v19 = v20,
        v21 = *(_QWORD *)(v9 + 232),
        v18 = *(unsigned int *)(v21 + 16LL * v20 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60))
    && (v18 & 0x2000) == 0
    && (v18 & 0x1F) != 0
    && (v19 = 2LL * v20, v18 &= 0x1Fu, (_BYTE)v18 == 11) )
  {
    v22 = *(_QWORD *)(v21 + 16LL * v20);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v22 )
  {
    if ( (*(_BYTE *)(v22 + 92) & 2) == 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v22, v18, v19);
      *(_QWORD *)(v23 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v23);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v49);
      return 3221225506LL;
    }
    v17 = *(_QWORD *)(v22 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v17 + 64));
    hSyncObject = v61;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55);
  if ( !v17 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v56, (struct _KTHREAD **)v9);
    if ( v20 < *(_DWORD *)(v9 + 248) )
    {
      v29 = v20;
      v30 = *(_QWORD *)(v9 + 232);
      v27 = *(unsigned int *)(v30 + 16LL * v20 + 8);
      v28 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v20 + 8) & 0x60)
        && (v27 & 0x2000) == 0
        && (v27 & 0x1F) != 0 )
      {
        v29 = 2LL * v20;
        v27 &= 0x1Fu;
        if ( (_BYTE)v27 == 8 )
        {
          v5 = *(struct DXGSYNCOBJECT **)(v30 + 16LL * v20);
        }
        else
        {
          v31 = WdLogNewEntry5_WdError(v28);
          *(_QWORD *)(v31 + 24) = 316LL;
          WdLogEvent5_WdError(v31);
        }
      }
    }
    if ( !v5 )
    {
      v32 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v32 + 24) = hSyncObject;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      v15 = v51 == 0;
      goto LABEL_40;
    }
    if ( v20 < *(_DWORD *)(v9 + 248) )
    {
      v33 = *(_QWORD *)(v9 + 232);
      v34 = *(_DWORD *)(v33 + 16LL * v20 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v33 + 16LL * v20 + 8) & 0x60)
        && (v34 & 0x2000) == 0
        && (v34 & 0x1F) != 0 )
      {
        *(_DWORD *)(v33 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v35);
    DXGGLOBAL::DestroySyncObject(Global, v5, hSyncObject);
    goto LABEL_69;
  }
  v62 = v17;
  v52 = v17;
  v53 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, v17, 2, v37, 0);
  COREACCESS::AcquireShared(&v58);
  if ( v60 )
    COREACCESS::AcquireShared(&v59);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v54, (struct _KTHREAD **)v9);
  if ( v20 < *(_DWORD *)(v9 + 248) )
  {
    v38 = *(_QWORD *)(v9 + 232);
    v39 = *(_DWORD *)(v38 + 16LL * v20 + 8);
    if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v38 + 16LL * v20 + 8) & 0x60)
      && (v39 & 0x2000) == 0
      && (v39 & 0x1F) == 0xB )
    {
      v5 = *(struct DXGSYNCOBJECT **)(v38 + 16LL * v20);
    }
  }
  LOBYTE(v40) = EvaluateCurrentState((int **)&g_Feature_135565624_58219356_FeatureDescriptorDetails);
  if ( v40 )
  {
    if ( !v5 || *((_QWORD *)v5 + 2) != v17 )
      goto LABEL_60;
LABEL_62:
    if ( v20 < *(_DWORD *)(v9 + 248) )
    {
      v45 = *(_QWORD *)(v9 + 232);
      v46 = *(_DWORD *)(v45 + 16LL * v20 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v45 + 16LL * v20 + 8) & 0x60)
        && (v46 & 0x2000) == 0
        && (v46 & 0x1F) != 0 )
      {
        *(_DWORD *)(v45 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v5);
    ExFreePoolWithTag(v5, 0);
    goto LABEL_68;
  }
  if ( v5 )
    goto LABEL_62;
LABEL_60:
  v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
  *(_QWORD *)(v44 + 24) = hSyncObject;
  WdLogEvent5_WdWarning(v44);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
LABEL_68:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
LABEL_69:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v47, &EventProfilerExit, v48, v49);
  return 0LL;
}
