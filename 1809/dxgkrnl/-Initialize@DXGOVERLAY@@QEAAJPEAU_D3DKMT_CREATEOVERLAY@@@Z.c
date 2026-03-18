/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C021F350
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C01FD994 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000E448 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01C5DA0 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C01C9D98 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rcx
  const GUID *v26; // r8
  D3DKMT_HANDLE v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  struct _EX_RUNDOWN_REF *v33[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v34; // [rsp+40h] [rbp-39h] BYREF

  v5 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 576) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 640) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 632) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 624) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 2528), this);
    *((_DWORD *)this + 8) = v6;
    if ( v6 == -1 )
    {
      v8 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v8);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 208));
    v12 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 248) )
    {
      v13 = *(_QWORD *)(v11 + 232);
      v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0 )
      {
        v15 = v14 & 0x1F;
        if ( (_BYTE)v15 == 5 )
        {
          v17 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * (unsigned int)v12);
          goto LABEL_15;
        }
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = 316LL;
        WdLogEvent5_WdError(v16);
      }
    }
    v17 = 0LL;
LABEL_15:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v33, v17);
    ExReleasePushLockSharedEx(v11 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v33[0] )
      goto LABEL_25;
    v21 = *((_QWORD *)this + 2);
    v18 = *(_QWORD *)(v33[0][1].Count + 16);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_QWORD *)(v18 + 16) != v22 )
    {
      v23 = WdLogNewEntry5_WdError(v22);
      v24 = -1073741811;
      *(_QWORD *)(v23 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v23 + 32) = v33[0];
      *(_QWORD *)(v23 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v23);
LABEL_27:
      v5 = v24;
      goto LABEL_28;
    }
    v19 = *(unsigned int *)(v33[0][6].Count + 4);
    if ( (v19 & 8) != 0 && (v33[0][9].Count & 0x800) != 0 )
    {
      memset(&v34, 0, sizeof(v34));
      v34.VidPnSourceId = a2->VidPnSourceId;
      v34.OverlayInfo.hAllocation = *(HANDLE *)(v33[0][6].Count + 16);
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 2528LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(v25 + 544) + 8LL) + 216LL))(
        *(_QWORD *)(v25 + 552),
        *(_QWORD *)(v33[0][6].Count + 8),
        &v34.OverlayInfo.SegmentId,
        &v34.OverlayInfo.PhysicalAddress);
      v34.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v34.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v34.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v34.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v24 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2528LL),
              &v34,
              v26);
      if ( v24 < 0 )
        goto LABEL_27;
      *((_QWORD *)this + 5) = v34.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v33[0];
      v27 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v27;
      if ( v27 )
      {
        a2->hOverlay = v27;
        *((_DWORD *)this + 7) = 1;
LABEL_28:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v33);
        return v5;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v24 = -1073741801;
      v31[3] = this;
      v31[4] = -1073741801LL;
    }
    else
    {
LABEL_25:
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v24 = -1073741811;
      v31[3] = this;
      v31[4] = a2->OverlayInfo.hAllocation;
      v31[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v31);
    goto LABEL_27;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  v32[3] = this;
  v32[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v32[5] = -1073741637LL;
  WdLogEvent5_WdError(v32);
  return 3221225659LL;
}
