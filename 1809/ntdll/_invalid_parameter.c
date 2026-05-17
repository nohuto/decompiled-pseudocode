/*
 * XREFs of _invalid_parameter @ 0x18008FDE8
 * Callers:
 *     _lfind @ 0x180090BD0 (_lfind.c)
 *     _snprintf @ 0x180090D70 (_snprintf.c)
 *     _snwprintf @ 0x180090E20 (_snwprintf.c)
 *     _splitpath_helper @ 0x180090F90 (_splitpath_helper.c)
 *     _strlwr_s @ 0x1800912B0 (_strlwr_s.c)
 *     _strupr @ 0x1800913A0 (_strupr.c)
 *     _strupr_s @ 0x1800913F0 (_strupr_s.c)
 *     swprintf @ 0x180091460 (swprintf.c)
 *     _vscprintf_helper @ 0x18009153C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x180091590 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180091664 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009172C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800917FC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180091940 (_wcslwr.c)
 *     _wcslwr_s @ 0x1800919A0 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180091A90 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180091B20 (_wcsset_s.c)
 *     wcstoxq @ 0x180091BE4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180091E80 (_wcsupr_s.c)
 *     bsearch @ 0x180092930 (bsearch.c)
 *     bsearch_s @ 0x180092A30 (bsearch_s.c)
 *     qsort @ 0x180093D90 (qsort.c)
 *     qsort_s @ 0x180094130 (qsort_s.c)
 *     sprintf @ 0x180094500 (sprintf.c)
 *     vscan_fn @ 0x1800946DC (vscan_fn.c)
 *     strtoxlX @ 0x180095170 (strtoxlX.c)
 *     wcstoxlX @ 0x180095D7C (wcstoxlX.c)
 *     strtoxq @ 0x180096220 (strtoxq.c)
 *     _output_l @ 0x180096490 (_output_l.c)
 *     _woutput_l @ 0x180096E20 (_woutput_l.c)
 *     _input_l @ 0x1800993F0 (_input_l.c)
 *     _wctomb_s_l @ 0x180099CE4 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180099DB8 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x180099E90 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009A00C (x64toa_s.c)
 *     xtoa_s @ 0x18009A140 (xtoa_s.c)
 *     x64tow_s @ 0x18009A30C (x64tow_s.c)
 *     xtow_s @ 0x18009A450 (xtow_s.c)
 *     _makepath_s @ 0x18009A590 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18009A700 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18009A7A0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18009A810 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18009A8C0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18009A900 (_splitpath_s.c)
 *     _strnset_s @ 0x18009ABA0 (_strnset_s.c)
 *     _strset_s @ 0x18009AC30 (_strset_s.c)
 *     _wmakepath_s @ 0x18009AC90 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18009AE00 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18009B0C0 (memcpy_s.c)
 *     memmove_s @ 0x18009B160 (memmove_s.c)
 *     vsprintf_s @ 0x18009B1F0 (vsprintf_s.c)
 *     sscanf_s @ 0x18009B240 (sscanf_s.c)
 *     strcat_s @ 0x18009B2A0 (strcat_s.c)
 *     strcpy_s @ 0x18009B340 (strcpy_s.c)
 *     strncat_s @ 0x18009B3D0 (strncat_s.c)
 *     strncpy_s @ 0x18009B4E0 (strncpy_s.c)
 *     strtok_s @ 0x18009B5D0 (strtok_s.c)
 *     vswprintf_s @ 0x18009B770 (vswprintf_s.c)
 *     swscanf_s @ 0x18009B7D0 (swscanf_s.c)
 *     wcscat_s @ 0x18009B830 (wcscat_s.c)
 *     wcscpy_s @ 0x18009B8D0 (wcscpy_s.c)
 *     wcsncat_s @ 0x18009B960 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18009BA80 (wcsncpy_s.c)
 *     wcstok_s @ 0x18009BB80 (wcstok_s.c)
 *     _output_s @ 0x18009BC90 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009C52C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18009C604 (_soutput_s.c)
 *     _input_s @ 0x18009CB6C (_input_s.c)
 *     _sinput_s @ 0x18009D4DC (_sinput_s.c)
 *     _swoutput_s @ 0x18009D544 (_swoutput_s.c)
 *     _woutput_s @ 0x18009D664 (_woutput_s.c)
 *     _swinput_s @ 0x18009E3F4 (_swinput_s.c)
 *     _winput_s @ 0x18009E4B4 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009EE8C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009EED4 (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180006A90 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A4310 (RtlCaptureContext.c)
 */

__int64 invalid_parameter()
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
