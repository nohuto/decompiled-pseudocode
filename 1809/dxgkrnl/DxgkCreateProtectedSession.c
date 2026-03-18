/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C022CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0011D38 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001AF20 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C022C704 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C022CC98 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  ULONG64 v9; // rax
  const void *v10; // rdi
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  size_t v15; // r14
  unsigned int v16; // esi
  PVOID v17; // r12
  PVOID v18; // r15
  struct DXGSYNCOBJECT *v19; // rsi
  volatile signed __int32 *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // rcx
  ULONG64 v25; // rcx
  __int64 v26; // rcx
  void *v27; // rdx
  __int64 v28; // rcx
  struct DXGDEVICE *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  struct DXGDEVICE *v36; // rdi
  __int64 v37; // rax
  PERESOURCE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // edi
  __int64 v55; // rax
  _DWORD *v56; // rdx
  __int64 v57; // rcx
  const GUID *v58; // r8
  PERESOURCE *Global; // rax
  __int64 v60; // rcx
  const GUID *v61; // r8
  int v62; // [rsp+40h] [rbp-128h] BYREF
  __int64 v63; // [rsp+48h] [rbp-120h]
  char v64; // [rsp+50h] [rbp-118h]
  void *v65; // [rsp+58h] [rbp-110h] BYREF
  struct DXGSYNCOBJECT *v66; // [rsp+60h] [rbp-108h] BYREF
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-100h]
  DXGPROTECTEDSESSION *v68; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGDEVICE *v69; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v70[16]; // [rsp+80h] [rbp-E8h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-D8h]
  size_t Size[2]; // [rsp+A0h] [rbp-C8h]
  unsigned int v73[2]; // [rsp+B0h] [rbp-B8h] BYREF
  void *v74; // [rsp+B8h] [rbp-B0h]
  _BYTE v75[16]; // [rsp+C0h] [rbp-A8h] BYREF
  _BYTE v76[152]; // [rsp+D0h] [rbp-98h] BYREF
  unsigned int NumberOfBytes; // [rsp+178h] [rbp+10h]
  __int64 v79; // [rsp+180h] [rbp+18h] BYREF
  void *v80; // [rsp+188h] [rbp+20h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v62 = -1;
  v63 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v64 = 1;
    v62 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2148);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v62, 2148);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
    if ( v64 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v31, &EventProfilerExit, v32, v62);
    }
    return 3221225485LL;
  }
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v9;
  *(_OWORD *)Size = *(_OWORD *)(v9 + 16);
  *(_QWORD *)v73 = *(_QWORD *)(v9 + 32);
  v73[1] = 0;
  v10 = Src[1];
  v11 = Size[0];
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_18;
LABEL_15:
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7);
    v12[3] = v10;
    v13 = v11;
LABEL_16:
    v12[4] = v13;
LABEL_17:
    v12[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_45;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_15;
LABEL_18:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7);
    v14 = v11;
LABEL_20:
    v12[3] = v14;
    v12[4] = 0x2000000LL;
    goto LABEL_17;
  }
  v15 = Size[1];
  v74 = (void *)Size[1];
  v16 = v73[0];
  NumberOfBytes = v73[0];
  if ( !Size[1] )
  {
    if ( !v73[0] )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( !v73[0] )
  {
LABEL_25:
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7);
    v12[3] = v15;
    v13 = v16;
    goto LABEL_16;
  }
