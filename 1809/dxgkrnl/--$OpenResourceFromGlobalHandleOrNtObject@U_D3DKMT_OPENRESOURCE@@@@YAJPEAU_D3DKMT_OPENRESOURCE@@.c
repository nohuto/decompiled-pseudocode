/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74
 * Callers:
 *     DxgkOpenResource @ 0x1C00F4AA0 (DxgkOpenResource.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002100C (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3358 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F45B4 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_2_--ENSURE_SHARED_RESOURCE_DERE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  PVOID v6; // r13
  char v7; // r12
  unsigned int *v8; // rsi
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r15
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rdx
  char v28; // r8
  unsigned __int64 v29; // rdx
  SIZE_T v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // eax
  void *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r8
  void *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int StandardAllocation; // r14d
  _QWORD *v47; // r8
  _DWORD *v48; // rdx
  _DWORD *v49; // rdx
  unsigned int v50; // r10d
  __int64 v51; // r12
  char *v52; // rcx
  size_t v53; // r8
  char *v54; // rcx
  size_t v55; // r8
  __int64 v57; // r11
  ULONG64 v58; // r9
  _DWORD *v59; // rdx
  _DWORD *v60; // rdx
  _QWORD *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // esi
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  struct DXGPROCESS *v78; // r15
  unsigned int v79; // r12d
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v82; // edx
  int v83; // eax
  __int64 v84; // rax
  struct DXGRESOURCE *v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // r8
  _QWORD *v88; // rax
  unsigned int v89; // r14d
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  unsigned int v93; // r8d
  __int64 v94; // rdx
  int v95; // ecx
  int v96; // eax
  _DWORD *v97; // rcx
  char *v98; // rcx
  size_t v99; // r8
  __int64 v100; // rax
  unsigned int v101; // [rsp+30h] [rbp-3C8h]
  bool v102; // [rsp+50h] [rbp-3A8h]
  struct DXGDEVICE *v103; // [rsp+58h] [rbp-3A0h] BYREF
  signed int v104; // [rsp+60h] [rbp-398h]
  struct DXGDEVICE *v105; // [rsp+68h] [rbp-390h] BYREF
  unsigned int v106; // [rsp+78h] [rbp-380h]
  char v107[8]; // [rsp+80h] [rbp-378h] BYREF
  __int64 v108; // [rsp+88h] [rbp-370h]
  char v109; // [rsp+90h] [rbp-368h]
  PVOID v110; // [rsp+98h] [rbp-360h]
  void *v111; // [rsp+A0h] [rbp-358h]
  void *Src; // [rsp+A8h] [rbp-350h]
  unsigned int *v113; // [rsp+B0h] [rbp-348h]
  __int64 v114; // [rsp+B8h] [rbp-340h] BYREF
  ULONG64 v115; // [rsp+C0h] [rbp-338h]
  _BYTE v116[16]; // [rsp+C8h] [rbp-330h] BYREF
  void *v117; // [rsp+D8h] [rbp-320h]
  struct DXGPROCESS *v118; // [rsp+E0h] [rbp-318h]
  _BYTE v119[16]; // [rsp+E8h] [rbp-310h] BYREF
  char v120[8]; // [rsp+F8h] [rbp-300h] BYREF
  __int64 v121; // [rsp+100h] [rbp-2F8h]
  __int64 v122; // [rsp+108h] [rbp-2F0h]
  _BYTE v123[32]; // [rsp+110h] [rbp-2E8h] BYREF
  PERESOURCE *v124[12]; // [rsp+130h] [rbp-2C8h] BYREF
  _BYTE v125[32]; // [rsp+190h] [rbp-268h] BYREF
  _OWORD v126[4]; // [rsp+1B0h] [rbp-248h] BYREF
  __int64 v127; // [rsp+1F0h] [rbp-208h]
  _QWORD v128[54]; // [rsp+200h] [rbp-1F8h] BYREF
  __int64 v129; // [rsp+3B0h] [rbp-48h] BYREF
  __int64 v130; // [rsp+3B8h] [rbp-40h]
  __int64 v131; // [rsp+3C0h] [rbp-38h]

  v106 = a2;
  v115 = a1;
  v102 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  v118 = Current;
  v111 = 0LL;
  v6 = 0LL;
  v110 = 0LL;
  Src = 0LL;
  v7 = 0;
  if ( !Current )
  {
    v62 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v62 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    return 3221225485LL;
  }
  v8 = (unsigned int *)v126;
  if ( v102 )
  {
    v9 = a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v126[0] = *(_OWORD *)v9;
    v126[1] = *(_OWORD *)(v9 + 16);
    v126[2] = *(_OWORD *)(v9 + 32);
    v126[3] = *(_OWORD *)(v9 + 48);
    v127 = *(_QWORD *)(v9 + 64);
  }
  else
  {
    v8 = (unsigned int *)a1;
  }
  v113 = v8;
  v121 = *((_QWORD *)v8 + 7);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v103, *v8, (struct _KTHREAD **)Current, &v105);
  v13 = v105;
  if ( !v105 )
  {
    v63 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v63 + 24) = *v8;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
LABEL_140:
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    return 3221225485LL;
  }
  if ( !v8[16] && !v8[12] )
  {
    v64 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v64 + 24) = v13;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v64);
    goto LABEL_140;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116,
    v105);
  v108 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
  v109 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v124, (__int64)v13, 2, v14, 0);
  v104 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v124);
  if ( v104 < 0 )
  {
    v65 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v65 + 24) = v13;
    v66 = v104;
    *(_QWORD *)(v65 + 32) = v104;
    WdLogEvent5_WdWarning(v65);
    goto LABEL_68;
  }
  if ( !a2 )
  {
    v100 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v100 + 24) = v13;
    *(_QWORD *)(v100 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v100);
    goto LABEL_137;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v119);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v119);
  Global = DXGGLOBAL::GetGlobal(v18);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  v24 = ObjectA;
  if ( !ObjectA )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v68[3] = v13;
