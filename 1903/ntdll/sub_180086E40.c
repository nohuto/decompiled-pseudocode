/*
 * XREFs of sub_180086E40 @ 0x180086E40
 * Callers:
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 *     sub_18010D60C @ 0x18010D60C (sub_18010D60C.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 */

__int64 __fastcall sub_180086E40(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 332) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  ZwWaitForSingleObject(*(HANDLE *)(a1 + 136), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 332) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
