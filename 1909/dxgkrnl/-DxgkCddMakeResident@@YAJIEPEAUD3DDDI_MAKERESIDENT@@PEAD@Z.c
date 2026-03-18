/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0135520
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C01355F8 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0135640 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C020B86C (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(__int64 a1, char a2, const GUID *a3, char *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int ResidentInternal; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  struct _KTHREAD **Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD **v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGDEVICE *v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  const D3DKMT_HANDLE *v38; // r15
  __int64 v39; // rax
  D3DKMT_HANDLE v40; // esi
  __int64 v41; // rcx
  const GUID *v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  struct _KTHREAD *v45; // r8
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  ULONG_PTR Count; // r8
  __int64 v56; // rdx
  __int64 i; // r8
  __int64 v58; // rax
  struct DXGDEVICE *v59; // [rsp+30h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v60; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v61; // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h]
  char v64; // [rsp+58h] [rbp-A8h]
  _BYTE v65[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v66[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-78h]
  char v68[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v69[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v70[88]; // [rsp+D8h] [rbp-28h] BYREF

  v62 = -1;
  v63 = 0LL;
  v7 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v64 = 1;
    v62 = 3060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3060);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v62, 3060LL);
  v66[0] = 0LL;
  v67 = 0;
  if ( !a2 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8);
  v19 = Current;
  if ( !Current )
  {
    ResidentInternal = -1073741811;
    v20 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdError(v20);
    goto LABEL_5;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v7, Current, &v61);
  v26 = v61;
  if ( v61 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65, v61);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v26, 0, v28, 0);
    v29 = COREDEVICEACCESS::AcquireShared((__int64)v68, 0xFFFFFFFF, 0LL);
    v31 = v29;
    if ( v29 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v30);
      v32[3] = v31;
      v32[4] = v26;
      v32[5] = v19;
      WdLogEvent5_WdEvent(v32);
LABEL_20:
      ResidentInternal = v31;
LABEL_48:
      COREACCESS::~COREACCESS((COREACCESS *)v70);
      COREACCESS::~COREACCESS((COREACCESS *)v69);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65);
      goto LABEL_49;
    }
    v33 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
    if ( *(int *)(v33 + 2184) < 0x2000 )
      v34 = 1LL;
    else
      v34 = *(unsigned int *)(v33 + 256);
    PagedPoolArray<unsigned int,4>::AllocateElements(v66, v34);
    v38 = (const D3DKMT_HANDLE *)v66[0];
    if ( !v66[0] )
    {
      v39 = WdLogNewEntry5_WdError(v36, v35, v37);
      *(_QWORD *)(v39 + 24) = 3402LL;
      WdLogEvent5_WdError(v39);
      LODWORD(v31) = -1073741801;
      goto LABEL_20;
    }
    v40 = **(_DWORD **)a3->Data4;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 23, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *((_DWORD *)v19 + 50);
        if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v41, &EventBlockThread, v42, v43);
      }
      ExAcquirePushLockSharedEx(v19 + 23, 0LL);
    }
    v44 = (v40 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 < *((_DWORD *)v19 + 56) )
    {
      v45 = v19[26];
      v46 = *((_DWORD *)v45 + 4 * v44 + 2);
      if ( ((v40 >> 25) & 0x60) == (*((_BYTE *)v45 + 16 * v44 + 8) & 0x60) && (v46 & 0x2000) == 0 && (v46 & 0x1F) != 0 )
      {
        v47 = v46 & 0x1F;
        if ( (_BYTE)v47 == 5 )
        {
          v49 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v45 + 2 * (unsigned int)v44);
          goto LABEL_34;
        }
        v48 = WdLogNewEntry5_WdError(v47, 2LL * (unsigned int)v44, v45);
        *(_QWORD *)(v48 + 24) = 267LL;
        WdLogEvent5_WdError(v48);
      }
    }
    v49 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60, v49);
    ExReleasePushLockSharedEx(v19 + 23, 0LL);
    KeLeaveCriticalRegion();
    ResidentInternal = -1073741811;
    if ( v60 )
    {
      Count = v60[5].Count;
      v56 = 0LL;
      if ( !Count )
      {
LABEL_43:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60, v56);
        COREACCESS::~COREACCESS((COREACCESS *)v70);
        COREACCESS::~COREACCESS((COREACCESS *)v69);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65);
        if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
LABEL_4:
        ResidentInternal = DxgkMakeResidentInternal(a3, 0LL, 3060LL, a4);
        goto LABEL_5;
      }
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          *(_QWORD *)a3->Data4 = v38;
          *(_DWORD *)&a3->Data2 = v56;
          goto LABEL_43;
        }
        if ( (unsigned int)v56 >= v67 )
          break;
        v38[v56] = *(_DWORD *)(i + 16);
        v56 = (unsigned int)(v56 + 1);
      }
      v58 = WdLogNewEntry5_WdError(v51, v56, i);
      *(_QWORD *)(v58 + 24) = 3428LL;
      WdLogEvent5_WdError(v58);
    }
    else
    {
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = **(unsigned int **)a3->Data4;
      *(_QWORD *)(v53 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v53);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60, v54);
    goto LABEL_48;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
  ResidentInternal = -1073741811;
  v27[3] = -1073741811LL;
  v27[4] = v7;
  v27[5] = v19;
  WdLogEvent5_WdError(v27);
LABEL_49:
  if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
LABEL_5:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v66);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v11);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v62);
  return ResidentInternal;
}
