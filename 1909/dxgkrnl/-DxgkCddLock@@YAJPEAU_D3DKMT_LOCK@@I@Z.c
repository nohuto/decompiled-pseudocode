/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C014A580
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1460 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // r9d
  __int64 v36; // rax
  struct _KTHREAD *v37; // r8
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rdx
  struct _EX_RUNDOWN_REF *v47; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v48; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  char v52; // [rsp+58h] [rbp-A8h]
  char v53[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h]
  char v55; // [rsp+70h] [rbp-90h]
  _BYTE v56[24]; // [rsp+78h] [rbp-88h] BYREF
  char v57[8]; // [rsp+90h] [rbp-70h] BYREF
  char v58[64]; // [rsp+98h] [rbp-68h] BYREF
  char v59[88]; // [rsp+D8h] [rbp-28h] BYREF

  v50 = -1;
  v51 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v52 = 1;
    v50 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 3006LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v10 = Current;
  if ( !Current )
  {
    v22 = -1073741811;
    v27 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v29, v28);
    WdLogEvent5_WdError(v27);
    goto LABEL_14;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, a1->hDevice, Current, &v49);
  v14 = v49;
  if ( v49 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56, v49);
    v15 = *((_QWORD *)v14 + 2);
    v55 = 0;
    v54 = *(_QWORD *)(v15 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v14, 2, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((__int64)v57, 0xFFFFFFFF, 0LL);
    v19 = v17;
    if ( v17 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
      v31[3] = v19;
      v31[4] = v14;
      v31[5] = v10;
      WdLogEvent5_WdEvent(v31);
      v22 = v19;
      goto LABEL_8;
    }
    v20 = DXGDEVICE::Lock((PERESOURCE *)v14, a1, (struct COREDEVICEACCESS *)v57);
    v21 = v20;
    if ( v20 >= 0 )
    {
LABEL_7:
      v22 = v21;
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v59);
      COREACCESS::~COREACCESS((COREACCESS *)v58);
      if ( v55 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56);
      goto LABEL_11;
    }
    hAllocation = a1->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 23, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v35 = *((_DWORD *)v10 + 50);
        if ( v35 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v33, &EventBlockThread, v34, v35);
      }
      ExAcquirePushLockSharedEx(v10 + 23, 0LL);
    }
    v36 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 < *((_DWORD *)v10 + 56) )
    {
      v37 = v10[26];
      v38 = *((_DWORD *)v37 + 4 * v36 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v37 + 16 * v36 + 8) & 0x60)
        && (v38 & 0x2000) == 0
        && (v38 & 0x1F) != 0 )
      {
        v39 = v38 & 0x1F;
        if ( (_BYTE)v39 == 5 )
        {
          v41 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v37 + 2 * (unsigned int)v36);
          goto LABEL_34;
        }
        v40 = WdLogNewEntry5_WdError(v39, 2LL * (unsigned int)v36, v37);
        *(_QWORD *)(v40 + 24) = 267LL;
        WdLogEvent5_WdError(v40);
      }
    }
    v41 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v47, v41);
    ExReleasePushLockSharedEx(v10 + 23, 0LL);
    KeLeaveCriticalRegion();
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44);
    v45[3] = v21;
    v45[4] = v14;
    v45[5] = v10;
    v45[6] = a1->hAllocation;
    v45[7] = v47;
    WdLogEvent5_WdError(v45);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47, v46);
    goto LABEL_7;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
  v22 = -1073741811;
  v30[3] = -1073741811LL;
  v30[4] = a1->hDevice;
  v30[5] = v10;
  WdLogEvent5_WdError(v30);
LABEL_11:
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v23);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v50);
  return v22;
}
