/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FE8E0
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C00FE650 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C012AD10 (DxgkDestroyAllocation.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E1110 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x1C00FF3C4 (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE--_ENSURE_POINTER_DEREFERENCE.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_ @ 0x1C01C05A0 (_lambda_de3a9c4ca82130b89abd09a8dda67964_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C023C24C (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int **v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // r13d
  SIZE_T v17; // rax
  SIZE_T v18; // rax
  struct DXGALLOCATION **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _KEVENT *v33; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v35; // eax
  int v36; // ebx
  int v37; // r14d
  int v38; // r15d
  struct DXGGLOBAL *Global; // rax
  struct _KEVENT *v40; // rsi
  struct _KEVENT *v41; // rsi
  __int64 v42; // rcx
  unsigned __int8 v43; // bl
  const GUID *v44; // r8
  __int64 v45; // rcx
  volatile signed __int64 *v46; // rax
  volatile signed __int64 *v47; // rax
  volatile signed __int64 *v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  const GUID *v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  OUTPUTDUPL_MGR *v55; // rcx
  __int64 v56; // rcx
  struct DXGGLOBAL *v57; // r14
  __int64 v58; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rax
  struct _KTHREAD **v62; // rbx
  int v63; // eax
  __int64 v64; // rax
  int v65; // eax
  const GUID *v66; // r8
  int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rax
  struct OUTPUTDUPL_MGR_INDIRECT *v70; // rbx
  struct _KTHREAD **v71; // rbx
  _QWORD *v72; // rax
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER *v77; // rcx
  DXGADAPTER *v78; // rcx
  unsigned int *v79; // r14
  __int64 v80; // rsi
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r15
  __int64 v86; // rax
  unsigned int v88; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD **v89; // [rsp+68h] [rbp-98h] BYREF
  char v90; // [rsp+70h] [rbp-90h]
  unsigned int v91; // [rsp+78h] [rbp-88h]
  unsigned int *v92; // [rsp+80h] [rbp-80h] BYREF
  __int64 v93; // [rsp+88h] [rbp-78h] BYREF
  struct DXGALLOCATION **v94; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v95; // [rsp+98h] [rbp-68h] BYREF
  struct DXGALLOCATION **v96; // [rsp+A0h] [rbp-60h]
  unsigned int *v97; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD **v98[2]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v99; // [rsp+C8h] [rbp-38h]
  char v100; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD **v101[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGADAPTER *v102; // [rsp+E8h] [rbp-18h]
  char v103; // [rsp+F0h] [rbp-10h]
  __int64 v104; // [rsp+F8h] [rbp-8h]
  char v105; // [rsp+100h] [rbp+0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v106; // [rsp+110h] [rbp+10h]
  struct DXGPROCESS *v107; // [rsp+118h] [rbp+18h]
  struct DXGALLOCATION ***v108; // [rsp+120h] [rbp+20h] BYREF
  unsigned int **v109; // [rsp+128h] [rbp+28h] BYREF
  __int64 v110; // [rsp+138h] [rbp+38h] BYREF
  int v111; // [rsp+140h] [rbp+40h]
  _QWORD v112[3]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v113[256]; // [rsp+160h] [rbp+60h] BYREF
  char v114; // [rsp+260h] [rbp+160h] BYREF

  v10 = a2;
  v107 = a1;
  v91 = a3;
  v88 = a5;
  v106 = a7;
  v95 = a4;
  memset(v113, 0, sizeof(v113));
  v92 = 0LL;
  v97 = (unsigned int *)v113;
  v96 = (struct DXGALLOCATION **)&v114;
  v108 = &v94;
  v13 = &v92;
  v94 = 0LL;
  v109 = &v92;
  if ( !a3 || !a5 )
  {
    v16 = a5;
    if ( a5 >= 0x41 )
    {
      v17 = 4LL * a5;
      if ( !is_mul_ok(a5, 4uLL) )
        v17 = -1LL;
      v92 = (unsigned int *)operator new(v17, 0x4B677844u, PagedPool);
      v18 = 8LL * a5;
      if ( !is_mul_ok(a5, 8uLL) )
        v18 = -1LL;
      v19 = (struct DXGALLOCATION **)operator new(v18, 0x4B677844u, PagedPool);
      v94 = v19;
      if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v13 = (unsigned int **)v92) != 0LL && v19 )
      {
        v96 = v19;
        v97 = v92;
      }
      else
      {
        v21 = WdLogNewEntry5_WdEvent(v13, v20);
        *(_QWORD *)(v21 + 24) = 9838LL;
        WdLogEvent5_WdEvent(v21);
        v88 = 64;
      }
    }
    if ( a1 != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)a1 + 27) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v22 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *((_DWORD *)a1 + 56);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v23, &EventBlockThread, v24, v25);
      }
      ExAcquirePushLockSharedEx((char *)a1 + 208, 0LL);
    }
    v26 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)a1 + 62) )
    {
      v27 = *((_QWORD *)a1 + 29);
      v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
      if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
        && (v28 & 0x2000) == 0
        && (v28 & 0x1F) != 0 )
      {
        if ( (v28 & 0x1F) == 3 )
        {
          v30 = *(_QWORD *)(v27 + 16LL * (unsigned int)v26);
          v93 = v30;
          if ( v30 )
            _InterlockedIncrement64((volatile signed __int64 *)(v30 + 64));
LABEL_30:
          ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v30 )
          {
            v32 = WdLogNewEntry5_WdError(v31);
            v15 = -1073741811;
            *(_QWORD *)(v32 + 24) = v10;
            *(_QWORD *)(v32 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v32);
LABEL_136:
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v93);
            goto LABEL_137;
          }
          v33 = *(struct _KEVENT **)(v30 + 16);
          v110 = v30;
          Blink = v33->Header.WaitListHead.Blink;
          if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
          {
            Global = DXGGLOBAL::GetGlobal((__int64)v33);
            v33 = *(struct _KEVENT **)(v30 + 16);
            v35 = *((_DWORD *)Global + 255);
            v36 = v35;
            v111 = v35;
            v37 = v35;
            v38 = v35;
          }
          else
          {
            v35 = 0;
            v111 = 0;
            v36 = 0;
            v37 = 0;
            v38 = 0;
          }
          if ( *(_DWORD *)(v30 + 328) == 2 )
          {
            v40 = v33 + 4;
            if ( !KeReadStateEvent(v33 + 4) )
            {
              KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
              v36 = v37;
            }
          }
          else
          {
            v41 = v33 + 3;
            v36 = v35;
            if ( !KeReadStateEvent(v33 + 3) )
            {
              KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
              v36 = v38;
            }
          }
          KeEnterCriticalRegion();
          if ( v36 )
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v30 + 112, 0LL) )
            {
              KeLeaveCriticalRegion();
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 96LL));
              v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 112));
