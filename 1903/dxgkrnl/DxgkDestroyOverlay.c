/*
 * XREFs of DxgkDestroyOverlay @ 0x1C02546C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00239E4 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00432DC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C022DE84 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, const GUID *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGDEVICE *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  DXGDEVICE *v30; // r12
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // edx
  struct DXGDEVICE *v37; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v38[2]; // [rsp+28h] [rbp-D0h]
  int v39; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C0h]
  char v41; // [rsp+40h] [rbp-B8h]
  DXGDEVICE *v42; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v44[16]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v45[32]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v46[64]; // [rsp+90h] [rbp-68h] BYREF

  v3 = (_QWORD *)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2025LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v11);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v39);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v38 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v38[0], (struct _KTHREAD **)Current, &v42);
  v18 = v42;
  if ( !v42 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v38[0];
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    if ( !v37 )
      goto LABEL_7;
LABEL_15:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43, v42);
  COREACCESS::COREACCESS((COREACCESS *)v46, *(struct DXGADAPTER *const *)(*((_QWORD *)v18 + 2) + 16LL));
  COREACCESS::AcquireShared((__int64)v46, 0xFFFFFFFF, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 176LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_23;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v45,
    (struct _KTHREAD **)Current);
  v26 = (v38[1] >> 6) & 0xFFFFFF;
  if ( v26 < *((_DWORD *)Current + 56) )
  {
    v25 = *((_QWORD *)Current + 26);
    v23 = *(unsigned int *)(v25 + 16LL * v26 + 8);
    v24 = (v38[1] >> 25) & 0x60;
    if ( ((v38[1] >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v26 + 8) & 0x60)
      && (v23 & 0x2000) == 0
      && (v23 & 0x1F) != 0 )
    {
      v23 &= 0x1Fu;
      if ( (_BYTE)v23 == 6 )
      {
        v28 = *(_QWORD *)(v25 + 16LL * v26);
        goto LABEL_34;
      }
      v27 = WdLogNewEntry5_WdError(v24, v23, v25);
      *(_QWORD *)(v27 + 24) = 267LL;
      WdLogEvent5_WdError(v27);
    }
  }
  v28 = 0LL;
LABEL_34:
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v29 + 24) = v38[1];
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    if ( !v37 )
      goto LABEL_7;
    goto LABEL_15;
  }
  v30 = v42;
  if ( v42 != *(DXGDEVICE **)(v28 + 16) )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v31[3] = v38[1];
    v31[4] = v38[0];
    v31[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_7;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v42) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33, v32);
    *(_QWORD *)(v34 + 24) = 984LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v26 < *((_DWORD *)Current + 56) )
  {
    v35 = *((_QWORD *)Current + 26);
    v36 = *(_DWORD *)(v35 + 16LL * v26 + 8);
    if ( ((v38[1] >> 25) & 0x60) == (*(_BYTE *)(v35 + 16LL * v26 + 8) & 0x60)
      && (v36 & 0x2000) == 0
      && (v36 & 0x1F) != 0 )
    {
      *(_DWORD *)(v35 + 16LL * ((v38[1] >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v44, *((struct ADAPTER_RENDER **)v18 + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  DXGDEVICE::DestroyOverlay(v30, (struct DXGOVERLAY ***)v28);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
  COREACCESS::~COREACCESS((COREACCESS *)v46);
  if ( v43[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v20);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v39);
  return 0LL;
}
