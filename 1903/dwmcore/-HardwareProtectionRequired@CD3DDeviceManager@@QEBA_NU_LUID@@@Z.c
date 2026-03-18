/*
 * XREFs of ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1800422EC
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180024F2C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18004224C (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800CA08C (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180042320 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18004234C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 */

char __fastcall CD3DDeviceManager::HardwareProtectionRequired(CD3DDeviceManager *this, struct _LUID a2)
{
  char v2; // bl
  struct _LUID v3; // rdx
  CD3DDeviceManager *v4; // rcx

  v2 = 0;
  if ( !CD3DDeviceManager::IsHardwareProtectionDisabled() )
    return CD3DDeviceManager::GetAdapterHwProtectedEntityCount(v4, v3) != 0;
  return v2;
}