LABEL_51:
              if ( v43 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 104), 0) )
          {
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 96LL));
            v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v42, &EventBlockThread, v44, 40);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 104), 1u);
            goto LABEL_51;
          }
          v45 = *(_QWORD *)(v30 + 16);
          v46 = *(volatile signed __int64 **)(v45 + 16);
          v99 = (DXGADAPTER *)v46;
          v100 = 0;
          if ( v46 )
          {
            _InterlockedIncrement64(v46 + 3);
            v45 = *(_QWORD *)(v30 + 16);
            v98[1] = (struct _KTHREAD **)-1LL;
          }
          v47 = *(volatile signed __int64 **)(v30 + 1728);
          v48 = v47;
          if ( !v47 )
            v48 = *(volatile signed __int64 **)(v45 + 16);
          v102 = (struct DXGADAPTER *)v48;
          v103 = 0;
          if ( v48 )
          {
            _InterlockedIncrement64(v48 + 3);
            v45 = *(_QWORD *)(v30 + 16);
            v47 = *(volatile signed __int64 **)(v30 + 1728);
            v101[1] = (struct _KTHREAD **)-1LL;
          }
          v104 = v30;
          if ( v47 == *(volatile signed __int64 **)(v45 + 16) || (v105 = 1, !v47) )
            v105 = 0;
          if ( v100 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45);
            v49[5] = v98;
            v49[3] = 275LL;
            v49[4] = 4LL;
            v49[6] = 0LL;
            v49[7] = 0LL;
            WdLogEvent5_WdCriticalError(v49);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v99 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v50, &EventBlockThread, v51, 72);
              KeWaitForSingleObject((char *)v99 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v99);
          }
          v100 = 1;
          v52 = *(unsigned int *)(v104 + 464);
          if ( (_DWORD)v52 == 1 )
          {
            if ( !v105
              || (COREACCESS::AcquireShared((DXGADAPTER **)v101), v52 = *((unsigned int *)v102 + 44), (_DWORD)v52 == 1) )
            {
              v53 = *(_QWORD *)(v30 + 1728);
              if ( v53 )
              {
                v54 = *(_QWORD *)(v53 + 2520);
                v55 = *(OUTPUTDUPL_MGR **)(v54 + 104);
                if ( !v55
                  || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v55, (PERESOURCE *)v30) >= 0 )
                {
                  v56 = *(_QWORD *)(*(_QWORD *)(v54 + 16) + 276LL);
                  v112[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
                  v112[0] = v56;
                  v112[2] = v30;
                  v57 = DXGGLOBAL::GetGlobal(v56);
                  v90 = 0;
                  v89 = (struct _KTHREAD **)((char *)v57 + 1200);
                  if ( v57 == (struct DXGGLOBAL *)-1200LL )
                  {
                    v58 = WdLogNewEntry5_WdAssertion(0LL);
                    *(_QWORD *)(v58 + 24) = 511LL;
                    WdLogEvent5_WdAssertion(v58);
                  }
                  CurrentThread = KeGetCurrentThread();
                  if ( v89[1] == CurrentThread )
                  {
                    v60 = WdLogNewEntry5_WdAssertion(CurrentThread);
                    *(_QWORD *)(v60 + 24) = 518LL;
                    WdLogEvent5_WdAssertion(v60);
                  }
                  if ( v90 )
                  {
                    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
                    v61[5] = &v89;
                    v61[3] = 275LL;
                    v61[4] = 4LL;
                    v61[6] = 0LL;
                    v61[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v61);
                  }
                  v62 = v89;
                  KeEnterCriticalRegion();
                  if ( v62[1] == KeGetCurrentThread() )
                  {
                    v63 = *((_DWORD *)v62 + 6);
                    if ( v63 <= 0 )
                    {
                      v64 = WdLogNewEntry5_WdAssertion(v52);
                      *(_QWORD *)(v64 + 24) = 409LL;
                      WdLogEvent5_WdAssertion(v64);
                      v63 = *((_DWORD *)v62 + 6);
                    }
                    v65 = v63 + 1;
                  }
                  else
                  {
                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v62 + 2, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v67 = *((_DWORD *)v62 + 7);
                        if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          McTemplateK0q(v52, &EventBlockThread, v66, v67);
                      }
                      _InterlockedIncrement64((volatile signed __int64 *)v62);
                      ExAcquirePushLockExclusiveEx(v62 + 2, 0LL);
                    }
                    if ( v62[1] )
                    {
                      v68 = WdLogNewEntry5_WdAssertion(v52);
                      *(_QWORD *)(v68 + 24) = 433LL;
                      WdLogEvent5_WdAssertion(v68);
                    }
                    if ( *((_DWORD *)v62 + 6) )
                    {
                      v69 = WdLogNewEntry5_WdAssertion(v52);
                      *(_QWORD *)(v69 + 24) = 434LL;
                      WdLogEvent5_WdAssertion(v69);
                    }
                    v62[1] = KeGetCurrentThread();
                    v65 = 1;
                  }
                  *((_DWORD *)v62 + 6) = v65;
                  v70 = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)v57 + 155);
                  v90 = 1;
                  while ( v70 != (struct DXGGLOBAL *)((char *)v57 + 1240) && v70 )
                  {
                    if ( lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_(v70, v112) < 0 )
                    {
                      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v89);
                      goto LABEL_115;
                    }
                    v70 = *(struct OUTPUTDUPL_MGR_INDIRECT **)v70;
                  }
                  if ( v90 )
                  {
                    v71 = v89;
                    v90 = 0;
                    if ( v89[1] != KeGetCurrentThread() )
                    {
                      v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52);
                      v72[3] = 275LL;
                      v72[4] = 4LL;
                      v72[5] = v71;
                      v72[6] = 0LL;
                      v72[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v72);
                    }
                    v73 = *((_DWORD *)v71 + 6);
                    if ( v73 <= 0 )
                    {
                      v74 = WdLogNewEntry5_WdAssertion(v52);
                      *(_QWORD *)(v74 + 24) = 453LL;
                      WdLogEvent5_WdAssertion(v74);
                      v73 = *((_DWORD *)v71 + 6);
                    }
                    v75 = v73 - 1;
                    *((_DWORD *)v71 + 6) = v75;
                    if ( !v75 )
                    {
                      v71[1] = 0LL;
                      ExReleasePushLockExclusiveEx(v71 + 2, 0LL);
                    }
                    KeLeaveCriticalRegion();
                  }
                }
              }
