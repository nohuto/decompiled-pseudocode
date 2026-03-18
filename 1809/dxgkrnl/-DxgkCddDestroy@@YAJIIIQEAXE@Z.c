/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C011FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShutdownBootGraphics @ 0x1C011EE80 (DxgkShutdownBootGraphics.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02138C8 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, const GUID *a3, char *a4, char a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  const GUID *v24; // r8
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r15
  struct DXGDEVICE *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r9
  _QWORD v53[2]; // [rsp+38h] [rbp-D0h] BYREF
  char v54; // [rsp+48h] [rbp-C0h]
  _QWORD v55[2]; // [rsp+50h] [rbp-B8h] BYREF
  char v56; // [rsp+60h] [rbp-A8h]
  _QWORD v57[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v58; // [rsp+78h] [rbp-90h]
  _BYTE v59[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v60; // [rsp+88h] [rbp-80h]
  char v61; // [rsp+90h] [rbp-78h]
  _BYTE v62[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-68h]
  char v64; // [rsp+A8h] [rbp-60h]
  _QWORD v65[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v66[2]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v67[2]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v68[3]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v69[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v70[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v71[56]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v72[8]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v73[32]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v74[56]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v75[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v76[32]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v77[56]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v78[8]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v79[32]; // [rsp+220h] [rbp+118h] BYREF
  _BYTE v80[56]; // [rsp+240h] [rbp+138h] BYREF

  LODWORD(v53[0]) = -1;
  v53[1] = 0LL;
  v6 = (unsigned int)a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v54 = 1;
    LODWORD(v53[0]) = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3001);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v53, 3001);
  if ( !a4 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v9);
LABEL_33:
    v22 = -1073741811;
    v26[3] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_27;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 308LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v12 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *((_DWORD *)Current + 62) )
  {
    v13 = *((_QWORD *)Current + 29);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0 )
    {
      if ( (v14 & 0x1F) == 3 )
      {
        v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
        goto LABEL_12;
      }
      v28 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60);
      *(_QWORD *)(v28 + 24) = 316LL;
      WdLogEvent5_WdError(v28);
    }
  }
  v15 = 0LL;
LABEL_12:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v26[4] = v8;
    v26[5] = Current;
    goto LABEL_33;
  }
  DxgkShutdownBootGraphics((struct DXGDEVICE *)v15, 0);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 276), (struct DXGDEVICE *)v15);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v17 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *((_DWORD *)Current + 62) )
  {
    v18 = *((_QWORD *)Current + 29);
    v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
    if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      if ( (v19 & 0x1F) == 7 )
      {
        v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
        goto LABEL_21;
      }
      v29 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60);
      *(_QWORD *)(v29 + 24) = 316LL;
      WdLogEvent5_WdError(v29);
    }
  }
  v20 = 0LL;
LABEL_21:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v22 = -1073741811;
    v30[3] = -1073741811LL;
    v30[4] = v7;
    v30[5] = Current;
    WdLogEvent5_WdError(v30);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_27;
    goto LABEL_59;
  }
  if ( !(_DWORD)v6 )
  {
LABEL_23:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v50 = *(_QWORD *)(v20 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v68,
        (struct DXGDEVICE *)v50);
      v51 = *(_QWORD *)(v20 + 16);
      v64 = 0;
      v63 = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v50, 2, v52, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v50, (struct DXGCONTEXT ***)v20, (struct COREDEVICEACCESS *)v78);
      COREACCESS::~COREACCESS((COREACCESS *)v80);
      COREACCESS::~COREACCESS((COREACCESS *)v79);
      if ( v64 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      if ( v68[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v50 + 16), (struct DXGDEVICE *)v50);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
    v22 = 0;
    goto LABEL_27;
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v31 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v31 >= *((_DWORD *)Current + 62) )
    goto LABEL_47;
  v32 = *((_QWORD *)Current + 29);
  v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60)
    || (v33 & 0x2000) != 0
    || (v33 & 0x1F) == 0 )
  {
    goto LABEL_47;
  }
  if ( (v33 & 0x1F) != 0xF )
  {
    v34 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60);
    *(_QWORD *)(v34 + 24) = 316LL;
    WdLogEvent5_WdError(v34);
LABEL_47:
    v35 = 0LL;
    goto LABEL_48;
  }
  v35 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31);
LABEL_48:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v35 )
  {
    v41 = _InterlockedDecrement64((volatile signed __int64 *)(v35 + 72));
    if ( v41 < 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v42 + 24) = 96LL;
      WdLogEvent5_WdAssertion(v42);
    }
    if ( !v41 )
    {
      v43 = *(_QWORD *)(v35 + 16);
      v44 = *(struct DXGDEVICE **)(v43 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66, v44);
      v45 = *((_QWORD *)v44 + 2);
      v58 = 0;
      v57[1] = *(_QWORD *)(v45 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)v44, 2, v46, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v72);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 176LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v43, (PVOID)v35, (struct COREDEVICEACCESS *)v72);
      COREACCESS::~COREACCESS((COREACCESS *)v74);
      COREACCESS::~COREACCESS((COREACCESS *)v73);
      if ( v58 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
      if ( v66[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v47 = *(_QWORD *)(v43 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v67,
          (struct DXGDEVICE *)v47);
        v48 = *(_QWORD *)(v43 + 16);
        v61 = 0;
        v60 = *(_QWORD *)(*(_QWORD *)(v48 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, v47, 2, v49, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v75);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v47, (struct DXGCONTEXT ***)v43, (struct COREDEVICEACCESS *)v75);
        COREACCESS::~COREACCESS((COREACCESS *)v77);
        COREACCESS::~COREACCESS((COREACCESS *)v76);
        if ( v61 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
        if ( v67[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v67);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v47 + 16), (struct DXGDEVICE *)v47);
      }
    }
    goto LABEL_23;
  }
  v37 = (_QWORD *)WdLogNewEntry5_WdError(v36);
  v22 = -1073741811;
  v37[3] = -1073741811LL;
  v37[4] = v6;
  v37[5] = Current;
  WdLogEvent5_WdError(v37);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v38 = *(_QWORD *)(v20 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v65,
      (struct DXGDEVICE *)v38);
    v39 = *(_QWORD *)(v20 + 16);
    v56 = 0;
    v55[1] = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, v38, 2, v40, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v69);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v38, (struct DXGCONTEXT ***)v20, (struct COREDEVICEACCESS *)v69);
    COREACCESS::~COREACCESS((COREACCESS *)v71);
    COREACCESS::~COREACCESS((COREACCESS *)v70);
    if ( v56 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
    if ( v65[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v38 + 16), (struct DXGDEVICE *)v38);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_59:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v53);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v53[0]);
  return v22;
}
