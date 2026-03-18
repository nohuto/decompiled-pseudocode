/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114D80
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C0138950 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C01392E0 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00F3820 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113C70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_ @ 0x1C01EFB80 (_lambda_f082766c36497653ae8a33afcd4107b6_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r14d
  struct _KEVENT *v27; // rbx
  struct _KEVENT *v28; // rbx
  __int64 v29; // rcx
  volatile signed __int64 *v30; // rax
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rbx
  OUTPUTDUPL_MGR *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  struct DXGGLOBAL *Global; // r14
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  struct OUTPUTDUPL_MGR_INDIRECT *v46; // rbx
  struct OUTPUTDUPL_MGR_INDIRECT *v47; // r14
  struct _KTHREAD **v48; // rbx
  int v49; // eax
  int v50; // eax
  struct DXGADAPTER *v51; // rcx
  struct DXGADAPTER *v52; // rcx
  unsigned int *v53; // r15
  unsigned int v54; // eax
  unsigned int v55; // r14d
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r13
  bool v61; // zf
  unsigned int v62; // ebx
  int v64; // r9d
  __int64 v65; // rax
  SIZE_T v66; // rax
  SIZE_T v67; // rax
  PVOID v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // r9d
  __int64 v72; // rax
  __int64 v73; // rax
  const GUID *v74; // r8
  __int64 v75; // rcx
  char v76; // bl
  __int64 v77; // rcx
  char v78; // r14
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // [rsp+68h] [rbp-A0h]
  unsigned int v90; // [rsp+6Ch] [rbp-9Ch]
  int v91; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v92; // [rsp+78h] [rbp-90h] BYREF
  char v93; // [rsp+80h] [rbp-88h]
  unsigned int v94; // [rsp+88h] [rbp-80h]
  void *v95; // [rsp+90h] [rbp-78h]
  unsigned int *v96; // [rsp+98h] [rbp-70h] BYREF
  struct DXGALLOCATION **v97; // [rsp+A0h] [rbp-68h]
  unsigned int *v98; // [rsp+A8h] [rbp-60h]
  void *v99; // [rsp+B0h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v100; // [rsp+C0h] [rbp-48h]
  struct DXGPROCESS *v101; // [rsp+C8h] [rbp-40h]
  _QWORD v102[4]; // [rsp+D0h] [rbp-38h] BYREF
  char v103[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v104; // [rsp+F8h] [rbp-10h]
  struct DXGADAPTER *v105; // [rsp+100h] [rbp-8h]
  char v106; // [rsp+108h] [rbp+0h]
  int v107; // [rsp+10Ch] [rbp+4h]
  __int64 v108; // [rsp+110h] [rbp+8h]
  char v109[8]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v110; // [rsp+138h] [rbp+30h]
  struct DXGADAPTER *v111; // [rsp+140h] [rbp+38h]
  char v112; // [rsp+148h] [rbp+40h]
  int v113; // [rsp+14Ch] [rbp+44h]
  __int64 v114; // [rsp+150h] [rbp+48h]
  __int64 v115; // [rsp+170h] [rbp+68h]
  bool v116; // [rsp+178h] [rbp+70h]
  _BYTE v117[256]; // [rsp+188h] [rbp+80h] BYREF
  char v118; // [rsp+288h] [rbp+180h] BYREF

  v9 = a5;
  v10 = a2;
  v101 = a1;
  v94 = a3;
  v96 = a4;
  v90 = a5;
  v100 = a7;
  memset(v117, 0, sizeof(v117));
  v95 = 0LL;
  v98 = (unsigned int *)v117;
  v97 = (struct DXGALLOCATION **)&v118;
  v99 = 0LL;
  if ( v94 && a5 )
  {
    v65 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v62 = -1073741811;
    *(_QWORD *)(v65 + 24) = v10;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
    goto LABEL_84;
  }
  v89 = a5;
  v14 = 1;
  if ( a5 >= 0x41 )
  {
    v66 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v66 = -1LL;
    v95 = operator new[](v66, 0x4B677844u, PagedPool);
    v67 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v67 = -1LL;
    v68 = operator new[](v67, 0x4B677844u, PagedPool);
    v99 = v68;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v12 = v95) != 0LL && v68 )
    {
      v97 = (struct DXGALLOCATION **)v68;
      v98 = (unsigned int *)v95;
    }
    else
    {
      v69 = WdLogNewEntry5_WdEvent(v12);
      *(_QWORD *)(v69 + 24) = 9770LL;
      WdLogEvent5_WdEvent(v69);
      v9 = 64;
      v90 = 64;
    }
  }
  if ( a1 != (struct DXGPROCESS *)-184LL && *((struct _KTHREAD **)a1 + 24) == KeGetCurrentThread() )
  {
    v70 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v70 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v70);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v71 = *((_DWORD *)a1 + 50);
      if ( v71 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v71);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 184, 0LL);
  }
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *((_DWORD *)a1 + 56) )
    goto LABEL_89;
  v18 = *((_QWORD *)a1 + 26);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v10 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_89;
  }
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 3 )
  {
    v72 = WdLogNewEntry5_WdError(((unsigned int)v10 >> 25) & 0x60, v20, v18);
    *(_QWORD *)(v72 + 24) = 267LL;
    WdLogEvent5_WdError(v72);
LABEL_89:
    v21 = 0LL;
    goto LABEL_14;
  }
  v21 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
  if ( v21 )
    _InterlockedIncrement64((volatile signed __int64 *)(v21 + 64));
