/*
 * XREFs of ?Create@CSharedCompositionSpotLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C009E7A8
 * Callers:
 *     CreateSharedCompositionSpotLightMarshaler @ 0x1C009E770 (CreateSharedCompositionSpotLightMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C009E838 (-InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedCompositionSpotLightMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedCompositionSpotLightMarshaler **a2)
{
  DirectComposition::CSharedCompositionSpotLightMarshaler *v4; // rax
  DirectComposition::CSharedCompositionSpotLightMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedCompositionSpotLightMarshaler *)Win32AllocPoolWithQuotaZInit(0xC0uLL, 0x64794344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0xC0uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedCompositionSpotLightMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedCompositionSpotLightMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedCompositionSpotLightMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
