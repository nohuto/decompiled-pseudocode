/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02818B8
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02830D0 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C01426EC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  DXGCONTEXT *v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  UINT PresentPlaneCount; // r8d
  char **v21; // r15
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ecx
  char *v23; // r14
  D3DKMT_HANDLE *p_hAllocation; // rdi
  char *v25; // rbx
  __int64 v26; // r12
  D3DDDI_FLIPINTERVAL_TYPE v27; // esi
  int v28; // eax
  bool v29; // zf
  D3DKMT_HANDLE v30; // eax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v33; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v34[64]; // [rsp+90h] [rbp-70h] BYREF
  char v35; // [rsp+D0h] [rbp-30h] BYREF
  char v36; // [rsp+290h] [rbp+190h] BYREF

  v4 = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 682LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)v4 + 2);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  if ( *(_QWORD *)(v10 + 1728) != v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 683LL;
    WdLogEvent5_WdAssertion(v12);
    v10 = *((_QWORD *)v4 + 2);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v10 + 16)) )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    *(_QWORD *)(v16 + 32) = v4;
    WdLogEvent5_WdWarning(v16);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)v4 + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(&v33, 0, sizeof(v33));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  PresentPlaneCount = a2->PresentPlaneCount;
  v33.HDRMetaDataType = D3DDDI_HDR_METADATA_TYPE_NONE;
  v33.VidPnSourceId = VidPnSourceId;
  v33.PresentCount = a2->PresentCount;
  v33.Duration = a2->Duration;
  v33.ContextCount = a2->BroadcastContextCount + 1;
  v33.PresentPlaneCount = PresentPlaneCount;
  v33.Flags.Value = v33.Flags.Value & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  if ( PresentPlaneCount )
  {
    v21 = (char **)v34;
    FlipInterval = a2->FlipInterval;
    v23 = &v36;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    v25 = &v35;
    v26 = PresentPlaneCount;
    v27 = FlipInterval;
    do
    {
      memset(v25, 0, 0x38uLL);
      *(_DWORD *)v25 = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v25 + 4) = 1;
        *((_QWORD *)v25 + 3) = p_hAllocation;
      }
      v28 = *((_DWORD *)v25 + 1);
      *((_DWORD *)v25 + 3) = -1;
      *((_DWORD *)v25 + 2) = v27;
      v29 = *(p_hAllocation - 1) == 0;
      *((_QWORD *)v25 + 6) = v23;
      *((_DWORD *)v25 + 1) = v28 & 0xFFFFFFFE | !v29;
      memset(v23, 0, 0x58uLL);
      *(_DWORD *)v23 = p_hAllocation[2];
      *(_OWORD *)(v23 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v23 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v23 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v23 + 13) = p_hAllocation[15];
      *((_DWORD *)v23 + 14) = p_hAllocation[16];
      *((_DWORD *)v23 + 19) = p_hAllocation[26];
      v30 = p_hAllocation[21];
      if ( v30 )
      {
        if ( (v30 & 1) != 0 )
          *((_DWORD *)v23 + 18) = (v30 & 2) != 0 ? 8 : 6;
      }
      *v21 = v25;
      p_hAllocation += 30;
      v25 += 56;
      ++v21;
      v23 += 88;
      --v26;
    }
    while ( v26 );
    v4 = this;
  }
  v33.ppPresentPlanes = (D3DKMT_MULTIPLANE_OVERLAY3 **)v34;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(v4, &v33, a3, a4);
}
