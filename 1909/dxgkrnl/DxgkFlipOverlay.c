/*
 * XREFs of DxgkFlipOverlay @ 0x1C02552F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0023A34 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C002497C (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00433BC (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00433F0 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C004343C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0253AF8 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkFlipOverlay(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_FLIPOVERLAY *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct ADAPTER_RENDER **v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGOVERLAY *v26; // rbx
  _QWORD *v27; // rax
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGDEVICE *v35; // [rsp+20h] [rbp-E8h] BYREF
  int v36; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D8h]
  char v38; // [rsp+38h] [rbp-D0h]
  DXGDEVICE *v39; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-C0h] BYREF
  _D3DKMT_FLIPOVERLAY v41; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v42[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v43[24]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v44[80]; // [rsp+A0h] [rbp-68h] BYREF

  v3 = (_D3DKMT_FLIPOVERLAY *)a1;
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2024;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2024);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2024LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v12);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v36);
    }
    return v11;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_FLIPOVERLAY *)MmUserProbeAddress;
  v41 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v41.hDevice, (struct _KTHREAD **)Current, &v39);
  v19 = (struct ADAPTER_RENDER **)v39;
  if ( !v39 )
  {
    v20 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v41.hDevice;
    v11 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_15;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v39);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, (struct _KTHREAD **)Current);
  v24 = (v41.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v24 >= *((_DWORD *)Current + 56) )
    goto LABEL_24;
  v23 = *((_QWORD *)Current + 26);
  v21 = *(unsigned int *)(v23 + 16 * v24 + 8);
  v22 = (v41.hOverlay >> 25) & 0x60;
  if ( ((v41.hOverlay >> 25) & 0x60) != (*(_BYTE *)(v23 + 16 * v24 + 8) & 0x60)
    || (v21 & 0x2000) != 0
    || (v21 & 0x1F) == 0 )
  {
    goto LABEL_24;
  }
  v21 &= 0x1Fu;
  if ( (_BYTE)v21 != 6 )
  {
    v25 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 267LL;
    WdLogEvent5_WdError(v25);
LABEL_24:
    v26 = 0LL;
    goto LABEL_25;
  }
  v26 = *(struct DXGOVERLAY **)(v23 + 16LL * (unsigned int)v24);
LABEL_25:
  if ( !v26 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v27[3] = v41.hOverlay;
    v11 = -1073741811;
    v27[4] = -1073741811LL;
    goto LABEL_27;
  }
  if ( v19 != *((struct ADAPTER_RENDER ***)v26 + 2) )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v27[3] = v41.hOverlay;
    v27[4] = v41.hDevice;
    v11 = -1073741811;
    v27[5] = -1073741811LL;
LABEL_27:
    WdLogEvent5_WdWarning(v27);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
LABEL_15:
    if ( !v35 )
      goto LABEL_7;
LABEL_16:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    goto LABEL_7;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v44, v26);
  v28 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v44);
  if ( v28 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v19) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v34 + 24) = 877LL;
      WdLogEvent5_WdAssertion(v34);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v42, v19[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
    v11 = DXGOVERLAY::FlipOverlay(v26, &v41);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v44);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    if ( !v35 )
      goto LABEL_7;
    goto LABEL_16;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v44);
  if ( v40[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v29);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v36);
  return (unsigned int)v28;
}
