/*
 * XREFs of ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x18007A2E4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180013790 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002F538 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x18007A338 (-SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveView(unsigned int a1)
{
  unsigned int v2; // ebx
  CAnalogCompositorManager *Instance; // rax
  int v4; // eax

  v2 = 0;
  Instance = CAnalogCompositorManager::GetInstance();
  if ( Instance )
  {
    v4 = CAnalogCompositorManager::SetExclusiveViewImpl(Instance, a1);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x78u);
  }
  return v2;
}
