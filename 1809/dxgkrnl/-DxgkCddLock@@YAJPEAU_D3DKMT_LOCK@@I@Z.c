/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0136230
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, const GUID *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  D3DKMT_HANDLE hAllocation; // r15d
  unsigned int v26; // ecx
  struct _KTHREAD *v27; // r8
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // [rsp+30h] [rbp-79h] BYREF
  __int64 v37; // [rsp+38h] [rbp-71h]
  char v38; // [rsp+40h] [rbp-69h]
  struct DXGDEVICE *v39; // [rsp+48h] [rbp-61h] BYREF
  char v40[8]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v41; // [rsp+58h] [rbp-51h]
  char v42; // [rsp+60h] [rbp-49h]
  _BYTE v43[24]; // [rsp+68h] [rbp-41h] BYREF
  char v44[8]; // [rsp+80h] [rbp-29h] BYREF
  char v45[32]; // [rsp+88h] [rbp-21h] BYREF
  char v46[56]; // [rsp+A8h] [rbp-1h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+120h] [rbp+77h] BYREF
  struct DXGDEVICE *v48; // [rsp+128h] [rbp+7Fh] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( !Current )
  {
    v16 = -1073741811;
    v20 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdError(v20);
    goto LABEL_13;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, a1->hDevice, Current, &v39);
  v8 = v39;
  if ( v39 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v39);
    v9 = *((_QWORD *)v8 + 2);
    v42 = 0;
    v41 = *(_QWORD *)(v9 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v8, 2, v10, 0);
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    v14 = v11;
    if ( v11 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
      v24[3] = v14;
      v24[4] = v8;
      v24[5] = v6;
      WdLogEvent5_WdEvent(v24);
      goto LABEL_7;
    }
    v15 = DXGDEVICE::Lock((PERESOURCE *)v8, a1, (struct COREDEVICEACCESS *)v44);
    v14 = v15;
    if ( v15 >= 0 )
    {
LABEL_7:
      v16 = v14;
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      if ( v42 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
      goto LABEL_10;
    }
    hAllocation = a1->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 26));
    v26 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v26 < *((_DWORD *)v6 + 62) )
    {
      v27 = v6[29];
      v28 = v26;
      v29 = *((_DWORD *)v27 + 4 * v26 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (v29 & 0x60) && (v29 & 0x2000) == 0 && (v29 & 0x1F) != 0 )
      {
        v30 = 2 * v28;
        v31 = v29 & 0x1F;
        if ( (_BYTE)v31 == 5 )
        {
          v33 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v27 + v30);
          goto LABEL_27;
        }
        v32 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v32 + 24) = 316LL;
        WdLogEvent5_WdError(v32);
      }
    }
    v33 = 0LL;
LABEL_27:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v47, v33);
    ExReleasePushLockSharedEx(v6 + 26, 0LL);
    KeLeaveCriticalRegion();
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v35[3] = v14;
    v35[4] = v8;
    v35[5] = v6;
    v35[6] = a1->hAllocation;
    v35[7] = v47;
    WdLogEvent5_WdError(v35);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
    goto LABEL_7;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v16 = -1073741811;
  v23[3] = -1073741811LL;
  v23[4] = a1->hDevice;
  v23[5] = v6;
  WdLogEvent5_WdError(v23);
LABEL_10:
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v36);
  return v16;
}