LABEL_26:
  if ( v73[0] > 0x2000000 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7);
    v14 = v16;
    goto LABEL_20;
  }
  v17 = 0LL;
  v80 = 0LL;
  v18 = 0LL;
  v65 = 0LL;
  v19 = 0LL;
  v66 = 0LL;
  v20 = 0LL;
  v68 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v79 = LODWORD(Size[0]);
    v17 = operator new(LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v80 = v17;
    if ( !v17 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = v79;
LABEL_31:
      v23 = -1073741801;
      *(_QWORD *)(v22 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v22);
LABEL_90:
      if ( v20 )
        DXGPROTECTEDSESSION::DestroyProtectedSession((PVOID)v20, v73[1]);
      if ( v19 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24);
        DXGGLOBAL::DestroySyncObject(Global, v19, 0);
      }
      if ( v17 )
        operator delete[](v17);
      if ( v18 )
        operator delete[](v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
      if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v60, &EventProfilerExit, v61, v62);
      return (unsigned int)v23;
    }
    v25 = (ULONG64)v10 + v11;
    if ( v25 < (unsigned __int64)v10 || v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, v10, v11);
  }
  if ( NumberOfBytes )
  {
    v18 = operator new(NumberOfBytes, 0x4B677844u, PagedPool);
    v65 = v18;
    if ( !v18 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v22 + 24) = NumberOfBytes;
      goto LABEL_31;
    }
    v27 = v74;
    if ( (char *)v74 + NumberOfBytes < v74 || (unsigned __int64)v74 + NumberOfBytes > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, v27, NumberOfBytes);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v79,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v69);
  v29 = v69;
  if ( !v69 )
  {
    v30 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v30 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v79);
    goto LABEL_45;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v70, v69);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, (__int64)v29, 1, v34, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v76);
  if ( v23 < 0 )
  {
LABEL_50:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v70);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v79);
    goto LABEL_90;
  }
  v36 = v69;
  v74 = (void *)*((_QWORD *)v69 + 216);
  if ( !v74 )
  {
    v37 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v37 + 24) = v36;
    v23 = -1073741637;
    *(_QWORD *)(v37 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_50;
  }
  v38 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v35);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75, v38);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v75);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v39 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v39 < *((_DWORD *)Current + 62) )
  {
    v40 = *((_QWORD *)Current + 29);
    v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
    if ( HIDWORD(Src[0]) >> 30 == ((v41 >> 5) & 3) && (v41 & 0x2000) == 0 && (v41 & 0x1F) != 0 )
    {
      v42 = v41 & 0x1F;
      if ( (_BYTE)v42 == 11 )
      {
        v44 = *(_QWORD *)(v40 + 16LL * (unsigned int)v39);
        goto LABEL_60;
      }
      v43 = WdLogNewEntry5_WdError(v42);
      *(_QWORD *)(v43 + 24) = 316LL;
      WdLogEvent5_WdError(v43);
    }
  }
  v44 = 0LL;
LABEL_60:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v44 )
    goto LABEL_61;
  if ( *(struct DXGDEVICE **)(v44 + 16) != v69 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v46[3] = HIDWORD(Src[0]);
    v46[4] = *(_QWORD *)(v44 + 16);
    v46[5] = v69;
    goto LABEL_62;
  }
  v19 = *(struct DXGSYNCOBJECT **)(v44 + 32);
  v66 = v19;
  DXGSYNCOBJECT::AddReference(v19);
  if ( *((_DWORD *)v19 + 42) != 5 )
  {
LABEL_61:
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v46[3] = Current;
    v46[4] = HIDWORD(Src[0]);
LABEL_62:
    WdLogEvent5_WdError(v46);
    v23 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75);
    goto LABEL_50;
  }
  if ( (*((_DWORD *)v19 + 43) & 2) == 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v46[3] = v19;
    v46[4] = -1073741811LL;
    goto LABEL_62;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75);
  v23 = ADAPTER_DISPLAY::CreateProtectedSession(
          *((DXGADAPTER ***)v74 + 315),
          &v66,
          &v80,
          v11,
          &v65,
          NumberOfBytes,
          &v68);
  if ( v23 < 0 )
  {
    v20 = (volatile signed __int32 *)v68;
    if ( v68 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v48 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v48);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v70);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v79);
    v17 = v80;
    v18 = v65;
    v19 = v66;
    goto LABEL_90;
  }
  v19 = v66;
  if ( v66 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v49 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v49);
  }
  v17 = v80;
  if ( v80 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v50 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v18 = v65;
  if ( v65 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v51 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v20 = (volatile signed __int32 *)v68;
  v23 = DXGPROTECTEDSESSION::Open(v68, &v73[1]);
  if ( v23 < 0 )
    goto LABEL_50;
  if ( _InterlockedExchangeAdd(v20 + 18, 0xFFFFFFFF) <= 1 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v52);
    *(_QWORD *)(v53 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v54 = v73[1];
  if ( !v73[1] )
  {
    v55 = WdLogNewEntry5_WdAssertion(v52);
    *(_QWORD *)(v55 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v55);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v70);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v79);
  v56 = (_DWORD *)(a1 + 36);
  if ( a1 + 36 >= MmUserProbeAddress )
    v56 = (_DWORD *)MmUserProbeAddress;
  *v56 = v54;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, v62);
  return 0LL;
}