LABEL_76:
    v69 = v106;
    v68[5] = -1073741811LL;
    v68[4] = v69;
    WdLogEvent5_WdWarning(v68);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v119);
LABEL_137:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
    if ( v109 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116);
    goto LABEL_140;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v25 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v25 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      v68[3] = v105;
      v68[6] = 10630LL;
      goto LABEL_76;
    }
    v22 = (unsigned int)(v25 + 1);
    v26 = v25;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 60), v22, v25);
  }
  while ( v26 != v25 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v119);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v119);
  v114 = v24 & -(__int64)(v106 != 0);
  if ( (*(_DWORD *)(v24 + 12) & 0x10) != 0 )
  {
    v70 = WdLogNewEntry5_WdEvent(v24 & -(__int64)(v106 != 0), v27);
    *(_QWORD *)(v70 + 24) = v24;
    v66 = -1073741823;
    *(_QWORD *)(v70 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v70);
    goto LABEL_79;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v123, Current);
  if ( (v28 & 2) == 0
    || (COREDEVICEACCESS::Release((COREDEVICEACCESS *)v124),
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107),
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v123, 1u),
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v107),
        v104 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v124),
        v104 >= 0) )
  {
    v29 = v8[2];
    v104 = 80 * v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( 80 * v29 <= 0xFFFFFFFF )
    {
      v30 = 80 * v29;
      if ( !is_mul_ok(v29, 0x50uLL) )
        v30 = -1LL;
      v117 = operator new(v30, 0x4B677844u, PagedPool);
      if ( !v117 )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
        v75[3] = v105;
        v75[4] = v8[2];
        StandardAllocation = -1073741801;
        v75[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v75);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v123);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v114);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
        if ( v109 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116);
        if ( !v103 )
          return (unsigned int)StandardAllocation;
