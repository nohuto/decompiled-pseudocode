/*
 * XREFs of CreateSharedCompositionAmbientLightMarshaler @ 0x1C00A22A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00A22D8 (-Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 */

__int64 __fastcall CreateSharedCompositionAmbientLightMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedCompositionAmbientLightMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedCompositionAmbientLightMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 29 )
    return 3221225485LL;
  result = DirectComposition::CSharedCompositionAmbientLightMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
