/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C014C790
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0101CA0 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247A84 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        void *const a2,
        const GUID *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _OBJECT_TYPE **a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGPROCESS *Current; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  struct DXGDEVICE *v21; // r13
  __int64 v22; // r15
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v28; // eax
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  struct DXGDEVICE *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r9
  struct DXGCONTEXT *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r9
  signed __int64 v49; // rcx
  _QWORD *v50; // rax
  struct DXGCONTEXT *v51; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGHWQUEUE *v52; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGDEVICE *v53; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGPROCESS *v54; // [rsp+50h] [rbp-B0h] BYREF
  void *v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  char v58; // [rsp+70h] [rbp-90h]
  _QWORD v59[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v60[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v61[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  char v63; // [rsp+A8h] [rbp-58h]
  _BYTE v64[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-48h]
  char v66; // [rsp+C0h] [rbp-40h]
  _BYTE v67[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h]
  char v69; // [rsp+D8h] [rbp-28h]
  _QWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v71[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v72[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v73[88]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v74[8]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v75[64]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v76[88]; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE v77[8]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v78[64]; // [rsp+238h] [rbp+138h] BYREF
  _BYTE v79[88]; // [rsp+278h] [rbp+178h] BYREF

  v56 = -1;
  v60[0] = a6;
  v55 = a2;
  v59[0] = a5;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3000);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 3000LL);
  if ( !a4 || !a5 || !a7 || !a8 )
    goto LABEL_62;
  *a4 = 0;
  *(_QWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 1) = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_QWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 1) = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent(v13, v12);
  v54 = Current;
  if ( !Current )
  {
    v28 = DXGPROCESS::CreateDxgProcess(&v54, 0LL, 0LL, 0, 0LL, 0LL);
    v20 = v28;
    if ( v28 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v29[3] = v20;
      v29[4] = a1;
      v29[5] = PsGetCurrentProcess(v31, v30);
      v32 = v29;
LABEL_64:
      WdLogEvent5_WdError(v32);
      goto LABEL_21;
    }
    Current = v54;
  }
  *((_QWORD *)Current + 12) = a3;
  *((_BYTE *)Current + 296) = 1;
  if ( !a1 )
  {
LABEL_62:
    v33 = WdLogNewEntry5_WdError(v13, v12, v14);
    v20 = -1073741811LL;
    goto LABEL_63;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 276),
                                           &v53,
                                           &v51,
                                           &v52,
                                           0);
  v20 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v18, v17, v19);
LABEL_63:
    *(_QWORD *)(v33 + 24) = v20;
    v32 = (_QWORD *)v33;
    goto LABEL_64;
  }
  v21 = v53;
  v22 = *(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL);
  if ( !*(_QWORD *)(v22 + 2560) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v34 + 24) = 229LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v23 = *((_QWORD *)v21 + 216);
  if ( v23 && !*(_QWORD *)(v23 + 2552) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v35 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v55 == (void *)v22 )
  {
    *(_DWORD *)a8 = *(_DWORD *)(v22 + 284);
    *((_DWORD *)a8 + 1) = *(_DWORD *)(v22 + 288);
    *((_DWORD *)a8 + 2) = *(_DWORD *)(v22 + 292);
    *((_DWORD *)a8 + 3) = *(_DWORD *)(v22 + 296);
    *((_DWORD *)a8 + 4) = *(_DWORD *)(v22 + 300);
    *((_DWORD *)a8 + 5) = *(_DWORD *)(v22 + 2452);
    if ( v23 )
    {
      *(_DWORD *)a7 = *(_DWORD *)(v23 + 284);
      *((_DWORD *)a7 + 1) = *(_DWORD *)(v23 + 288);
      *((_DWORD *)a7 + 2) = *(_DWORD *)(v23 + 292);
      *((_DWORD *)a7 + 3) = *(_DWORD *)(v23 + 296);
      *((_DWORD *)a7 + 4) = *(_DWORD *)(v23 + 300);
      *((_DWORD *)a7 + 5) = *(_DWORD *)(v23 + 2452);
    }
    else
    {
      *(_OWORD *)a7 = *(_OWORD *)a8;
      *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
    }
    *a4 = *((_DWORD *)v21 + 83);
    *(_DWORD *)v59[0] = *((_DWORD *)v51 + 6);
    if ( v52 )
      v24 = *((_DWORD *)v52 + 6);
    else
      v24 = 0;
    *(_DWORD *)v60[0] = v24;
    *a9 = g_pDxgkSharedAllocationObjectType;
  }
  else
  {
    if ( v52 )
    {
      v36 = _InterlockedDecrement64((volatile signed __int64 *)v52 + 9);
      if ( v36 < 0 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v37 + 24) = 101LL;
        WdLogEvent5_WdAssertion(v37);
      }
      if ( !v36 )
      {
        v38 = *((_QWORD *)v52 + 2);
        v39 = *(struct DXGDEVICE **)(v38 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60, v39);
        v40 = *((_QWORD *)v39 + 2);
        v63 = 0;
        v62 = *(_QWORD *)(v40 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v39, 2, v41, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v71);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 2) + 16LL) + 176LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v38, v52, (struct COREDEVICEACCESS *)v71);
        COREACCESS::~COREACCESS((COREACCESS *)v73);
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        if ( v63 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
        if ( v60[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v42 = *(_QWORD *)(v38 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v59,
            (struct DXGDEVICE *)v42);
          v43 = *(_QWORD *)(v38 + 16);
          v66 = 0;
          v65 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v42, 2, v44, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((__int64)v74);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v42, (struct DXGCONTEXT ***)v38, (struct COREDEVICEACCESS *)v74);
          COREACCESS::~COREACCESS((COREACCESS *)v76);
          COREACCESS::~COREACCESS((COREACCESS *)v75);
          if ( v66 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
          if ( v59[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v42 + 16), (struct DXGDEVICE *)v42);
        }
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v45 = v51;
      v46 = *((_QWORD *)v51 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v70,
        (struct DXGDEVICE *)v46);
      v47 = *((_QWORD *)v45 + 2);
      v69 = 0;
      v68 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, v46, 2, v48, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v77);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v46, (struct DXGCONTEXT ***)v51, (struct COREDEVICEACCESS *)v77);
      COREACCESS::~COREACCESS((COREACCESS *)v79);
      COREACCESS::~COREACCESS((COREACCESS *)v78);
      if ( v69 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
      if ( v70[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v46 + 16), (struct DXGDEVICE *)v46);
    }
    v49 = _InterlockedDecrement64((volatile signed __int64 *)v53 + 8);
    if ( !v49 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v53);
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v49, v17, v19);
    LODWORD(v20) = -1073741130;
    v50[3] = v55;
    v50[4] = v22;
    v50[5] = -1073741130LL;
    WdLogEvent5_WdError(v50);
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v17);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v56);
  return (unsigned int)v20;
}
