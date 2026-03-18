/*
 * XREFs of ?Create@CSharedReadPrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C3D7C
 * Callers:
 *     CreateSharedReadPrimitiveColorMarshaler @ 0x1C01C3F90 (CreateSharedReadPrimitiveColorMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadPrimitiveColorMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadPrimitiveColorMarshaler **a2)
{
  struct DirectComposition::CSharedReadPrimitiveColorMarshaler *v4; // rax
  struct DirectComposition::CSharedReadPrimitiveColorMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadPrimitiveColorMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                         0x38uLL,
                                                                         0x65704344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadDesktopTargetMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadPrimitiveColorMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 248LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadPrimitiveColorMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
