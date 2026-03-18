/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00F8010
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00CF054 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        unsigned int a2,
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
  __int64 v18; // rcx
  struct _KTHREAD **v19; // r15
  __int64 v20; // rcx
  DXGDEVICE *v21; // r14
  char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // rcx
  int v33; // eax
  int v34; // ebx
  int v35; // ebx
  int v36; // eax
  unsigned int v37; // ebx
  unsigned int v38; // edi
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v42; // eax
  __int64 v43; // rbx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  enum _D3DKMT_DEVICEEXECUTION_STATE v55; // [rsp+24h] [rbp-DCh] BYREF
  DXGDEVICE *v56; // [rsp+28h] [rbp-D8h] BYREF
  struct DXGDEVICE *v57; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  char v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  _QWORD *v65; // [rsp+70h] [rbp-90h]
  _DWORD *v66; // [rsp+78h] [rbp-88h]
  _BYTE v67[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+88h] [rbp-78h]
  char v69; // [rsp+90h] [rbp-70h]
  _BYTE v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v71[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  char v74; // [rsp+C0h] [rbp-40h]
  _BYTE v75[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  char v78; // [rsp+E0h] [rbp-20h]
  DXGDEVICE *v79; // [rsp+E8h] [rbp-18h]
  char v80; // [rsp+F0h] [rbp-10h]
  _BYTE v81[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v82[54]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v83[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v84; // [rsp+2C8h] [rbp+1C8h]
  _DWORD v85[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v86; // [rsp+2E0h] [rbp+1E0h]
  _DWORD v87[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v88; // [rsp+2F0h] [rbp+1F0h]

  v14 = (char)a3;
  v59 = -1;
  v60 = 0LL;
  v63 = a7;
  v64 = a8;
  v62 = a9;
  v58 = a11;
  v66 = a12;
  v65 = a13;
  v16 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v61 = 1;
    v59 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v19 = Current;
  if ( !Current )
  {
    v38 = -1073741811;
    v43 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    *(_QWORD *)(v43 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v43);
    goto LABEL_31;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, v16, Current, &v56);
  v21 = v56;
  if ( v56 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81, v56);
    v22 = (char *)v21 + 16;
    v23 = *((_QWORD *)v21 + 2);
    v69 = 0;
    v68 = *(_QWORD *)(v23 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    v24 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
    v73 = v24;
    v74 = 0;
    if ( v24 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
      v72 = -1LL;
      v21 = v56;
    }
    v25 = *(_QWORD *)(*(_QWORD *)v22 + 16LL);
    v77 = v25;
    v78 = 0;
    if ( v25 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24));
      v76 = -1LL;
      v21 = v56;
    }
    v79 = v21;
    v80 = 0;
    v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70);
    v29 = v26;
    if ( v26 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v27);
      v45[3] = v29;
      v45[4] = v21;
      v45[5] = v19;
      WdLogEvent5_WdEvent(v45);
LABEL_75:
      v38 = v29;
LABEL_25:
      COREACCESS::~COREACCESS((COREACCESS *)v75);
      COREACCESS::~COREACCESS((COREACCESS *)v71);
      if ( v69 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81);
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 308LL) & 0x10) != 0 )
    {
      LODWORD(v29) = DXGDEVICE::GetDeviceExecutionState(v21, &v55);
      if ( (int)v29 < 0 || v55 != D3DKMT_DEVICEEXECUTION_ACTIVE )
      {
        LODWORD(v29) = -1073741130;
        goto LABEL_75;
      }
    }
    memset(v82, 0, 0x1A8uLL);
    v82[39] = v62;
    LODWORD(v82[40]) = a10;
    v32 = *(_QWORD **)(*(_QWORD *)v22 + 16LL);
    v33 = *((_DWORD *)v32 + 469);
    if ( (v33 & 4) == 0 && ((v33 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_62:
        v37 = a4;
        LODWORD(v82[2]) = 2;
        v87[0] = a4;
        v82[3] = v87;
        v87[1] = a5;
        v88 = a2;
        LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                         v21,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v82,
                         (struct COREDEVICEACCESS *)v70);
        goto LABEL_21;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_62;
LABEL_20:
        v37 = a4;
        goto LABEL_21;
      }
      v37 = a4;
      LODWORD(v82[0]) |= 2u;
      LODWORD(v82[2]) = 2;
      v82[3] = v83;
      v83[0] = a4;
      v83[1] = a5;
      v84 = a2;
      LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                       v21,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v82,
                       (struct COREDEVICEACCESS *)v70);
      if ( (int)v29 >= 0 )
      {
        v46 = HIDWORD(v84);
        if ( !HIDWORD(v84) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v47 + 24) = 1074LL;
          WdLogEvent5_WdAssertion(v47);
          v46 = HIDWORD(v84);
        }
        *a14 = v46;
LABEL_21:
        if ( (int)v29 >= 0 )
        {
          if ( !LODWORD(v82[1]) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v52 + 24) = 1091LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v38 = 0;
          *v58 = HIDWORD(v82[6]);
          goto LABEL_25;
        }
      }
