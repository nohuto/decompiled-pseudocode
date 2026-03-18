/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0244CD8
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0204450 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00C7F60 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00C7F9C (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C029D1F0 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02B2DF8 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned __int64 *v4; // r15
  unsigned int v5; // esi
  _BYTE *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r15
  unsigned int v11; // ebx
  SIZE_T v12; // rdi
  _BYTE *PoolWithTag; // rax
  SIZE_T v14; // rdi
  _BYTE *v15; // rax
  SIZE_T v16; // rdi
  _BYTE *v17; // rax
  PVOID *v18; // rdi
  SIZE_T v19; // r14
  _BYTE *v20; // r12
  SIZE_T v21; // rbx
  _BYTE *v22; // rax
  unsigned __int64 *v23; // r13
  unsigned __int64 *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 *v26; // r14
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  char *v29; // r13
  __int64 v30; // rbx
  void *v31; // rcx
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  PVOID *__attribute__((__org_arrdim(0,0))) v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  PVOID *__attribute__((__org_arrdim(0,0))) v47; // rax
  PVOID *v48; // r13
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v49; // r14
  __int64 v50; // rbx
  int v51; // r15d
  int v52; // eax
  KPROCESSOR_MODE WaitMode; // al
  PVOID *__attribute__((__org_arrdim(0,0))) v54; // r14
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rax
  signed __int64 v61; // r14
  __int64 v62; // rbx
  unsigned __int64 *v63; // rdi
  unsigned __int64 *v64; // rbx
  signed __int64 v65; // rax
  signed __int64 v66; // rtt
  unsigned int v67; // ecx
  unsigned __int64 **v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned int v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+44h] [rbp-BCh]
  unsigned __int64 *v79; // [rsp+48h] [rbp-B8h]
  char *v82; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v83; // [rsp+68h] [rbp-98h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+70h] [rbp-90h]
  _BYTE v85[16]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v86; // [rsp+88h] [rbp-78h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v87; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v90; // [rsp+B0h] [rbp-50h]
  _BYTE v91[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v92; // [rsp+F8h] [rbp-8h]
  PVOID v93; // [rsp+100h] [rbp+0h]
  _BYTE v94[64]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v95; // [rsp+148h] [rbp+48h]
  PVOID v96; // [rsp+150h] [rbp+50h]
  _BYTE v97[64]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v98; // [rsp+198h] [rbp+98h]
  PVOID P; // [rsp+1A0h] [rbp+A0h]
  _BYTE v100[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v101; // [rsp+1E8h] [rbp+E8h]
  __int64 v102; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v103[64]; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v104[72]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v105; // [rsp+280h] [rbp+180h] BYREF
  char v106[64]; // [rsp+288h] [rbp+188h] BYREF
  char v107[72]; // [rsp+2C8h] [rbp+1C8h] BYREF
  PVOID v108; // [rsp+310h] [rbp+210h]
  _BYTE v109[384]; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v110; // [rsp+498h] [rbp+398h]

  v4 = (unsigned __int64 *)((char *)this + 448);
  v87 = a4;
  v78 = 0;
  v77 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v85, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v85);
  v8 = *v4;
  v79 = v4;
  while ( (unsigned __int64 *)v8 != v4 && v8 )
  {
    v6 = *(_BYTE **)(v8 + 2552);
    v9 = v5 + 1;
    v8 = *(_QWORD *)v8;
    if ( !v6 )
      v9 = v5;
    v5 = v9;
  }
  v10 = 0LL;
  if ( !v5 )
  {
    v11 = 0;
    goto LABEL_129;
  }
  v96 = 0LL;
  v98 = 0;
  if ( v5 <= 8 )
  {
    PoolWithTag = v97;
    v12 = 8LL * v5;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_15;
    v12 = 8LL * v5;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x4B677844u);
  }
  v96 = PoolWithTag;
  v6 = PoolWithTag;
  v98 = v5;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v12);
LABEL_15:
  v108 = 0LL;
  v110 = 0;
  if ( v5 <= 8 )
  {
    v14 = 48LL * v5;
    v15 = v109;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x30 )
      goto LABEL_21;
    v14 = 48LL * v5;
    v15 = ExAllocatePoolWithTag((POOL_TYPE)512, v14, 0x4B677844u);
  }
  v108 = v15;
  v6 = v15;
  v110 = v5;
  if ( v15 )
    memset(v15, 0, v14);
