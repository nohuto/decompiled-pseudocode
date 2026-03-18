/*
 * XREFs of xxxSendMessageFF @ 0x1C020CDA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x1C00D78A0 (xxxSendMessageEx.c)
 */

ULONG_PTR __fastcall xxxSendMessageFF(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
