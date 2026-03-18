/*
 * XREFs of CreateSharedWriteAnimationTriggerMarshaler @ 0x1C0004030
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0004068 (-Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 */

__int64 __fastcall CreateSharedWriteAnimationTriggerMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedWriteAnimationTriggerMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
