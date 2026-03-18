/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02105C0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C01D5F70 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01220DC (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0122118 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C02632B4 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C027A660 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  _QWORD *v4; // r15
  unsigned int v5; // esi
  _BYTE *v6; // rcx
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // r15
  unsigned int v10; // ebx
  SIZE_T v11; // rdi
  _BYTE *PoolWithTag; // rax
  SIZE_T v13; // rdi
  _BYTE *v14; // rax
  SIZE_T v15; // rdi
  _BYTE *v16; // rax
  PVOID *v17; // rdi
  SIZE_T v18; // r14
  _BYTE *v19; // r12
  SIZE_T v20; // rbx
  _BYTE *v21; // rax
  _QWORD **v22; // r13
  _QWORD *v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // r14
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  char *v28; // r13
  __int64 v29; // rbx
  void *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  PVOID *__attribute__((__org_arrdim(0,0))) v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  PVOID *__attribute__((__org_arrdim(0,0))) v46; // rax
  PVOID *v47; // r13
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v48; // r14
  __int64 v49; // rbx
  int v50; // r15d
  int v51; // eax
  KPROCESSOR_MODE WaitMode; // al
  PVOID *__attribute__((__org_arrdim(0,0))) v53; // r14
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rax
  signed __int64 v61; // r14
  __int64 v62; // rbx
  _QWORD *v63; // rdi
  _QWORD *v64; // rbx
  signed __int64 v65; // rax
  signed __int64 v66; // rtt
  unsigned int v67; // ecx
  _QWORD *v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+44h] [rbp-BCh]
  _QWORD *v77; // [rsp+48h] [rbp-B8h]
  char *v80; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v81; // [rsp+68h] [rbp-98h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+70h] [rbp-90h]
  _BYTE v83[16]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v84; // [rsp+88h] [rbp-78h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v85; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v88; // [rsp+B0h] [rbp-50h]
  _BYTE v89[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v90; // [rsp+F8h] [rbp-8h]
  PVOID v91; // [rsp+100h] [rbp+0h]
  _BYTE v92[64]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v93; // [rsp+148h] [rbp+48h]
  PVOID v94; // [rsp+150h] [rbp+50h]
  _BYTE v95[64]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v96; // [rsp+198h] [rbp+98h]
  PVOID P; // [rsp+1A0h] [rbp+A0h]
  _BYTE v98[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v99; // [rsp+1E8h] [rbp+E8h]
  __int64 v100; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v101[32]; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v102[40]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v103; // [rsp+240h] [rbp+140h] BYREF
  char v104[32]; // [rsp+248h] [rbp+148h] BYREF
  char v105[40]; // [rsp+268h] [rbp+168h] BYREF
  PVOID v106; // [rsp+290h] [rbp+190h]
  _BYTE v107[384]; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v108; // [rsp+418h] [rbp+318h]

  v4 = (_QWORD *)((char *)this + 448);
  v85 = a4;
  v76 = 0;
  v75 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v83, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v83);
  v7 = (_QWORD *)*v4;
  v77 = v4;
  while ( v7 != v4 && v7 )
  {
    v6 = (_BYTE *)v7[315];
    v8 = v5 + 1;
    v7 = (_QWORD *)*v7;
    if ( !v6 )
      v8 = v5;
    v5 = v8;
  }
  v9 = 0LL;
  if ( !v5 )
  {
    v10 = 0;
    goto LABEL_129;
  }
  v94 = 0LL;
  v96 = 0;
  if ( v5 <= 8 )
  {
    PoolWithTag = v95;
    v11 = 8LL * v5;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_15;
    v11 = 8LL * v5;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v11, 0x4B677844u);
  }
  v94 = PoolWithTag;
  v6 = PoolWithTag;
  v96 = v5;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v11);
LABEL_15:
  v106 = 0LL;
  v108 = 0;
  if ( v5 <= 8 )
  {
    v13 = 48LL * v5;
    v14 = v107;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x30 )
      goto LABEL_21;
    v13 = 48LL * v5;
    v14 = ExAllocatePoolWithTag((POOL_TYPE)512, v13, 0x4B677844u);
  }
  v106 = v14;
  v6 = v14;
  v108 = v5;
  if ( v14 )
    memset(v14, 0, v13);
