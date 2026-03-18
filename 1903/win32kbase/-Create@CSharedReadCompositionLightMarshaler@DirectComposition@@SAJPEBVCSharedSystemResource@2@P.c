/*
 * XREFs of ?Create@CSharedReadCompositionLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0092164
 * Callers:
 *     CreateSharedReadCompositionLightMarshaler @ 0x1C0092120 (CreateSharedReadCompositionLightMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadCompositionLightMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadCompositionLightMarshaler **a2)
{
  struct DirectComposition::CSharedReadCompositionLightMarshaler *v4; // rax
  struct DirectComposition::CSharedReadCompositionLightMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadCompositionLightMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                           0x38uLL,
                                                                           0x65794344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadCompositionLightMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadCompositionLightMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 248LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadCompositionLightMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
