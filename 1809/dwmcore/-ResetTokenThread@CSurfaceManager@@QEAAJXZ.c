/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC
 * Callers:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18004B004 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008A208 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18008A454 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C92F0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x1800CE320 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 * Callees:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180088C3C (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::ResetTokenThread(CSurfaceManager *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  DWORD ThreadId; // ebx
  int TokenThread; // eax
  unsigned int v7; // ecx

  v2 = -2147467260;
  v3 = (void *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 352) )
    {
      ThreadId = GetThreadId(v3);
      if ( ThreadId != GetCurrentThreadId() )
        SetEvent(*((HANDLE *)this + 43));
      return 0;
    }
  }
  else
  {
    TokenThread = CSurfaceManager::CreateTokenThread((HANDLE *)this);
    v2 = TokenThread;
    if ( TokenThread < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, TokenThread, 0x93u);
  }
  return v2;
}
