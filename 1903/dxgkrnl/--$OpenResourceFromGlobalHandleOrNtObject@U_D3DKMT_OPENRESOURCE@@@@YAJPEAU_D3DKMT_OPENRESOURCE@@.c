/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EFBC8
 * Callers:
 *     DxgkOpenResource @ 0x1C00EFAA0 (DxgkOpenResource.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C3C (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006FC4 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007628 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00EE57C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0408 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0DB4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C0206714 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_2_--ENSURE_SHARED_RESOURCE_DERE.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  __int64 v2; // r13
  bool v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // r8
  char v9; // r12
  DXGSHAREDRESOURCE *v10; // rdi
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // r15
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  SIZE_T v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // eax
  PVOID v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r8
  void *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int StandardAllocation; // r15d
  void *v53; // r13
  void *v54; // rsi
  _QWORD *v55; // r8
  _DWORD *v56; // rdx
  _DWORD *v57; // rdx
  unsigned int v58; // r10d
  __int64 v59; // r12
  char *v60; // rcx
  size_t v61; // r8
  char *v62; // rcx
  size_t v63; // r8
  __int64 v65; // r11
  ULONG64 v66; // r9
  _DWORD *v67; // rdx
  _DWORD *v68; // rdx
  _QWORD *v69; // rdx
  __int64 v70; // rax
  _QWORD *v71; // rax
  struct DXGDEVICE *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  struct DXGDEVICE *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // edi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rcx
  struct DXGPROCESS *v90; // r13
  unsigned int v91; // r12d
  __int64 v92; // rcx
  __int64 v93; // r8
  unsigned int v94; // edx
  int v95; // eax
  int v96; // r9d
  int v97; // r10d
  __int64 v98; // rdx
  __int64 v99; // rax
  struct DXGRESOURCE *v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rax
  unsigned int v104; // r15d
  int v105; // r13d
  __int64 v106; // rdx
  unsigned int v107; // r8d
  __int64 v108; // rdx
  int v109; // ecx
  int v110; // eax
  _DWORD *v111; // rcx
  char *v112; // rcx
  size_t v113; // r8
  _QWORD *v114; // rax
  __int64 v115; // rax
  int v116; // [rsp+30h] [rbp-408h]
  bool v117; // [rsp+50h] [rbp-3E8h]
  struct DXGDEVICE *v118; // [rsp+58h] [rbp-3E0h] BYREF
  void *v119; // [rsp+60h] [rbp-3D8h]
  struct DXGDEVICE *v120; // [rsp+68h] [rbp-3D0h] BYREF
  int v121; // [rsp+78h] [rbp-3C0h]
  char v122[8]; // [rsp+80h] [rbp-3B8h] BYREF
  __int64 v123; // [rsp+88h] [rbp-3B0h]
  char v124; // [rsp+90h] [rbp-3A8h]
  void *v125; // [rsp+98h] [rbp-3A0h]
  void *Src; // [rsp+A0h] [rbp-398h]
  DXGSHAREDRESOURCE *v127[2]; // [rsp+A8h] [rbp-390h] BYREF
  void *v128; // [rsp+B8h] [rbp-380h]
  ULONG64 v129; // [rsp+C0h] [rbp-378h]
  _BYTE v130[16]; // [rsp+C8h] [rbp-370h] BYREF
  struct DXGPROCESS *v131; // [rsp+D8h] [rbp-360h]
  _BYTE v132[16]; // [rsp+E0h] [rbp-358h] BYREF
  char v133[8]; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-340h]
  __int64 v135; // [rsp+100h] [rbp-338h]
  _BYTE v136[24]; // [rsp+108h] [rbp-330h] BYREF
  _OWORD v137[5]; // [rsp+120h] [rbp-318h] BYREF
  _BYTE v138[32]; // [rsp+170h] [rbp-2C8h] BYREF
  _QWORD v139[54]; // [rsp+190h] [rbp-2A8h] BYREF
  _DWORD v140[4]; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v141; // [rsp+350h] [rbp-E8h]
  __int64 v142[20]; // [rsp+360h] [rbp-D8h] BYREF

  v2 = a2;
  v129 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v117 = v4;
  Current = DXGPROCESS::GetCurrent();
  v131 = Current;
  v125 = 0LL;
  v119 = 0LL;
  Src = 0LL;
  v9 = 0;
  if ( !Current )
  {
    v73 = WdLogNewEntry5_WdError(v6, v5, v8);
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v73 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v73);
    return (unsigned int)v21;
  }
  memset(v137, 0, 0x48uLL);
  v10 = (DXGSHAREDRESOURCE *)v137;
  if ( v4 )
  {
    v11 = a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v137[0] = *(_OWORD *)v11;
    v137[1] = *(_OWORD *)(v11 + 16);
    v137[2] = *(_OWORD *)(v11 + 32);
    v137[3] = *(_OWORD *)(v11 + 48);
    *(_QWORD *)&v137[4] = *(_QWORD *)(v11 + 64);
  }
  else
  {
    v10 = (DXGSHAREDRESOURCE *)a1;
  }
  v127[1] = v10;
  v134 = *((_QWORD *)v10 + 7);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v118, *(_DWORD *)v10, (struct _KTHREAD **)Current, &v120);
  v15 = v120;
  if ( !v120 )
  {
    v74 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v74 + 24) = *(unsigned int *)v10;
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v74 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v74);
    goto LABEL_78;
  }
  if ( !*((_DWORD *)v10 + 16) && !*((_DWORD *)v10 + 12) )
  {
    v75 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v75 + 24) = v15;
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v75 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v75);
LABEL_78:
    v76 = v118;
    if ( v118 )
    {
LABEL_156:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
    }
    return (unsigned int)v21;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v130,
    v120);
  v123 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  v124 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v142, (__int64)v15, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((__int64)v142, 0xFFFFFFFF, 0LL);
  v21 = v17;
  if ( v17 < 0 )
  {
    v77 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v77 + 24) = v15;
    *(_QWORD *)(v77 + 32) = v21;
    WdLogEvent5_WdWarning(v77);
    goto LABEL_153;
  }
  if ( !(_DWORD)v2 )
  {
    v115 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v115 + 24) = v15;
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v115 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v115);
    goto LABEL_153;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v132);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v132);
  Global = DXGGLOBAL::GetGlobal(v23, v22);
  v128 = Global;
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Global + 19) != CurrentThread )
  {
    v70 = WdLogNewEntry5_WdAssertion(CurrentThread, v25);
    *(_QWORD *)(v70 + 24) = 1029LL;
    WdLogEvent5_WdAssertion(v70);
    Global = v128;
  }
  v28 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  v29 = (unsigned int)v2 >> 30;
  if ( (unsigned int)v28 >= *((_DWORD *)Global + 48)
    || (v30 = (unsigned int)v28,
        v26 = *((_QWORD *)Global + 22),
        v28 = *(unsigned int *)(v26 + 16LL * (unsigned int)v28 + 8),
        (_DWORD)v29 != (((unsigned int)v28 >> 5) & 3))
    || (v28 & 0x2000) != 0
    || (v28 & 0x1F) == 0 )
  {
LABEL_73:
    v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v29, v26);
