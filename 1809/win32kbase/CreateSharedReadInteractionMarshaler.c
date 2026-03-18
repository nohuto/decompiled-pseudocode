/*
 * XREFs of CreateSharedReadInteractionMarshaler @ 0x1C0083180
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00831B8 (-Create@CSharedReadInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 */

__int64 __fastcall CreateSharedReadInteractionMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedReadInteractionMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadInteractionMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 83 )
    return 3221225485LL;
  result = DirectComposition::CSharedReadInteractionMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
