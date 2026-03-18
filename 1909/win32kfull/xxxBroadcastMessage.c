/*
 * XREFs of xxxBroadcastMessage @ 0x1C01198BC
 * Callers:
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastMessage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7)
{
  return xxxBroadcastMessageEx(0LL, a2, a3, a4, a5, a6, a7, 0);
}