LABEL_74:
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v30, v31);
      v53[3] = (int)v29;
      v53[5] = v37;
      v53[4] = v21;
      v53[6] = a5;
      WdLogEvent5_WdWarning(v53);
      goto LABEL_75;
    }
    v34 = LODWORD(v82[0]) ^ (LOBYTE(v82[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v86 = 0LL;
    v85[0] = a4;
    v85[1] = a5;
    v85[2] = a2;
    v85[3] = a6;
    LODWORD(v82[2]) = 4;
    v82[3] = v85;
    LODWORD(v82[0]) = v34;
    switch ( a6 )
    {
      case 1:
        goto LABEL_13;
      case 2:
        v35 = v34 | 2;
        break;
      case 5:
        v35 = v34 | 4;
        v82[4] = v63;
        v82[5] = v64;
        break;
      case 6:
LABEL_13:
        v35 = v34 | 1;
        break;
      default:
        if ( a6 <= 6 || a6 > 8 )
        {
LABEL_15:
          LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                           v21,
                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v82,
                           (struct COREDEVICEACCESS *)v70);
          if ( (int)v29 < 0 )
          {
            v37 = a4;
            goto LABEL_74;
          }
          if ( a6 == 1 )
          {
LABEL_17:
            v36 = HIDWORD(v82[1]);
            if ( !HIDWORD(v82[1]) )
            {
              v51 = WdLogNewEntry5_WdAssertion(v32);
              *(_QWORD *)(v51 + 24) = 1029LL;
              WdLogEvent5_WdAssertion(v51);
              v36 = HIDWORD(v82[1]);
            }
            v32 = v66;
            *v66 = v36;
            goto LABEL_20;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v42 = HIDWORD(v86);
            if ( !HIDWORD(v86) )
            {
              v50 = WdLogNewEntry5_WdAssertion(v32);
              *(_QWORD *)(v50 + 24) = 1034LL;
              WdLogEvent5_WdAssertion(v50);
              v42 = HIDWORD(v86);
            }
            *a14 = v42;
            goto LABEL_20;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_17;
            if ( a6 != 8 )
              goto LABEL_20;
          }
          v32 = v65;
          *v65 = v82[41];
          v48 = HIDWORD(v86);
          if ( !HIDWORD(v86) )
          {
            v49 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v49 + 24) = 1022LL;
            WdLogEvent5_WdAssertion(v49);
            v48 = HIDWORD(v86);
          }
          *a14 = v48;
          goto LABEL_17;
        }
        v35 = v34 | 0x21;
        break;
    }
    LODWORD(v82[0]) = v35;
    goto LABEL_15;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v38 = -1073741811;
  v44[3] = -1073741811LL;
  v44[4] = v16;
  v44[5] = v19;
  WdLogEvent5_WdError(v44);
LABEL_28:
  if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v59);
  return v38;
}
