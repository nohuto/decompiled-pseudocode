/*
 * XREFs of ?Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C6D00
 * Callers:
 *     CreateSharedCompositionPointLightMarshaler @ 0x1C01C6EA0 (CreateSharedCompositionPointLightMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C01C6DC0 (-InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBV.c)
 */

__int64 __fastcall DirectComposition::CSharedCompositionPointLightMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedCompositionPointLightMarshaler **a2)
{
  DirectComposition::CSharedCompositionPointLightMarshaler *v4; // rax
  DirectComposition::CSharedCompositionPointLightMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedCompositionPointLightMarshaler *)Win32AllocPoolWithQuotaZInit(0x98uLL, 0x63794344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x98uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedCompositionPointLightMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedCompositionPointLightMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedCompositionPointLightMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