LABEL_52:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
        return (unsigned int)StandardAllocation;
      }
      v35 = v8[16];
      if ( v35 && (v6 = operator new(v35, 0x4B677844u, PagedPool), (v110 = v6) == 0LL) )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v36, v37);
        v76[3] = v105;
        v77 = v8[16];
      }
      else
      {
        if ( v8[12] )
        {
          v111 = operator new(v8[12], 0x4B677844u, PagedPool);
          if ( !v111 )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v86, v87);
            v76[3] = v105;
            v77 = v8[12];
            goto LABEL_91;
          }
        }
        v38 = v8[8];
        if ( !v38 )
        {
          v39 = Src;
          goto LABEL_25;
        }
        v39 = operator new(v38, 0x4B677844u, PagedPool);
        Src = v39;
        if ( v39 )
        {
LABEL_25:
          v41 = *((_QWORD *)v13 + 2);
          if ( *(_QWORD *)(v24 + 72) == v41 )
          {
            v32 = *((_QWORD *)v105 + 216);
            if ( *(_QWORD *)(v24 + 88) == v32 )
            {
              v42 = v111;
              if ( v102 )
              {
                *((_QWORD *)v8 + 7) = v6;
                *((_QWORD *)v8 + 5) = v42;
                *((_QWORD *)v8 + 3) = v39;
                *((_QWORD *)v8 + 2) = v117;
              }
              StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                     v105,
                                     (__int64)v8,
                                     v106,
                                     v34,
                                     0,
                                     v124,
                                     v101,
                                     0LL,
                                     0LL,
                                     0LL);
              if ( StandardAllocation >= 0 )
              {
LABEL_30:
                v7 = 1;
                if ( v102 )
                {
                  v47 = (_QWORD *)v115;
                  v48 = (_DWORD *)(v115 + 68);
                  if ( v115 + 68 >= MmUserProbeAddress )
                    v48 = (_DWORD *)MmUserProbeAddress;
                  *v48 = v8[17];
                  v49 = v47 + 8;
                  if ( (unsigned __int64)(v47 + 8) >= MmUserProbeAddress )
                    v49 = (_DWORD *)MmUserProbeAddress;
                  *v49 = v8[16];
                  v50 = 0;
                  v51 = v121;
                  while ( v50 < v8[2] )
                  {
                    v57 = 80LL * v50;
                    v122 = v51 + *(_DWORD *)(*((_QWORD *)v8 + 2) + v57 + 8) - v8[14];
                    v58 = v57 + v47[2];
                    v59 = (_DWORD *)v58;
                    if ( v58 >= MmUserProbeAddress )
                      v59 = (_DWORD *)MmUserProbeAddress;
                    *v59 = *(_DWORD *)(v57 + *((_QWORD *)v8 + 2));
                    v60 = (_DWORD *)(v58 + 16);
                    if ( v58 + 16 >= MmUserProbeAddress )
                      v60 = (_DWORD *)MmUserProbeAddress;
                    *v60 = *(_DWORD *)(*((_QWORD *)v8 + 2) + v57 + 16);
                    v61 = (_QWORD *)(v58 + 8);
                    if ( v58 + 8 >= MmUserProbeAddress )
                      v61 = (_QWORD *)MmUserProbeAddress;
                    *v61 = v122;
                    ++v50;
                    v47 = (_QWORD *)v115;
                  }
                  if ( v8[8] )
                  {
                    v52 = (char *)v47[3];
                    v53 = v8[8];
                    if ( (unsigned __int64)&v52[v53] > MmUserProbeAddress || &v52[v53] <= v52 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v52, Src, v53);
                    v47 = (_QWORD *)v115;
                  }
                  if ( v8[12] )
                  {
                    v98 = (char *)v47[5];
                    v99 = v8[12];
                    if ( (unsigned __int64)&v98[v99] > MmUserProbeAddress || &v98[v99] <= v98 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v98, v42, v99);
                  }
                  v7 = 1;
                  if ( v8[16] )
                  {
                    v54 = *(char **)(v115 + 56);
                    v55 = v8[16];
                    if ( (unsigned __int64)&v54[v55] > MmUserProbeAddress || &v54[v55] <= v54 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v54, v6, v55);
                    v7 = 1;
                  }
                }
LABEL_48:
                if ( StandardAllocation >= 0 )
                  goto LABEL_49;
LABEL_92:
                if ( !v7 )
                  goto LABEL_49;
                v78 = v118;
                DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                  (DXGHANDLETABLELOCKEXCLUSIVE *)v125,
                  (struct _KTHREAD **)v118);
                v79 = v8[17];
                v80 = (v79 >> 6) & 0xFFFFFF;
                v104 = *((_DWORD *)v78 + 62);
                if ( (unsigned int)v80 < v104 )
                {
                  v81 = *((_QWORD *)v78 + 29);
                  v82 = *(_DWORD *)(v81 + 16LL * (unsigned int)v80 + 8);
                  v83 = (v82 >> 5) & 3;
                  if ( v79 >> 30 == v83 && (v82 & 0x2000) == 0 && (v82 & 0x1F) != 0 )
                  {
                    if ( (v82 & 0x1F) == 4 )
                    {
                      v85 = *(struct DXGRESOURCE **)(v81 + 16LL * (unsigned int)v80);
                      if ( v85 && (unsigned int)v80 < v104 && v79 >> 30 == v83 && (v82 & 0x1F) != 0 )
                        *(_DWORD *)(v81 + 16LL * ((v79 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                      goto LABEL_100;
                    }
                    v84 = WdLogNewEntry5_WdError(v80);
                    *(_QWORD *)(v84 + 24) = 316LL;
                    WdLogEvent5_WdError(v84);
                  }
                }
                v85 = 0LL;
LABEL_100:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v125);
                DXGDEVICE::DestroyAllocationInternal(v105, 0, 0LL, v85, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_49:
                operator delete[](v6);
                operator delete[](v111);
                operator delete[](v117);
                operator delete[](Src);
                DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v123);
                OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v114);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
                if ( v109 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116);
                if ( !v103 )
                  return (unsigned int)StandardAllocation;
                goto LABEL_52;
              }
              v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
              v88[3] = 10933LL;
LABEL_130:
              WdLogEvent5_WdWarning(v88);
              goto LABEL_48;
            }
          }
          v89 = *(_DWORD *)(v24 + 12);
          if ( (v89 & 0x20) == 0 )
          {
            StandardAllocation = -1073741811;
            v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v39, v41);
            v88[3] = v105;
            v88[4] = 0LL;
            v88[5] = -1073741811LL;
            goto LABEL_130;
          }
          if ( *(_DWORD *)(v24 + 124) != v8[2] )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v39, v41);
            v90[3] = v105;
            v90[4] = v8[2];
            v91 = *(unsigned int *)(v24 + 124);
