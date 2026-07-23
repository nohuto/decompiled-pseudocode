/*
 * XREFs of sub_1800FBCD0 @ 0x1800FBCD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 */

__int64 __fastcall sub_1800FBCD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ZwSetEvent(*(HANDLE *)(a4 + 16), 0LL);
  return 0LL;
}
