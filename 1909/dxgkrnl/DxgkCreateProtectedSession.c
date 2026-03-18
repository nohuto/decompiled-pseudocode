/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C0261EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CDC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000C354 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B8F0 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0036F0C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C026160C (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0261938 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0261BC0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **Current; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  ULONG64 v17; // rax
  char *v18; // r15
  size_t v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  char *v23; // r12
  unsigned int v24; // r14d
  struct DXGSYNCOBJECT *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGDEVICE *v36; // r14
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 v43; // rax
  PERESOURCE *v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rdx
  struct _KTHREAD *v48; // r8
  unsigned int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  signed __int32 v64; // ecx
  bool v65; // cc
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // edi
  __int64 v69; // rax
  _DWORD *v70; // rdx
  __int64 v71; // rcx
  const GUID *v72; // r8
  PVOID v73; // rcx
  PERESOURCE *Global; // rax
  __int64 v75; // rcx
  const GUID *v76; // r8
  char v77[8]; // [rsp+40h] [rbp-188h] BYREF
  int v78; // [rsp+48h] [rbp-180h] BYREF
  __int64 v79; // [rsp+50h] [rbp-178h]
  char v80; // [rsp+58h] [rbp-170h]
  struct DXGSYNCOBJECT *v81; // [rsp+60h] [rbp-168h] BYREF
  PVOID P; // [rsp+68h] [rbp-160h] BYREF
  void *v83; // [rsp+70h] [rbp-158h] BYREF
  void *v84; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v85[16]; // [rsp+80h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-138h]
  size_t Size[2]; // [rsp+A0h] [rbp-128h]
  size_t v88; // [rsp+B0h] [rbp-118h] BYREF
  struct _KTHREAD **v89; // [rsp+B8h] [rbp-110h]
  _BYTE v90[16]; // [rsp+C0h] [rbp-108h] BYREF
  struct DXGDEVICE *v91; // [rsp+D0h] [rbp-F8h] BYREF
  ULONG64 v92; // [rsp+D8h] [rbp-F0h]
  ULONG64 v93; // [rsp+E0h] [rbp-E8h]
  _BYTE v94[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v92 = a1;
  v93 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v78 = -1;
  v79 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v80 = 1;
    v78 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v3, &EventProfilerEnter, v4, 2148);
  }
  else
  {
    v80 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v78, 2148LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  v89 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78, v13);
    if ( v80 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v78);
    }
    return 3221225485LL;
  }
  v17 = a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v17;
  *(_OWORD *)Size = *(_OWORD *)(v17 + 16);
  v88 = *(_QWORD *)(v17 + 32);
  HIDWORD(v88) = 0;
  v18 = (char *)Src[1];
  v19 = LODWORD(Size[0]);
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_22;
LABEL_19:
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v20[3] = v18;
    v21 = (unsigned int)v19;
LABEL_20:
    v20[4] = v21;
LABEL_21:
    v20[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_9;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_19;
LABEL_22:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v22 = (unsigned int)v19;
LABEL_24:
    v20[3] = v22;
    v20[4] = 0x2000000LL;
    goto LABEL_21;
  }
  v23 = (char *)Size[1];
  v24 = v88;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v88 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( !(_DWORD)v88 )
  {
LABEL_29:
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v20[3] = v23;
    v21 = v24;
    goto LABEL_20;
  }