LABEL_21:
  v93 = 0LL;
  v95 = 0;
  if ( v5 <= 8 )
  {
    v17 = v94;
    v16 = 8LL * v5;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_27;
    v16 = 8LL * v5;
    v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B677844u);
  }
  v93 = v17;
  v6 = v17;
  v95 = v5;
  if ( v17 )
    memset(v17, 0, v16);
LABEL_27:
  v90 = 0LL;
  v18 = 0LL;
  v92 = 0;
  if ( v5 <= 8 )
  {
    v18 = (PVOID *)v91;
    v90 = v91;
    v19 = 8LL * v5;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_33;
    v19 = 8LL * v5;
    v18 = (PVOID *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B677844u);
    v90 = v18;
  }
  v92 = v5;
  if ( v18 )
  {
    memset(v18, 0, v19);
    v18 = (PVOID *)v90;
  }
LABEL_33:
  P = 0LL;
  v20 = 0LL;
  v101 = 0;
  if ( v5 <= 8 )
  {
    v20 = v100;
    v21 = 8LL * v5;
    P = v100;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_39;
    v21 = 8LL * v5;
    v22 = ExAllocatePoolWithTag(PagedPool, v21, 0x4B677844u);
    v18 = (PVOID *)v90;
    v20 = v22;
    P = v22;
  }
  v101 = v5;
  if ( v20 )
  {
    memset(v20, 0, v21);
    v18 = (PVOID *)v90;
    v20 = P;
  }
LABEL_39:
  Object = (PVOID *)v96;
  WaitBlockArray = (PKWAIT_BLOCK)v108;
  v83 = v93;
  if ( v93 && v18 && v96 && v108 && v20 )
  {
    v23 = v79;
    v24 = (unsigned __int64 *)*v79;
    while ( v24 != v23 && v24 )
    {
      if ( (unsigned int)v10 >= v5 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v6, v8);
        *(_QWORD *)(v25 + 24) = 3308LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = v24;
      v24 = (unsigned __int64 *)*v24;
      v86 = v24;
      _m_prefetchw(v26 + 3);
      v27 = v26[3];
      while ( v27 )
      {
        v6 = (_BYTE *)(v27 + 1);
        v28 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v26 + 3, v27 + 1, v27);
        if ( v28 == v27 )
        {
          LOBYTE(v27) = 1;
          break;
        }
      }
      if ( (_BYTE)v27 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v102, (struct DXGADAPTER *const)v26, 0LL);
        v29 = 0LL;
        v82 = 0LL;
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v26);
        if ( v26[319] )
        {
          LODWORD(v30) = COREADAPTERACCESS::AcquireExclusive(&v102, 1LL);
          if ( (int)v30 >= 0 )
          {
            v31 = (void *)v26[24];
            v83[v10] = v31;
            ObfReferenceObject(v31);
            v32 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v33 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v26, &v82);
              v29 = v82;
              v30 = v33;
              if ( v33 < 0 )
              {
                if ( v82 )
                {
                  v38 = WdLogNewEntry5_WdAssertion(v35, v34);
                  *(_QWORD *)(v38 + 24) = 3365LL;
                  WdLogEvent5_WdAssertion(v38);
                }
                v39 = WdLogNewEntry5_WdError(v35, v34, v36);
                *(_QWORD *)(v39 + 24) = v30;
                WdLogEvent5_WdError(v39);
              }
              else
              {
                v37 = Object;
                v18[v10] = v82;
                v37[v10] = v29 + 24;
              }
              v32 = a2;
            }
            if ( (int)v30 < 0 )
              goto LABEL_72;
            if ( (*((_DWORD *)v32 + 1) & 4) != 0 )
            {
              v40 = DmmEnableModeResetOnMonitorEvent(v26, 0);
              v30 = v40;
              if ( v40 < 0 )
              {
                v44 = WdLogNewEntry5_WdError(v42, v41, v43);
                *(_QWORD *)(v44 + 24) = v30;
                WdLogEvent5_WdError(v44);
              }
              else
              {
                *(_QWORD *)&v20[8 * v10] = v26;
              }
            }
            if ( (int)v30 < 0 )
            {
LABEL_72:
              v78 = v30;
              v45 = v83;
              ObfDereferenceObject((PVOID)v83[v10]);
              v45[v10] = 0LL;
              if ( v29 )
              {
                MonitorReleaseMonitorPendingEvent(v29, v46);
                v47 = Object;
                v18[v10] = 0LL;
                v47[v10] = 0LL;
              }
              v10 = v77;
            }
            else
            {
              v10 = ++v77;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v102);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v104);
          COREACCESS::~COREACCESS((COREACCESS *)v103);
          v24 = v86;
        }
        else
        {
          COREACCESS::~COREACCESS((COREACCESS *)v104);
          COREACCESS::~COREACCESS((COREACCESS *)v103);
        }
        v23 = v79;
      }
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v85);
    if ( (_DWORD)v10 )
    {
      v48 = (PVOID *)v83;
      v49 = v87;
      v50 = (unsigned int)v10;
      v51 = v78;
      do
      {
        v52 = DpiPollDisplayChildren(*v48, a3, v49);
        if ( v52 < 0 )
          v51 = v52;
        ObfDereferenceObject(*v48);
        *v48++ = 0LL;
        --v50;
      }
      while ( v50 );
      v23 = v79;
      v78 = v51;
      LODWORD(v10) = v77;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v10 )
      goto LABEL_92;
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v54 = Object;
    v55 = KeWaitForMultipleObjects(v10, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v59 = v55;
    if ( v55 == 258 )
    {
      v78 = 258;
      v60 = WdLogNewEntry5_WdError(v57, v56, v58);
      *(_QWORD *)(v60 + 24) = 3454LL;
    }
    else
    {
      if ( v55 >= 0 )
        goto LABEL_90;
      v78 = v55;
      v60 = WdLogNewEntry5_WdError(v57, v56, v58);
      *(_QWORD *)(v60 + 24) = v59;
    }
    WdLogEvent5_WdError(v60);
LABEL_90:
    v61 = (char *)v54 - (char *)v18;
    v62 = (unsigned int)v10;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v18, v56);
      *v18 = 0LL;
      *(PVOID *)((char *)v18++ + v61) = 0LL;
      --v62;
    }
    while ( v62 );
