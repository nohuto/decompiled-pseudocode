/*
 * XREFs of xxxSendMessageFF @ 0x1C0136330
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageEx @ 0x1C003E0B0 (xxxSendMessageEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageFF(__int64 a1, __int64 a2, HWND a3, __int64 a4, ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx(0xFFFFFFFFFFFFFFFFuLL, a2, (__int64)a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
