/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180053B50
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180052448 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800D1218 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x1801C7CE0 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1801C7DD0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180053B14 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180053BF0 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180053E90 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  int v2; // edi
  CRenderTargetBitmap *v3; // rcx
  int DeviceInfo; // eax
  __int64 v5; // rcx
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
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DeviceInfo, 0x20Eu, 0LL);
    }
    else
    {
      v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CD3DDeviceManager::ValidateAdapterLuidAndDisplayId)(
             v5,
             v11,
             v10);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x211u, 0LL);
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