LABEL_109:
            v90[5] = v91;
            v90[6] = -1073741811LL;
LABEL_111:
            WdLogEvent5_WdWarning(v90);
            StandardAllocation = -1073741811;
            goto LABEL_92;
          }
          v104 = *(_DWORD *)(v24 + 104);
          if ( v8[8] != v104 )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v39, v41);
            v90[3] = v105;
            v90[4] = v8[8];
            v91 = *(unsigned int *)(v24 + 104);
            goto LABEL_109;
          }
          v92 = *(unsigned int *)(v24 + 208);
          if ( !(_DWORD)v92 && *(_DWORD *)(*(_QWORD *)(v41 + 16) + 1712LL) < 0x5000u )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v92, v41);
            v90[3] = v105;
            v90[4] = -1073741811LL;
            goto LABEL_111;
          }
          v129 = 0LL;
          v131 = 0LL;
          v130 = (unsigned int)v92;
          v129 = *(_QWORD *)(v24 + 200);
          HIDWORD(v130) = 7;
          memset(v128, 0, 0x1A8uLL);
          v93 = v128[0] & 0xFFFFBEFF | (4 * (v89 & 0x40 | (32 * (v89 & 0x80)))) | 0x41;
          HIDWORD(v128[0]) = *v8;
          LODWORD(v128[2]) = 4;
          v128[3] = &v129;
          v128[39] = *(_QWORD *)(v24 + 96);
          LODWORD(v128[40]) = v104;
          v94 = *(_QWORD *)(v24 + 184);
          if ( (v89 & 0x200) != 0 )
            v128[42] = *(_QWORD *)(v24 + 184);
          else
            v128[41] = *(_QWORD *)(v24 + 184);
          v128[43] = *(_QWORD *)(v24 + 216);
          LODWORD(v128[6]) = *(_DWORD *)(v24 + 224);
          v128[44] = v111;
          LODWORD(v128[45]) = v8[12];
          v128[46] = v6;
          LODWORD(v128[47]) = v8[16];
          LODWORD(v128[0]) = v93 ^ (v93 ^ (v89 << 7)) & 0x400 | 0x200;
          v128[52] = *(_QWORD *)(v24 + 176);
          if ( (v89 & 0x200) != 0 )
          {
            v128[42] = v94;
          }
          else
          {
            if ( (v89 & 0x400) == 0 )
            {
LABEL_123:
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     v105,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v128,
                                     (struct COREDEVICEACCESS *)v124);
              if ( StandardAllocation < 0 )
                goto LABEL_48;
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v118, (DXGRESOURCEREFERENCE *)v120, v128[1])
                        + 120LL) = v24;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v120);
              memmove(Src, *(const void **)(v24 + 96), v8[8]);
              v8[17] = v128[1];
              v97 = v117;
              *(_DWORD *)v117 = HIDWORD(v128[6]);
              v97[4] = v8[16];
              *((_QWORD *)v97 + 1) = v6;
              *((_QWORD *)v8 + 2) = v97;
              *((_QWORD *)v8 + 3) = Src;
              v42 = v111;
              *((_QWORD *)v8 + 5) = v111;
              *((_QWORD *)v8 + 7) = v6;
              goto LABEL_30;
            }
            v128[41] = v94;
          }
          v96 = *(_DWORD *)(v24 + 196);
          v95 = v93 ^ (v93 ^ (v89 << 7)) & 0x400 | 0x200;
          LODWORD(v128[0]) = v95 ^ ((unsigned __int8)v95 ^ (unsigned __int8)(v89 >> 7)) & 0x10;
          LODWORD(v128[49]) = v96;
          goto LABEL_123;
        }
        v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, 0LL, v40);
        v76[3] = v105;
        v77 = v8[8];
      }
LABEL_91:
      v76[4] = v77;
      StandardAllocation = -1073741801;
      v76[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v76);
      goto LABEL_92;
    }
    v71 = WdLogNewEntry5_WdWarning(80 * v29 > 0xFFFFFFFF ? 0xC0000095 : 0, v29, 0xFFFFFFFFLL);
    *(_QWORD *)(v71 + 24) = v105;
    v66 = v104;
    *(_QWORD *)(v71 + 32) = v104;
    WdLogEvent5_WdWarning(v71);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v123);
LABEL_79:
    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v114);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
    if ( v109 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116);
    if ( v103 )
      goto LABEL_71;
    return v66;
  }
  v67 = WdLogNewEntry5_WdWarning(v73, v72, v74);
  *(_QWORD *)(v67 + 24) = v105;
  v66 = v104;
  *(_QWORD *)(v67 + 32) = v104;
  WdLogEvent5_WdWarning(v67);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v123);
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v114);
LABEL_68:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
  if ( v109 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116);
  if ( v103 )
  {
LABEL_71:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
  }
  return v66;
}
