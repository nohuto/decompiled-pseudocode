/*
 * XREFs of PostPointerDeviceOutOfRangeMessage @ 0x1C01EF6E0
 * Callers:
 *     <none>
 * Callees:
 *     PostPointerEventMessage @ 0x1C01EF700 (PostPointerEventMessage.c)
 */

__int64 __fastcall PostPointerDeviceOutOfRangeMessage(__int64 a1, __int64 a2, unsigned int a3)
{
  return PostPointerEventMessage(a1, 570LL, a2, a3);
}
