/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00F7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C01DA26C (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, const GUID *a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rsi
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rbx
  char *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r11d
  __int64 v14; // rcx
  struct _KTHREAD *v15; // r8
  unsigned int v16; // edx
  int v17; // r10d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  int v30; // [rsp+30h] [rbp-89h] BYREF
  __int64 v31; // [rsp+38h] [rbp-81h]
  char v32; // [rsp+40h] [rbp-79h]
  char v33[8]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v34; // [rsp+50h] [rbp-69h]
  char v35; // [rsp+58h] [rbp-61h]
  char v36[8]; // [rsp+60h] [rbp-59h] BYREF
  char v37[8]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v38; // [rsp+70h] [rbp-49h]
  __int64 v39; // [rsp+78h] [rbp-41h]
  char v40; // [rsp+80h] [rbp-39h]
  char v41[8]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v42; // [rsp+90h] [rbp-29h]
  __int64 v43; // [rsp+98h] [rbp-21h]
  char v44; // [rsp+A0h] [rbp-19h]
  struct DXGDEVICE *v45; // [rsp+A8h] [rbp-11h]
  char v46; // [rsp+B0h] [rbp-9h]
  _BYTE v47[16]; // [rsp+C0h] [rbp+7h] BYREF
  _BYTE v48[32]; // [rsp+D0h] [rbp+17h] BYREF
  struct DXGDEVICE *v49; // [rsp+130h] [rbp+77h] BYREF
  struct DXGDEVICE *v50; // [rsp+138h] [rbp+7Fh] BYREF

  v31 = 0LL;
  v3 = a2;
  v4 = (unsigned int)a1;
  v30 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v21 = -1073741811;
    v25 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v25);
    goto LABEL_30;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v4, Current, &v49);
  v9 = v49;
  if ( v49 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v47, v49);
    v10 = (char *)v9 + 16;
    v35 = 0;
    v34 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    v11 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    v39 = v11;
    v40 = 0;
    if ( v11 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
      v9 = v49;
      v38 = -1LL;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    v43 = v12;
    v44 = 0;
    if ( v12 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v9 = v49;
      v42 = -1LL;
    }
    v45 = v9;
    v46 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v36);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 176LL) == 4 )
      goto LABEL_23;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48, v7);
    v13 = *((_DWORD *)v7 + 62);
    v14 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < v13 )
    {
      v15 = v7[29];
      v16 = *((_DWORD *)v15 + 4 * (unsigned int)v14 + 2);
      v17 = (v16 >> 5) & 3;
      if ( (unsigned int)v3 >> 30 == v17 && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        if ( (v16 & 0x1F) == 5 )
        {
          v18 = *((_QWORD *)v15 + 2 * (unsigned int)v14);
          if ( v18 && (unsigned int)v14 < v13 && (unsigned int)v3 >> 30 == v17 && (v16 & 0x1F) != 0 )
            *((_DWORD *)v15 + 4 * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          goto LABEL_20;
        }
        v27 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v27 + 24) = 316LL;
        WdLogEvent5_WdError(v27);
      }
    }
    v18 = 0LL;
LABEL_20:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
    if ( !v18 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v29 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
      v28[4] = v49;
      v28[3] = v29;
      v28[5] = v3;
      WdLogEvent5_WdError(v28);
      v21 = -1073741811;
      goto LABEL_24;
    }
    v20 = *((unsigned int *)v49 + 116);
    if ( (_DWORD)v20 == 4 )
      DxgkDestroyClientAllocation(v20, v49, 0LL, 0LL, *(_QWORD *)(v18 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v49,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v18 + 40),
        (struct COREDEVICEACCESS *)v36,
        DXGDEVICE::DestroyFlagsDefault);
LABEL_23:
    v21 = 0;
LABEL_24:
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v47);
    goto LABEL_27;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v21 = -1073741811;
  v26[3] = -1073741811LL;
  v26[4] = v4;
  v26[5] = v7;
  WdLogEvent5_WdError(v26);
LABEL_27:
  if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v30);
  return v21;
}
