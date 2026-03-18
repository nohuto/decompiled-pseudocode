/*
 * XREFs of ?ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER@@@Z @ 0x18024F780
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetController(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER *a3)
{
  struct CCaptureController *Resource; // rax
  unsigned int v5; // edx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = (struct CCaptureController *)CResourceTable::GetResource((__int64)a2, v5, 0x10u);
  CCaptureRenderTarget::SetController(this, Resource);
  return 0LL;
}
