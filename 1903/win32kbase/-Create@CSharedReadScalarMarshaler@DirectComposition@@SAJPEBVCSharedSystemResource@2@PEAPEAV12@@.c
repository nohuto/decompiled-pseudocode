/*
 * XREFs of ?Create@CSharedReadScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C6010
 * Callers:
 *     CreateSharedReadScalarMarshaler @ 0x1C01C61D0 (CreateSharedReadScalarMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadScalarMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadScalarMarshaler **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // edi
  __int64 result; // rax

  v4 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x6D734344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x48uLL);
    v5[10] = 0;
    v5[9] = 1;
    *(_QWORD *)v5 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
    *((_QWORD *)v5 + 2) = &DirectComposition::CSharedReadScalarMarshaler::`vftable'{for `DirectComposition::CSharedReadMarshaler'};
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_DWORD *, const struct DirectComposition::CSharedSystemResource *))(*((_QWORD *)v5 + 2) + 248LL))(
           v5 + 4,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*((_QWORD *)v5 + 2) + 104LL))(v5 + 4, 1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = (struct DirectComposition::CSharedReadScalarMarshaler *)v5;
  return result;
}
