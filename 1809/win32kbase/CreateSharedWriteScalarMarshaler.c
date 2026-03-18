/*
 * XREFs of CreateSharedWriteScalarMarshaler @ 0x1C0181BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0181A7C (-Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 */

__int64 __fastcall CreateSharedWriteScalarMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        _QWORD *a3)
{
  char *v3; // rbx
  __int64 result; // rax
  struct DirectComposition::CSharedWriteScalarMarshaler *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedWriteScalarMarshaler::Create(a1, &v6);
  if ( v6 )
    v3 = (char *)v6 + 16;
  *a3 = v3;
  return result;
}
