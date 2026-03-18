/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C013F510
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C013F808 (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rcx
  DXGDEVICE *v10; // r14
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned int i; // esi
  unsigned int *v18; // rdx
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  int v36; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C0h]
  char v38; // [rsp+40h] [rbp-B8h]
  _QWORD v39[2]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v40[4]; // [rsp+58h] [rbp-A0h]
  struct DXGDEVICE *v41; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v42[136]; // [rsp+70h] [rbp-88h] BYREF
  bool v43; // [rsp+108h] [rbp+10h]
  struct DXGDEVICE *v44; // [rsp+118h] [rbp+20h] BYREF

  v3 = (_OWORD *)a1;
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2080);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2080);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_51;
  }
  v43 = *((_BYTE *)Current + 322) == 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v40 = *v3;
  v7 = *(_QWORD *)&v40[2];
  if ( !*(_QWORD *)&v40[2] || (v8 = v40[1]) == 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, Current);
    *(_QWORD *)(v33 + 24) = v40[0];
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
LABEL_51:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v34, &EventProfilerExit, v35, v36);
    return 3221225485LL;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v40[0], (struct _KTHREAD **)Current, &v41);
  v10 = v41;
  if ( !v41 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v40[0];
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    goto LABEL_51;
  }
  if ( (*((_BYTE *)v41 + 1749) & 1) == 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39, v41);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v10, 2, v11, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
    v16 = v12;
    if ( v12 < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v31 + 24) = v10;
      *(_QWORD *)(v31 + 32) = v16;
      WdLogEvent5_WdWarning(v31);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      if ( v39[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
      if ( !v44 )
        goto LABEL_23;
    }
    else
    {
      for ( i = 0; i < v8; ++i )
      {
        v18 = (unsigned int *)(v7 + 4LL * i);
        if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v19 = *v18;
        v20 = DXGDEVICE::UnpinDirectFlipResource(v10, v19, v43, (struct COREDEVICEACCESS *)v42);
        v16 = v20;
        if ( v20 < 0 )
        {
          v32 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v32 + 24) = v19;
          *(_QWORD *)(v32 + 32) = v16;
          WdLogEvent5_WdWarning(v32);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
          if ( v39[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
          if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
          goto LABEL_23;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      if ( v39[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
      if ( !v44 )
        goto LABEL_23;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v36);
    }
    return (unsigned int)v16;
  }
  if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v36);
  return 0LL;
}
