/*
 * XREFs of ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015F164
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::SetNeedsFlush(struct _LUID *this)
{
  unsigned int v1; // ebx
  int ExistingDevice; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct CD3DDeviceLevel1 *v5; // rcx
  struct CD3DDeviceLevel1 *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[21], &v7);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, ExistingDevice, 0x1D9u);
    return v4;
  }
  else
  {
    v5 = v7;
    if ( *((int *)v7 + 212) >= 0 )
      *((_BYTE *)v7 + 1028) = 1;
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 496));
  }
  return v1;
}