LABEL_14:
  ExReleasePushLockSharedEx((char *)a1 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    v73 = WdLogNewEntry5_WdError(v23, v22, v24);
    v62 = -1073741811;
    *(_QWORD *)(v73 + 24) = v10;
    *(_QWORD *)(v73 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v73);
    goto LABEL_84;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v25 + 2184) >= 0x2000 || *(_BYTE *)(v25 + 2484) )
    v26 = *((_DWORD *)DXGGLOBAL::GetGlobal(v25, v22) + 247);
  else
    v26 = 0;
  v27 = *(struct _KEVENT **)(v21 + 16);
  v91 = v26;
  if ( *(_DWORD *)(v21 + 328) == 2 )
  {
    v28 = v27 + 4;
    if ( KeReadStateEvent(v28) )
      goto LABEL_19;
  }
  else
  {
    v28 = v27 + 3;
    if ( KeReadStateEvent(v28) )
      goto LABEL_19;
  }
  KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
LABEL_19:
  KeEnterCriticalRegion();
  if ( v26 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 112, 0LL) )
      goto LABEL_23;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v77 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_DWORD *)(v77 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v77, 0xFFFFFFFFLL);
      v78 = 1;
    }
    else
    {
      v78 = 0;
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 112));
    if ( !v78 )
      goto LABEL_134;
LABEL_133:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
LABEL_134:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_23;
  }
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v75 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_DWORD *)(v75 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v75, 0xFFFFFFFFLL);
      v76 = 1;
    }
    else
    {
      v76 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v75, &EventBlockThread, v74, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 1u);
    if ( !v76 )
      goto LABEL_134;
    goto LABEL_133;
  }
