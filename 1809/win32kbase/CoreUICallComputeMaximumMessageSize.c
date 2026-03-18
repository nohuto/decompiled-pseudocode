/*
 * XREFs of CoreUICallComputeMaximumMessageSize @ 0x1C007F2F8
 * Callers:
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00849C4 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 * Callees:
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C007F660 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreUICallComputeMaximumMessageSize(
        struct IMessageCallSendHost *a1,
        const unsigned __int8 **a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-C8h]
  unsigned int v9; // [rsp+28h] [rbp-C0h]
  unsigned int v10; // [rsp+30h] [rbp-B8h]
  _BYTE v11[144]; // [rsp+40h] [rbp-A8h] BYREF

  result = CoreMessaging::Calling::SendProcessor::ComputeMaximumMessageSize(
             (CoreMessaging::Calling::SendProcessor *)v11,
             a1,
             a2,
             a3,
             v8,
             v9,
             v10,
             a7);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