LABEL_92:
    if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v10 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v85);
      v63 = (unsigned __int64 *)*v23;
      while ( v63 != v23 && v63 )
      {
        v64 = v63;
        v63 = (unsigned __int64 *)*v63;
        _m_prefetchw(v64 + 3);
        v65 = v64[3];
        while ( v65 )
        {
          v66 = v65;
          v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v64 + 3, v65 + 1, v65);
          if ( v66 == v65 )
          {
            LOBYTE(v65) = 1;
            break;
          }
        }
        if ( (_BYTE)v65 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v105, (struct DXGADAPTER *const)v64, 0LL);
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v64);
          v67 = 0;
          v68 = (unsigned __int64 **)v20;
          while ( *v68 != v64 )
          {
            ++v67;
            ++v68;
            if ( v67 >= (unsigned int)v10 )
              goto LABEL_110;
          }
          if ( (int)COREADAPTERACCESS::AcquireExclusive(&v105, 1LL) >= 0 )
          {
            v69 = DmmEnableModeResetOnMonitorEvent(v64, 1u);
            v73 = v69;
            if ( v69 < 0 )
            {
              v74 = WdLogNewEntry5_WdError(v71, v70, v72);
              *(_QWORD *)(v74 + 24) = v73;
              WdLogEvent5_WdError(v74);
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v105);
          }
LABEL_110:
          COREACCESS::~COREACCESS((COREACCESS *)v107);
          COREACCESS::~COREACCESS((COREACCESS *)v106);
        }
      }
    }
    v11 = v78;
    goto LABEL_113;
  }
  v75 = WdLogNewEntry5_WdError(v6, v8, v7);
  *(_QWORD *)(v75 + 24) = 3297LL;
  WdLogEvent5_WdError(v75);
  v11 = -1073741801;
LABEL_113:
  if ( P != v100 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v101 = 0;
  if ( v90 != v91 && v90 )
    ExFreePoolWithTag(v90, 0);
  v90 = 0LL;
  v92 = 0;
  if ( v93 != v94 && v93 )
    ExFreePoolWithTag(v93, 0);
  v93 = 0LL;
  v95 = 0;
  if ( v108 != v109 && v108 )
    ExFreePoolWithTag(v108, 0);
  v108 = 0LL;
  v110 = 0;
  if ( v96 != v97 && v96 )
    ExFreePoolWithTag(v96, 0);
  v96 = 0LL;
  v98 = 0;
LABEL_129:
  if ( v85[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v85);
  return v11;
}
