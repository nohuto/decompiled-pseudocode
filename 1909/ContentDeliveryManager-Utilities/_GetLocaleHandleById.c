/*
 * XREFs of _GetLocaleHandleById @ 0x1800B7678
 * Callers:
 *     _Tolower @ 0x1800AF660 (_Tolower.c)
 *     _Toupper @ 0x1800B8128 (_Toupper.c)
 *     _Strcoll @ 0x1800CA0B0 (_Strcoll.c)
 *     _Getdateorder @ 0x1800CA1A8 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800CA208 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CA30C (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CA43C (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