LABEL_74:
    LODWORD(v21) = -1073741811;
    v72 = v120;
    v71[5] = -1073741811LL;
    v71[4] = v2;
    v71[3] = v72;
    WdLogEvent5_WdWarning(v71);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v132);
LABEL_153:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
    if ( v124 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v130);
    v76 = v118;
    if ( !v118 )
      return (unsigned int)v21;
    goto LABEL_156;
  }
  v31 = 2 * v30;
  v28 &= 0x1Fu;
  if ( (_BYTE)v28 != 2 )
  {
    v78 = WdLogNewEntry5_WdError(v28, v29, v26);
    *(_QWORD *)(v78 + 24) = 267LL;
    WdLogEvent5_WdError(v78);
    goto LABEL_73;
  }
  v32 = *(_QWORD *)(v26 + 8 * v31);
  if ( !v32 )
    goto LABEL_73;
  _m_prefetchw((const void *)(v32 + 60));
  v33 = *(_DWORD *)(v32 + 60);
  do
  {
    if ( !v33 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v29, v26);
      v71[6] = 10555LL;
      goto LABEL_74;
    }
    v28 = (unsigned int)(v33 + 1);
    v34 = v33;
    v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v32 + 60), v28, v33);
  }
  while ( v34 != v33 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v132);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v132);
  v127[0] = (DXGSHAREDRESOURCE *)(v32 & -(__int64)((_DWORD)v2 != 0));
  if ( (*(_DWORD *)(v32 + 12) & 0x10) != 0 )
  {
    v79 = WdLogNewEntry5_WdEvent(v32 & -(__int64)((_DWORD)v2 != 0));
    *(_QWORD *)(v79 + 24) = v32;
    v80 = -1073741823;
    *(_QWORD *)(v79 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v79);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v136, v131);
    if ( (v35 & 2) != 0 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v142);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v136, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
      v121 = COREDEVICEACCESS::AcquireShared((__int64)v142, 0xFFFFFFFF, 0LL);
      if ( v121 < 0 )
      {
        v84 = WdLogNewEntry5_WdWarning(v83, v82, v35);
        *(_QWORD *)(v84 + 24) = v120;
        v80 = v121;
        *(_QWORD *)(v84 + 32) = v121;
        WdLogEvent5_WdWarning(v84);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v136);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v127);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
        if ( v124 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v130);
        if ( v118 )
          goto LABEL_89;
        return v80;
      }
    }
    v36 = *((unsigned int *)v10 + 2);
    if ( 80 * v36 <= 0xFFFFFFFF )
    {
      v37 = 80LL * *((unsigned int *)v10 + 2);
      if ( !is_mul_ok(v36, 0x50uLL) )
        v37 = -1LL;
      v128 = operator new[](v37, 0x4B677844u, PagedPool);
      if ( !v128 )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
        v85[3] = v120;
        v85[4] = *((unsigned int *)v10 + 2);
        StandardAllocation = -1073741801;
        v85[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v85);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v136);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v127);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
        if ( v124 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v130);
        if ( v118 )
          goto LABEL_63;
        return (unsigned int)StandardAllocation;
      }
      v41 = *((_DWORD *)v10 + 16);
      if ( v41 )
      {
        v119 = operator new[](v41, 0x4B677844u, PagedPool);
        if ( !v119 )
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v42, v43);
          v86[3] = v120;
          v87 = *((unsigned int *)v10 + 16);
          goto LABEL_103;
        }
      }
      if ( *((_DWORD *)v10 + 12) )
      {
        v125 = operator new[](*((unsigned int *)v10 + 12), 0x4B677844u, PagedPool);
        if ( !v125 )
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v101, v102);
          v86[3] = v120;
          v87 = *((unsigned int *)v10 + 12);
