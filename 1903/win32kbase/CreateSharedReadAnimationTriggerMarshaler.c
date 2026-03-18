/*
 * XREFs of CreateSharedReadAnimationTriggerMarshaler @ 0x1C01C6340
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C626C (-Create@CSharedReadAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@P.c)
 */

__int64 __fastcall CreateSharedReadAnimationTriggerMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadAnimationTriggerMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadAnimationTriggerMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedReadAnimationTriggerMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
