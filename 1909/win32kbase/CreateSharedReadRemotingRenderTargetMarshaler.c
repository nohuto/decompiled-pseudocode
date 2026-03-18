/*
 * XREFs of CreateSharedReadRemotingRenderTargetMarshaler @ 0x1C01C46C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C44FC (-Create@CSharedReadRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource.c)
 */

__int64 __fastcall CreateSharedReadRemotingRenderTargetMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadRemotingRenderTargetMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedReadRemotingRenderTargetMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
