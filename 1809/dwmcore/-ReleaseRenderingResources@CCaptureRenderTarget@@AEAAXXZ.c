/*
 * XREFs of ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24
 * Callers:
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180157CA0 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x1801587A8 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x180158880 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158AE0 (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ @ 0x180158C60 (-ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180159020 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801592B4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseRenderingResources(CCaptureRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx

  (*(void (__fastcall **)(CCaptureRenderTarget *))(*(_QWORD *)this + 224LL))(this);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 560);
  if ( *((_QWORD *)this + 60) )
  {
    v2 = 0;
    if ( (__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3 )
    {
      v3 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 56LL))(
          *((_QWORD *)this + 60),
          *(_QWORD *)(*((_QWORD *)this + 67) + 8 * v3));
        v3 = ++v2;
      }
      while ( v2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3) );
    }
  }
  v4 = (__int64 *)*((_QWORD *)this + 65);
  v5 = (__int64 *)*((_QWORD *)this + 64);
  if ( v5 != v4 )
  {
    do
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v5++);
    while ( v5 != v4 );
    v5 = (__int64 *)*((_QWORD *)this + 64);
  }
  *((_QWORD *)this + 65) = v5;
  v6 = *((_QWORD *)this + 55);
  v7 = *((_QWORD *)this + 54);
  if ( v7 != v6 )
  {
    do
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)(v7 + 8));
      v7 += 16LL;
    }
    while ( v7 != v6 );
    v7 = *((_QWORD *)this + 54);
  }
  *((_QWORD *)this + 55) = v7;
  *((_DWORD *)this + 114) = -1;
  v8 = *((_QWORD *)this + 58);
  *((_QWORD *)this + 58) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 59) = 0LL;
}
