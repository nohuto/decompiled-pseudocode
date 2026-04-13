/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800B766C
 * Callers:
 *     _Towlower @ 0x1800AF500 (_Towlower.c)
 *     _Tolower @ 0x1800AF660 (_Tolower.c)
 *     _Towupper @ 0x1800AFB44 (_Towupper.c)
 *     _Toupper @ 0x1800B8128 (_Toupper.c)
 *     _Strcoll @ 0x1800CA0B0 (_Strcoll.c)
 *     _Wcscoll @ 0x1800CA208 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CA30C (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CA43C (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
