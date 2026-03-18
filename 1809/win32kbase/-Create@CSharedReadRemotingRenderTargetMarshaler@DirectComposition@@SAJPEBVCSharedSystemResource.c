/*
 * XREFs of ?Create@CSharedReadRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0181E4C
 * Callers:
 *     CreateSharedReadRemotingRenderTargetMarshaler @ 0x1C0182060 (CreateSharedReadRemotingRenderTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadRemotingRenderTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler **a2)
{
  struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                               0x38uLL,
                                                                               0x6E644344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadDesktopTargetMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 248LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