LABEL_21:
  v91 = 0LL;
  v93 = 0;
  if ( v5 <= 8 )
  {
    v16 = v92;
    v15 = 8LL * v5;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_27;
    v15 = 8LL * v5;
    v16 = ExAllocatePoolWithTag(PagedPool, v15, 0x4B677844u);
  }
  v91 = v16;
  v6 = v16;
  v93 = v5;
  if ( v16 )
    memset(v16, 0, v15);
LABEL_27:
  v88 = 0LL;
  v17 = 0LL;
  v90 = 0;
  if ( v5 <= 8 )
  {
    v17 = (PVOID *)v89;
    v88 = v89;
    v18 = 8LL * v5;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_33;
    v18 = 8LL * v5;
    v17 = (PVOID *)ExAllocatePoolWithTag(PagedPool, v18, 0x4B677844u);
    v88 = v17;
  }
  v90 = v5;
  if ( v17 )
  {
    memset(v17, 0, v18);
    v17 = (PVOID *)v88;
  }
LABEL_33:
  P = 0LL;
  v19 = 0LL;
  v99 = 0;
  if ( v5 <= 8 )
  {
    v19 = v98;
    v20 = 8LL * v5;
    P = v98;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_39;
    v20 = 8LL * v5;
    v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x4B677844u);
    v17 = (PVOID *)v88;
    v19 = v21;
    P = v21;
  }
  v99 = v5;
  if ( v19 )
  {
    memset(v19, 0, v20);
    v17 = (PVOID *)v88;
    v19 = P;
  }
LABEL_39:
  Object = (PVOID *)v94;
  WaitBlockArray = (PKWAIT_BLOCK)v106;
  v81 = v91;
  if ( v91 && v17 && v94 && v106 && v19 )
  {
    v22 = (_QWORD **)v77;
    v23 = (_QWORD *)*v77;
    while ( v23 != v22 && v23 )
    {
      if ( (unsigned int)v9 >= v5 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v24 + 24) = 3087LL;
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = v23;
      v23 = (_QWORD *)*v23;
      v84 = v23;
      _m_prefetchw(v25 + 3);
      v26 = v25[3];
      while ( v26 )
      {
        v6 = (_BYTE *)(v26 + 1);
        v27 = v26;
        v26 = _InterlockedCompareExchange64(v25 + 3, v26 + 1, v26);
        if ( v27 == v26 )
        {
          LOBYTE(v26) = 1;
          break;
        }
      }
      if ( (_BYTE)v26 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v100, (struct DXGADAPTER *const)v25, 0LL);
        v28 = 0LL;
        v80 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
        if ( v25[315] )
        {
          LODWORD(v29) = COREADAPTERACCESS::AcquireExclusive(&v100, 1LL);
          if ( (int)v29 >= 0 )
          {
            v30 = (void *)v25[24];
            v81[v9] = v30;
            ObfReferenceObject(v30);
            v33 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v34 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v25, &v80, v31, v32);
              v28 = v80;
              v29 = v34;
              if ( v34 < 0 )
              {
                if ( v80 )
                {
                  v37 = WdLogNewEntry5_WdAssertion(v35);
                  *(_QWORD *)(v37 + 24) = 3144LL;
                  WdLogEvent5_WdAssertion(v37);
                }
                v38 = WdLogNewEntry5_WdError(v35);
                *(_QWORD *)(v38 + 24) = v29;
                WdLogEvent5_WdError(v38);
              }
              else
              {
                v36 = Object;
                v17[v9] = v80;
                v36[v9] = v28 + 24;
              }
              v33 = a2;
            }
            if ( (int)v29 < 0 )
              goto LABEL_72;
            if ( (*((_DWORD *)v33 + 1) & 4) != 0 )
            {
              v39 = DmmEnableModeResetOnMonitorEvent(v25, 0);
              v29 = v39;
              if ( v39 < 0 )
              {
                v41 = WdLogNewEntry5_WdError(v40);
                *(_QWORD *)(v41 + 24) = v29;
                WdLogEvent5_WdError(v41);
              }
              else
              {
                *(_QWORD *)&v19[8 * v9] = v25;
              }
            }
            if ( (int)v29 < 0 )
            {
LABEL_72:
              v76 = v29;
              v42 = v81;
              ObfDereferenceObject((PVOID)v81[v9]);
              v42[v9] = 0LL;
              if ( v28 )
              {
                MonitorReleaseMonitorPendingEvent(v28, v43, v44, v45);
                v46 = Object;
                v17[v9] = 0LL;
                v46[v9] = 0LL;
              }
              v9 = v75;
            }
            else
            {
              v9 = ++v75;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v100);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v102);
          COREACCESS::~COREACCESS((COREACCESS *)v101);
          v23 = v84;
        }
        else
        {
          COREACCESS::~COREACCESS((COREACCESS *)v102);
          COREACCESS::~COREACCESS((COREACCESS *)v101);
        }
        v22 = (_QWORD **)v77;
      }
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v83);
    if ( (_DWORD)v9 )
    {
      v47 = (PVOID *)v81;
      v48 = v85;
      v49 = (unsigned int)v9;
      v50 = v76;
      do
      {
        v51 = DpiPollDisplayChildren(*v47, a3, v48);
        if ( v51 < 0 )
          v50 = v51;
        ObfDereferenceObject(*v47);
        *v47++ = 0LL;
        --v49;
      }
      while ( v49 );
      v22 = (_QWORD **)v77;
      v76 = v50;
      LODWORD(v9) = v75;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v9 )
      goto LABEL_92;
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v53 = Object;
    v54 = KeWaitForMultipleObjects(v9, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v59 = v54;
    if ( v54 == 258 )
    {
      v76 = 258;
      v60 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v60 + 24) = 3233LL;
    }
    else
    {
      if ( v54 >= 0 )
        goto LABEL_90;
      v76 = v54;
      v60 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v60 + 24) = v59;
    }
    WdLogEvent5_WdError(v60);
