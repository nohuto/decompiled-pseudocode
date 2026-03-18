/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@I@Z @ 0x1C01DD480
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, const GUID *a3)
{
  unsigned int v3; // r12d
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v21; // rax
  unsigned int v22; // r15d
  _BYTE *PoolWithTag; // rax
  unsigned int v24; // edi
  D3DKMT_HANDLE v25; // r15d
  __int64 v26; // rax
  struct _KTHREAD *v27; // r8
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r8
  PVOID v34; // rdx
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  const GUID *v54; // r8
  int v56; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+38h] [rbp-C8h]
  char v58; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  _BYTE v60[32]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-90h]
  char v62[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h]
  char v64; // [rsp+88h] [rbp-78h]
  _BYTE v65[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v66[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v67[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v68[32]; // [rsp+B8h] [rbp-48h] BYREF
  char v69[56]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v70[14]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGCONTEXT *v71; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v72; // [rsp+198h] [rbp+98h]

  v72 = a2;
  v56 = -1;
  v3 = a2;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3008);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 3008);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    LODWORD(v8) = -1073741811;
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    goto LABEL_52;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66, a1->PrivatePresentData.hDevice, Current, &v71, 0);
  v13 = (__int64 *)v71;
  if ( !v71 )
  {
    LODWORD(v8) = -1073741811;
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[3] = -1073741811LL;
    v14[4] = PsGetCurrentProcess(v16, v15);
    v14[5] = a1->PrivatePresentData.hDevice;
    WdLogEvent5_WdError(v14);
    goto LABEL_51;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65,
    *((struct DXGDEVICE **)v71 + 2));
  BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v21 + 24) = v13;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_50;
  }
  v22 = BroadcastContextCount + 1;
  P = 0LL;
  v61 = 0;
  if ( v22 <= 4 )
  {
    PoolWithTag = v60;
  }
  else
  {
    v17 = 0xFFFFFFFFFFFFFFFFuLL % v22;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v22 < 8 )
    {
LABEL_45:
      v52 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v52 + 24) = 2196LL;
      WdLogEvent5_WdWarning(v52);
      LODWORD(v8) = -1073741801;
      goto LABEL_46;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v22, 0x4B677844u);
  }
  P = PoolWithTag;
  v61 = v22;
  if ( !PoolWithTag )
    goto LABEL_45;
  memset(PoolWithTag, 0, 8LL * v22);
  if ( !P )
    goto LABEL_45;
  *(_QWORD *)P = v13;
  v24 = 0;
  if ( !a1->PrivatePresentData.BroadcastContextCount )
  {
    v34 = P;
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v70,
      v34,
      v61);
    if ( !v70[0] )
    {
      v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
      *(_QWORD *)(v41 + 24) = 2235LL;
      WdLogEvent5_WdWarning(v41);
      LODWORD(v8) = -1073741801;
LABEL_44:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v70);
      goto LABEL_46;
    }
    v42 = v13[2];
    v64 = 0;
    v63 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, v13[2], 2, v43, 0);
    v44 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67);
    v8 = v44;
    if ( v44 >= 0 )
    {
      v48 = DXGCONTEXT::PresentFromCdd(
              (DXGCONTEXT *)v13,
              a1,
              v3,
              (struct COREDEVICEACCESS *)v67,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v62,
              (struct DXGCONTEXT **)P);
      v8 = v48;
      if ( v48 >= 0 )
        goto LABEL_42;
      if ( v48 != -1071775482 )
      {
        if ( v48 != -1071774910 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
          v51[3] = v8;
          v51[4] = v13;
          v51[5] = v7;
          WdLogEvent5_WdError(v51);
        }
        goto LABEL_42;
      }
      v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49);
      v47[3] = -1071775482LL;
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, v45);
      v47[3] = v8;
    }
    v47[4] = v13;
    v47[5] = v7;
    WdLogEvent5_WdEvent(v47);
LABEL_42:
    COREACCESS::~COREACCESS((COREACCESS *)v69);
    COREACCESS::~COREACCESS((COREACCESS *)v68);
    if ( v64 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    goto LABEL_44;
  }
  while ( 1 )
  {
    v25 = a1->PrivatePresentData.BroadcastContext[v24];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 26));
    v26 = (v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)v7 + 62) )
    {
      v27 = v7[29];
      v28 = *((_DWORD *)v27 + 4 * v26 + 2);
      if ( ((v25 >> 25) & 0x60) == (*((_BYTE *)v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        v29 = v28 & 0x1F;
        if ( (_BYTE)v29 == 7 )
        {
          v31 = *((_QWORD *)v27 + 2 * (unsigned int)v26);
          goto LABEL_25;
        }
        v30 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v30 + 24) = 316LL;
        WdLogEvent5_WdError(v30);
      }
    }
    v31 = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx(v7 + 26, 0LL);
    KeLeaveCriticalRegion();
    v33 = v24 + 1;
    *((_QWORD *)P + v33) = v31;
    v34 = P;
    v35 = *((_QWORD *)P + v33);
    if ( !v35 || *(_QWORD *)(v35 + 16) != v13[2] )
      break;
    ++v24;
    if ( (unsigned int)v33 >= a1->PrivatePresentData.BroadcastContextCount )
    {
      v3 = v72;
      goto LABEL_32;
    }
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v32);
  v36[3] = v13;
  v36[4] = a1->PrivatePresentData.BroadcastContext[v24];
  v37 = v24;
  LODWORD(v8) = -1073741811;
  v36[5] = v37;
  v36[6] = -1073741811LL;
  WdLogEvent5_WdError(v36);
LABEL_46:
  if ( P != v60 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v61 = 0;
LABEL_50:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65);
LABEL_51:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v53, &EventProfilerExit, v54, v56);
  return (unsigned int)v8;
}
