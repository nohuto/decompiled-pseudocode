/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00C8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     DxgkShutdownBootGraphics @ 0x1C00CC170 (DxgkShutdownBootGraphics.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01209A8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247404 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0277EF0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, const GUID *a3, char *a4, char a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v35; // rdx
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r15
  struct DXGDEVICE *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // r9
  int v64; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+40h] [rbp-C0h]
  char v66; // [rsp+48h] [rbp-B8h]
  _BYTE v67[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h]
  char v69; // [rsp+60h] [rbp-A0h]
  _BYTE v70[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v71; // [rsp+70h] [rbp-90h]
  char v72; // [rsp+78h] [rbp-88h]
  _BYTE v73[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h]
  char v75; // [rsp+90h] [rbp-70h]
  _BYTE v76[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h]
  char v78; // [rsp+A8h] [rbp-58h]
  _QWORD v79[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v80[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v81[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v83[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v84[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v85[88]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v86[8]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v87[64]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v88[88]; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE v89[8]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v90[64]; // [rsp+238h] [rbp+138h] BYREF
  _BYTE v91[88]; // [rsp+278h] [rbp+178h] BYREF
  _BYTE v92[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v93[64]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v94[88]; // [rsp+318h] [rbp+218h] BYREF

  v64 = -1;
  v65 = 0LL;
  v6 = (unsigned int)a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v66 = 1;
    v64 = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3001);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 3001LL);
  if ( !a4 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
LABEL_37:
    v31 = -1073741811;
    v37[3] = -1073741811LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_27;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v38 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v38 + 24) = 320LL;
    WdLogEvent5_WdAssertion(v38);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v15 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *((_DWORD *)Current + 56) )
    goto LABEL_11;
  v16 = *((_QWORD *)Current + 26);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
    || (v17 & 0x2000) != 0
    || (v17 & 0x1F) == 0 )
  {
    goto LABEL_11;
  }
  v35 = v17 & 0x1F;
  if ( (_BYTE)v35 != 3 )
  {
    v18 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v35, v16);
    *(_QWORD *)(v18 + 24) = 267LL;
    WdLogEvent5_WdError(v18);
LABEL_11:
    v19 = 0LL;
    goto LABEL_12;
  }
  v19 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
LABEL_12:
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v37[4] = v8;
    v37[5] = Current;
    goto LABEL_37;
  }
  DxgkShutdownBootGraphics(v19, 0LL);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 276), (struct DXGDEVICE *)v19);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v23 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 >= *((_DWORD *)Current + 56) )
    goto LABEL_20;
  v24 = *((_QWORD *)Current + 26);
  v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
    || (v25 & 0x2000) != 0
    || (v25 & 0x1F) == 0 )
  {
    goto LABEL_20;
  }
  v36 = v25 & 0x1F;
  if ( (_BYTE)v36 != 7 )
  {
    v26 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60, v36, v24);
    *(_QWORD *)(v26 + 24) = 267LL;
    WdLogEvent5_WdError(v26);
LABEL_20:
    v27 = 0LL;
    goto LABEL_21;
  }
  v27 = *(_QWORD *)(v24 + 16LL * (unsigned int)v23);
LABEL_21:
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v27 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
    v31 = -1073741811;
    v39[3] = -1073741811LL;
    v39[4] = v7;
    v39[5] = Current;
    WdLogEvent5_WdError(v39);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_27;
    goto LABEL_63;
  }
  if ( !(_DWORD)v6 )
  {
LABEL_23:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v61 = *(_QWORD *)(v27 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v82,
        (struct DXGDEVICE *)v61);
      v62 = *(_QWORD *)(v27 + 16);
      v78 = 0;
      v77 = *(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, v61, 2, v63, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v92);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v61, (struct DXGCONTEXT *)v27, (struct COREDEVICEACCESS *)v92);
      COREACCESS::~COREACCESS((COREACCESS *)v94);
      COREACCESS::~COREACCESS((COREACCESS *)v93);
      if ( v78 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
      if ( v82[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v61 + 16), (struct DXGDEVICE *)v61);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
    v31 = 0;
    goto LABEL_27;
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v40 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v40 >= *((_DWORD *)Current + 56) )
    goto LABEL_51;
  v41 = *((_QWORD *)Current + 26);
  v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60)
    || (v42 & 0x2000) != 0
    || (v42 & 0x1F) == 0 )
  {
    goto LABEL_51;
  }
  v43 = v42 & 0x1F;
  if ( (_BYTE)v43 != 15 )
  {
    v44 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v43, v41);
    *(_QWORD *)(v44 + 24) = 267LL;
    WdLogEvent5_WdError(v44);
LABEL_51:
    v45 = 0LL;
    goto LABEL_52;
  }
  v45 = *(_QWORD *)(v41 + 16LL * (unsigned int)v40);
LABEL_52:
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v45 )
  {
    v52 = _InterlockedDecrement64((volatile signed __int64 *)(v45 + 72));
    if ( v52 < 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v46, v28);
      *(_QWORD *)(v53 + 24) = 101LL;
      WdLogEvent5_WdAssertion(v53);
    }
    if ( !v52 )
    {
      v54 = *(_QWORD *)(v45 + 16);
      v55 = *(struct DXGDEVICE **)(v54 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80, v55);
      v56 = *((_QWORD *)v55 + 2);
      v72 = 0;
      v71 = *(_QWORD *)(v56 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v55, 2, v57, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v86);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 176LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v54, (struct DXGHWQUEUE *)v45, (struct COREDEVICEACCESS *)v86);
      COREACCESS::~COREACCESS((COREACCESS *)v88);
      COREACCESS::~COREACCESS((COREACCESS *)v87);
      if ( v72 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      if ( v80[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v58 = *(_QWORD *)(v54 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v81,
          (struct DXGDEVICE *)v58);
        v59 = *(_QWORD *)(v54 + 16);
        v75 = 0;
        v74 = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, v58, 2, v60, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v89);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v58, (struct DXGCONTEXT *)v54, (struct COREDEVICEACCESS *)v89);
        COREACCESS::~COREACCESS((COREACCESS *)v91);
        COREACCESS::~COREACCESS((COREACCESS *)v90);
        if ( v75 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        if ( v81[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v58 + 16), (struct DXGDEVICE *)v58);
      }
    }
    goto LABEL_23;
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdError(v46, v28, v47);
  v31 = -1073741811;
  v48[3] = -1073741811LL;
  v48[4] = v6;
  v48[5] = Current;
  WdLogEvent5_WdError(v48);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v49 = *(_QWORD *)(v27 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v79,
      (struct DXGDEVICE *)v49);
    v50 = *(_QWORD *)(v27 + 16);
    v69 = 0;
    v68 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v49, 2, v51, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v83);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v49, (struct DXGCONTEXT *)v27, (struct COREDEVICEACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    COREACCESS::~COREACCESS((COREACCESS *)v84);
    if ( v69 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    if ( v79[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v49 + 16), (struct DXGDEVICE *)v49);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_63:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v28);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v64);
  return v31;
}
