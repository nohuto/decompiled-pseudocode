/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F17E0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
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
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F0B0C (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0B28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v5; // r13
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  PVOID v8; // r15
  char v9; // r12
  unsigned int *v10; // rdi
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // r14
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r13
  char v23; // r8
  unsigned __int64 v24; // rdx
  SIZE_T v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int StandardAllocation; // r15d
  void *v40; // r13
  _QWORD *v41; // r8
  _DWORD *v42; // rdx
  _DWORD *v43; // rdx
  unsigned int v44; // r10d
  __int64 v45; // r12
  char *v46; // rcx
  size_t v47; // r8
  char *v48; // rcx
  size_t v49; // r8
  __int64 v51; // r11
  ULONG64 v52; // r9
  _DWORD *v53; // rdx
  _DWORD *v54; // rdx
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // edi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rcx
  struct DXGPROCESS *v71; // r13
  unsigned int v72; // r12d
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // edx
  int v76; // eax
  __int64 v77; // rax
  struct DXGRESOURCE *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned int v82; // r15d
  _QWORD *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // r8d
  __int64 v87; // rdx
  int v88; // ecx
  int v89; // eax
  _DWORD *v90; // rcx
  char *v91; // rcx
  size_t v92; // r8
  __int64 v93; // rax
  bool v94; // [rsp+50h] [rbp-3A8h]
  struct DXGDEVICE *v95; // [rsp+58h] [rbp-3A0h] BYREF
  int v96; // [rsp+60h] [rbp-398h]
  struct DXGDEVICE *v97; // [rsp+70h] [rbp-388h] BYREF
  void *v98; // [rsp+78h] [rbp-380h]
  void *v99; // [rsp+80h] [rbp-378h]
  void *Src; // [rsp+88h] [rbp-370h]
  __int64 v101; // [rsp+90h] [rbp-368h] BYREF
  char v102[8]; // [rsp+98h] [rbp-360h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-358h]
  char v104; // [rsp+A8h] [rbp-350h]
  unsigned int *v105; // [rsp+B0h] [rbp-348h]
  void *v106; // [rsp+B8h] [rbp-340h]
  __int64 v107; // [rsp+C0h] [rbp-338h] BYREF
  ULONG64 v108; // [rsp+C8h] [rbp-330h]
  _BYTE v109[16]; // [rsp+D0h] [rbp-328h] BYREF
  __int64 v110; // [rsp+E0h] [rbp-318h]
  struct DXGPROCESS *v111; // [rsp+E8h] [rbp-310h]
  _BYTE v112[32]; // [rsp+F0h] [rbp-308h] BYREF
  _BYTE v113[96]; // [rsp+110h] [rbp-2E8h] BYREF
  _BYTE v114[32]; // [rsp+170h] [rbp-288h] BYREF
  _OWORD v115[6]; // [rsp+190h] [rbp-268h] BYREF
  __int64 v116; // [rsp+1F0h] [rbp-208h]
  _QWORD v117[54]; // [rsp+200h] [rbp-1F8h] BYREF
  __int64 v118; // [rsp+3B0h] [rbp-48h] BYREF
  __int64 v119; // [rsp+3B8h] [rbp-40h]
  __int64 v120; // [rsp+3C0h] [rbp-38h]

  v96 = a4;
  v101 = a3;
  v108 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v94 = v5;
  Current = DXGPROCESS::GetCurrent();
  v111 = Current;
  v99 = 0LL;
  v8 = 0LL;
  v106 = 0LL;
  Src = 0LL;
  v9 = 0;
  if ( !Current )
  {
    v56 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v56);
    return 3221225485LL;
  }
  v10 = (unsigned int *)v115;
  if ( v5 )
  {
    v11 = a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v115[0] = *(_OWORD *)v11;
    v115[1] = *(_OWORD *)(v11 + 16);
    v115[2] = *(_OWORD *)(v11 + 32);
    v115[3] = *(_OWORD *)(v11 + 48);
    v115[4] = *(_OWORD *)(v11 + 64);
    v115[5] = *(_OWORD *)(v11 + 80);
    v116 = *(_QWORD *)(v11 + 96);
  }
  else
  {
    v10 = (unsigned int *)a1;
  }
  v105 = v10;
  v110 = *((_QWORD *)v10 + 9);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v95, *v10, (struct _KTHREAD **)Current, &v97);
  v15 = v97;
  if ( !v97 )
  {
    v57 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v57 + 24) = *v10;
    *(_QWORD *)(v57 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v57);
