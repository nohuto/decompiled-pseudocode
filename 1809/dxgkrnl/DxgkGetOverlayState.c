/*
 * XREFs of DxgkGetOverlayState @ 0x1C0220BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0020CD8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0021FC8 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C003CA04 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C003CA38 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C003CA7C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C021F270 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rax
  _D3DKMT_GETOVERLAYSTATE *v7; // rax
  __int64 hDevice; // r14
  __int64 v9; // rcx
  struct ADAPTER_RENDER **v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  struct DXGOVERLAY *v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // r14d
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  int OverlayState; // edi
  __int64 v29; // rcx
  const GUID *v30; // r8
  _BYTE *v31; // rdx
  int v32; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+28h] [rbp-A0h]
  char v34; // [rsp+30h] [rbp-98h]
  __int64 v35; // [rsp+38h] [rbp-90h] BYREF
  char v36; // [rsp+40h] [rbp-88h]
  _D3DKMT_GETOVERLAYSTATE v37; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v38[16]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v39[24]; // [rsp+68h] [rbp-60h] BYREF
  DXGADAPTER *v40[6]; // [rsp+80h] [rbp-48h] BYREF
  struct DXGDEVICE *v41; // [rsp+D8h] [rbp+10h] BYREF
  DXGDEVICE *v42; // [rsp+E0h] [rbp+18h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2057);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2057);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_29:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v32);
    }
    return 3221225485LL;
  }
  v7 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v37 = *v7;
  hDevice = v37.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, v37.hDevice, (struct _KTHREAD **)Current, &v42);
  v10 = (struct ADAPTER_RENDER **)v42;
  if ( !v42 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = hDevice;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_26:
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    goto LABEL_29;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v35, v42);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39, (struct _KTHREAD **)Current);
  v14 = (v37.hOverlay >> 6) & 0xFFFFFF;
  v15 = v37.hOverlay >> 30;
  if ( (unsigned int)v14 >= *((_DWORD *)Current + 62) )
    goto LABEL_17;
  v12 = (unsigned int)v14;
  v16 = *((_QWORD *)Current + 29);
  v13 = *(unsigned int *)(v16 + 16 * v14 + 8);
  if ( (_DWORD)v15 != ((*(_DWORD *)(v16 + 16 * v14 + 8) >> 5) & 3) || (v13 & 0x2000) != 0 || (v13 & 0x1F) == 0 )
    goto LABEL_17;
  v12 = 2LL * (unsigned int)v14;
  v13 &= 0x1Fu;
  if ( (_BYTE)v13 != 6 )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
LABEL_17:
    v18 = 0LL;
    goto LABEL_18;
  }
  v18 = *(struct DXGOVERLAY **)(v16 + 16LL * (unsigned int)v14);
LABEL_18:
  if ( !v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15);
    v19[4] = -1073741811LL;
LABEL_23:
    v19[3] = v37.hOverlay;
    WdLogEvent5_WdWarning(v19);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39);
    if ( v35 && v36 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v35 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_26;
  }
  if ( v10 != *((struct ADAPTER_RENDER ***)v18 + 2) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15);
    v19[4] = hDevice;
    v19[5] = -1073741811LL;
    goto LABEL_23;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v40, v18);
  v23 = COREOVERLAYACCESS::AcquireShared(v40);
  if ( v23 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v10) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v27 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v27);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v38, v10[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    OverlayState = DXGOVERLAY::GetOverlayState(v18, &v37);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
    if ( OverlayState >= 0 )
    {
      v31 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v31 = (_BYTE *)MmUserProbeAddress;
      *v31 = v37.OverlayEnabled;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v40);
    if ( v35 && v36 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v35 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v32);
    return (unsigned int)OverlayState;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v40);
    if ( v35 && v36 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v35 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v32);
    return (unsigned int)v23;
  }
}
