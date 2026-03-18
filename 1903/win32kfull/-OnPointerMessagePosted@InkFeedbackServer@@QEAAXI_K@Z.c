/*
 * XREFs of ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C024FDA8
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C0245C3C (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C023A270 (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

void __fastcall InkFeedbackServer::OnPointerMessagePosted(InkFeedbackServer *this, int a2, Pointer *a3)
{
  int PointerInfoByPointerMsgId; // eax
  InkFeedbackServer *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  if ( a2 == 583 || a2 == 594 )
  {
    v7 = 0LL;
    PointerInfoByPointerMsgId = Pointer::GetPointerInfoByPointerMsgId(
                                  a3,
                                  (const struct tagPOINTER_INFO **)&v7,
                                  (const struct tagPOINTER_INFO **)a3);
    if ( PointerInfoByPointerMsgId >= 0 )
    {
      v5 = *(InkFeedbackServer **)this;
      if ( *(InkFeedbackServer **)this != this )
      {
        v6 = v7;
        do
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v5 - 1) + 8LL))(
            (__int64)v5 - 8,
            *(unsigned int *)(v6 + 4));
          v5 = *(InkFeedbackServer **)v5;
        }
        while ( v5 != this );
      }
    }
    else if ( dword_1C0321298 > 2u )
    {
      v11 = 0;
      LODWORD(v7) = PointerInfoByPointerMsgId;
      v9 = &v7;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
    }
  }
}
