/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0253AF8
 * Callers:
 *     DxgkFlipOverlay @ 0x1C02552F0 (DxgkFlipOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C01FA36C (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall **v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v9; // rax
  ULONG_PTR Count; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  UINT PrivateDriverDataSize; // eax
  __int64 v21; // rdx
  PVOID v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 hSource; // rcx
  size_t v26; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v28; // r9
  int v29; // edi
  __int64 v30; // rdx
  _DXGKARG_FLIPOVERLAY v31; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64)this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 402LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v8[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 403LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v31, 0, sizeof(v31));
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL), (DXGALLOCATIONREFERENCE *)&v32, a2->hSource);
  if ( !v32 )
    goto LABEL_28;
  v13 = *(_QWORD *)(v32[1].Count + 16);
  v14 = *(_QWORD *)(v3 + 16);
  v15 = *(_QWORD *)(v14 + 16);
  v16 = *(_QWORD *)(v15 + 16);
  if ( *(_QWORD *)(v13 + 16) != v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15, v16, v13);
    v17[3] = *(_QWORD *)(v3 + 16);
    v17[4] = v32;
    LODWORD(v3) = -1073741811;
    v17[5] = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32, v18);
    return (unsigned int)v3;
  }
  Count = v32[6].Count;
  v12 = *(unsigned int *)(Count + 4);
  if ( (v12 & 8) == 0 || (v32[9].Count & 0x800) == 0 )
  {
LABEL_28:
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, Count, v13);
    v24[3] = *(_QWORD *)(v3 + 16);
    hSource = a2->hSource;
    v3 = -1073741811LL;
    goto LABEL_29;
  }
  v31.hSource = *(HANDLE *)(Count + 16);
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 2560LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 544) + 8LL)
                                                                          + 216LL))(
    *(_QWORD *)(v19 + 552),
    *(_QWORD *)(v32[6].Count + 8),
    &v31.SrcSegmentId,
    &v31.SrcPhysicalAddress,
    0LL);
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->pPrivateDriverData )
  {
    v31.PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v22 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v31.pPrivateDriverData = v22;
    if ( !v22 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v21, v23);
      v24[3] = v3;
      hSource = v31.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_29:
      v24[4] = hSource;
      v24[5] = v3;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_30;
    }
    v26 = v31.PrivateDriverDataSize;
    pPrivateDriverData = a2->pPrivateDriverData;
    v28 = (ULONG64)pPrivateDriverData + v31.PrivateDriverDataSize;
    if ( v28 < (unsigned __int64)pPrivateDriverData || v28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, pPrivateDriverData, v26);
  }
  else
  {
    a2->PrivateDriverDataSize = 0;
    a2->pPrivateDriverData = 0LL;
  }
  v29 = ADAPTER_RENDER::DdiFlipOverlay(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2560LL),
          *(void **)(v3 + 40),
          (const GUID *)&v31);
  if ( v29 >= 0 )
    *(_QWORD *)(v3 + 48) = v32;
  operator delete[](v31.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32, v30);
  return (unsigned int)v29;
}
