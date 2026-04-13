/*
 * XREFs of _GetLocaleHandleById @ 0x1800B74E8
 * Callers:
 *     _Tolower @ 0x1800AF4D0 (_Tolower.c)
 *     _Toupper @ 0x1800B7F98 (_Toupper.c)
 *     _Strcoll @ 0x1800C9F20 (_Strcoll.c)
 *     _Getdateorder @ 0x1800CA018 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800CA078 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CA17C (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CA2AC (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
