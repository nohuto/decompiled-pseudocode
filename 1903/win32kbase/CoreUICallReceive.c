/*
 * XREFs of CoreUICallReceive @ 0x1C009FD7C
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0043AA0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 * Callees:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C009FE2C (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreUICallReceive(
        struct IMessageCallReceiveHost *a1,
        __int64 a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        __int64 a5,
        void *a6,
        unsigned int a7)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-1D8h]
  _BYTE v9[80]; // [rsp+40h] [rbp-1B8h] BYREF
  int v10; // [rsp+90h] [rbp-168h]
  __int64 (__fastcall **v11)(__int64, unsigned __int64); // [rsp+D0h] [rbp-128h]
  char v12; // [rsp+D8h] [rbp-120h] BYREF

  result = CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
             (CoreMessaging::Calling::ReceiveProcessor *)v9,
             a1,
             a3,
             a4,
             v8,
             a6,
             a7);
  if ( (int)result >= 0 )
  {
    result = (*v11)(a5, (unsigned __int64)&v12 & -(__int64)(v10 != 0));
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
