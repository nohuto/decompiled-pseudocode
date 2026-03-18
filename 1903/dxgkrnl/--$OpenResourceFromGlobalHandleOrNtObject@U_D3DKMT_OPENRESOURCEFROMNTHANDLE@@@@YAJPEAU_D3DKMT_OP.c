/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00ED9A4
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00ED610 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C3C (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023AF8 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0023B0C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D0C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00ED988 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00EE0B8 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0408 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  PVOID v10; // r12
  char v11; // r13
  unsigned int *v12; // rdi
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r15
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  SIZE_T v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  void *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int StandardAllocation; // r12d
  void *v42; // rsi
  _QWORD *v43; // r8
  _DWORD *v44; // rdx
  _DWORD *v45; // rdx
  unsigned int v46; // r10d
  __int64 v47; // r13
  char *v48; // rcx
  size_t v49; // r8
  char *v50; // rcx
  size_t v51; // r8
  __int64 v53; // r11
  ULONG64 v54; // r9
  _DWORD *v55; // rdx
  _DWORD *v56; // rdx
  _QWORD *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct DXGDEVICE *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  unsigned int v64; // edi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  struct DXGPROCESS *v72; // rsi
  unsigned int v73; // r13d
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned int v76; // edx
  int v77; // eax
  int v78; // r10d
  __int64 v79; // rdx
  __int64 v80; // rax
  struct DXGRESOURCE *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // r8
  _QWORD *v84; // rax
  unsigned int v85; // r12d
  _QWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  unsigned int v89; // r8d
  __int64 v90; // rdx
  int v91; // ecx
  int v92; // eax
  _DWORD *v93; // rcx
  char *v94; // rcx
  size_t v95; // r8
  __int64 v96; // rax
  struct DXGDEVICE *v97; // [rsp+58h] [rbp-3F0h] BYREF
  int v98; // [rsp+60h] [rbp-3E8h]
  struct DXGDEVICE *v99; // [rsp+70h] [rbp-3D8h] BYREF
  void *v100; // [rsp+78h] [rbp-3D0h]
  void *Src; // [rsp+80h] [rbp-3C8h]
  __int64 v102; // [rsp+88h] [rbp-3C0h] BYREF
  char v103[8]; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v104; // [rsp+98h] [rbp-3B0h]
  char v105; // [rsp+A0h] [rbp-3A8h]
  void *v106; // [rsp+A8h] [rbp-3A0h]
  unsigned int *v107; // [rsp+B0h] [rbp-398h]
  void *v108; // [rsp+B8h] [rbp-390h]
  volatile signed __int32 *v109; // [rsp+C0h] [rbp-388h] BYREF
  ULONG64 v110; // [rsp+C8h] [rbp-380h]
  _BYTE v111[16]; // [rsp+D0h] [rbp-378h] BYREF
  struct DXGPROCESS *v112; // [rsp+E0h] [rbp-368h]
  __int64 v113; // [rsp+E8h] [rbp-360h]
  _BYTE v114[32]; // [rsp+F0h] [rbp-358h] BYREF
  _OWORD v115[7]; // [rsp+110h] [rbp-338h] BYREF
  _BYTE v116[32]; // [rsp+180h] [rbp-2C8h] BYREF
  _QWORD v117[54]; // [rsp+1A0h] [rbp-2A8h] BYREF
  _DWORD v118[4]; // [rsp+350h] [rbp-F8h] BYREF
  __int64 v119; // [rsp+360h] [rbp-E8h]
  __int64 v120[20]; // [rsp+370h] [rbp-D8h] BYREF

  v98 = a4;
  v102 = a3;
  v110 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  v112 = Current;
  v100 = 0LL;
  v10 = 0LL;
  v108 = 0LL;
  Src = 0LL;
  v11 = 0;
  if ( !Current )
  {
    v58 = WdLogNewEntry5_WdError(v7, v6, v9);
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    return (unsigned int)v23;
  }
  memset(v115, 0, 0x68uLL);
  v12 = (unsigned int *)v115;
  if ( v5 )
  {
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v115[0] = *(_OWORD *)v13;
    v115[1] = *(_OWORD *)(v13 + 16);
    v115[2] = *(_OWORD *)(v13 + 32);
    v115[3] = *(_OWORD *)(v13 + 48);
    v115[4] = *(_OWORD *)(v13 + 64);
    v115[5] = *(_OWORD *)(v13 + 80);
    *(_QWORD *)&v115[6] = *(_QWORD *)(v13 + 96);
  }
  else
  {
    v12 = (unsigned int *)a1;
  }
  v107 = v12;
  v113 = *((_QWORD *)v12 + 9);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v97, *v12, (struct _KTHREAD **)Current, &v99);
  v17 = v99;
  if ( !v99 )
  {
    v59 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v59 + 24) = *v12;
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    goto LABEL_63;
  }
  if ( v12[16] || v12[12] )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111,
      v99);
    v104 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    v105 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v120, (__int64)v17, 2, v18, 0);
    v19 = COREDEVICEACCESS::AcquireShared((__int64)v120, 0xFFFFFFFF, 0LL);
    v23 = v19;
    if ( v19 < 0 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v62[4] = v23;
    }
    else
    {
      if ( !v102 )
      {
        v96 = WdLogNewEntry5_WdError(v21, v20, v22);
        *(_QWORD *)(v96 + 24) = v17;
        LODWORD(v23) = -1073741811;
        *(_QWORD *)(v96 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v96);
LABEL_135:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
        if ( v105 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
        v61 = v97;
        if ( !v97 )
          return (unsigned int)v23;
        goto LABEL_138;
      }
      v24 = *(_QWORD *)(v102 + 16);
      if ( v24 )
      {
        v109 = 0LL;
        if ( (*(_DWORD *)(v24 + 12) & 0x10) != 0 )
        {
          v63 = WdLogNewEntry5_WdEvent(v21);
          *(_QWORD *)(v63 + 24) = v24;
          v64 = -1073741823;
          *(_QWORD *)(v63 + 32) = -1073741823LL;
          WdLogEvent5_WdEvent(v63);
        }
        else
        {
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v114, v112);
          if ( (v25 & 2) != 0 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v120);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v114, 1u);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
            LODWORD(v106) = COREDEVICEACCESS::AcquireShared((__int64)v120, 0xFFFFFFFF, 0LL);
            if ( (int)v106 < 0 )
            {
              v68 = WdLogNewEntry5_WdWarning(v67, v66, v25);
              *(_QWORD *)(v68 + 24) = v17;
              v64 = (unsigned int)v106;
              *(_QWORD *)(v68 + 32) = (int)v106;
              WdLogEvent5_WdWarning(v68);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
              if ( !v97 )
                return v64;
              goto LABEL_75;
            }
          }
          v26 = v12[4];
          if ( 80 * v26 <= 0xFFFFFFFF )
          {
            v27 = 80LL * v12[4];
            if ( !is_mul_ok(v26, 0x50uLL) )
              v27 = -1LL;
            v106 = operator new[](v27, 0x4B677844u, PagedPool);
            if ( !v106 )
            {
              v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
              v69[3] = v17;
              v69[4] = v12[4];
              StandardAllocation = -1073741801;
              v69[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v69);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
              if ( !v97 )
                return (unsigned int)StandardAllocation;
LABEL_50:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v97 + 2), v97);
              return (unsigned int)StandardAllocation;
            }
            v31 = v12[16];
            if ( v31 && (v10 = operator new[](v31, 0x4B677844u, PagedPool), (v108 = v10) == 0LL) )
            {
              v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v28, v33);
              v70[3] = v17;
              v71 = v12[16];
            }
            else
            {
              if ( v12[12] )
              {
                v100 = operator new[](v12[12], 0x4B677844u, PagedPool);
                if ( !v100 )
                {
                  v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v28, v83);
                  v70[3] = v17;
                  v71 = v12[12];
                  goto LABEL_89;
                }
              }
              v34 = v12[8];
              if ( !v34 )
              {
                v35 = Src;
                goto LABEL_22;
              }
              v35 = operator new[](v34, 0x4B677844u, PagedPool);
              Src = v35;
              if ( v35 )
              {
LABEL_22:
                v37 = *((_QWORD *)v17 + 2);
                if ( *(_QWORD *)(v24 + 72) == v37 && *(_QWORD *)(v24 + 88) == *((_QWORD *)v17 + 216) )
                {
                  if ( v5 )
                  {
                    *((_QWORD *)v12 + 9) = v10;
                    *((_QWORD *)v12 + 7) = v100;
                    *((_QWORD *)v12 + 5) = v35;
                    *((_QWORD *)v12 + 3) = v106;
                  }
                  StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                         v17,
                                         0,
                                         (__int64)v120,
                                         v98,
                                         0LL,
                                         0LL,
                                         0LL);
                  if ( StandardAllocation >= 0 )
                  {
                    v42 = v108;
LABEL_28:
                    v11 = 1;
                    if ( v5 )
                    {
                      v43 = (_QWORD *)v110;
                      v44 = (_DWORD *)(v110 + 80);
                      if ( v110 + 80 >= MmUserProbeAddress )
                        v44 = (_DWORD *)MmUserProbeAddress;
                      *v44 = v12[20];
                      v45 = v43 + 8;
                      if ( (unsigned __int64)(v43 + 8) >= MmUserProbeAddress )
                        v45 = (_DWORD *)MmUserProbeAddress;
                      *v45 = v12[16];
                      v46 = 0;
                      v47 = v113;
                      while ( v46 < v12[4] )
                      {
                        v53 = 80LL * v46;
                        v113 = v47 + *(_DWORD *)(*((_QWORD *)v12 + 3) + v53 + 8) - v12[18];
                        v54 = v53 + v43[3];
                        v55 = (_DWORD *)v54;
                        if ( v54 >= MmUserProbeAddress )
                          v55 = (_DWORD *)MmUserProbeAddress;
                        *v55 = *(_DWORD *)(v53 + *((_QWORD *)v12 + 3));
                        v56 = (_DWORD *)(v54 + 16);
                        if ( v54 + 16 >= MmUserProbeAddress )
                          v56 = (_DWORD *)MmUserProbeAddress;
                        *v56 = *(_DWORD *)(*((_QWORD *)v12 + 3) + v53 + 16);
                        v57 = (_QWORD *)(v54 + 8);
                        if ( v54 + 8 >= MmUserProbeAddress )
                          v57 = (_QWORD *)MmUserProbeAddress;
                        *v57 = v113;
                        ++v46;
                        v17 = v99;
                        v43 = (_QWORD *)v110;
                      }
                      if ( v12[8] )
                      {
                        v48 = (char *)v43[5];
                        v49 = v12[8];
                        if ( (unsigned __int64)&v48[v49] > MmUserProbeAddress || &v48[v49] <= v48 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v48, Src, v49);
                        v17 = v99;
                        v43 = (_QWORD *)v110;
                      }
                      if ( v12[12] )
                      {
                        v94 = (char *)v43[7];
                        v95 = v12[12];
                        if ( (unsigned __int64)&v94[v95] > MmUserProbeAddress || &v94[v95] <= v94 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v94, v100, v95);
                        v17 = v99;
                      }
                      v11 = 1;
                      if ( v12[16] )
                      {
                        v50 = *(char **)(v110 + 72);
                        v51 = v12[16];
                        if ( (unsigned __int64)&v50[v51] > MmUserProbeAddress || &v50[v51] <= v50 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v50, v42, v51);
                        v11 = 1;
                        v17 = v99;
                      }
                    }
LABEL_46:
                    if ( StandardAllocation >= 0 )
                      goto LABEL_47;
LABEL_90:
                    if ( !v11 )
                      goto LABEL_47;
                    v72 = v112;
                    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                      (DXGHANDLETABLELOCKEXCLUSIVE *)v116,
                      (struct _KTHREAD **)v112);
                    v73 = v12[20];
                    v74 = (v73 >> 6) & 0xFFFFFF;
                    v98 = *((_DWORD *)v72 + 56);
                    if ( (unsigned int)v74 < v98 )
                    {
                      v75 = *((_QWORD *)v72 + 26);
                      v76 = *(_DWORD *)(v75 + 16LL * (unsigned int)v74 + 8);
                      v77 = (v76 >> 5) & 3;
                      if ( v73 >> 30 == v77 && (v76 & 0x2000) == 0 )
                      {
                        v78 = v76 & 0x1F;
                        if ( (v76 & 0x1F) != 0 )
                        {
                          v79 = v76 & 0x1F;
                          if ( (_BYTE)v79 == 4 )
                          {
                            v81 = *(struct DXGRESOURCE **)(v75 + 16LL * (unsigned int)v74);
                            if ( v81 && (unsigned int)v74 < v98 && v73 >> 30 == v77 && v78 )
                              *(_DWORD *)(v75 + 16LL * ((v73 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                            goto LABEL_98;
                          }
                          v80 = WdLogNewEntry5_WdError(v74, v79, v75);
                          *(_QWORD *)(v80 + 24) = 267LL;
                          WdLogEvent5_WdError(v80);
                        }
                      }
                    }
                    v81 = 0LL;
LABEL_98:
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v116);
                    DXGDEVICE::DestroyAllocationInternal(v17, 0, 0LL, v81, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_47:
                    operator delete[](v108);
                    operator delete[](v100);
                    operator delete[](v106);
                    operator delete[](Src);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
                    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
                    if ( v105 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
                    if ( !v97 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_50;
                  }
                  v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
                  v84[3] = 10858LL;
LABEL_128:
                  WdLogEvent5_WdWarning(v84);
                  goto LABEL_46;
                }
                v85 = *(_DWORD *)(v24 + 12);
                if ( (v85 & 0x20) == 0 )
                {
                  StandardAllocation = -1073741811;
                  v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v28, v37);
                  v84[3] = v17;
                  v84[4] = v102;
                  v84[5] = -1073741811LL;
                  goto LABEL_128;
                }
                if ( *(_DWORD *)(v24 + 124) != v12[4] )
                {
                  v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v28, v37);
                  v86[3] = v17;
                  v86[4] = v12[4];
                  v87 = *(unsigned int *)(v24 + 124);
LABEL_107:
                  v86[5] = v87;
                  v86[6] = -1073741811LL;
LABEL_109:
                  WdLogEvent5_WdWarning(v86);
                  StandardAllocation = -1073741811;
                  goto LABEL_90;
                }
                v98 = *(_DWORD *)(v24 + 104);
                if ( v12[8] != v98 )
                {
                  v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v28, v37);
                  v86[3] = v17;
                  v86[4] = v12[8];
                  v87 = *(unsigned int *)(v24 + 104);
                  goto LABEL_107;
                }
                v88 = *(unsigned int *)(v24 + 208);
                if ( !(_DWORD)v88 && *(_DWORD *)(*(_QWORD *)(v37 + 16) + 1728LL) < 0x5000u )
                {
                  v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v88, v37);
                  v86[3] = v17;
                  v86[4] = -1073741811LL;
                  goto LABEL_109;
                }
                v119 = 0LL;
                v118[2] = v88;
                v118[0] = *(_DWORD *)(v24 + 200);
                v118[1] = *(_DWORD *)(v24 + 204);
                v118[3] = 7;
                memset(v117, 0, 0x1A8uLL);
                v89 = v117[0] & 0xFFFFBEFF | (4 * (v85 & 0x40 | (32 * (v85 & 0x80)))) | 0x41;
                HIDWORD(v117[0]) = *v12;
                LODWORD(v117[2]) = 4;
                v117[3] = v118;
                v117[39] = *(_QWORD *)(v24 + 96);
                LODWORD(v117[40]) = v98;
                v90 = *(_QWORD *)(v24 + 184);
                if ( (v85 & 0x200) != 0 )
                  v117[42] = *(_QWORD *)(v24 + 184);
                else
                  v117[41] = *(_QWORD *)(v24 + 184);
                v117[43] = *(_QWORD *)(v24 + 216);
                LODWORD(v117[6]) = *(_DWORD *)(v24 + 224);
                v117[44] = v100;
                LODWORD(v117[45]) = v12[12];
                v117[46] = v108;
                LODWORD(v117[47]) = v12[16];
                LODWORD(v117[0]) = v89 ^ (v89 ^ (v85 << 7)) & 0x400 | 0x200;
                v117[52] = *(_QWORD *)(v24 + 176);
                if ( (v85 & 0x200) != 0 )
                {
                  v117[42] = v90;
                }
                else
                {
                  if ( (v85 & 0x400) == 0 )
                  {
LABEL_121:
                    StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                           v17,
                                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v117,
                                           (struct COREDEVICEACCESS *)v120);
                    if ( StandardAllocation < 0 )
                      goto LABEL_46;
                    *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                             (__int64)v112,
                                             (DXGRESOURCEREFERENCE *)&v102,
                                             v117[1])
                              + 120LL) = v24;
                    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v102);
                    memmove(Src, *(const void **)(v24 + 96), v12[8]);
                    v12[20] = v117[1];
                    v93 = v106;
                    *(_DWORD *)v106 = HIDWORD(v117[6]);
                    v93[4] = v12[16];
                    v42 = v108;
                    *((_QWORD *)v93 + 1) = v108;
                    *((_QWORD *)v12 + 3) = v93;
                    *((_QWORD *)v12 + 5) = Src;
                    *((_QWORD *)v12 + 7) = v100;
                    *((_QWORD *)v12 + 9) = v42;
                    goto LABEL_28;
                  }
                  v117[41] = v90;
                }
                v92 = *(_DWORD *)(v24 + 196);
                v91 = v89 ^ (v89 ^ (v85 << 7)) & 0x400 | 0x200;
                LODWORD(v117[0]) = v91 ^ ((unsigned __int8)v91 ^ (unsigned __int8)(v85 >> 7)) & 0x10;
                LODWORD(v117[49]) = v92;
                goto LABEL_121;
              }
              v70 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v28, v36);
              v70[3] = v17;
              v71 = v12[8];
            }
LABEL_89:
            v70[4] = v71;
            StandardAllocation = -1073741801;
            v70[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v70);
            goto LABEL_90;
          }
          v65 = WdLogNewEntry5_WdWarning(v26, 0xFFFFFFFFLL, v25);
          *(_QWORD *)(v65 + 24) = v17;
          v64 = -1073741675;
          *(_QWORD *)(v65 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v65);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
        }
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v109);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
        if ( v105 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
        if ( !v97 )
          return v64;
LABEL_75:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v97 + 2), v97);
        return v64;
      }
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v62[4] = v102;
      LODWORD(v23) = -1073741811;
      v62[5] = -1073741811LL;
    }
    v62[3] = v17;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_135;
  }
  v60 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v60 + 24) = v17;
  LODWORD(v23) = -1073741811;
  *(_QWORD *)(v60 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v60);
LABEL_63:
  v61 = v97;
  if ( v97 )
  {
LABEL_138:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v97 + 2), v97);
  }
  return (unsigned int)v23;
}
