/*
 * XREFs of ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1800EDE00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ @ 0x1800EC8F4 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1800EE2E8 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCaptureRenderTarget::CheckOcclusionState(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget *v1; // rsi
  unsigned int v3; // edi
  struct CD3DDeviceLevel1 *D3DDeviceNoRef; // rax
  __int64 v5; // rcx
  struct CD3DDeviceLevel1 *v6; // rbp
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CCaptureRenderTarget *)((char *)this - 64);
  v3 = 142213121;
  v8 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 64));
  v5 = *((_QWORD *)this + 52);
  v6 = D3DDeviceNoRef;
  if ( v5
    && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, &v8) >= 0
    && v8
    && v6
    && *((_QWORD *)this + 55)
    && ((*((_QWORD *)this + 60) - *((_QWORD *)this + 59)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
    && *((_BYTE *)this + 352)
    && (int)CCaptureRenderTarget::EnsureResources(v1, v6) >= 0
    && (int)CCaptureRenderTarget::GetNextBufferIndexAvailable(v1) >= 0 )
  {
    return 0;
  }
  return v3;
}
