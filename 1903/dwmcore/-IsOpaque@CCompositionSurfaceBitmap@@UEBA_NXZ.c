/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800BCA70
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180013ED0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DE0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x1801CC40C (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1
    && (*((_BYTE *)this + 94)
     || *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v1 + 144) + 24LL))(v1 + 144, v4) + 4) == 3) )
  {
    return 1;
  }
  return v2;
}
