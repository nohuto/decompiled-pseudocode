/*
 * XREFs of EditionSendIMENotification @ 0x1C01E1FB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall EditionSendIMENotification(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+50h] [rbp-28h] BYREF

  v8[0] = *(_QWORD *)(a1 + 416);
  v8[1] = a2;
  *(_QWORD *)(a1 + 416) = v8;
  _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout((__int64 *)a2, a3, a4, a5, 0, 0, 0LL, 1, 1);
  return ThreadUnlock1(v6, v5);
}
