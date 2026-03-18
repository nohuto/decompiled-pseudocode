/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C020C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001AAB8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, const GUID *a3)
{
  char *v3; // r13
  unsigned int v4; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // rbx
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v29; // rax
  unsigned int v30; // r15d
  _BYTE *PoolWithTag; // rax
  unsigned int v32; // edi
  D3DKMT_HANDLE v33; // r15d
  __int64 v34; // rax
  struct _KTHREAD *v35; // r8
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // r8
  PVOID v42; // rdx
  __int64 v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  const GUID *v62; // r8
  int v65; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C0h]
  char v67; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  _BYTE v69[32]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-88h]
  struct DXGCONTEXT *v71[2]; // [rsp+80h] [rbp-80h] BYREF
  const GUID *v72; // [rsp+90h] [rbp-70h]
  char v73[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-60h]
  char v75; // [rsp+A8h] [rbp-58h]
  _BYTE v76[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v77[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v78[8]; // [rsp+100h] [rbp+0h] BYREF
  char v79[64]; // [rsp+108h] [rbp+8h] BYREF
  char v80[88]; // [rsp+148h] [rbp+48h] BYREF

  v65 = -1;
  v3 = (char *)a3;
  v72 = a3;
  v4 = a2;
  v66 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v67 = 1;
    v65 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3008);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 3008LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  v12 = Current;
  if ( !Current )
  {
    LODWORD(v13) = -1073741811;
    v14 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    *(_QWORD *)(v14 + 32) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdError(v14);
    goto LABEL_52;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76, a1->PrivatePresentData.hDevice, Current, v71, 0);
  v21 = (__int64 *)v71[0];
  if ( !v71[0] )
  {
    LODWORD(v13) = -1073741811;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v22[3] = -1073741811LL;
    v22[4] = PsGetCurrentProcess(v24, v23);
    v22[5] = a1->PrivatePresentData.hDevice;
    WdLogEvent5_WdError(v22);
    goto LABEL_51;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71,
    *((struct DXGDEVICE **)v71[0] + 2));
  BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v29 + 24) = v21;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_50;
  }
  P = 0LL;
  v30 = BroadcastContextCount + 1;
  v70 = 0;
  if ( v30 <= 4 )
  {
    PoolWithTag = v69;
  }
  else
  {
    v25 = 0xFFFFFFFFFFFFFFFFuLL % v30;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v30 < 8 )
    {
LABEL_45:
      v60 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v60 + 24) = 2161LL;
      WdLogEvent5_WdWarning(v60);
      LODWORD(v13) = -1073741801;
      goto LABEL_46;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v30, 0x4B677844u);
  }
  v70 = v30;
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  memset(PoolWithTag, 0, 8LL * v30);
  if ( !P )
    goto LABEL_45;
  *(_QWORD *)P = v21;
  v32 = 0;
  if ( !a1->PrivatePresentData.BroadcastContextCount )
  {
    v42 = P;
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v77,
      v42,
      v70);
    if ( !v77[0] )
    {
      v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v49 + 24) = 2200LL;
      WdLogEvent5_WdWarning(v49);
      LODWORD(v13) = -1073741801;
LABEL_44:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v77);
      goto LABEL_46;
    }
    v50 = v21[2];
    v75 = 0;
    v74 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v21[2], 2, v51, 0);
    v52 = COREDEVICEACCESS::AcquireShared((__int64)v78, 0xBC0u, (__int64)v3);
    v13 = v52;
    if ( v52 >= 0 )
    {
      v55 = DXGCONTEXT::PresentFromCdd(
              (DXGCONTEXT *)v21,
              a1,
              v4,
              (struct COREDEVICEACCESS *)v78,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v73,
              (struct DXGCONTEXT **)P);
      v13 = v55;
      if ( v55 >= 0 )
        goto LABEL_42;
      if ( v55 != -1071775482 )
      {
        if ( v55 != -1071774910 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56, v58);
          v59[3] = v13;
          v59[4] = v21;
          v59[5] = v12;
          WdLogEvent5_WdError(v59);
        }
        goto LABEL_42;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v57);
      v54[3] = -1071775482LL;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v53);
      v54[3] = v13;
    }
    v54[4] = v21;
    v54[5] = v12;
    WdLogEvent5_WdEvent(v54);
LABEL_42:
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( v75 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    goto LABEL_44;
  }
  while ( 1 )
  {
    v33 = a1->PrivatePresentData.BroadcastContext[v32];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 23));
    v34 = (v33 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *((_DWORD *)v12 + 56) )
    {
      v35 = v12[26];
      v36 = *((_DWORD *)v35 + 4 * v34 + 2);
      if ( ((v33 >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v34 + 8) & 0x60) && (v36 & 0x2000) == 0 && (v36 & 0x1F) != 0 )
      {
        v37 = v36 & 0x1F;
        if ( (_BYTE)v37 == 7 )
        {
          v39 = *((_QWORD *)v35 + 2 * (unsigned int)v34);
          goto LABEL_25;
        }
        v38 = WdLogNewEntry5_WdError(v37, 2LL * (unsigned int)v34, v35);
        *(_QWORD *)(v38 + 24) = 267LL;
        WdLogEvent5_WdError(v38);
      }
    }
    v39 = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx(v12 + 23, 0LL);
    KeLeaveCriticalRegion();
    v41 = v32 + 1;
    *((_QWORD *)P + v41) = v39;
    v42 = P;
    v43 = *((_QWORD *)P + v41);
    if ( !v43 || *(_QWORD *)(v43 + 16) != v21[2] )
      break;
    ++v32;
    if ( (unsigned int)v41 >= a1->PrivatePresentData.BroadcastContextCount )
    {
      v4 = a2;
      v3 = (char *)v72;
      goto LABEL_32;
    }
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdError(v40, P, v41);
  v44[3] = v21;
  v44[4] = a1->PrivatePresentData.BroadcastContext[v32];
  v45 = v32;
  LODWORD(v13) = -1073741811;
  v44[5] = v45;
  v44[6] = -1073741811LL;
  WdLogEvent5_WdError(v44);
LABEL_46:
  if ( P != v69 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v70 = 0;
LABEL_50:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71);
LABEL_51:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v17);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v61, &EventProfilerExit, v62, v65);
  return (unsigned int)v13;
}
