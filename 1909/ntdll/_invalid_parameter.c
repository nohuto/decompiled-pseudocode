/*
 * XREFs of _invalid_parameter @ 0x18008CD78
 * Callers:
 *     _lfind @ 0x18008DB60 (_lfind.c)
 *     _snprintf @ 0x18008DD00 (_snprintf.c)
 *     _snwprintf @ 0x18008DDB0 (_snwprintf.c)
 *     _splitpath_helper @ 0x18008DF20 (_splitpath_helper.c)
 *     _strlwr_s @ 0x18008E240 (_strlwr_s.c)
 *     _strupr @ 0x18008E330 (_strupr.c)
 *     _strupr_s @ 0x18008E380 (_strupr_s.c)
 *     swprintf @ 0x18008E3F0 (swprintf.c)
 *     _vscprintf_helper @ 0x18008E4CC (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x18008E520 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008E5F4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008E6BC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E78C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x18008E8D0 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008E930 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008EA20 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008EAB0 (_wcsset_s.c)
 *     wcstoxq @ 0x18008EB74 (wcstoxq.c)
 *     _wcsupr_s @ 0x18008EE10 (_wcsupr_s.c)
 *     bsearch @ 0x18008F8C0 (bsearch.c)
 *     bsearch_s @ 0x18008F9C0 (bsearch_s.c)
 *     qsort @ 0x180090CE0 (qsort.c)
 *     qsort_s @ 0x180091070 (qsort_s.c)
 *     sprintf @ 0x180091440 (sprintf.c)
 *     vscan_fn @ 0x18009161C (vscan_fn.c)
 *     strtoxlX @ 0x1800920B0 (strtoxlX.c)
 *     wcstoxlX @ 0x180092CBC (wcstoxlX.c)
 *     strtoxq @ 0x180093160 (strtoxq.c)
 *     _output_l @ 0x1800933D0 (_output_l.c)
 *     _woutput_l @ 0x180093D60 (_woutput_l.c)
 *     _input_l @ 0x180096340 (_input_l.c)
 *     _wctomb_s_l @ 0x180096C2C (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180096D00 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x180096DE0 (_ungetc_nolock.c)
 *     x64toa_s @ 0x180096F5C (x64toa_s.c)
 *     xtoa_s @ 0x180097090 (xtoa_s.c)
 *     x64tow_s @ 0x18009725C (x64tow_s.c)
 *     xtow_s @ 0x1800973A0 (xtow_s.c)
 *     _makepath_s @ 0x1800974E0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180097650 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x1800976F0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180097760 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180097810 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180097850 (_splitpath_s.c)
 *     _strnset_s @ 0x180097AF0 (_strnset_s.c)
 *     _strset_s @ 0x180097B80 (_strset_s.c)
 *     _wmakepath_s @ 0x180097BE0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180097D50 (_wsplitpath_s.c)
 *     memcpy_s @ 0x180098010 (memcpy_s.c)
 *     memmove_s @ 0x1800980B0 (memmove_s.c)
 *     vsprintf_s @ 0x180098140 (vsprintf_s.c)
 *     sscanf_s @ 0x180098190 (sscanf_s.c)
 *     strcat_s @ 0x1800981F0 (strcat_s.c)
 *     strcpy_s @ 0x180098290 (strcpy_s.c)
 *     strncat_s @ 0x180098320 (strncat_s.c)
 *     strncpy_s @ 0x180098430 (strncpy_s.c)
 *     strtok_s @ 0x180098520 (strtok_s.c)
 *     vswprintf_s @ 0x1800986C0 (vswprintf_s.c)
 *     swscanf_s @ 0x180098720 (swscanf_s.c)
 *     wcscat_s @ 0x180098780 (wcscat_s.c)
 *     wcscpy_s @ 0x180098820 (wcscpy_s.c)
 *     wcsncat_s @ 0x1800988B0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1800989D0 (wcsncpy_s.c)
 *     wcstok_s @ 0x180098AD0 (wcstok_s.c)
 *     _output_s @ 0x180098BE0 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180099460 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180099538 (_soutput_s.c)
 *     _input_s @ 0x180099ABC (_input_s.c)
 *     _sinput_s @ 0x18009A42C (_sinput_s.c)
 *     _swoutput_s @ 0x18009A4CC (_swoutput_s.c)
 *     _woutput_s @ 0x18009A5FC (_woutput_s.c)
 *     _swinput_s @ 0x18009B3B0 (_swinput_s.c)
 *     _winput_s @ 0x18009B4AC (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009BE84 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009BECC (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A0EE0 (RtlCaptureContext.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
