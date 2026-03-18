/*
 * XREFs of DxgkCreateOverlay @ 0x1C021FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0020CD8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C003CA7C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C01FD994 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  _D3DKMT_CREATEOVERLAY *v7; // rax
  __int64 v8; // rcx
  struct ADAPTER_RENDER **v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // r9
  int v15; // r14d
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edi
  __int64 v22; // rcx
  const GUID *v23; // r8
  size_t PrivateDriverDataSize; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID v28; // r9
  _QWORD *v29; // rax
  char *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rdx
  int v34; // [rsp+30h] [rbp-118h] BYREF
  __int64 v35; // [rsp+38h] [rbp-110h]
  char v36; // [rsp+40h] [rbp-108h]
  _QWORD v37[2]; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v38[24]; // [rsp+58h] [rbp-F0h] BYREF
  _D3DKMT_CREATEOVERLAY v39; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v40[136]; // [rsp+C0h] [rbp-88h] BYREF
  struct DXGDEVICE *v41; // [rsp+158h] [rbp+10h] BYREF
  DXGDEVICE *v42; // [rsp+160h] [rbp+18h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2022);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2022);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v34);
    }
    return 3221225485LL;
  }
  v7 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v39 = *v7;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, v39.hDevice, (struct _KTHREAD **)Current, &v42);
  v9 = (struct ADAPTER_RENDER **)v42;
  if ( !v42 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v39.hDevice;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v42);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v9, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40);
  if ( v15 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v37[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v34);
    return (unsigned int)v15;
  }
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 13) + 208LL))() )
  {
    if ( v39.OverlayInfo.PrivateDriverDataSize && v39.OverlayInfo.pPrivateDriverData )
    {
      PrivateDriverDataSize = v39.OverlayInfo.PrivateDriverDataSize;
      v28 = operator new(v39.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v39.OverlayInfo.pPrivateDriverData = v28;
      if ( !v28 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v29[3] = v9;
        v29[4] = PrivateDriverDataSize;
        v21 = -1073741801;
        v29[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v29);
        goto LABEL_29;
      }
      v30 = *(char **)(a1 + 48);
      if ( &v30[PrivateDriverDataSize] < v30 || (unsigned __int64)&v30[PrivateDriverDataSize] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v30, PrivateDriverDataSize);
    }
    else
    {
      v39.OverlayInfo.PrivateDriverDataSize = 0;
      v39.OverlayInfo.pPrivateDriverData = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v9) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v32 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v32);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v38, v9[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    v21 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v9, &v39);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
    operator delete[](v39.OverlayInfo.pPrivateDriverData);
    v39.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v21 >= 0 )
    {
      v33 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      *v33 = v39.hOverlay;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
    goto LABEL_29;
  }
  v20 = WdLogNewEntry5_WdEvent(v19, v18);
  v21 = -1073741790;
  *(_QWORD *)(v20 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v20);
LABEL_29:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
  if ( v37[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v34);
  return (unsigned int)v21;
}
