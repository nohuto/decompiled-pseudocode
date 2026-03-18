/*
 * XREFs of CoreUICallSendVaList @ 0x1C005F188
 * Callers:
 *     CoreUICallSend @ 0x1C005F154 (CoreUICallSend.c)
 * Callees:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C005F2D4 (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C005F56C (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreUICallSendVaList(
        struct IMessageCallSendHost *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 *a6,
        char *a7)
{
  void *v8; // r9
  unsigned int v12; // edi
  int v13; // ebx
  unsigned int v15; // [rsp+40h] [rbp-E8h]
  unsigned int v16; // [rsp+48h] [rbp-E0h]
  void *v17; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v18[136]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+E8h] [rbp-40h]

  v8 = 0LL;
  v17 = 0LL;
  if ( a1 && a6 )
  {
    v12 = 0;
    v13 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
            (CoreMessaging::Calling::SendProcessor *)v18,
            a1,
            a4,
            a5,
            a6,
            a7,
            0,
            0,
            v15,
            v16);
    if ( v13 >= 0 )
    {
      v12 = v19;
      v13 = 0;
    }
    v8 = v17;
  }
  else
  {
    v12 = (unsigned int)v17;
    v13 = -2147024809;
  }
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)a1 + 24LL))(
            a1,
            a2,
            a3,
            v12,
            &v17);
    if ( v13 >= 0 )
    {
      v13 = CoreMessaging::Calling::SendProcessor::MarshalSend(
              (CoreMessaging::Calling::SendProcessor *)v18,
              v17,
              v12,
              a7);
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, void *, unsigned int))(*(_QWORD *)a1 + 32LL))(
                a1,
                a2,
                a3,
                v17,
                v12);
        if ( v13 >= 0 )
          return 0;
      }
    }
    v8 = v17;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a2, a3);
  return (unsigned int)v13;
}
