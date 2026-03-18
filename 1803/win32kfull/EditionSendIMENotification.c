/*
 * XREFs of EditionSendIMENotification @ 0x1C01BF3F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall EditionSendIMENotification(__int64 a1, __int64 a2, unsigned int a3, HWND a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF

  v9[0] = *(_QWORD *)(a1 + 408);
  v9[1] = a2;
  *(_QWORD *)(a1 + 408) = v9;
  _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout((__int64 *)a2, a3, a4, a5, 0, 0, 0LL, 1, 1);
  return ThreadUnlock1(v6, v5, v7);
}
