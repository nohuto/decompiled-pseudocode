/*
 * XREFs of ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801592B4
 * Callers:
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180157CA0 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x180158880 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
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