LABEL_90:
    v61 = (char *)v53 - (char *)v17;
    v62 = (unsigned int)v9;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v17, v55, v57, v58);
      *v17 = 0LL;
      *(PVOID *)((char *)v17++ + v61) = 0LL;
      --v62;
    }
    while ( v62 );
LABEL_92:
    if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v9 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v83);
      v63 = *v22;
      while ( v63 != v22 && v63 )
      {
        v64 = v63;
        v63 = (_QWORD *)*v63;
        _m_prefetchw(v64 + 3);
        v65 = v64[3];
        while ( v65 )
        {
          v66 = v65;
          v65 = _InterlockedCompareExchange64(v64 + 3, v65 + 1, v65);
          if ( v66 == v65 )
          {
            LOBYTE(v65) = 1;
            break;
          }
        }
        if ( (_BYTE)v65 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v103, (struct DXGADAPTER *const)v64, 0LL);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v64);
          v67 = 0;
          v68 = v19;
          while ( (_QWORD *)*v68 != v64 )
          {
            ++v67;
            ++v68;
            if ( v67 >= (unsigned int)v9 )
              goto LABEL_110;
          }
          if ( (int)COREADAPTERACCESS::AcquireExclusive(&v103, 1LL) >= 0 )
          {
            v69 = DmmEnableModeResetOnMonitorEvent(v64, 1u);
            v71 = v69;
            if ( v69 < 0 )
            {
              v72 = WdLogNewEntry5_WdError(v70);
              *(_QWORD *)(v72 + 24) = v71;
              WdLogEvent5_WdError(v72);
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v103);
          }
LABEL_110:
          COREACCESS::~COREACCESS((COREACCESS *)v105);
          COREACCESS::~COREACCESS((COREACCESS *)v104);
        }
      }
    }
    v10 = v76;
    goto LABEL_113;
  }
  v73 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v73 + 24) = 3076LL;
  WdLogEvent5_WdError(v73);
  v10 = -1073741801;
LABEL_113:
  if ( P != v98 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v99 = 0;
  if ( v88 != v89 && v88 )
    ExFreePoolWithTag(v88, 0);
  v88 = 0LL;
  v90 = 0;
  if ( v91 != v92 && v91 )
    ExFreePoolWithTag(v91, 0);
  v91 = 0LL;
  v93 = 0;
  if ( v106 != v107 && v106 )
    ExFreePoolWithTag(v106, 0);
  v106 = 0LL;
  v108 = 0;
  if ( v94 != v95 && v94 )
    ExFreePoolWithTag(v94, 0);
  v94 = 0LL;
  v96 = 0;
LABEL_129:
  if ( v83[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v83);
  return v10;
}