LABEL_115:
              RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v52);
              if ( RemoteOutputDuplMgr )
                OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, (struct DXGDEVICE *)v30);
            }
            else
            {
              COREACCESS::Release(v101);
              COREACCESS::Release(v98);
            }
          }
          else
          {
            COREACCESS::Release(v98);
          }
          v77 = v102;
          if ( v102 )
          {
            if ( v103 )
            {
              COREACCESS::Release(v101);
              v77 = v102;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
          }
          v78 = v99;
          if ( v99 )
          {
            if ( v100 )
            {
              v100 = 0;
              v78 = v99;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 20) )
              {
                DXGADAPTER::ReleaseCoreResource(v99);
                v78 = v99;
              }
            }
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v78 + 3) )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v78 + 2), v78);
          }
          v79 = v95;
          while ( 1 )
          {
            v80 = v16;
            if ( v16 >= v88 )
              v80 = v88;
            v81 = DxgkDestroyAllocationInternal(
                    v107,
                    (struct DXGDEVICE *)v30,
                    v97,
                    v96,
                    v91,
                    (const unsigned int **)&v95,
                    v80,
                    a6,
                    v79,
                    v106,
                    a8);
            v85 = v81;
            if ( v81 < 0 )
              break;
            v79 += v80;
            v16 -= v80;
            if ( !v16 )
            {
              v15 = 0;
              goto LABEL_135;
            }
          }
          v86 = WdLogNewEntry5_WdWarning(v83, v82, v84);
          *(_QWORD *)(v86 + 24) = v85;
          WdLogEvent5_WdWarning(v86);
          v15 = v85;
LABEL_135:
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v110);
          goto LABEL_136;
        }
        v29 = WdLogNewEntry5_WdError(((unsigned int)v10 >> 25) & 0x60);
        *(_QWORD *)(v29 + 24) = 316LL;
        WdLogEvent5_WdError(v29);
      }
    }
    v30 = 0LL;
    v93 = 0LL;
    goto LABEL_30;
  }
  v14 = WdLogNewEntry5_WdWarning(&v92, v11, v12);
  v15 = -1073741811;
  *(_QWORD *)(v14 + 24) = v10;
  *(_QWORD *)(v14 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v14);
LABEL_137:
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v108);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v109);
  return v15;
}