LABEL_30:
  if ( (unsigned int)v88 > 0x2000000 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v22 = v24;
    goto LABEL_24;
  }
  v83 = 0LL;
  v84 = 0LL;
  v25 = 0LL;
  v81 = 0LL;
  P = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v83 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    if ( !v83 )
    {
LABEL_34:
      v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
      *(_QWORD *)(v30 + 24) = v19;
      v31 = -1073741801;
      *(_QWORD *)(v30 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v30);
LABEL_89:
      v73 = P;
      if ( P )
        DXGPROTECTEDSESSION::DestroyProtectedSession(P, HIDWORD(v88));
      if ( v25 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v73, v32);
        DXGGLOBAL::DestroySyncObject(Global, v25, 0);
      }
      if ( v83 )
        operator delete[](v83);
      if ( v84 )
        operator delete[](v84);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78, v32);
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v75, &EventProfilerExit, v76, v78);
      return (unsigned int)v31;
    }
    if ( &v18[v19] < v18 || (unsigned __int64)&v18[v19] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v83, v18, v19);
  }
  if ( v24 )
  {
    v19 = v24;
    v84 = operator new[](v24, 0x4B677844u, PagedPool);
    if ( !v84 )
      goto LABEL_34;
    if ( &v23[v24] < v23 || (unsigned __int64)&v23[v24] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v84, v23, v24);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v77, (unsigned int)Src[0], Current, &v91);
  v36 = v91;
  if ( !v91 )
  {
    v37 = WdLogNewEntry5_WdError(v34, v33, v35);
    *(_QWORD *)(v37 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v77);
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v85, v91);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, (__int64)v36, 1, v38, 0);
  v31 = COREDEVICEACCESS::AcquireShared((__int64)v94, 0xFFFFFFFF, 0LL);
  if ( v31 < 0 )
  {
LABEL_48:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v85);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v77);
    goto LABEL_89;
  }
  v42 = *((_QWORD *)v36 + 216);
  if ( !v42 )
  {
    v43 = WdLogNewEntry5_WdError(v40, v39, v41);
    *(_QWORD *)(v43 + 24) = v36;
    v31 = -1073741637;
    *(_QWORD *)(v43 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_48;
  }
  v44 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v40, v39);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v90, v44);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v90);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(Current + 23));
  v45 = HIDWORD(Src[0]);
  v46 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  v47 = HIDWORD(Src[0]) >> 30;
  if ( (unsigned int)v46 >= *((_DWORD *)v89 + 56) )
    goto LABEL_57;
  v48 = v89[26];
  v49 = *((_DWORD *)v48 + 4 * v46 + 2);
  if ( (_DWORD)v47 != ((v49 >> 5) & 3) || (v49 & 0x2000) != 0 || (v49 & 0x1F) == 0 )
    goto LABEL_57;
  v50 = v49 & 0x1F;
  if ( (_BYTE)v50 != 11 )
  {
    v51 = WdLogNewEntry5_WdError(v50, v47, v48);
    *(_QWORD *)(v51 + 24) = 267LL;
    WdLogEvent5_WdError(v51);
LABEL_57:
    v52 = 0LL;
    goto LABEL_58;
  }
  v52 = *((_QWORD *)v48 + 2 * (unsigned int)v46);
LABEL_58:
  ExReleasePushLockSharedEx(Current + 23, 0LL);
  KeLeaveCriticalRegion();
  if ( !v52 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v55);
    v56[3] = v89;
    v56[4] = v45;
LABEL_60:
    WdLogEvent5_WdError(v56);
    v31 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v90);
    goto LABEL_48;
  }
  if ( *(struct DXGDEVICE **)(v52 + 16) != v36 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v55);
    v56[3] = v45;
    v56[4] = *(_QWORD *)(v52 + 16);
    v56[5] = v36;
    goto LABEL_60;
  }
  v81 = *(struct DXGSYNCOBJECT **)(v52 + 32);
  _InterlockedIncrement((volatile signed __int32 *)v81 + 6);
  v25 = v81;
  if ( *((_DWORD *)v81 + 48) != 5 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v55);
    v56[3] = v89;
    v56[4] = HIDWORD(Src[0]);
    goto LABEL_60;
  }
  if ( (*((_DWORD *)v81 + 49) & 2) == 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v55);
    v56[3] = v25;
    v56[4] = -1073741811LL;
    goto LABEL_60;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v90);
  v31 = ADAPTER_DISPLAY::CreateProtectedSession(
          *(DXGADAPTER ***)(v42 + 2552),
          &v81,
          &v83,
          Size[0],
          &v84,
          v88,
          (struct DXGPROTECTEDSESSION **)&P);
  if ( v31 < 0 )
  {
    if ( P )
    {
      v59 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v59 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v59);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v85);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v77);
    v25 = v81;
    goto LABEL_89;
  }
  v25 = v81;
  if ( v81 )
  {
    v60 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v60 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v60);
  }
  if ( v83 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v61 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v61);
  }
  if ( v84 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v62 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v62);
  }
  v31 = DXGPROTECTEDSESSION::Open((DXGPROTECTEDSESSION *)P, (unsigned int *)&v88 + 1);
  if ( v31 < 0 )
    goto LABEL_48;
  v64 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF);
  v65 = v64 <= 1;
  v66 = (unsigned int)(v64 - 1);
  if ( v65 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v66, v63);
    *(_QWORD *)(v67 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v68 = HIDWORD(v88);
  if ( !HIDWORD(v88) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v66, v63);
    *(_QWORD *)(v69 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v69);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v85);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v77);
  v70 = (_DWORD *)(v92 + 36);
  if ( v92 + 36 >= MmUserProbeAddress )
    v70 = (_DWORD *)MmUserProbeAddress;
  *v70 = v68;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78, (__int64)v70);
  if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v71, &EventProfilerExit, v72, v78);
  return 0LL;
}
