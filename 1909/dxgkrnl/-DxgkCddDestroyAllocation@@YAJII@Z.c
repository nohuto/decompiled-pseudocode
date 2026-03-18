/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00F1A10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0208DFC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, const GUID *a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KTHREAD **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rbx
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r11d
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r8
  unsigned int v20; // edx
  int v21; // r10d
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  struct DXGDEVICE *v39; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v40; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h]
  char v43; // [rsp+50h] [rbp-B0h]
  char v44[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  char v48; // [rsp+78h] [rbp-88h]
  _BYTE v49[32]; // [rsp+80h] [rbp-80h] BYREF
  char v50[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v51[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  char v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C4h] [rbp-3Ch]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  char v57[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+104h] [rbp+4h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  struct DXGDEVICE *v63; // [rsp+128h] [rbp+28h]
  char v64; // [rsp+130h] [rbp+30h]

  v3 = a2;
  v4 = (unsigned int)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 3018LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    v29 = -1073741811;
    v34 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    *(_QWORD *)(v34 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v34);
    goto LABEL_34;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v4, Current, &v39);
  v13 = v39;
  if ( v39 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v47, v39);
    v14 = (char *)v13 + 16;
    v46 = 0;
    v45 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
    v15 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    v53 = v15;
    v54 = 0;
    v55 = -1;
    v56 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
      v13 = v39;
      v52 = -1LL;
    }
    v16 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
    v59 = v16;
    v60 = 0;
    v61 = -1;
    v62 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
      v13 = v39;
      v58 = -1LL;
    }
    v63 = v13;
    v64 = 0;
    COREACCESS::AcquireShared((__int64)v51, 0xFFFFFFFF, 0LL);
    if ( v64 )
      COREACCESS::AcquireShared((__int64)v57, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 16LL) + 176LL) == 4 )
      goto LABEL_26;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v49, v9);
    v17 = *((_DWORD *)v9 + 56);
    v18 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < v17 )
    {
      v19 = v9[26];
      v20 = *((_DWORD *)v19 + 4 * (unsigned int)v18 + 2);
      v21 = (v20 >> 5) & 3;
      if ( (unsigned int)v3 >> 30 == v21 && (v20 & 0x2000) == 0 )
      {
        v22 = v20 & 0x1F;
        if ( (v20 & 0x1F) != 0 )
        {
          v23 = v20 & 0x1F;
          if ( (_BYTE)v23 == 5 )
          {
            v24 = *((_QWORD *)v19 + 2 * (unsigned int)v18);
            if ( v24 && (unsigned int)v18 < v17 && (unsigned int)v3 >> 30 == v21 && v22 )
              *((_DWORD *)v19 + 4 * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            goto LABEL_23;
          }
          v36 = WdLogNewEntry5_WdError(v18, v23, v19);
          *(_QWORD *)(v36 + 24) = 267LL;
          WdLogEvent5_WdError(v36);
        }
      }
    }
    v24 = 0LL;
LABEL_23:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v49);
    if ( !v24 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
      v38 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
      v37[4] = v39;
      v37[3] = v38;
      v37[5] = v3;
      WdLogEvent5_WdError(v37);
      v29 = -1073741811;
      goto LABEL_27;
    }
    v28 = *((unsigned int *)v39 + 116);
    if ( (_DWORD)v28 == 4 )
      DxgkDestroyClientAllocation(v28, v39, 0LL, 0LL, *(_QWORD *)(v24 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v39,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v24 + 40),
        (struct COREDEVICEACCESS *)v50,
        DXGDEVICE::DestroyFlagsDefault);
LABEL_26:
    v29 = 0;
LABEL_27:
    COREACCESS::~COREACCESS((COREACCESS *)v57);
    COREACCESS::~COREACCESS((COREACCESS *)v51);
    if ( v46 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
    if ( v48 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v47 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_31;
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
  v29 = -1073741811;
  v35[3] = -1073741811LL;
  v35[4] = v4;
  v35[5] = v9;
  WdLogEvent5_WdError(v35);
LABEL_31:
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
LABEL_34:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v30);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v41);
  return v29;
}
