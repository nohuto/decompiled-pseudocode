/*
 * XREFs of xxxSendMessageFF @ 0x1C0157700
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x1C00302F0 (xxxSendMessageEx.c)
 */

ULONG_PTR __fastcall xxxSendMessageFF(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
