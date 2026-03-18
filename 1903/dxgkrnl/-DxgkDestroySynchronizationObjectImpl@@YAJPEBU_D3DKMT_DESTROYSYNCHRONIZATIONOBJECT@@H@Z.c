/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F3D3C
 * Callers:
 *     DxgkDestroySynchronizationObject @ 0x1C00F3D20 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F47D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C012F708 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C012FC50 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E9A0 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0252CA0 (DxgkOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0006EAC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007044 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000C164 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00F1F04 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        const GUID *a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  unsigned int hSyncObject; // ebx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  struct DXGSYNCOBJECT *v29; // r14
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  DXGDEVICESYNCOBJECT *v42; // r14
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // edx
  __int64 v46; // rcx
  const GUID *v47; // r8
  int v48; // [rsp+30h] [rbp-148h] BYREF
  __int64 v49; // [rsp+38h] [rbp-140h]
  char v50; // [rsp+40h] [rbp-138h]
  unsigned int v51; // [rsp+48h] [rbp-130h]
  __int64 v52; // [rsp+50h] [rbp-128h] BYREF
  __int64 v53; // [rsp+58h] [rbp-120h] BYREF
  int v54; // [rsp+60h] [rbp-118h]
  _BYTE v55[24]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v56[24]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v57[24]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v58[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v59[64]; // [rsp+B8h] [rbp-C0h] BYREF
  _BYTE v60[88]; // [rsp+F8h] [rbp-80h] BYREF

  v4 = a1;
  v48 = -1;
  v49 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v50 = 1;
    v48 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2042);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 2042LL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v8);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v10);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v48);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v51 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v51 = hSyncObject;
  }
  v15 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55, (struct _KTHREAD **)Current);
  v18 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)Current + 56)
    && (v17 = v18,
        v19 = *((_QWORD *)Current + 26),
        v16 = *(unsigned int *)(v19 + 16LL * v18 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60))
    && (v16 & 0x2000) == 0
    && (v16 & 0x1F) != 0
    && (v17 = 2LL * v18, v16 &= 0x1Fu, (_BYTE)v16 == 11) )
  {
    v20 = *(_QWORD *)(v19 + 16LL * v18);
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 92) & 2) == 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v20, v16, v17);
      *(_QWORD *)(v21 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v21);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v22);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v48);
      return 3221225506LL;
    }
    v15 = *(_QWORD *)(v20 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 64));
    hSyncObject = v51;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55);
  if ( !v15 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v56,
      (struct _KTHREAD **)Current);
    if ( v18 < *((_DWORD *)Current + 56) )
    {
      v27 = *((_QWORD *)Current + 26);
      v25 = *(unsigned int *)(v27 + 16LL * v18 + 8);
      v26 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v27 + 16LL * v18 + 8) & 0x60)
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        v25 &= 0x1Fu;
        if ( (_BYTE)v25 == 8 )
        {
          v29 = *(struct DXGSYNCOBJECT **)(v27 + 16LL * v18);
          goto LABEL_38;
        }
        v28 = WdLogNewEntry5_WdError(v26, v25, v27);
        *(_QWORD *)(v28 + 24) = 267LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_38:
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v30 + 24) = hSyncObject;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
      goto LABEL_7;
    }
    if ( v18 < *((_DWORD *)Current + 56) )
    {
      v31 = *((_QWORD *)Current + 26);
      v32 = *(_DWORD *)(v31 + 16LL * v18 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v18 + 8) & 0x60)
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        *(_DWORD *)(v31 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
    Global = DXGGLOBAL::GetGlobal(v34, v33);
    DXGGLOBAL::DestroySyncObject(Global, v29, hSyncObject);
    goto LABEL_65;
  }
  v52 = v15;
  v53 = v15;
  v54 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, v15, 2, v37, 0);
  COREACCESS::AcquireShared((__int64)v59, 0xFFFFFFFF, 0LL);
  if ( v60[72] )
    COREACCESS::AcquireShared((__int64)v60, 0xFFFFFFFF, 0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v57,
    (struct _KTHREAD **)Current);
  v40 = *((unsigned int *)Current + 56);
  if ( v18 < (unsigned int)v40
    && (v41 = *((_QWORD *)Current + 26),
        v38 = *(unsigned int *)(v41 + 16LL * v18 + 8),
        v39 = (hSyncObject >> 25) & 0x60,
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v41 + 16LL * v18 + 8) & 0x60))
    && (v38 & 0x2000) == 0
    && (v38 & 0x1F) != 0
    && (v38 &= 0x1Fu, (_BYTE)v38 == 11) )
  {
    v42 = *(DXGDEVICESYNCOBJECT **)(v41 + 16LL * v18);
  }
  else
  {
    v42 = 0LL;
  }
  if ( v42 )
  {
    if ( v18 < (unsigned int)v40 )
    {
      v44 = *((_QWORD *)Current + 26);
      v45 = *(_DWORD *)(v44 + 16LL * v18 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v44 + 16LL * v18 + 8) & 0x60)
        && (v45 & 0x2000) == 0
        && (v45 & 0x1F) != 0 )
      {
        *(_DWORD *)(v44 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57);
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v42);
    ExFreePoolWithTag(v42, 0);
  }
  else
  {
    v43 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v43 + 24) = hSyncObject;
    WdLogEvent5_WdWarning(v43);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v52);
LABEL_65:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v36);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v46, &EventProfilerExit, v47, v48);
  return 0LL;
}
