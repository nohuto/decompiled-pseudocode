/*
 * XREFs of ??$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLevel1@@0@Z @ 0x1800E9E3C
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EA42C (-clear_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@C.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EA518 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EA6A4 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CD3DDeviceLevel1::CUnpinResource>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
}
