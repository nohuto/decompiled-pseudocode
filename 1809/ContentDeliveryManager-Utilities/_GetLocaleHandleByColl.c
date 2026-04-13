/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800B3564
 * Callers:
 *     _Towlower @ 0x1800AB3F4 (_Towlower.c)
 *     _Tolower @ 0x1800AB554 (_Tolower.c)
 *     _Towupper @ 0x1800ABA38 (_Towupper.c)
 *     _Toupper @ 0x1800B4024 (_Toupper.c)
 *     _Strcoll @ 0x1800C6028 (_Strcoll.c)
 *     _Wcscoll @ 0x1800C6180 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800C6284 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800C63B4 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
