/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00759B0
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0075978 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0002C90 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchSubmitDeviceCommand @ 0x1C0002CE0 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pu @ 0x1C00264FC (McTemplateK0pu.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchFlushDevice @ 0x1C007C1F0 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v4; // bl
  __int64 v5; // rsi
  struct VIDMM_ALLOC *v6; // r14
  unsigned int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  char v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  const GUID *v23; // r8
  _QWORD *v24; // rax
  VIDMM_GLOBAL *v25; // rcx
  VIDMM_GLOBAL **v26; // rdx
  bool v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXGFASTMUTEX *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rsi
  _QWORD *i; // rbx
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rbx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  const GUID *v41; // r8
  int v43; // esi
  __int64 v44; // rax
  int v45; // r9d
  __int64 v46; // rax
  int v47; // esi
  int v48; // eax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 **v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int8 v64; // [rsp+20h] [rbp-E8h]
  bool v65; // [rsp+30h] [rbp-D8h]
  signed __int16 v66; // [rsp+34h] [rbp-D4h]
  int v67; // [rsp+34h] [rbp-D4h]
  _QWORD v68[23]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = (char)a4.0;
  v5 = a3;
  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v8 = 0;
  v9 = **(_QWORD **)v6;
  v10 = **(unsigned int **)(v9 + 504);
  if ( (v10 & 0x40000000) != 0 || (int)v10 < 0 )
  {
    v63 = WdLogNewEntry5_WdWarning(v10, a2);
    *(_QWORD *)(v63 + 24) = v6;
    WdLogEvent5_WdWarning(v63);
    return 3221225485LL;
  }
  if ( (unsigned int)(v5 - 1) > 3 )
  {
    v62 = WdLogNewEntry5_WdWarning(v10, a2);
    *(_QWORD *)(v62 + 24) = v6;
    *(_QWORD *)(v62 + 32) = v5;
    WdLogEvent5_WdWarning(v62);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 480, 0LL);
  if ( *(_DWORD *)(v9 + 344) )
  {
    if ( (*((_BYTE *)this + 40872) & 4) == 0 )
    {
      v46 = WdLogNewEntry5_WdWarning(v12, v11);
      *(_QWORD *)(v46 + 24) = v6;
      WdLogEvent5_WdWarning(v46);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        ExReleasePushLockExclusiveEx(v9 + 480, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
  }
  v13 = 1;
  if ( (_DWORD)v5 == 2 )
  {
    v13 = 2;
LABEL_9:
    *(_DWORD *)(v9 + 432) = v13;
    goto LABEL_10;
  }
  v43 = v5 - 1;
  if ( !v43 )
    goto LABEL_9;
  v47 = v43 - 2;
  if ( v47 )
  {
    if ( v47 == 1 )
    {
      v48 = 4;
      if ( *(_DWORD *)(v9 + 376) < 0xA0000000 )
        v48 = 2;
      *(_DWORD *)(v9 + 432) = v48;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 432) = 3;
  }
LABEL_10:
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL));
  v14 = 0;
  v65 = 0;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 320));
  v66 = _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)v6 + 12) + 4LL), 1, 0);
  ExReleasePushLockExclusiveEx(v9 + 480, 0LL);
  KeLeaveCriticalRegion();
  if ( !v66 )
  {
    if ( (v4 & 2) == 0 && !dword_1C004E42C
      || (*((_BYTE *)this + 40872) & 4) != 0
      || (*(_DWORD *)(v9 + 80) & 0x6000) != 0 )
    {
      v14 = 0;
    }
    else
    {
      v49 = *(_QWORD *)(v9 + 104);
      v14 = 1;
      *(_DWORD *)(v9 + 92) |= 2u;
      v15 = *(_QWORD *)(*(_QWORD *)(v49 + 8) + 32LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 328), *(_QWORD *)(v9 + 8));
      v16 = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v16 + 32) + 320LL));
    }
  }
  v17 = *(_QWORD *)(v9 + 320);
  if ( *(struct _KTHREAD **)(v17 + 16) != KeGetCurrentThread() )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
    v50[3] = 275LL;
    v50[4] = 4LL;
    v50[5] = v17;
    v50[6] = 0LL;
    v50[7] = 0LL;
    WdLogEvent5_WdCriticalError(v50);
  }
  v18 = *(_DWORD *)(v17 + 24);
  if ( v18 <= 0 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v51 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v51);
    v18 = *(_DWORD *)(v17 + 24);
  }
  v19 = v18 - 1;
  *(_DWORD *)(v17 + 24) = v19;
  if ( !v19 )
  {
    *(_QWORD *)(v17 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( this != (VIDMM_GLOBAL *)-39952LL && *((struct _KTHREAD **)this + 4995) == KeGetCurrentThread() )
  {
    v52 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v52 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v52);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39952, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v45 = *((_DWORD *)this + 9992);
      if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v22, (const EVENT_DESCRIPTOR *)"g", v23, v45);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39952, 0LL);
  }
  *((_QWORD *)this + 4995) = KeGetCurrentThread();
  if ( v66 )
    goto LABEL_27;
  v24 = (_QWORD *)((char *)this + 39936);
  v25 = (VIDMM_GLOBAL *)(v9 + 400);
  v26 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4993);
  v27 = *v24 == (_QWORD)v24;
  v65 = v27;
  if ( *v26 != (VIDMM_GLOBAL *)((char *)this + 39936) )
    goto LABEL_75;
  *(_QWORD *)v25 = v24;
  *(_QWORD *)(v9 + 408) = v26;
  *v26 = v25;
  *((_QWORD *)this + 4993) = v25;
  *(_QWORD *)(v9 + 440) = *((_QWORD *)this + 576);
  if ( v14 )
  {
    v53 = (__int64 *)(v9 + 416);
    v54 = *(unsigned int *)(*((_QWORD *)this + 3) + 208LL);
    v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) + 16LL) + 8 * v54) + 416LL;
    v56 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) + 16LL) + 8 * v54) + 424LL);
    if ( *v56 == (__int64 *)v55 )
    {
      *v53 = v55;
      *(_QWORD *)(v9 + 424) = v56;
      *v56 = v53;
      *(_QWORD *)(v55 + 8) = v53;
      v65 = v27;
      goto LABEL_27;
    }
