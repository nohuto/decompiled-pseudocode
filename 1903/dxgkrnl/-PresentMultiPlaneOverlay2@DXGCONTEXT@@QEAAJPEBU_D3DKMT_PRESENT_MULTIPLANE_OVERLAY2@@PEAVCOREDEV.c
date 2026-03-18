/*
 * XREFs of ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C027FFB0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0283940 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C013EB3C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay2(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  UINT PresentPlaneCount; // r8d
  char **v20; // r15
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // r13d
  char *v22; // r14
  D3DKMT_HANDLE *p_hAllocation; // rsi
  char *v24; // rdi
  __int64 v25; // r12
  int v26; // eax
  bool v27; // zf
  D3DKMT_HANDLE v28; // eax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v31; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v32[64]; // [rsp+80h] [rbp-80h] BYREF
  char v33; // [rsp+C0h] [rbp-40h] BYREF
  char v34; // [rsp+280h] [rbp+180h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1145LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( *(_QWORD *)(v9 + 1728) != v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 1146LL;
    WdLogEvent5_WdAssertion(v11);
    v9 = *((_QWORD *)this + 2);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v9 + 16)) )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(&v31, 0, sizeof(v31));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  PresentPlaneCount = a2->PresentPlaneCount;
  v31.HDRMetaDataType = D3DDDI_HDR_METADATA_TYPE_NONE;
  v31.VidPnSourceId = VidPnSourceId;
  v31.PresentCount = a2->PresentCount;
  v31.Duration = a2->Duration;
  v31.ContextCount = a2->BroadcastContextCount + 1;
  v31.PresentPlaneCount = PresentPlaneCount;
  v31.Flags.Value = v31.Flags.Value & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  if ( PresentPlaneCount )
  {
    v20 = (char **)v32;
    FlipInterval = a2->FlipInterval;
    v22 = &v34;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    v24 = &v33;
    v25 = PresentPlaneCount;
    do
    {
      memset(v24, 0, 0x38uLL);
      *(_DWORD *)v24 = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v24 + 4) = 1;
        *((_QWORD *)v24 + 3) = p_hAllocation;
      }
      v26 = *((_DWORD *)v24 + 1);
      *((_DWORD *)v24 + 3) = -1;
      *((_DWORD *)v24 + 2) = FlipInterval;
      v27 = *(p_hAllocation - 1) == 0;
      *((_QWORD *)v24 + 6) = v22;
      *((_DWORD *)v24 + 1) = v26 & 0xFFFFFFFE | !v27;
      memset(v22, 0, 0x58uLL);
      *(_DWORD *)v22 = p_hAllocation[2];
      *(_OWORD *)(v22 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v22 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v22 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v22 + 13) = p_hAllocation[15];
      *((_DWORD *)v22 + 14) = p_hAllocation[16];
      *((_DWORD *)v22 + 19) = p_hAllocation[26];
      v28 = p_hAllocation[21];
      p_hAllocation += 30;
      *v20 = v24;
      v24 += 56;
      *((_DWORD *)v22 + 18) = v28;
      ++v20;
      v22 += 88;
      --v25;
    }
    while ( v25 );
  }
  v31.ppPresentPlanes = (D3DKMT_MULTIPLANE_OVERLAY3 **)v32;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(this, &v31, a3, a4);
}
