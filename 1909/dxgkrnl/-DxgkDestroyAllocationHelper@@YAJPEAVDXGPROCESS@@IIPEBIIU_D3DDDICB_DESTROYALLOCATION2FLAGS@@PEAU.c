/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F6790
 * Callers:
 *     DxgkDestroyAllocation @ 0x1C00F6350 (DxgkDestroyAllocation.c)
 *     DxgkDestroyAllocation2 @ 0x1C00F6520 (DxgkDestroyAllocation2.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000C354 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E9A80 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x1C00F72BC (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE--_ENSURE_POINTER_DEREFERENCE.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_ @ 0x1C01F01B0 (_lambda_f082766c36497653ae8a33afcd4107b6_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C02715BC (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  unsigned int v9; // r15d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int **v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  int v18; // r12d
  SIZE_T v19; // rax
  SIZE_T v20; // rax
  struct DXGALLOCATION **v21; // rax
  __int64 v22; // rax
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // ebx
  bool v41; // zf
  struct _KEVENT *v42; // rsi
  struct _KEVENT *v43; // rcx
  const GUID *v44; // r8
  __int64 v45; // rcx
  char v46; // bl
  __int64 v47; // rcx
  __int64 v48; // rcx
  volatile signed __int64 *v49; // rax
  volatile signed __int64 *v50; // rax
  volatile signed __int64 *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  const GUID *v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbx
  OUTPUTDUPL_MGR *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  struct DXGGLOBAL *Global; // rsi
  __int64 v62; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  struct _KTHREAD **v66; // rbx
  int v67; // eax
  __int64 v68; // rax
  const GUID *v69; // r8
  int v70; // r9d
  __int64 v71; // rax
  __int64 v72; // rax
  struct OUTPUTDUPL_MGR_INDIRECT **v73; // rsi
  struct OUTPUTDUPL_MGR_INDIRECT *i; // rbx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER *v76; // rcx
  struct DXGADAPTER *v77; // rcx
  unsigned int *v78; // r14
  __int64 v79; // rsi
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r15
  struct _KTHREAD **v85; // rbx
  _QWORD *v86; // rax
  int v87; // eax
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rax
  unsigned int v92; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD **v93; // [rsp+68h] [rbp-98h] BYREF
  char v94; // [rsp+70h] [rbp-90h]
  unsigned int v95; // [rsp+78h] [rbp-88h]
  unsigned int *v96; // [rsp+80h] [rbp-80h] BYREF
  __int64 v97; // [rsp+88h] [rbp-78h] BYREF
  struct DXGALLOCATION **v98; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v99; // [rsp+98h] [rbp-68h] BYREF
  struct DXGALLOCATION **v100; // [rsp+A0h] [rbp-60h]
  unsigned int *v101; // [rsp+A8h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v102; // [rsp+B0h] [rbp-50h]
  struct DXGPROCESS *v103; // [rsp+B8h] [rbp-48h]
  struct DXGALLOCATION ***v104; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int **v105; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-28h] BYREF
  int v107; // [rsp+E0h] [rbp-20h]
  _QWORD v108[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v109[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v110; // [rsp+110h] [rbp+10h]
  struct DXGADAPTER *v111; // [rsp+118h] [rbp+18h]
  char v112; // [rsp+120h] [rbp+20h]
  unsigned int v113; // [rsp+124h] [rbp+24h]
  __int64 v114; // [rsp+128h] [rbp+28h]
  char v115[8]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v116; // [rsp+150h] [rbp+50h]
  struct DXGADAPTER *v117; // [rsp+158h] [rbp+58h]
  char v118; // [rsp+160h] [rbp+60h]
  int v119; // [rsp+164h] [rbp+64h]
  __int64 v120; // [rsp+168h] [rbp+68h]
  __int64 v121; // [rsp+188h] [rbp+88h]
  char v122; // [rsp+190h] [rbp+90h]
  _BYTE v123[256]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v124; // [rsp+2A0h] [rbp+1A0h] BYREF

  v9 = a5;
  v11 = a2;
  v103 = a1;
  v95 = a3;
  v92 = a5;
  v102 = a7;
  v99 = a4;
  memset(v123, 0, sizeof(v123));
  v14 = &v96;
  v96 = 0LL;
  v98 = 0LL;
  v101 = (unsigned int *)v123;
  v100 = (struct DXGALLOCATION **)&v124;
  v104 = &v98;
  v105 = &v96;
  if ( !a3 || !a5 )
  {
    v17 = a5;
    v18 = 1;
    if ( a5 >= 0x41 )
    {
      v19 = 4LL * a5;
      if ( !is_mul_ok(a5, 4uLL) )
        v19 = -1LL;
      v96 = (unsigned int *)operator new[](v19, 0x4B677844u, PagedPool);
      v20 = 8LL * a5;
      if ( !is_mul_ok(a5, 8uLL) )
        v20 = -1LL;
      v21 = (struct DXGALLOCATION **)operator new[](v20, 0x4B677844u, PagedPool);
      v98 = v21;
      if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v14 = (unsigned int **)v96) != 0LL && v21 )
      {
        v100 = v21;
        v101 = v96;
      }
      else
      {
        v22 = WdLogNewEntry5_WdEvent(v14);
        *(_QWORD *)(v22 + 24) = 9811LL;
        WdLogEvent5_WdEvent(v22);
        v9 = 64;
        v92 = 64;
      }
    }
    v23 = (char *)a1 + 184;
    if ( a1 != (struct DXGPROCESS *)-184LL && *((struct _KTHREAD **)a1 + 24) == KeGetCurrentThread() )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14, v12);
      *(_QWORD *)(v24 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *((_DWORD *)a1 + 50);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockSharedEx((char *)a1 + 184, 0LL);
    }
    v28 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *((_DWORD *)a1 + 56) )
    {
      v29 = *((_QWORD *)a1 + 26);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
        && (v30 & 0x2000) == 0
        && (v30 & 0x1F) != 0 )
      {
        v31 = v30 & 0x1F;
        if ( (_BYTE)v31 == 3 )
        {
          v33 = *(_QWORD *)(v29 + 16LL * (unsigned int)v28);
          v97 = v33;
          if ( v33 )
            _InterlockedIncrement64((volatile signed __int64 *)(v33 + 64));
LABEL_30:
          ExReleasePushLockSharedEx(v23, 0LL);
          KeLeaveCriticalRegion();
          if ( !v33 )
          {
            v37 = WdLogNewEntry5_WdError(v35, v34, v36);
            v16 = -1073741811;
            *(_QWORD *)(v37 + 24) = v11;
            *(_QWORD *)(v37 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v37);
LABEL_144:
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v97);
            goto LABEL_145;
          }
          v38 = *(_QWORD *)(v33 + 16);
          v106 = v33;
          v39 = *(_QWORD *)(v38 + 16);
          if ( *(int *)(v39 + 2184) >= 0x2000 || *(_BYTE *)(v39 + 2484) )
            v40 = *((_DWORD *)DXGGLOBAL::GetGlobal(v39, v34) + 247);
          else
            v40 = 0;
          v41 = *(_DWORD *)(v33 + 328) == 2;
          v42 = *(struct _KEVENT **)(v33 + 16);
          v107 = v40;
          if ( v41 )
          {
            if ( KeReadStateEvent(v42 + 4) )
              goto LABEL_44;
            v43 = v42 + 4;
          }
          else
          {
            if ( KeReadStateEvent(v42 + 3) )
              goto LABEL_44;
            v43 = v42 + 3;
          }
          KeWaitForSingleObject(v43, Executive, 0, 0, 0LL);
LABEL_44:
          KeEnterCriticalRegion();
          if ( v40 )
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v33 + 112, 0LL) )
            {
              KeLeaveCriticalRegion();
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 96LL));
              v47 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL);
              if ( *(_DWORD *)(v47 + 136) == 1 )
              {
                DXGADAPTER::WakeUpAdapter(v47, 0xFFFFFFFFLL);
                v46 = 1;
              }
              else
              {
                v46 = 0;
              }
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v33 + 112));
LABEL_58:
              if ( v46 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v33 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v33 + 104), 0) )
          {
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 96LL));
            v45 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL);
            if ( *(_DWORD *)(v45 + 136) == 1 )
            {
              DXGADAPTER::WakeUpAdapter(v45, 0xFFFFFFFFLL);
              v46 = 1;
            }
            else
            {
              v46 = 0;
            }
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v45, &EventBlockThread, v44, 40);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v33 + 104), 1u);
            goto LABEL_58;
          }
          v48 = *(_QWORD *)(v33 + 16);
          v49 = *(volatile signed __int64 **)(v48 + 16);
          v111 = (struct DXGADAPTER *)v49;
          v112 = 0;
          v113 = -1;
          v114 = 0LL;
          if ( v49 )
          {
            _InterlockedIncrement64(v49 + 3);
            v48 = *(_QWORD *)(v33 + 16);
            v110 = -1LL;
          }
          v50 = *(volatile signed __int64 **)(v33 + 1728);
          v51 = v50;
          if ( !v50 )
            v51 = *(volatile signed __int64 **)(v48 + 16);
          v117 = (struct DXGADAPTER *)v51;
          v118 = 0;
          v119 = -1;
          v120 = 0LL;
          if ( v51 )
          {
            _InterlockedIncrement64(v51 + 3);
            v48 = *(_QWORD *)(v33 + 16);
            v50 = *(volatile signed __int64 **)(v33 + 1728);
            v116 = -1LL;
          }
          v121 = v33;
          if ( v50 == *(volatile signed __int64 **)(v48 + 16) || (v122 = 1, !v50) )
            v122 = 0;
          if ( v112 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v51);
            v52[5] = v109;
            v52[3] = 275LL;
            v52[4] = 4LL;
            v52[6] = 0LL;
            v52[7] = 0LL;
            WdLogEvent5_WdCriticalError(v52);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v111 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v111 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v53, &EventBlockThread, v54, 72);
              KeWaitForSingleObject((char *)v111 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v111, 2006LL, 0LL);
          }
          v113 = 2006;
          v114 = 0LL;
          v112 = 1;
          v55 = *(unsigned int *)(v121 + 464);
          if ( (_DWORD)v55 == 1 )
          {
            if ( !v122
              || (COREACCESS::AcquireShared((__int64)v115, 0xFFFFFFFF, 0LL),
                  v55 = *((unsigned int *)v117 + 44),
                  (_DWORD)v55 == 1) )
            {
              v56 = *(_QWORD *)(v33 + 1728);
              if ( v56 )
              {
                v57 = *(_QWORD *)(v56 + 2552);
                v58 = *(OUTPUTDUPL_MGR **)(v57 + 104);
                if ( !v58
                  || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v58, (PERESOURCE *)v33) >= 0 )
                {
                  v59 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 276LL);
                  v108[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
                  v108[0] = v59;
                  v108[2] = v33;
                  Global = DXGGLOBAL::GetGlobal(v59, (__int64)v51);
                  v94 = 0;
                  v93 = (struct _KTHREAD **)((char *)Global + 1168);
                  if ( Global == (struct DXGGLOBAL *)-1168LL )
                  {
                    v62 = WdLogNewEntry5_WdAssertion(0LL, v60);
                    *(_QWORD *)(v62 + 24) = 660LL;
                    WdLogEvent5_WdAssertion(v62);
                  }
                  CurrentThread = KeGetCurrentThread();
                  if ( v93[2] == CurrentThread )
                  {
                    v64 = WdLogNewEntry5_WdAssertion(CurrentThread, v60);
                    *(_QWORD *)(v64 + 24) = 667LL;
                    WdLogEvent5_WdAssertion(v64);
                  }
                  if ( v94 )
                  {
                    v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v60);
                    v65[5] = &v93;
                    v65[3] = 275LL;
                    v65[4] = 4LL;
                    v65[6] = 0LL;
                    v65[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v65);
                  }
                  v66 = v93;
                  KeEnterCriticalRegion();
                  if ( v66[2] == KeGetCurrentThread() )
                  {
                    v67 = *((_DWORD *)v66 + 6);
                    if ( v67 <= 0 )
                    {
                      v68 = WdLogNewEntry5_WdAssertion(v55, v51);
                      *(_QWORD *)(v68 + 24) = 559LL;
                      WdLogEvent5_WdAssertion(v68);
                      v67 = *((_DWORD *)v66 + 6);
                    }
                    v18 = v67 + 1;
                  }
                  else
                  {
                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v66, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v70 = *((_DWORD *)v66 + 7);
                        if ( v70 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          McTemplateK0q(v55, &EventBlockThread, v69, v70);
                      }
                      _InterlockedIncrement64((volatile signed __int64 *)v66 + 1);
                      ExAcquirePushLockExclusiveEx(v66, 0LL);
                    }
                    if ( v66[2] )
                    {
                      v71 = WdLogNewEntry5_WdAssertion(v55, v51);
                      *(_QWORD *)(v71 + 24) = 583LL;
                      WdLogEvent5_WdAssertion(v71);
                    }
                    if ( *((_DWORD *)v66 + 6) )
                    {
                      v72 = WdLogNewEntry5_WdAssertion(v55, v51);
                      *(_QWORD *)(v72 + 24) = 584LL;
                      WdLogEvent5_WdAssertion(v72);
                    }
                    v66[2] = KeGetCurrentThread();
                  }
                  *((_DWORD *)v66 + 6) = v18;
                  v73 = (struct OUTPUTDUPL_MGR_INDIRECT **)((char *)Global + 1208);
                  v94 = 1;
                  for ( i = *v73; i != (struct OUTPUTDUPL_MGR_INDIRECT *)v73 && i; i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
                  {
                    if ( lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_(i, v108) < 0 )
                    {
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v93);
                      goto LABEL_114;
                    }
                  }
                  if ( v94 )
                  {
                    v85 = v93;
                    v94 = 0;
                    if ( v93[2] != KeGetCurrentThread() )
                    {
                      v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v51);
                      v86[3] = 275LL;
                      v86[4] = 4LL;
                      v86[5] = v85;
                      v86[6] = 0LL;
                      v86[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v86);
                    }
                    v87 = *((_DWORD *)v85 + 6);
                    if ( v87 <= 0 )
                    {
                      v88 = WdLogNewEntry5_WdAssertion(v55, v51);
                      *(_QWORD *)(v88 + 24) = 603LL;
                      WdLogEvent5_WdAssertion(v88);
                      v87 = *((_DWORD *)v85 + 6);
                    }
                    v89 = v87 - 1;
                    *((_DWORD *)v85 + 6) = v89;
                    if ( !v89 )
                    {
                      v85[2] = 0LL;
                      ExReleasePushLockExclusiveEx(v85, 0LL);
                    }
                    KeLeaveCriticalRegion();
                  }
                }
              }
