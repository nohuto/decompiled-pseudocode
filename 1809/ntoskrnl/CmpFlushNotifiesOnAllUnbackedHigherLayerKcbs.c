/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1407F9E50
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9CA8 (CmpEnumerateAllHigherLayerKcbs.c)
 */

PVOID __fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(__int64 a1, __int64 a2, char a3)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  char v5; // [rsp+5Ch] [rbp+24h]
  char v6; // [rsp+5Dh] [rbp+25h]

  v6 = a3;
  v4 = 8;
  v5 = 1;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPreCallback,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPostCallback,
           (__int64)&v4,
           a3,
           1);
}
