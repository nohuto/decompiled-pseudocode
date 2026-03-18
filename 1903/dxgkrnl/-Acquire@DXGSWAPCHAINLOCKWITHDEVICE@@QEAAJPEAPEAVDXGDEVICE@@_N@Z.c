/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02853AC
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02882B4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C02887C0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C0288D40 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0289110 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C028A6E0 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C028A990 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0047C00 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0287680 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v17; // rbp
  char *v18; // r15
  int v19; // esi
  __int64 v20; // r8
  signed __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KEVENT *v30; // rbp
  const GUID *v31; // r8
  __int64 v32; // rcx
  char v33; // bp
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  COREACCESS *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  _BYTE v43[64]; // [rsp+30h] [rbp-88h] BYREF

  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v9 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v9 + 40) )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 1);
    WdLogEvent5_WdWarning(v10);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v12 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v13 = *(_QWORD *)(v12 + v9 + 104);
    if ( PsGetCurrentProcess(v12, v6) != v13 )
    {
      v15 = WdLogNewEntry5_WdWarning(v7, v6, v14);
      *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v15 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v15);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v17 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v18 = (char *)Current + 184;
    v19 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
    LOBYTE(v21) = -*((_BYTE *)this + 16);
    v22 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v23 = *(unsigned int *)(v22 + *((_QWORD *)this + 1) + 88);
    v24 = (*(_DWORD *)(v22 + *((_QWORD *)this + 1) + 88) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)v17 + 56) )
    {
      v20 = *((_QWORD *)v17 + 26);
      v21 = ((unsigned int)v23 >> 25) & 0x60;
      v22 = *(unsigned int *)(v20 + 16 * v24 + 8);
      if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v24 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v22 &= 0x1Fu;
        if ( (_BYTE)v22 == 3 )
        {
          v26 = *(_QWORD *)(v20 + 16LL * (unsigned int)v24);
          if ( v26 )
          {
            _m_prefetchw((const void *)(v26 + 64));
            v34 = *(_QWORD *)(v26 + 64);
            while ( v34 )
            {
              v21 = v34 + 1;
              v35 = v34;
              v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 64), v34 + 1, v34);
              if ( v35 == v34 )
                goto LABEL_27;
            }
            v26 = 0LL;
LABEL_27:
            if ( v26 )
            {
              *((_BYTE *)this + 42) = 1;
              *((_QWORD *)this + 6) = v26;
              goto LABEL_15;
            }
          }
LABEL_14:
          v27 = WdLogNewEntry5_WdWarning(v21, v22, v20);
          *(_QWORD *)(v27 + 24) = v23;
          *(_QWORD *)(v27 + 32) = v17;
          WdLogEvent5_WdWarning(v27);
          v19 = -1073741811;
LABEL_15:
          ExReleasePushLockSharedEx(v18, 0LL);
          KeLeaveCriticalRegion();
          if ( v26 && a3 )
          {
            DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
            v30 = (struct _KEVENT *)(*(_QWORD *)(v26 + 16) + 72LL);
            if ( !KeReadStateEvent(v30) )
              KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v26 + 104), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 96LL));
              v32 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
              if ( *(_DWORD *)(v32 + 136) == 1 )
              {
                DXGADAPTER::WakeUpAdapter(v32, 0xFFFFFFFF, v31);
                v33 = 1;
              }
              else
              {
                v33 = 0;
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v32, &EventBlockThread, v31, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v26 + 104), 1u);
              if ( v33 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v36 = COREACCESS::COREACCESS((COREACCESS *)v43, *(struct DXGADAPTER *const *)(*(_QWORD *)(v26 + 16) + 16LL));
            COREACCESS::operator=((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), (__int64)v36);
            COREACCESS::~COREACCESS((COREACCESS *)v43);
            COREACCESS::AcquireShared((__int64)this + 56, 0xFFFFFFFF, 0LL);
            if ( *(_DWORD *)(v26 + 464) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v19 = -1073741130;
              v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
              *(_QWORD *)(v40 + 24) = v26;
              *(_QWORD *)(v40 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v40);
            }
            DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
          }
          if ( v19 >= 0 )
          {
            v41 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v41 + 40) )
            {
              *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v41 + 96) = v26;
              *a2 = (struct DXGDEVICE *)v26;
              return (unsigned int)v19;
            }
            v42 = WdLogNewEntry5_WdWarning(v28, v41, v29);
            *(_QWORD *)(v42 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v42);
            v19 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v19;
        }
        v25 = WdLogNewEntry5_WdError(v21, v22, v20);
        *(_QWORD *)(v25 + 24) = 267LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
    goto LABEL_14;
  }
  return 0LL;
}
