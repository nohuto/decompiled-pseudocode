/*
 * XREFs of CreateSharedWriteRemotingRenderTargetMarshaler @ 0x1C01C4700
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C45A8 (-Create@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 */

__int64 __fastcall CreateSharedWriteRemotingRenderTargetMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
