/*
 * XREFs of DxgkGetOverlayState @ 0x1C0255100
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00239E4 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C002492C (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C004325C (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0043290 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00432DC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C02537B4 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  int OverlayState; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  _D3DKMT_GETOVERLAYSTATE *v16; // rax
  __int64 hDevice; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct ADAPTER_RENDER **v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rax
  struct DXGOVERLAY *v29; // rbx
  _QWORD *v30; // rax
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  _BYTE *v38; // rdx
  struct DXGDEVICE *v39; // [rsp+20h] [rbp-E8h] BYREF
  int v40; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-D8h]
  char v42; // [rsp+38h] [rbp-D0h]
  DXGDEVICE *v43; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  char v45; // [rsp+50h] [rbp-B8h]
  _D3DKMT_GETOVERLAYSTATE v46; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v47[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v48[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v49[80]; // [rsp+90h] [rbp-78h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2057);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2057LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    OverlayState = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v12);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v40);
    }
    return (unsigned int)OverlayState;
  }
  v16 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v46 = *v16;
  hDevice = v46.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v46.hDevice, (struct _KTHREAD **)Current, &v43);
  v21 = (struct ADAPTER_RENDER **)v43;
  if ( !v43 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = hDevice;
    OverlayState = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_15:
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v44, v43);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48, (struct _KTHREAD **)Current);
  v25 = (v46.hOverlay >> 6) & 0xFFFFFF;
  v26 = v46.hOverlay >> 30;
  if ( (unsigned int)v25 >= *((_DWORD *)Current + 56) )
    goto LABEL_24;
  v23 = (unsigned int)v25;
  v27 = *((_QWORD *)Current + 26);
  v24 = *(unsigned int *)(v27 + 16 * v25 + 8);
  if ( (_DWORD)v26 != ((*(_DWORD *)(v27 + 16 * v25 + 8) >> 5) & 3) || (v24 & 0x2000) != 0 || (v24 & 0x1F) == 0 )
    goto LABEL_24;
  v23 = 2LL * (unsigned int)v25;
  v24 &= 0x1Fu;
  if ( (_BYTE)v24 != 6 )
  {
    v28 = WdLogNewEntry5_WdError(v24, v23, v26);
    *(_QWORD *)(v28 + 24) = 267LL;
    WdLogEvent5_WdError(v28);
LABEL_24:
    v29 = 0LL;
    goto LABEL_25;
  }
  v29 = *(struct DXGOVERLAY **)(v27 + 16LL * (unsigned int)v25);
LABEL_25:
  if ( !v29 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v26);
    OverlayState = -1073741811;
    v30[4] = -1073741811LL;
LABEL_27:
    v30[3] = v46.hOverlay;
    WdLogEvent5_WdWarning(v30);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48);
LABEL_28:
    if ( v44 && v45 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_15;
  }
  if ( v21 != *((struct ADAPTER_RENDER ***)v29 + 2) )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v26);
    v30[4] = hDevice;
    OverlayState = -1073741811;
    v30[5] = -1073741811LL;
    goto LABEL_27;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v49, v29);
  v31 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v49);
  if ( v31 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v21) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v37 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v37);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v47, v21[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    OverlayState = DXGOVERLAY::GetOverlayState(v29, &v46);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    if ( OverlayState >= 0 )
    {
      v38 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v38 = (_BYTE *)MmUserProbeAddress;
      *v38 = v46.OverlayEnabled;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v49);
    goto LABEL_28;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v49);
  if ( v44 && v45 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v32);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v33, &EventProfilerExit, v34, v40);
  return (unsigned int)v31;
}
