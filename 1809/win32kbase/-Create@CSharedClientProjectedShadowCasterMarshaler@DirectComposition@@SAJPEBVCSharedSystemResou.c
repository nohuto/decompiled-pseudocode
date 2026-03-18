/*
 * XREFs of ?Create@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0182D78
 * Callers:
 *     CreateSharedClientProjectedShadowCasterMarshaler @ 0x1C0182F40 (CreateSharedClientProjectedShadowCasterMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?InitializeFromSharedResource@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0182E30 (-InitializeFromSharedResource@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@QEA.c)
 */

__int64 __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedClientProjectedShadowCasterMarshaler **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // edi

  v4 = Win32AllocPoolWithQuotaZInit(0x70uLL, 0x617A4344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x70uLL);
    v5[6] = 0;
    v5[23] = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedClientProjectedShadowCasterMarshaler::`vftable';
    v5[5] = 1;
    v5[14] = 1091567616;
    *((_BYTE *)v5 + 72) = 0;
    v5[22] = 1065353216;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedClientProjectedShadowCasterMarshaler::InitializeFromSharedResource(
           (DirectComposition::CSharedClientProjectedShadowCasterMarshaler *)v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 104LL))(v5, 1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = (struct DirectComposition::CSharedClientProjectedShadowCasterMarshaler *)v5;
  return (unsigned int)v6;
}
