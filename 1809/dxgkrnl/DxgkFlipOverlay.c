/*
 * XREFs of DxgkFlipOverlay @ 0x1C0220700
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
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
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C021EF38 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkFlipOverlay(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_FLIPOVERLAY *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  struct ADAPTER_RENDER **v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGOVERLAY *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v20; // r14d
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v28; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-B0h]
  char v30; // [rsp+30h] [rbp-A8h]
  _QWORD v31[2]; // [rsp+38h] [rbp-A0h] BYREF
  _D3DKMT_FLIPOVERLAY v32; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v33[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v34[24]; // [rsp+78h] [rbp-60h] BYREF
  DXGADAPTER *v35[9]; // [rsp+90h] [rbp-48h] BYREF
  struct DXGDEVICE *v36; // [rsp+E8h] [rbp+10h] BYREF
  DXGDEVICE *v37; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (_D3DKMT_FLIPOVERLAY *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2024;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2024);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2024);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v28);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_FLIPOVERLAY *)MmUserProbeAddress;
  v32 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v32.hDevice, (struct _KTHREAD **)Current, &v37);
  v8 = (struct ADAPTER_RENDER **)v37;
  if ( !v37 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v32.hDevice;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_25:
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_28;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v37);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, (struct _KTHREAD **)Current);
  v13 = (v32.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *((_DWORD *)Current + 62) )
    goto LABEL_17;
  v12 = *((_QWORD *)Current + 29);
  v10 = *(unsigned int *)(v12 + 16 * v13 + 8);
  v11 = (v32.hOverlay >> 25) & 0x60;
  if ( ((v32.hOverlay >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v13 + 8) & 0x60)
    || (v10 & 0x2000) != 0
    || (v10 & 0x1F) == 0 )
  {
    goto LABEL_17;
  }
  v10 &= 0x1Fu;
  if ( (_BYTE)v10 != 6 )
  {
    v14 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v14 + 24) = 316LL;
    WdLogEvent5_WdError(v14);
LABEL_17:
    v15 = 0LL;
    goto LABEL_18;
  }
  v15 = *(struct DXGOVERLAY **)(v12 + 16LL * (unsigned int)v13);
LABEL_18:
  if ( !v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v16[3] = v32.hOverlay;
    v16[4] = -1073741811LL;
    goto LABEL_23;
  }
  if ( v8 != *((struct ADAPTER_RENDER ***)v15 + 2) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v16[3] = v32.hOverlay;
    v16[4] = v32.hDevice;
    v16[5] = -1073741811LL;
LABEL_23:
    WdLogEvent5_WdWarning(v16);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    goto LABEL_25;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v35, v15);
  v20 = COREOVERLAYACCESS::AcquireShared(v35);
  if ( v20 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v8) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v24 + 24) = 877LL;
      WdLogEvent5_WdAssertion(v24);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v33, v8[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    v25 = DXGOVERLAY::FlipOverlay(v15, &v32);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v35);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v28);
    return v25;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v35);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v28);
    return (unsigned int)v20;
  }
}
