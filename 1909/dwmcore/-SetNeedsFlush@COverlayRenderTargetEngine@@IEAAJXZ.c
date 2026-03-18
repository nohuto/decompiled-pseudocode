/*
 * XREFs of ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A3AD4
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::SetNeedsFlush(struct _LUID *this)
{
  unsigned int v1; // ebx
  signed int ExistingDevice; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct CD3DDeviceLevel1 *v5; // rcx
  struct CD3DDeviceLevel1 *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[21], &v7);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, ExistingDevice, 0x1DDu, 0LL);
    return v4;
  }
  else
  {
    v5 = v7;
    if ( *((int *)v7 + 220) >= 0 )
      *((_BYTE *)v7 + 1164) = 1;
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 496));
  }
  return v1;
}
