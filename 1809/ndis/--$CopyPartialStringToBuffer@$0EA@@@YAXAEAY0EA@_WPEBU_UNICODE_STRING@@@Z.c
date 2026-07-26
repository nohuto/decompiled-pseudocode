/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00C8888
 * Callers:
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C8330 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

_OWORD *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, const void **a2)
{
  _OWORD *result; // rax

  if ( *(_WORD *)a2 < 0x80u )
  {
    memset(&g_DeviceReadyNotificationName, 0, 0x80uLL);
    return memmove(&g_DeviceReadyNotificationName, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    result = a2[1];
    *(_OWORD *)&g_DeviceReadyNotificationName = *result;
    xmmword_1C00A1EE0 = result[1];
    xmmword_1C00A1EF0 = result[2];
    xmmword_1C00A1F00 = result[3];
    xmmword_1C00A1F10 = result[4];
    xmmword_1C00A1F20 = result[5];
    xmmword_1C00A1F30 = result[6];
    xmmword_1C00A1F40 = result[7];
  }
  return result;
}