LABEL_114:
              RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v55, (__int64)v51);
              if ( RemoteOutputDuplMgr )
                OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, (struct DXGDEVICE *)v33);
            }
            else
            {
              COREACCESS::Release((COREACCESS *)v115);
              COREACCESS::Release((COREACCESS *)v109);
            }
          }
          else
          {
            COREACCESS::Release((COREACCESS *)v109);
          }
          v76 = v117;
          if ( v117 )
          {
            if ( v118 )
            {
              COREACCESS::Release((COREACCESS *)v115);
              v76 = v117;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76 + 2), v76);
          }
          v77 = v111;
          if ( v111 )
          {
            if ( v112 )
            {
              v112 = 0;
              v77 = v111;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v111 + 20) )
              {
                DXGADAPTER::ReleaseCoreResource(v111, v113, v114);
                v77 = v111;
              }
              v114 = 0LL;
              v113 = -1;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
          }
          v78 = v99;
          while ( 1 )
          {
            v79 = v17;
            if ( v17 >= v9 )
              v79 = v9;
            v80 = DxgkDestroyAllocationInternal(
                    v103,
                    (struct DXGDEVICE *)v33,
                    v101,
                    v100,
                    v95,
                    (const unsigned int **)&v99,
                    v79,
                    a6,
                    v78,
                    v102,
                    a8);
            v84 = v80;
            if ( v80 < 0 )
              break;
            v9 = v92;
            v78 += v79;
            v17 -= v79;
            if ( !v17 )
            {
              v16 = 0;
              goto LABEL_143;
            }
          }
          v90 = WdLogNewEntry5_WdWarning(v82, v81, v83);
          *(_QWORD *)(v90 + 24) = v84;
          WdLogEvent5_WdWarning(v90);
          v16 = v84;
LABEL_143:
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v106);
          goto LABEL_144;
        }
        v32 = WdLogNewEntry5_WdError(((unsigned int)v11 >> 25) & 0x60, v31, 2LL * (unsigned int)v28);
        *(_QWORD *)(v32 + 24) = 267LL;
        WdLogEvent5_WdError(v32);
      }
    }
    v33 = 0LL;
    v97 = 0LL;
    goto LABEL_30;
  }
  v15 = WdLogNewEntry5_WdWarning(&v96, v12, v13);
  v16 = -1073741811;
  *(_QWORD *)(v15 + 24) = v11;
  *(_QWORD *)(v15 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v15);
LABEL_145:
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v104);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v105);
  return v16;
}
