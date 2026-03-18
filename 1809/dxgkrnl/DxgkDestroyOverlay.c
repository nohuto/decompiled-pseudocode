/*
 * XREFs of DxgkDestroyOverlay @ 0x1C0220160
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0012380 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0020CD8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C003CA7C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C01FDBE0 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  DXGDEVICE *v8; // r13
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  DXGDEVICE *v21; // r12
  _QWORD *v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // edx
  _QWORD v29[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+30h] [rbp-88h] BYREF
  int v31; // [rsp+40h] [rbp-78h] BYREF
  __int64 v32; // [rsp+48h] [rbp-70h]
  char v33; // [rsp+50h] [rbp-68h]
  _BYTE v34[24]; // [rsp+58h] [rbp-60h] BYREF
  DXGADAPTER *v35[9]; // [rsp+70h] [rbp-48h] BYREF
  struct DXGDEVICE *v36; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+18h]
  DXGDEVICE *v38; // [rsp+D8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2025);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_44;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v37 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v37, (struct _KTHREAD **)Current, &v38);
  v8 = v38;
  if ( !v38 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = (unsigned int)v37;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( !v36 )
      goto LABEL_44;
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v38);
  COREACCESS::COREACCESS((COREACCESS *)v35, *(struct DXGADAPTER *const *)(*((_QWORD *)v8 + 2) + 16LL));
  COREACCESS::AcquireShared(v35);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 176LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_21;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v34,
    (struct _KTHREAD **)Current);
  v17 = (HIDWORD(v37) >> 6) & 0xFFFFFF;
  if ( v17 < *((_DWORD *)Current + 62) )
  {
    v16 = *((_QWORD *)Current + 29);
    v14 = *(unsigned int *)(v16 + 16LL * v17 + 8);
    v15 = (HIDWORD(v37) >> 25) & 0x60;
    if ( ((HIDWORD(v37) >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v17 + 8) & 0x60)
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0 )
    {
      v14 &= 0x1Fu;
      if ( (_BYTE)v14 == 6 )
      {
        v19 = *(_QWORD *)(v16 + 16LL * v17);
        goto LABEL_32;
      }
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = 316LL;
      WdLogEvent5_WdError(v18);
    }
  }
  v19 = 0LL;
LABEL_32:
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v20 + 24) = HIDWORD(v37);
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    if ( !v36 )
      goto LABEL_44;
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_13:
    if ( !v10 )
      goto LABEL_44;
    goto LABEL_43;
  }
  v21 = v38;
  if ( v38 != *(DXGDEVICE **)(v19 + 16) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v22[3] = HIDWORD(v37);
    v22[4] = (unsigned int)v37;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    if ( !v36 || _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_44;
LABEL_43:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
LABEL_44:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v31);
    }
    return 3221225485LL;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v38) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v26 + 24) = 984LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v17 < *((_DWORD *)Current + 62) )
  {
    v27 = *((_QWORD *)Current + 29);
    v28 = *(_DWORD *)(v27 + 16LL * v17 + 8);
    if ( ((HIDWORD(v37) >> 25) & 0x60) == (*(_BYTE *)(v27 + 16LL * v17 + 8) & 0x60)
      && (v28 & 0x2000) == 0
      && (v28 & 0x1F) != 0 )
    {
      *(_DWORD *)(v27 + 16LL * ((HIDWORD(v37) >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v30, *((struct ADAPTER_RENDER **)v8 + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  DXGDEVICE::DestroyOverlay(v21, (struct DXGOVERLAY ***)v19);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  if ( v29[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v31);
  return 0LL;
}