LABEL_103:
          v86[4] = v87;
          StandardAllocation = -1073741801;
          v86[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v86);
LABEL_107:
          v48 = v119;
LABEL_108:
          if ( v9 )
          {
            v90 = v131;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
              (DXGHANDLETABLELOCKEXCLUSIVE *)v138,
              (struct _KTHREAD **)v131);
            v91 = *((_DWORD *)v10 + 17);
            v92 = (v91 >> 6) & 0xFFFFFF;
            v121 = *((_DWORD *)v90 + 56);
            if ( (unsigned int)v92 < v121
              && (v93 = *((_QWORD *)v90 + 26),
                  v94 = *(_DWORD *)(v93 + 16LL * (unsigned int)v92 + 8),
                  v95 = (v94 >> 5) & 3,
                  v91 >> 30 == v95)
              && (v96 = v94 & 0x2000, (v94 & 0x2000) == 0)
              && (v97 = v94 & 0x1F, (v94 & 0x1F) != 0) )
            {
              v98 = v94 & 0x1F;
              if ( (_BYTE)v98 != 4 )
              {
                v99 = WdLogNewEntry5_WdError(v92, v98, v93);
                *(_QWORD *)(v99 + 24) = 267LL;
                WdLogEvent5_WdError(v99);
                goto LABEL_115;
              }
              v100 = *(struct DXGRESOURCE **)(v93 + 16LL * (unsigned int)v92);
              if ( v100 && (unsigned int)v92 < v121 && v91 >> 30 == v95 && !v96 && v97 )
                *(_DWORD *)(v93 + 16LL * ((v91 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
LABEL_115:
              v100 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
            DXGDEVICE::DestroyAllocationInternal(v120, 0, 0LL, v100, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_57:
          operator delete[](v48);
          operator delete[](v125);
          operator delete[](v128);
          operator delete[](Src);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v136);
          if ( v127[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v127[0] + 15, 0xFFFFFFFF) == 1 )
            DXGSHAREDRESOURCE::Destroy(v127[0], 0LL, 0);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
          if ( v124 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v130);
          if ( v118 )
          {
LABEL_63:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v44 = *((_DWORD *)v10 + 8);
      if ( v44 )
      {
        v45 = operator new[](v44, 0x4B677844u, PagedPool);
        Src = v45;
        if ( !v45 )
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, 0LL, v46);
          v86[3] = v120;
          v87 = *((unsigned int *)v10 + 8);
          goto LABEL_103;
        }
      }
      else
      {
        v45 = Src;
      }
      v47 = *((_QWORD *)v15 + 2);
      if ( *(_QWORD *)(v32 + 72) == v47 )
      {
        v39 = *((_QWORD *)v120 + 216);
        if ( *(_QWORD *)(v32 + 88) == v39 )
        {
          v48 = v119;
          if ( v117 )
          {
            *((_QWORD *)v10 + 7) = v119;
            *((_QWORD *)v10 + 5) = v125;
            *((_QWORD *)v10 + 3) = v45;
            *((_QWORD *)v10 + 2) = v128;
          }
          StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                 v120,
                                 0,
                                 (__int64)v142,
                                 v116,
                                 0LL,
                                 0LL,
                                 0LL);
          if ( StandardAllocation < 0 )
          {
            v103 = WdLogNewEntry5_WdWarning(v50, v49, v51);
            *(_QWORD *)(v103 + 24) = 10858LL;
            WdLogEvent5_WdWarning(v103);
            goto LABEL_56;
          }
          v53 = v119;
          v54 = v125;
LABEL_38:
          v9 = 1;
          if ( v117 )
          {
            v55 = (_QWORD *)v129;
            v56 = (_DWORD *)(v129 + 68);
            if ( v129 + 68 >= MmUserProbeAddress )
              v56 = (_DWORD *)MmUserProbeAddress;
            *v56 = *((_DWORD *)v10 + 17);
            v57 = v55 + 8;
            if ( (unsigned __int64)(v55 + 8) >= MmUserProbeAddress )
              v57 = (_DWORD *)MmUserProbeAddress;
            *v57 = *((_DWORD *)v10 + 16);
            v58 = 0;
            v59 = v134;
            while ( v58 < *((_DWORD *)v10 + 2) )
            {
              v65 = 80LL * v58;
              v135 = v59 + (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 2) + v65 + 8) - *((_DWORD *)v10 + 14));
              v66 = v65 + v55[2];
              v67 = (_DWORD *)v66;
              if ( v66 >= MmUserProbeAddress )
                v67 = (_DWORD *)MmUserProbeAddress;
              *v67 = *(_DWORD *)(v65 + *((_QWORD *)v10 + 2));
              v68 = (_DWORD *)(v66 + 16);
              if ( v66 + 16 >= MmUserProbeAddress )
                v68 = (_DWORD *)MmUserProbeAddress;
              *v68 = *(_DWORD *)(*((_QWORD *)v10 + 2) + v65 + 16);
              v69 = (_QWORD *)(v66 + 8);
              if ( v66 + 8 >= MmUserProbeAddress )
                v69 = (_QWORD *)MmUserProbeAddress;
              *v69 = v135;
              ++v58;
              v55 = (_QWORD *)v129;
            }
            if ( *((_DWORD *)v10 + 8) )
            {
              v60 = (char *)v55[3];
              v61 = *((unsigned int *)v10 + 8);
              if ( (unsigned __int64)&v60[v61] > MmUserProbeAddress || &v60[v61] <= v60 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v60, Src, v61);
              v55 = (_QWORD *)v129;
            }
            if ( *((_DWORD *)v10 + 12) )
            {
              v112 = (char *)v55[5];
              v113 = *((unsigned int *)v10 + 12);
              if ( (unsigned __int64)&v112[v113] > MmUserProbeAddress || &v112[v113] <= v112 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v112, v54, v113);
            }
            v9 = 1;
            if ( *((_DWORD *)v10 + 16) )
            {
              v62 = *(char **)(v129 + 56);
              v63 = *((unsigned int *)v10 + 16);
              if ( (unsigned __int64)&v62[v63] > MmUserProbeAddress || &v62[v63] <= v62 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v62, v53, v63);
              v9 = 1;
              v48 = v119;
              goto LABEL_56;
            }
          }
LABEL_143:
          v48 = v119;
          goto LABEL_56;
        }
      }
      v104 = *(_DWORD *)(v32 + 12);
      if ( (v104 & 0x20) == 0 )
      {
        StandardAllocation = -1073741811;
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v45, v47);
        v114[3] = v120;
        v114[4] = 0LL;
        v114[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v114);
        goto LABEL_143;
      }
      if ( *(_DWORD *)(v32 + 124) != *((_DWORD *)v10 + 2) )
      {
        v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v45, v47);
        v88[3] = v120;
        v88[4] = *((unsigned int *)v10 + 2);
        v89 = *(unsigned int *)(v32 + 124);
        goto LABEL_105;
      }
      v105 = *(_DWORD *)(v32 + 104);
      if ( *((_DWORD *)v10 + 8) != v105 )
      {
        v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v45, v47);
        v88[3] = v120;
        v88[4] = *((unsigned int *)v10 + 8);
        v89 = *(unsigned int *)(v32 + 104);
