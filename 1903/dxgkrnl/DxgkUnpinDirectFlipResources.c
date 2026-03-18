/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C014FD70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0150098 (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGDEVICE *v14; // r14
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned int i; // esi
  unsigned int *v22; // rdx
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // [rsp+30h] [rbp-128h]
  struct DXGDEVICE *v40; // [rsp+38h] [rbp-120h] BYREF
  int v41; // [rsp+40h] [rbp-118h] BYREF
  __int64 v42; // [rsp+48h] [rbp-110h]
  char v43; // [rsp+50h] [rbp-108h]
  struct DXGDEVICE *v44; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v45[2]; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v46[4]; // [rsp+70h] [rbp-E8h]
  unsigned int v47; // [rsp+80h] [rbp-D8h]
  _BYTE v48[160]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = (_OWORD *)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2080);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2080LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v32 = WdLogNewEntry5_WdError(v8, v7, 0LL);
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_23;
  }
  v39 = *((_BYTE *)Current + 298) == 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v46 = *v3;
  v9 = *(_QWORD *)&v46[2];
  if ( !*(_QWORD *)&v46[2] || (v10 = v46[1]) == 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, Current);
    *(_QWORD *)(v38 + 24) = v46[0];
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
    goto LABEL_23;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v46[0], (struct _KTHREAD **)Current, &v44);
  v14 = v44;
  if ( !v44 )
  {
    v33 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v33 + 24) = v46[0];
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
LABEL_31:
    if ( v40 )
    {
LABEL_21:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    }
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v28);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v29, &EventProfilerExit, v30, v41);
    }
    return (unsigned int)v20;
  }
  if ( (*((_BYTE *)v44 + 1749) & 1) == 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v44);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v14, 2, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((__int64)v48, 0xFFFFFFFF, 0LL);
    v20 = v16;
    if ( v16 >= 0 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v22 = (unsigned int *)(v9 + 4LL * i);
        if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v47 = *v22;
        v23 = v47;
        v24 = DXGDEVICE::UnpinDirectFlipResource(v14, v47, v39, (struct COREDEVICEACCESS *)v48);
        v20 = v24;
        if ( v24 < 0 )
        {
          v37 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v37 + 24) = v23;
          *(_QWORD *)(v37 + 32) = v20;
          WdLogEvent5_WdWarning(v37);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
          if ( v45[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
          if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
          goto LABEL_23;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
      if ( v45[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
      if ( !v40 )
        goto LABEL_23;
      goto LABEL_21;
    }
    v36 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v36 + 24) = v14;
    *(_QWORD *)(v36 + 32) = v20;
    WdLogEvent5_WdWarning(v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    goto LABEL_31;
  }
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v11);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v41);
  return 0LL;
}