LABEL_75:
    __fastfail(3u);
  }
LABEL_27:
  *((_QWORD *)this + 4995) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
  KeLeaveCriticalRegion();
  if ( v66 )
  {
    v61 = WdLogNewEntry5_WdWarning(v29, v28);
    *(_QWORD *)(v61 + 24) = v6;
    *(_QWORD *)(v61 + 32) = *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL);
    WdLogEvent5_WdWarning(v61);
    v8 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v9 + 504) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C004E42C )
      {
        v57 = *(_QWORD *)(v9 + 8);
        ++*((_DWORD *)this + 1960);
        *((_QWORD *)this + 981) += v57;
      }
      v44 = *(_QWORD *)(v9 + 8);
      ++*((_DWORD *)this + 1956);
      *((_QWORD *)this + 979) += v44;
    }
    *((_QWORD *)this + 977) += *(_QWORD *)(v9 + 8);
    ++*((_DWORD *)this + 1952);
    if ( (v4 & 1) == 0 )
    {
      memset(v68, 0, 0x88uLL);
      v30 = *(DXGFASTMUTEX **)(v9 + 320);
      LODWORD(v68[0]) = 1;
      v68[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v68[5]) = 3;
      DXGFASTMUTEX::Acquire(v30);
      v33 = *(_QWORD **)(v9 + 296);
      if ( v33 != (_QWORD *)(v9 + 296) )
      {
        do
        {
          for ( i = (_QWORD *)*(v33 - 2); i != v33 - 2; i = (_QWORD *)*i )
          {
            v32 = i - 5;
            if ( (*(_DWORD *)(i - 1) & 1) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v32[12] + 8LL));
              v35 = v32[1];
              v68[6] = i - 5;
              v36 = *(_QWORD *)(v35 + 32);
              v67 = VidSchSubmitDeviceCommand(v36, (__int64)v68);
              if ( v67 < 0 )
              {
                v58 = WdLogNewEntry5_WdWarning(v32, v31);
                *(_QWORD *)(v58 + 24) = v67;
                WdLogEvent5_WdWarning(v58);
                VidSchFlushDevice(v36);
                LODWORD(v68[0]) = 0;
                VidSchSubmitDeviceCommand(v36, (__int64)v68);
              }
            }
          }
          v33 = (_QWORD *)*v33;
        }
        while ( v33 != (_QWORD *)(v9 + 296) );
        v6 = a2;
      }
      v37 = *(_QWORD *)(v9 + 320);
      if ( *(struct _KTHREAD **)(v37 + 16) != KeGetCurrentThread() )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31);
        v59[3] = 275LL;
        v59[4] = 4LL;
        v59[5] = v37;
        v59[6] = 0LL;
        v59[7] = 0LL;
        WdLogEvent5_WdCriticalError(v59);
      }
      v38 = *(_DWORD *)(v37 + 24);
      if ( v38 <= 0 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v32, v31);
        *(_QWORD *)(v60 + 24) = 603LL;
        WdLogEvent5_WdAssertion(v60);
        v38 = *(_DWORD *)(v37 + 24);
      }
      v39 = v38 - 1;
      *(_DWORD *)(v37 + 24) = v39;
      if ( !v39 )
      {
        *(_QWORD *)(v37 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v37, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v65 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v64 = *(_BYTE *)(v9 + 432);
      McTemplateK0pu(v64, v40, v41, v6, v64);
    }
  }
  return v8;
}
