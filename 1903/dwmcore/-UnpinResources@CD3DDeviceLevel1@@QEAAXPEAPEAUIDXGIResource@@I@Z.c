/*
 * XREFs of ?UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z @ 0x1800EA354
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EC234 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180043B90 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EA6A4 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015BB94 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

void __fastcall CD3DDeviceLevel1::UnpinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rbp
  unsigned __int64 CurrentFrameId; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    v4 = a3;
    v5 = (_QWORD *)((char *)this + 992);
    do
    {
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        v10,
        *a2);
      CurrentFrameId = GetCurrentFrameId();
      v7 = (__int64)(v5[1] - *v5) >> 4;
      v8 = CurrentFrameId + 1;
      v10[1] = CurrentFrameId + 1;
      v9 = detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
             v5,
             v7);
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        v9,
        v10[0]);
      *(_QWORD *)(v9 + 8) = v8;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v10);
      ++a2;
      --v4;
    }
    while ( v4 );
  }
}