LABEL_140:
    if ( v95 && _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95 + 2), v95);
    return 3221225485LL;
  }
  if ( !v10[16] && !v10[12] )
  {
    v58 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v58 + 24) = v15;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v58);
    goto LABEL_140;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109,
    v97);
  v103 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  v104 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, (__int64)v15, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v113);
  v21 = v17;
  if ( v17 >= 0 )
  {
    if ( v101 )
    {
      v22 = *(_QWORD *)(v101 + 16);
      if ( v22 )
      {
        v107 = 0LL;
        if ( (*(_DWORD *)(v22 + 12) & 0x10) != 0 )
        {
          v61 = WdLogNewEntry5_WdEvent(v19, v18);
          *(_QWORD *)(v61 + 24) = v22;
          v62 = -1073741823;
          *(_QWORD *)(v61 + 32) = -1073741823LL;
          WdLogEvent5_WdEvent(v61);
        }
        else
        {
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v112, Current);
          if ( (v23 & 2) != 0 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v113);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v112, 1u);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
            LODWORD(v98) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v113);
            if ( (int)v98 < 0 )
            {
              v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
              *(_QWORD *)(v67 + 24) = v15;
              v62 = (unsigned int)v98;
              *(_QWORD *)(v67 + 32) = (int)v98;
              WdLogEvent5_WdWarning(v67);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v107);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
              if ( v104 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
              if ( !v95 )
                return v62;
              goto LABEL_77;
            }
          }
          v24 = v10[4];
          LODWORD(v98) = 80 * v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( 80 * v24 <= 0xFFFFFFFF )
          {
            v25 = 80 * v24;
            if ( !is_mul_ok(v24, 0x50uLL) )
              v25 = -1LL;
            v98 = operator new(v25, 0x4B677844u, PagedPool);
            if ( !v98 )
            {
              v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
              v68[3] = v15;
              v68[4] = v10[4];
              StandardAllocation = -1073741801;
              v68[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v68);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v107);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
              if ( v104 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
              if ( !v95 )
                return (unsigned int)StandardAllocation;
LABEL_50:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95 + 2), v95);
              return (unsigned int)StandardAllocation;
            }
            v29 = v10[16];
            if ( v29 && (v8 = operator new(v29, 0x4B677844u, PagedPool), (v106 = v8) == 0LL) )
            {
              v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v28);
              v69[3] = v15;
              v70 = v10[16];
            }
            else
            {
              if ( v10[12] )
              {
                v99 = operator new(v10[12], 0x4B677844u, PagedPool);
                if ( !v99 )
                {
                  v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v80, v79, v28);
                  v69[3] = v15;
                  v70 = v10[12];
                  goto LABEL_91;
                }
              }
              v32 = v10[8];
              if ( !v32 )
              {
                v34 = Src;
                goto LABEL_22;
              }
              v34 = operator new(v32, 0x4B677844u, PagedPool);
              Src = v34;
              if ( v34 )
              {
LABEL_22:
                v35 = *((_QWORD *)v15 + 2);
                if ( *(_QWORD *)(v22 + 72) == v35 && *(_QWORD *)(v22 + 88) == *((_QWORD *)v15 + 216) )
                {
                  if ( v94 )
                  {
                    *((_QWORD *)v10 + 9) = v8;
                    *((_QWORD *)v10 + 7) = v99;
                    *((_QWORD *)v10 + 5) = v34;
                    *((_QWORD *)v10 + 3) = v98;
                  }
                  StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                         v15,
                                         0,
                                         (struct COREDEVICEACCESS *)v113,
                                         v96,
                                         0LL,
                                         0LL,
                                         0LL);
                  if ( StandardAllocation >= 0 )
                  {
                    v40 = v106;
LABEL_28:
                    v9 = 1;
                    if ( v94 )
                    {
                      v41 = (_QWORD *)v108;
                      v42 = (_DWORD *)(v108 + 80);
                      if ( v108 + 80 >= MmUserProbeAddress )
                        v42 = (_DWORD *)MmUserProbeAddress;
                      *v42 = v10[20];
                      v43 = v41 + 8;
                      if ( (unsigned __int64)(v41 + 8) >= MmUserProbeAddress )
                        v43 = (_DWORD *)MmUserProbeAddress;
                      *v43 = v10[16];
                      v44 = 0;
                      v45 = v110;
                      while ( v44 < v10[4] )
                      {
                        v51 = 80LL * v44;
                        v110 = v45 + *(_DWORD *)(*((_QWORD *)v10 + 3) + v51 + 8) - v10[18];
                        v52 = v51 + v41[3];
                        v53 = (_DWORD *)v52;
                        if ( v52 >= MmUserProbeAddress )
                          v53 = (_DWORD *)MmUserProbeAddress;
                        *v53 = *(_DWORD *)(v51 + *((_QWORD *)v10 + 3));
                        v54 = (_DWORD *)(v52 + 16);
                        if ( v52 + 16 >= MmUserProbeAddress )
                          v54 = (_DWORD *)MmUserProbeAddress;
                        *v54 = *(_DWORD *)(*((_QWORD *)v10 + 3) + v51 + 16);
                        v55 = (_QWORD *)(v52 + 8);
                        if ( v52 + 8 >= MmUserProbeAddress )
                          v55 = (_QWORD *)MmUserProbeAddress;
                        *v55 = v110;
                        ++v44;
                        v15 = v97;
                        v41 = (_QWORD *)v108;
                      }
                      if ( v10[8] )
                      {
                        v46 = (char *)v41[5];
                        v47 = v10[8];
                        if ( (unsigned __int64)&v46[v47] > MmUserProbeAddress || &v46[v47] <= v46 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v46, Src, v47);
                        v15 = v97;
                        v41 = (_QWORD *)v108;
                      }
                      if ( v10[12] )
                      {
                        v91 = (char *)v41[7];
                        v92 = v10[12];
                        if ( (unsigned __int64)&v91[v92] > MmUserProbeAddress || &v91[v92] <= v91 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v91, v99, v92);
                        v15 = v97;
                      }
                      v9 = 1;
                      if ( v10[16] )
                      {
                        v48 = *(char **)(v108 + 72);
                        v49 = v10[16];
                        if ( (unsigned __int64)&v48[v49] > MmUserProbeAddress || &v48[v49] <= v48 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v48, v40, v49);
                        v9 = 1;
                        v15 = v97;
                      }
                    }
LABEL_46:
                    if ( StandardAllocation >= 0 )
                      goto LABEL_47;
LABEL_92:
                    if ( !v9 )
                      goto LABEL_47;
                    v71 = v111;
                    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                      (DXGHANDLETABLELOCKEXCLUSIVE *)v114,
                      (struct _KTHREAD **)v111);
                    v72 = v10[20];
                    v73 = (v72 >> 6) & 0xFFFFFF;
                    v96 = *((_DWORD *)v71 + 62);
                    if ( (unsigned int)v73 < v96 )
                    {
                      v74 = *((_QWORD *)v71 + 29);
                      v75 = *(_DWORD *)(v74 + 16LL * (unsigned int)v73 + 8);
                      v76 = (v75 >> 5) & 3;
                      if ( v72 >> 30 == v76 && (v75 & 0x2000) == 0 && (v75 & 0x1F) != 0 )
                      {
                        if ( (v75 & 0x1F) == 4 )
                        {
                          v78 = *(struct DXGRESOURCE **)(v74 + 16LL * (unsigned int)v73);
                          if ( v78 && (unsigned int)v73 < v96 && v72 >> 30 == v76 && (v75 & 0x1F) != 0 )
                            *(_DWORD *)(v74 + 16LL * ((v72 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                          goto LABEL_100;
                        }
                        v77 = WdLogNewEntry5_WdError(v73);
                        *(_QWORD *)(v77 + 24) = 316LL;
                        WdLogEvent5_WdError(v77);
                      }
                    }
                    v78 = 0LL;
LABEL_100:
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v114);
                    DXGDEVICE::DestroyAllocationInternal(v15, 0, 0LL, v78, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_47:
                    operator delete[](v106);
                    operator delete[](v99);
                    operator delete[](v98);
                    operator delete[](Src);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
                    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v107);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
                    if ( v104 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
                    if ( !v95 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_50;
                  }
                  v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
                  v81[3] = 10933LL;
LABEL_130:
                  WdLogEvent5_WdWarning(v81);
                  goto LABEL_46;
                }
                v82 = *(_DWORD *)(v22 + 12);
                if ( (v82 & 0x20) == 0 )
                {
                  StandardAllocation = -1073741811;
                  v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v28);
                  v81[3] = v15;
                  v81[4] = v101;
                  v81[5] = -1073741811LL;
                  goto LABEL_130;
                }
                if ( *(_DWORD *)(v22 + 124) != v10[4] )
                {
                  v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v28);
                  v83[3] = v15;
                  v83[4] = v10[4];
                  v84 = *(unsigned int *)(v22 + 124);
LABEL_109:
                  v83[5] = v84;
                  v83[6] = -1073741811LL;
LABEL_111:
                  WdLogEvent5_WdWarning(v83);
                  StandardAllocation = -1073741811;
                  goto LABEL_92;
                }
                v96 = *(_DWORD *)(v22 + 104);
                if ( v10[8] != v96 )
                {
                  v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v28);
                  v83[3] = v15;
                  v83[4] = v10[8];
                  v84 = *(unsigned int *)(v22 + 104);
                  goto LABEL_109;
                }
                v85 = *(unsigned int *)(v22 + 208);
                if ( !(_DWORD)v85 && *(_DWORD *)(*(_QWORD *)(v35 + 16) + 1712LL) < 0x5000u )
                {
                  v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v85);
                  v83[3] = v15;
                  v83[4] = -1073741811LL;
                  goto LABEL_111;
                }
                v118 = 0LL;
                v120 = 0LL;
                v119 = (unsigned int)v85;
                v118 = *(_QWORD *)(v22 + 200);
                HIDWORD(v119) = 7;
                memset(v117, 0, 0x1A8uLL);
                v86 = v117[0] & 0xFFFFBEFF | (4 * (v82 & 0x40 | (32 * (v82 & 0x80)))) | 0x41;
                HIDWORD(v117[0]) = *v10;
                LODWORD(v117[2]) = 4;
                v117[3] = &v118;
                v117[39] = *(_QWORD *)(v22 + 96);
                LODWORD(v117[40]) = v96;
                v87 = *(_QWORD *)(v22 + 184);
                if ( (v82 & 0x200) != 0 )
                  v117[42] = *(_QWORD *)(v22 + 184);
                else
                  v117[41] = *(_QWORD *)(v22 + 184);
                v117[43] = *(_QWORD *)(v22 + 216);
                LODWORD(v117[6]) = *(_DWORD *)(v22 + 224);
                v117[44] = v99;
                LODWORD(v117[45]) = v10[12];
                v117[46] = v106;
                LODWORD(v117[47]) = v10[16];
                LODWORD(v117[0]) = v86 ^ (v86 ^ (v82 << 7)) & 0x400 | 0x200;
                v117[52] = *(_QWORD *)(v22 + 176);
                if ( (v82 & 0x200) != 0 )
                {
                  v117[42] = v87;
                }
                else
                {
                  if ( (v82 & 0x400) == 0 )
                  {
LABEL_123:
                    StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                           v15,
                                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v117,
                                           (struct COREDEVICEACCESS *)v113);
                    if ( StandardAllocation < 0 )
                      goto LABEL_46;
                    *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                             (__int64)v111,
                                             (DXGRESOURCEREFERENCE *)&v101,
                                             v117[1])
                              + 120LL) = v22;
                    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v101);
                    memmove(Src, *(const void **)(v22 + 96), v10[8]);
                    v10[20] = v117[1];
                    v90 = v98;
                    *(_DWORD *)v98 = HIDWORD(v117[6]);
                    v90[4] = v10[16];
                    v40 = v106;
                    *((_QWORD *)v90 + 1) = v106;
                    *((_QWORD *)v10 + 3) = v90;
                    *((_QWORD *)v10 + 5) = Src;
                    *((_QWORD *)v10 + 7) = v99;
                    *((_QWORD *)v10 + 9) = v40;
                    goto LABEL_28;
                  }
                  v117[41] = v87;
                }
                v89 = *(_DWORD *)(v22 + 196);
                v88 = v86 ^ (v86 ^ (v82 << 7)) & 0x400 | 0x200;
                LODWORD(v117[0]) = v88 ^ ((unsigned __int8)v88 ^ (unsigned __int8)(v82 >> 7)) & 0x10;
                LODWORD(v117[49]) = v89;
                goto LABEL_123;
              }
              v69 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v33, v28);
              v69[3] = v15;
              v70 = v10[8];
            }
LABEL_91:
            v69[4] = v70;
            StandardAllocation = -1073741801;
            v69[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v69);
            goto LABEL_92;
          }
          v63 = WdLogNewEntry5_WdWarning(80 * v24 > 0xFFFFFFFF ? 0xC0000095 : 0, v24, 0xFFFFFFFFLL);
          *(_QWORD *)(v63 + 24) = v15;
          v62 = (unsigned int)v98;
          *(_QWORD *)(v63 + 32) = (int)v98;
          WdLogEvent5_WdWarning(v63);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
        }
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v107);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
        if ( v104 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
        if ( !v95 )
          return v62;
LABEL_77:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95 + 2), v95);
        return v62;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v60[3] = v15;
      v60[4] = v101;
      v60[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v60);
    }
    else
    {
      v93 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v93 + 24) = v15;
      *(_QWORD *)(v93 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v93);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
    if ( v104 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
    goto LABEL_140;
  }
  v59 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v59 + 24) = v15;
  *(_QWORD *)(v59 + 32) = v21;
  WdLogEvent5_WdWarning(v59);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
  if ( v104 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
  if ( v95 && _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95 + 2), v95);
  return (unsigned int)v21;
}
