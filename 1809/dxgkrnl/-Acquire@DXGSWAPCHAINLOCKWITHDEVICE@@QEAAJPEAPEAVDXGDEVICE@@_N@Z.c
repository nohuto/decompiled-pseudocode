/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C024F71C
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0252404 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C02528A0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C0252D90 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0253130 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C0254600 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C02548A0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0040CFC (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0251950 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  DXGAUTOMUTEX *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v19; // rbp
  char *v20; // r15
  int v21; // esi
  __int64 v22; // r8
  signed __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KEVENT *v32; // rbp
  __int64 v33; // rcx
  unsigned __int8 v34; // bp
  const GUID *v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  __int64 v43; // rdx
  __int64 v44; // rax
  _BYTE v45[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v46; // [rsp+38h] [rbp-40h]
  __int64 v47; // [rsp+40h] [rbp-38h]
  char v48; // [rsp+48h] [rbp-30h]

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
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
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v17 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v17);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  v19 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v20 = (char *)Current + 208;
    v21 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    LOBYTE(v23) = -*((_BYTE *)this + 16);
    v24 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v25 = *(unsigned int *)(v24 + *((_QWORD *)this + 1) + 88);
    v26 = (*(_DWORD *)(v24 + *((_QWORD *)this + 1) + 88) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)v19 + 62) )
    {
      v22 = *((_QWORD *)v19 + 29);
      v23 = ((unsigned int)v25 >> 25) & 0x60;
      v24 = *(unsigned int *)(v22 + 16 * v26 + 8);
      if ( (((unsigned int)v25 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v26 + 8) & 0x60)
        && (v24 & 0x2000) == 0
        && (v24 & 0x1F) != 0 )
      {
        v24 &= 0x1Fu;
        if ( (_BYTE)v24 == 3 )
        {
          v28 = *(_QWORD *)(v22 + 16LL * (unsigned int)v26);
          if ( v28 )
          {
            _m_prefetchw((const void *)(v28 + 64));
            v41 = *(_QWORD *)(v28 + 64);
            while ( v41 )
            {
              v23 = v41 + 1;
              v42 = v41;
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 64), v41 + 1, v41);
              if ( v42 == v41 )
                goto LABEL_35;
            }
            v28 = 0LL;
LABEL_35:
            if ( v28 )
            {
              *((_BYTE *)this + 42) = 1;
              *((_QWORD *)this + 6) = v28;
              goto LABEL_15;
            }
          }
LABEL_14:
          v29 = WdLogNewEntry5_WdWarning(v23, v24, v22);
          *(_QWORD *)(v29 + 24) = v25;
          *(_QWORD *)(v29 + 32) = v19;
          WdLogEvent5_WdWarning(v29);
          v21 = -1073741811;
LABEL_15:
          ExReleasePushLockSharedEx(v20, 0LL);
          KeLeaveCriticalRegion();
          if ( v28 && a3 )
          {
            DXGAUTOMUTEX::Release(v3);
            v32 = (struct _KEVENT *)(*(_QWORD *)(v28 + 16) + 72LL);
            if ( !KeReadStateEvent(v32) )
              KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v28 + 104), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL));
              v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v33, &EventBlockThread, v35, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v28 + 104), 1u);
              if ( v34 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v36 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
            v47 = v36;
            v48 = 0;
            if ( v36 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v36 + 24));
              v46 = -1LL;
            }
            COREACCESS::operator=((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), (__int64)v45);
            COREACCESS::~COREACCESS((COREACCESS *)v45);
            COREACCESS::AcquireShared((DXGADAPTER **)this + 7);
            if ( *(_DWORD *)(v28 + 464) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((struct _KTHREAD ***)this + 7);
              v21 = -1073741130;
              v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
              *(_QWORD *)(v40 + 24) = v28;
              *(_QWORD *)(v40 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v40);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v21 >= 0 )
          {
            v43 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v43 + 40) )
            {
              *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v43 + 96) = v28;
              *a2 = (struct DXGDEVICE *)v28;
              return (unsigned int)v21;
            }
            v44 = WdLogNewEntry5_WdWarning(v30, v43, v31);
            *(_QWORD *)(v44 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v44);
            v21 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v21;
        }
        v27 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v27 + 24) = 316LL;
        WdLogEvent5_WdError(v27);
      }
    }
    v28 = 0LL;
    goto LABEL_14;
  }
  return 0LL;
}
