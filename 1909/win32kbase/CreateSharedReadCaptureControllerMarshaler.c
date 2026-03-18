/*
 * XREFs of CreateSharedReadCaptureControllerMarshaler @ 0x1C01C4B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C49AC (-Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 */

__int64 __fastcall CreateSharedReadCaptureControllerMarshaler(
        __int64 a1,
        __int64 a2,
        struct DirectComposition::CSharedReadCaptureControllerMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadCaptureControllerMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 12) != 16 )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), 1, 0) )
    return 3221225506LL;
  result = DirectComposition::CSharedReadCaptureControllerMarshaler::Create(
             (const struct DirectComposition::CSharedSystemResource *)a1,
             &v5);
  *a3 = v5;
  return result;
}
