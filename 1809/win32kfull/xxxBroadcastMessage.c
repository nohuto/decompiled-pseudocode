/*
 * XREFs of xxxBroadcastMessage @ 0x1C013479C
 * Callers:
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7)
{
  return xxxBroadcastMessageEx(0LL, a2, a3, a4, a5, a6, a7, 0);
}
