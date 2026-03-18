/*
 * XREFs of ?Create@CVisualTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0090A90
 * Callers:
 *     CreateVisualTargetMarshaler @ 0x1C0090A40 (CreateVisualTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CVisualTargetMarshaler **a2)
{
  struct DirectComposition::CVisualTargetMarshaler *v4; // rax
  struct DirectComposition::CVisualTargetMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CVisualTargetMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL, 0x74764344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CVisualTargetMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CVisualTargetMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 248LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CVisualTargetMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
