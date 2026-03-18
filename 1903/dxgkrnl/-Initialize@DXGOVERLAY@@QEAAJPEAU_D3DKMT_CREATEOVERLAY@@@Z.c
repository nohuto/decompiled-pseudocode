/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0253894
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C022DC38 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000C88C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000CDB4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01F4734 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C01F85C4 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v16; // r13
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  const GUID *v35; // r8
  D3DKMT_HANDLE v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  struct _EX_RUNDOWN_REF *v41[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v42; // [rsp+40h] [rbp-39h] BYREF

  v7 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 568) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 632) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 624) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 616) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v8 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v5 + 2560), this);
    *((_DWORD *)this + 8) = v8;
    if ( v8 == -1 )
    {
      v13 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v13);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = *(_DWORD *)(v16 + 200);
        if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v17, &EventBlockThread, v18, v19);
      }
      ExAcquirePushLockSharedEx(v16 + 184, 0LL);
    }
    v20 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *(_DWORD *)(v16 + 224) )
    {
      v21 = *(_QWORD *)(v16 + 208);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v23 = v22 & 0x1F;
        if ( (_BYTE)v23 == 5 )
        {
          v25 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * (unsigned int)v20);
          goto LABEL_21;
        }
        v24 = WdLogNewEntry5_WdError(v23, 2LL * (unsigned int)v20, v21);
        *(_QWORD *)(v24 + 24) = 267LL;
        WdLogEvent5_WdError(v24);
      }
    }
    v25 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v41, v25);
    ExReleasePushLockSharedEx(v16 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( !v41[0] )
      goto LABEL_31;
    v29 = *((_QWORD *)this + 2);
    v26 = *(_QWORD *)(v41[0][1].Count + 16);
    v30 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
    if ( *(_QWORD *)(v26 + 16) != v30 )
    {
      v31 = WdLogNewEntry5_WdError(v30, v26, v28);
      v32 = -1073741811;
      *(_QWORD *)(v31 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v31 + 32) = v41[0];
      *(_QWORD *)(v31 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v31);
LABEL_33:
      v7 = v32;
      goto LABEL_34;
    }
    v27 = *(unsigned int *)(v41[0][6].Count + 4);
    if ( (v27 & 8) != 0 && (v41[0][9].Count & 0x800) != 0 )
    {
      memset(&v42.VidPnSourceId + 1, 0, 0x54uLL);
      v42.VidPnSourceId = a2->VidPnSourceId;
      v42.OverlayInfo.hAllocation = *(HANDLE *)(v41[0][6].Count + 16);
      v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 2560LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v34 + 544) + 8LL)
                                                                              + 216LL))(
        *(_QWORD *)(v34 + 552),
        *(_QWORD *)(v41[0][6].Count + 8),
        &v42.OverlayInfo.SegmentId,
        &v42.OverlayInfo.PhysicalAddress,
        0LL);
      v42.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v42.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v42.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v42.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v32 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2560LL),
              &v42,
              v35);
      if ( v32 < 0 )
        goto LABEL_33;
      *((_QWORD *)this + 5) = v42.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v41[0];
      v36 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v36;
      if ( v36 )
      {
        a2->hOverlay = v36;
        *((_DWORD *)this + 7) = 1;
LABEL_34:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v41, v33);
        return v7;
      }
      v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v33, v38);
      v32 = -1073741801;
      v39[3] = this;
      v39[4] = -1073741801LL;
    }
    else
    {
LABEL_31:
      v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v32 = -1073741811;
      v39[3] = this;
      v39[4] = a2->OverlayInfo.hAllocation;
      v39[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v39);
    goto LABEL_33;
  }
  v40 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
  v40[3] = this;
  v40[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v40[5] = -1073741637LL;
  WdLogEvent5_WdError(v40);
  return 3221225659LL;
}