LABEL_105:
        v88[5] = v89;
        v88[6] = -1073741811LL;
LABEL_106:
        WdLogEvent5_WdWarning(v88);
        StandardAllocation = -1073741811;
        goto LABEL_107;
      }
      v106 = *(unsigned int *)(v32 + 208);
      if ( !(_DWORD)v106 && *(_DWORD *)(*(_QWORD *)(v47 + 16) + 1728LL) < 0x5000u )
      {
        v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v106, v47);
        v88[3] = v120;
        v88[4] = -1073741811LL;
        goto LABEL_106;
      }
      v141 = 0LL;
      v140[2] = v106;
      v140[0] = *(_DWORD *)(v32 + 200);
      v140[1] = *(_DWORD *)(v32 + 204);
      v140[3] = 7;
      memset(v139, 0, 0x1A8uLL);
      v107 = v139[0] & 0xFFFFBEFF | (4 * (v104 & 0x40 | (32 * (v104 & 0x80)))) | 0x41;
      HIDWORD(v139[0]) = *(_DWORD *)v10;
      LODWORD(v139[2]) = 4;
      v139[3] = v140;
      v139[39] = *(_QWORD *)(v32 + 96);
      LODWORD(v139[40]) = v105;
      v108 = *(_QWORD *)(v32 + 184);
      if ( (v104 & 0x200) != 0 )
        v139[42] = *(_QWORD *)(v32 + 184);
      else
        v139[41] = *(_QWORD *)(v32 + 184);
      v139[43] = *(_QWORD *)(v32 + 216);
      LODWORD(v139[6]) = *(_DWORD *)(v32 + 224);
      v139[44] = v125;
      LODWORD(v139[45]) = *((_DWORD *)v10 + 12);
      v53 = v119;
      v139[46] = v119;
      LODWORD(v139[47]) = *((_DWORD *)v10 + 16);
      LODWORD(v139[0]) = v107 ^ (v107 ^ (v104 << 7)) & 0x400 | 0x200;
      v139[52] = *(_QWORD *)(v32 + 176);
      if ( (v104 & 0x200) != 0 )
      {
        v139[42] = v108;
        goto LABEL_135;
      }
      if ( (v104 & 0x400) != 0 )
      {
        v139[41] = v108;
LABEL_135:
        v110 = *(_DWORD *)(v32 + 196);
        v109 = v107 ^ (v107 ^ (v104 << 7)) & 0x400 | 0x200;
        LODWORD(v139[0]) = v109 ^ ((unsigned __int8)v109 ^ (unsigned __int8)(v104 >> 7)) & 0x10;
        LODWORD(v139[49]) = v110;
      }
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             v120,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v139,
                             (struct COREDEVICEACCESS *)v142);
      if ( StandardAllocation >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v131, (DXGRESOURCEREFERENCE *)v133, v139[1]) + 120LL) = v32;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v133);
        memmove(Src, *(const void **)(v32 + 96), *((unsigned int *)v10 + 8));
        *((_DWORD *)v10 + 17) = v139[1];
        v111 = v128;
        *(_DWORD *)v128 = HIDWORD(v139[6]);
        v111[4] = *((_DWORD *)v10 + 16);
        *((_QWORD *)v111 + 1) = v53;
        *((_QWORD *)v10 + 2) = v111;
        *((_QWORD *)v10 + 3) = Src;
        v54 = v125;
        *((_QWORD *)v10 + 5) = v125;
        *((_QWORD *)v10 + 7) = v53;
        goto LABEL_38;
      }
      v48 = v53;
LABEL_56:
      if ( StandardAllocation < 0 )
        goto LABEL_108;
      goto LABEL_57;
    }
    v81 = WdLogNewEntry5_WdWarning(v36, 0xFFFFFFFFLL, v35);
    *(_QWORD *)(v81 + 24) = v120;
    v80 = -1073741675;
    *(_QWORD *)(v81 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v81);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v136);
  }
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v127);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
  if ( v124 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v130);
  if ( v118 )
  {
LABEL_89:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
  }
  return v80;
}
