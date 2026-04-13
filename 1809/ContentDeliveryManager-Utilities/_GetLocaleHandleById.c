/*
 * XREFs of _GetLocaleHandleById @ 0x1800B3570
 * Callers:
 *     _Tolower @ 0x1800AB554 (_Tolower.c)
 *     _Toupper @ 0x1800B4024 (_Toupper.c)
 *     _Strcoll @ 0x1800C6028 (_Strcoll.c)
 *     _Getdateorder @ 0x1800C6120 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800C6180 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800C6284 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800C63B4 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(unsigned int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
