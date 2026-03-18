/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008C6F4
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18008B7E8 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008C35C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18018D2E0 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18018D3D0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180030028 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18008C794 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008C810 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  int v2; // edi
  CRenderTargetBitmap *v3; // rcx
  int DeviceInfo; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  char v8; // bl
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = -2147467259;
  v3 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    v10 = 0;
    DeviceInfo = CRenderTargetBitmap::GetDeviceInfo(v3, &v11, (struct DisplayId *)&v10);
    v2 = DeviceInfo;
    if ( DeviceInfo < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DeviceInfo, 0x280u);
    }
    else
    {
      v6 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(v5, *(_QWORD *)&v11, v10);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x283u);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 144LL) + 104LL))(*((_QWORD *)this + 1) + 144LL);
        if ( CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, v11) != v8 )
          v2 = -2147467259;
      }
    }
  }
  return v2 == 0;
}
