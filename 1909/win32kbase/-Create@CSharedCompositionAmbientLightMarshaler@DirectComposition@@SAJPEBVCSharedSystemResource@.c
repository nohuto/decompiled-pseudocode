/*
 * XREFs of ?Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00A1258
 * Callers:
 *     CreateSharedCompositionAmbientLightMarshaler @ 0x1C00A1220 (CreateSharedCompositionAmbientLightMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InitializeFromSharedResource@CSharedCompositionAmbientLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00A12E4 (-InitializeFromSharedResource@CSharedCompositionAmbientLightMarshaler@DirectComposition@@IEAAJPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedCompositionAmbientLightMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedCompositionAmbientLightMarshaler **a2)
{
  DirectComposition::CSharedCompositionAmbientLightMarshaler *v4; // rax
  DirectComposition::CSharedCompositionAmbientLightMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedCompositionAmbientLightMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL, 0x61794344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x70uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedCompositionAmbientLightMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedCompositionAmbientLightMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedCompositionAmbientLightMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
