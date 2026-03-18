/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00F1D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F30A8 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        int a2,
        const GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v16; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KTHREAD **v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // r14
  char *v26; // rdi
  struct _KEVENT *v27; // rsi
  struct _ERESOURCE *v28; // rcx
  char v29; // si
  __int64 v30; // rax
  volatile signed __int64 *v31; // rcx
  volatile signed __int64 *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // rcx
  int v39; // eax
  int v40; // ebx
  int v41; // ebx
  int v42; // eax
  unsigned int v43; // ebx
  unsigned int v44; // edi
  struct DXGADAPTER *v45; // rcx
  struct DXGADAPTER *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  int v51; // eax
  const GUID *v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rbx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  struct DXGDEVICE *v66; // [rsp+40h] [rbp-C0h] BYREF
  PERESOURCE *v67; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v68; // [rsp+50h] [rbp-B0h] BYREF
  int v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h]
  char v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h]
  _QWORD *v75; // [rsp+88h] [rbp-78h]
  _DWORD *v76; // [rsp+90h] [rbp-70h]
  _BYTE v77[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  char v79; // [rsp+A8h] [rbp-58h]
  _QWORD v80[54]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v81[3]; // [rsp+260h] [rbp+160h] BYREF
  int v82; // [rsp+26Ch] [rbp+16Ch]
  _DWORD v83[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v84; // [rsp+280h] [rbp+180h]
  _DWORD v85[6]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v86[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v87[8]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v88; // [rsp+2B0h] [rbp+1B0h]
  struct DXGADAPTER *v89; // [rsp+2B8h] [rbp+1B8h]
  char v90; // [rsp+2C0h] [rbp+1C0h]
  int v91; // [rsp+2C4h] [rbp+1C4h]
  __int64 v92; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v93[8]; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v94; // [rsp+2F0h] [rbp+1F0h]
  struct DXGADAPTER *v95; // [rsp+2F8h] [rbp+1F8h]
  char v96; // [rsp+300h] [rbp+200h]
  int v97; // [rsp+304h] [rbp+204h]
  __int64 v98; // [rsp+308h] [rbp+208h]
  struct DXGDEVICE *v99; // [rsp+328h] [rbp+228h]
  char v100; // [rsp+330h] [rbp+230h]

  v14 = (char)a3;
  v69 = -1;
  v70 = 0LL;
  v73 = a7;
  v74 = a8;
  v72 = a9;
  v76 = a12;
  v75 = a13;
  v16 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v71 = 1;
    v69 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v69, 3017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v21 = Current;
  if ( !Current )
  {
    v44 = -1073741811;
    v54 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v54 + 24) = -1073741811LL;
    *(_QWORD *)(v54 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v54);
    goto LABEL_43;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, v16, Current, &v66);
  v25 = v66;
  if ( v66 )
  {
    v26 = (char *)v66 + 16;
    v27 = (struct _KEVENT *)*((_QWORD *)v66 + 2);
    if ( !KeReadStateEvent(v27 + 4) )
      KeWaitForSingleObject(&v27[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    v28 = (struct _ERESOURCE *)*((_QWORD *)v25 + 13);
    v67 = (PERESOURCE *)((char *)v25 + 104);
    v29 = 0;
    if ( !ExAcquireResourceExclusiveLite(v28, 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)v26 + 16LL) + 96LL));
      v53 = *(_QWORD *)(*(_QWORD *)v26 + 16LL);
      if ( *(_DWORD *)(v53 + 136) == 1 )
      {
        DXGADAPTER::WakeUpAdapter(v53, 0xFFFFFFFFLL);
        v29 = 1;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v53, &EventBlockThread, v52, 40);
      ExAcquireResourceExclusiveLite(*v67, 1u);
      if ( v29 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v26 + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)v26 + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v30 = *(_QWORD *)v26;
    v79 = 0;
    v78 = *(_QWORD *)(v30 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    v31 = *(volatile signed __int64 **)(*(_QWORD *)v26 + 16LL);
    v89 = (struct DXGADAPTER *)v31;
    v90 = 0;
    v91 = -1;
    v92 = 0LL;
    if ( v31 )
    {
      _InterlockedIncrement64(v31 + 3);
      v25 = v66;
      v88 = -1LL;
    }
    v32 = *(volatile signed __int64 **)(*(_QWORD *)v26 + 16LL);
    v95 = (struct DXGADAPTER *)v32;
    v96 = 0;
    v97 = -1;
    v98 = 0LL;
    if ( v32 )
    {
      _InterlockedIncrement64(v32 + 3);
      v25 = v66;
      v94 = -1LL;
    }
    v99 = v25;
    v100 = 0;
    v33 = COREDEVICEACCESS::AcquireShared((__int64)v86, 0xFFFFFFFF, 0LL);
    v35 = v33;
    if ( v33 < 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v34);
      v56[3] = v35;
      v56[4] = v25;
      v56[5] = v21;
      WdLogEvent5_WdEvent(v56);
LABEL_92:
      v44 = v35;
LABEL_27:
      v45 = v95;
      if ( v95 )
      {
        if ( v96 )
        {
          COREACCESS::Release((COREACCESS *)v93);
          v45 = v95;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v45 + 2), v45);
      }
      v46 = v89;
      if ( v89 )
      {
        if ( v90 )
        {
          COREACCESS::Release((COREACCESS *)v87);
          v46 = v89;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
      }
      if ( v79 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
      ExReleaseResourceLite(*v67);
      KeLeaveCriticalRegion();
      goto LABEL_40;
    }
    memset(v80, 0, 0x1A8uLL);
    v80[39] = v72;
    LODWORD(v80[40]) = a10;
    v38 = *(_QWORD **)(*(_QWORD *)v26 + 16LL);
    v39 = *((_DWORD *)v38 + 475);
    if ( (v39 & 4) == 0 && ((v39 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_79:
        v85[3] = 0;
        v43 = a4;
        v80[3] = v85;
        v85[0] = a4;
        v85[1] = a5;
        v85[2] = a2;
        LODWORD(v80[2]) = 2;
        LODWORD(v35) = DXGDEVICE::CreateStandardAllocation(
                         v25,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v80,
                         (struct COREDEVICEACCESS *)v86);
        goto LABEL_23;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_79;
LABEL_22:
        v43 = a4;
        goto LABEL_23;
      }
      v43 = a4;
      v82 = 0;
      LODWORD(v80[0]) |= 2u;
      v80[3] = v81;
      v81[0] = a4;
      v81[1] = a5;
      v81[2] = a2;
      LODWORD(v80[2]) = 2;
      LODWORD(v35) = DXGDEVICE::CreateStandardAllocation(
                       v25,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v80,
                       (struct COREDEVICEACCESS *)v86);
      if ( (int)v35 >= 0 )
      {
        v57 = v82;
        if ( !v82 )
        {
          v58 = WdLogNewEntry5_WdAssertion(v38, v36);
          *(_QWORD *)(v58 + 24) = 1071LL;
          WdLogEvent5_WdAssertion(v58);
          v57 = v82;
        }
        *a14 = v57;
LABEL_23:
        if ( (int)v35 >= 0 )
        {
          if ( !LODWORD(v80[1]) )
          {
            v63 = WdLogNewEntry5_WdAssertion(v38, v36);
            *(_QWORD *)(v63 + 24) = 1088LL;
            WdLogEvent5_WdAssertion(v63);
          }
          v44 = 0;
          *a11 = HIDWORD(v80[6]);
          goto LABEL_27;
        }
      }
LABEL_91:
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v36, v37);
      v64[3] = (int)v35;
      v64[5] = v43;
      v64[4] = v25;
      v64[6] = a5;
      WdLogEvent5_WdWarning(v64);
      goto LABEL_92;
    }
    v84 = 0LL;
    v83[0] = a4;
    v40 = LODWORD(v80[0]) ^ (LOBYTE(v80[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v83[1] = a5;
    v83[2] = a2;
    v83[3] = a6;
    LODWORD(v80[2]) = 4;
    v80[3] = v83;
    LODWORD(v80[0]) = v40;
    switch ( a6 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        v41 = v40 | 2;
        break;
      case 5:
        v41 = v40 | 4;
        v80[4] = v73;
        v80[5] = v74;
        break;
      case 6:
LABEL_15:
        v41 = v40 | 1;
        break;
      default:
        if ( a6 <= 6 || a6 > 8 )
        {
LABEL_17:
          LODWORD(v35) = DXGDEVICE::CreateStandardAllocation(
                           v25,
                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v80,
                           (struct COREDEVICEACCESS *)v86);
          if ( (int)v35 < 0 )
          {
            v43 = a4;
            goto LABEL_91;
          }
          if ( a6 == 1 )
          {
LABEL_19:
            v42 = HIDWORD(v80[1]);
            if ( !HIDWORD(v80[1]) )
            {
              v62 = WdLogNewEntry5_WdAssertion(v38, v36);
              *(_QWORD *)(v62 + 24) = 1026LL;
              WdLogEvent5_WdAssertion(v62);
              v42 = HIDWORD(v80[1]);
            }
            v38 = v76;
            *v76 = v42;
            goto LABEL_22;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v51 = HIDWORD(v84);
            if ( !HIDWORD(v84) )
            {
              v61 = WdLogNewEntry5_WdAssertion(v38, v36);
              *(_QWORD *)(v61 + 24) = 1031LL;
              WdLogEvent5_WdAssertion(v61);
              v51 = HIDWORD(v84);
            }
            *a14 = v51;
            goto LABEL_22;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_19;
            if ( a6 != 8 )
              goto LABEL_22;
          }
          v38 = v75;
          *v75 = v80[41];
          v59 = HIDWORD(v84);
          if ( !HIDWORD(v84) )
          {
            v60 = WdLogNewEntry5_WdAssertion(v38, v36);
            *(_QWORD *)(v60 + 24) = 1019LL;
            WdLogEvent5_WdAssertion(v60);
            v59 = HIDWORD(v84);
          }
          *a14 = v59;
          goto LABEL_19;
        }
        v41 = v40 | 0x21;
        break;
    }
    LODWORD(v80[0]) = v41;
    goto LABEL_17;
  }
  v55 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
  v44 = -1073741811;
  v55[3] = -1073741811LL;
  v55[4] = v16;
  v55[5] = v21;
  WdLogEvent5_WdError(v55);
LABEL_40:
  if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v47);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v48, &EventProfilerExit, v49, v69);
  return v44;
}
