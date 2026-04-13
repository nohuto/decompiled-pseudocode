/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800B74DC
 * Callers:
 *     _Towlower @ 0x1800AF370 (_Towlower.c)
 *     _Tolower @ 0x1800AF4D0 (_Tolower.c)
 *     _Towupper @ 0x1800AF9B4 (_Towupper.c)
 *     _Toupper @ 0x1800B7F98 (_Toupper.c)
 *     _Strcoll @ 0x1800C9F20 (_Strcoll.c)
 *     _Wcscoll @ 0x1800CA078 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CA17C (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CA2AC (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
