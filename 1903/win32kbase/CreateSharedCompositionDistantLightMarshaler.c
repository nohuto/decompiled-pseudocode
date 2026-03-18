/*
 * XREFs of CreateSharedCompositionDistantLightMarshaler @ 0x1C009F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C009F428 (-Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 */

__int64 __fastcall CreateSharedCompositionDistantLightMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedCompositionDistantLightMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedCompositionDistantLightMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 31 )
    return 3221225485LL;
  result = DirectComposition::CSharedCompositionDistantLightMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
