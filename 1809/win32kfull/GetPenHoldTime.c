/*
 * XREFs of GetPenHoldTime @ 0x1C01F6840
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0132D40 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C030C040 + 22);
  result = *((unsigned int *)off_1C030C040 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C030C040 + 22);
  return result;
}
