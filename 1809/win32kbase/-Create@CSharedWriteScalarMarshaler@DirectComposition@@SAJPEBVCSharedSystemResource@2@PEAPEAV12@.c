/*
 * XREFs of ?Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0181A7C
 * Callers:
 *     CreateSharedWriteScalarMarshaler @ 0x1C0181BD0 (CreateSharedWriteScalarMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteScalarMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteScalarMarshaler **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x6E734344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x48uLL);
    v5[10] = 0;
    v5[9] = 1;
    *(_QWORD *)v5 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
    *((_QWORD *)v5 + 2) = &DirectComposition::CSharedWriteScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = ObReferenceObjectByPointer((char *)a1 - 24, 3u, ExCompositionObjectType, 0);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*((_QWORD *)v5 + 2) + 104LL))(v5 + 4, 1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 8) = a1;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = (struct DirectComposition::CSharedWriteScalarMarshaler *)v5;
  return result;
}