LABEL_23:
  v29 = *(_QWORD *)(v21 + 16);
  v30 = *(volatile signed __int64 **)(v29 + 16);
  v105 = (struct DXGADAPTER *)v30;
  v106 = 0;
  v107 = -1;
  v108 = 0LL;
  if ( v30 )
  {
    _InterlockedIncrement64(v30 + 3);
    v29 = *(_QWORD *)(v21 + 16);
    v104 = -1LL;
  }
  v31 = *(_QWORD *)(v21 + 1728);
  if ( v31 )
    v32 = *(volatile signed __int64 **)(v21 + 1728);
  else
    v32 = *(volatile signed __int64 **)(v29 + 16);
  v111 = (struct DXGADAPTER *)v32;
  v112 = 0;
  v113 = -1;
  v114 = 0LL;
  if ( v32 )
  {
    _InterlockedIncrement64(v32 + 3);
    v29 = *(_QWORD *)(v21 + 16);
    v31 = *(_QWORD *)(v21 + 1728);
    v110 = -1LL;
  }
  v115 = v21;
  v116 = v31 != *(_QWORD *)(v29 + 16) && v31;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v105 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v105 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v105 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared((__int64)v105, 0x7D6u, 0LL);
  }
  v107 = 2006;
  v108 = 0LL;
  v106 = 1;
  if ( *(_DWORD *)(v115 + 464) == 1 )
  {
    if ( !v116 || (COREACCESS::AcquireShared((__int64)v109, 0xFFFFFFFF, 0LL), *((_DWORD *)v111 + 44) == 1) )
    {
      v35 = *(_QWORD *)(v21 + 1728);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 2552);
        v37 = *(OUTPUTDUPL_MGR **)(v36 + 104);
        if ( !v37 || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v37, (PERESOURCE *)v21) >= 0 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 276LL);
          v102[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
          v102[0] = v38;
          v102[2] = v21;
          Global = DXGGLOBAL::GetGlobal(v38, (__int64)v32);
          v93 = 0;
          v92 = (struct _KTHREAD **)((char *)Global + 1168);
          if ( Global == (struct DXGGLOBAL *)-1168LL )
          {
            v79 = WdLogNewEntry5_WdAssertion(0LL, v39);
            *(_QWORD *)(v79 + 24) = 659LL;
            WdLogEvent5_WdAssertion(v79);
          }
          CurrentThread = KeGetCurrentThread();
          if ( v92[2] == CurrentThread )
          {
            v80 = WdLogNewEntry5_WdAssertion(CurrentThread, v39);
            *(_QWORD *)(v80 + 24) = 666LL;
            WdLogEvent5_WdAssertion(v80);
          }
          if ( v93 )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v39);
            v81[5] = &v92;
            v81[3] = 275LL;
            v81[4] = 4LL;
            v81[6] = 0LL;
            v81[7] = 0LL;
            WdLogEvent5_WdCriticalError(v81);
          }
          v42 = v92;
          KeEnterCriticalRegion();
          if ( v42[2] == KeGetCurrentThread() )
          {
            v82 = *((_DWORD *)v42 + 6);
            if ( v82 <= 0 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v44, v43);
              *(_QWORD *)(v83 + 24) = 558LL;
              WdLogEvent5_WdAssertion(v83);
              v82 = *((_DWORD *)v42 + 6);
            }
            v14 = v82 + 1;
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v42, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v64 = *((_DWORD *)v42 + 7);
                if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v44, &EventBlockThread, v45, v64);
              }
              _InterlockedIncrement64((volatile signed __int64 *)v42 + 1);
              ExAcquirePushLockExclusiveEx(v42, 0LL);
            }
            if ( v42[2] )
            {
              v84 = WdLogNewEntry5_WdAssertion(v44, v43);
              *(_QWORD *)(v84 + 24) = 582LL;
              WdLogEvent5_WdAssertion(v84);
            }
            if ( *((_DWORD *)v42 + 6) )
            {
              v85 = WdLogNewEntry5_WdAssertion(v44, v43);
              *(_QWORD *)(v85 + 24) = 583LL;
              WdLogEvent5_WdAssertion(v85);
            }
            v42[2] = KeGetCurrentThread();
          }
          *((_DWORD *)v42 + 6) = v14;
          v46 = (struct DXGGLOBAL *)((char *)Global + 1208);
          v47 = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 151);
          v93 = 1;
          while ( v47 != v46 && v47 )
          {
            if ( lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_(v47, v102) < 0 )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v92);
              goto LABEL_62;
            }
            v47 = *(struct OUTPUTDUPL_MGR_INDIRECT **)v47;
          }
          if ( v93 )
          {
            v48 = v92;
            v93 = 0;
            if ( v92[2] != KeGetCurrentThread() )
            {
              v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43);
              v86[3] = 275LL;
              v86[4] = 4LL;
              v86[5] = v48;
              v86[6] = 0LL;
              v86[7] = 0LL;
              WdLogEvent5_WdCriticalError(v86);
            }
            v49 = *((_DWORD *)v48 + 6);
            if ( v49 <= 0 )
            {
              v87 = WdLogNewEntry5_WdAssertion(v44, v43);
              *(_QWORD *)(v87 + 24) = 602LL;
              WdLogEvent5_WdAssertion(v87);
              v49 = *((_DWORD *)v48 + 6);
            }
            v50 = v49 - 1;
            *((_DWORD *)v48 + 6) = v50;
            if ( !v50 )
            {
              v48[2] = 0LL;
              ExReleasePushLockExclusiveEx(v48, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v109);
      COREACCESS::Release((COREACCESS *)v103);
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v103);
  }
LABEL_62:
  v51 = v111;
  if ( v111 )
  {
    if ( v112 )
    {
      COREACCESS::Release((COREACCESS *)v109);
      v51 = v111;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v51 + 2), v51);
  }
  v52 = v105;
  if ( v105 )
  {
    if ( v106 )
    {
      v106 = 0;
      v52 = v105;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v105 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((__int64)v105, v107, v108);
        v52 = v105;
      }
      v108 = 0LL;
      v107 = -1;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
  }
  v53 = v96;
  v54 = a5;
  while ( 1 )
  {
    v55 = v54 < v9 ? v54 : v9;
    v56 = DxgkDestroyAllocationInternal(
            v101,
            (struct DXGDEVICE *)v21,
            (char *)v98,
            v97,
            v94,
            &v96,
            v55,
            a6,
            (char *)v53,
            v100,
            a8);
    v60 = v56;
    if ( v56 < 0 )
      break;
    v9 = v90;
    v53 += v55;
    v61 = v89 == v55;
    v54 = v89 - v55;
    v89 -= v55;
    if ( v61 )
    {
      v62 = 0;
      goto LABEL_80;
    }
  }
  v88 = WdLogNewEntry5_WdWarning(v58, v57, v59);
  *(_QWORD *)(v88 + 24) = v60;
  WdLogEvent5_WdWarning(v88);
  v62 = v60;
LABEL_80:
  if ( v91 )
    ExReleasePushLockSharedEx(v21 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
LABEL_84:
  if ( v99 )
    operator delete[](v99);
  if ( v95 )
    operator delete[](v95);
  return v62;
}
