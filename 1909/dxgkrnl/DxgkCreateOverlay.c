/*
 * XREFs of DxgkCreateOverlay @ 0x1C0254700
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0023A34 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C004343C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C022E2A8 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  _D3DKMT_CREATEOVERLAY *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct ADAPTER_RENDER **v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  size_t PrivateDriverDataSize; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  PVOID v33; // r9
  _QWORD *v34; // rax
  char *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _DWORD *v39; // rdx
  struct DXGDEVICE *v40; // [rsp+30h] [rbp-168h] BYREF
  DXGDEVICE *v41; // [rsp+38h] [rbp-160h] BYREF
  int v42; // [rsp+40h] [rbp-158h] BYREF
  __int64 v43; // [rsp+48h] [rbp-150h]
  char v44; // [rsp+50h] [rbp-148h]
  _QWORD v45[2]; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v46[24]; // [rsp+68h] [rbp-130h] BYREF
  _D3DKMT_CREATEOVERLAY v47; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v48[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2022);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2022LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v12);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v42);
    }
    return (unsigned int)v11;
  }
  v16 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v47 = *v16;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v47.hDevice, (struct _KTHREAD **)Current, &v41);
  v20 = (struct ADAPTER_RENDER **)v41;
  if ( !v41 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v47.hDevice;
    v11 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_15:
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v20, 0, v22, 0);
  v23 = COREDEVICEACCESS::AcquireShared((__int64)v48, 0xFFFFFFFF, 0LL);
  if ( v23 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 208LL))() )
    {
      v28 = WdLogNewEntry5_WdEvent(v27);
      v11 = -1073741790;
      *(_QWORD *)(v28 + 24) = -1073741790LL;
      WdLogEvent5_WdEvent(v28);
      goto LABEL_30;
    }
    if ( v47.OverlayInfo.PrivateDriverDataSize && v47.OverlayInfo.pPrivateDriverData )
    {
      PrivateDriverDataSize = v47.OverlayInfo.PrivateDriverDataSize;
      v33 = operator new[](v47.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v47.OverlayInfo.pPrivateDriverData = v33;
      if ( !v33 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
        v34[3] = v20;
        v34[4] = PrivateDriverDataSize;
        v11 = -1073741801;
        v34[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v34);
LABEL_30:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
        if ( v45[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
        goto LABEL_15;
      }
      v35 = *(char **)(a1 + 48);
      if ( &v35[PrivateDriverDataSize] < v35 || (unsigned __int64)&v35[PrivateDriverDataSize] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v33, v35, PrivateDriverDataSize);
    }
    else
    {
      v47.OverlayInfo.PrivateDriverDataSize = 0;
      v47.OverlayInfo.pPrivateDriverData = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v20) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v38 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v38);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v46, v20[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
    v11 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v20, &v47);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46);
    operator delete[](v47.OverlayInfo.pPrivateDriverData);
    v47.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v11 >= 0 )
    {
      v39 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v39 = (_DWORD *)MmUserProbeAddress;
      *v39 = v47.hOverlay;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v46);
    goto LABEL_30;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  if ( v45[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v24);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v42);
  return (unsigned int)v23;
}
