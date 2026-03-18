/*
 * XREFs of ApiSetPostPointerEventMessage @ 0x1C0164890
 * Callers:
 *     rimNotifyPointerDeviceChangeClients @ 0x1C01142EC (rimNotifyPointerDeviceChangeClients.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetPostPointerEventMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IsPostPointerEventMessageSupported();
  if ( (int)result >= 0 )
    return PostPointerEventMessage(a1, 568LL, a3, 1LL);
  return result;
}
