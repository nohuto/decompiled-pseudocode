/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066FD0
 * Callers:
 *     ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E120 (-QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180049DF4 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066F40 (-QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D7CE0 (-QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSwRenderTargetGetBounds@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1400 (-QueryInterface@CSwRenderTargetGetBounds@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1410 (-QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801829B0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?QueryInterface@CRenderTargetImageSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801874E0 (-QueryInterface@CRenderTargetImageSource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  int v4; // edi
  __int64 v5; // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v4 = (*(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)this + 32LL))(this);
      if ( v4 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)v4;
}
