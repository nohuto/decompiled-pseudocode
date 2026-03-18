/*
 * XREFs of CreateVisualTargetMarshaler @ 0x1C0001690
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CVisualTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00016E0 (-Create@CVisualTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CreateVisualTargetMarshaler(
        __int64 a1,
        __int64 a2,
        struct DirectComposition::CVisualTargetMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CVisualTargetMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 12) != 151 )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), 1, 0) )
    return 3221225506LL;
  result = DirectComposition::CVisualTargetMarshaler::Create(
             (const struct DirectComposition::CSharedSystemResource *)a1,
             &v5);
  *a3 = v5;
  return result;
}
