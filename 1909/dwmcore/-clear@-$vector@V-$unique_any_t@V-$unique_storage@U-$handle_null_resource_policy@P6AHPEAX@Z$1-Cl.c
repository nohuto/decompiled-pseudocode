/*
 * XREFs of ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18024E830
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024D798 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x18024DFC4 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTAR.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E1EC (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E5F8 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear(
        HANDLE **a1)
{
  HANDLE *v1; // rsi
  HANDLE *v3; // rbx
  unsigned __int64 v4; // rax

  v1 = a1[1];
  v3 = *a1;
  if ( *a1 != v1 )
  {
    do
    {
      v4 = (unsigned __int64)*v3 - 1;
      if ( v4 <= 0xFFFFFFFFFFFFFFFDuLL )
        LODWORD(v4) = CloseHandle(*v3);
      ++v3;
    }
    while ( v3 != v1 );
    v3 = *a1;
  }
  a1[1] = v3;
  return v4;
}
