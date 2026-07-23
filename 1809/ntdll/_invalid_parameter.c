/*
 * XREFs of _invalid_parameter @ 0x18008FDF8
 * Callers:
 *     _lfind @ 0x180090BE0 (_lfind.c)
 *     _snprintf @ 0x180090D80 (_snprintf.c)
 *     _snwprintf @ 0x180090E30 (_snwprintf.c)
 *     _splitpath_helper @ 0x180090FA0 (_splitpath_helper.c)
 *     _strlwr_s @ 0x1800912C0 (_strlwr_s.c)
 *     _strupr @ 0x1800913B0 (_strupr.c)
 *     _strupr_s @ 0x180091400 (_strupr_s.c)
 *     swprintf @ 0x180091470 (swprintf.c)
 *     _vscprintf_helper @ 0x18009154C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x1800915A0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180091674 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009173C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18009180C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180091950 (_wcslwr.c)
 *     _wcslwr_s @ 0x1800919B0 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180091AA0 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180091B30 (_wcsset_s.c)
 *     wcstoxq @ 0x180091BF4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180091E90 (_wcsupr_s.c)
 *     bsearch @ 0x180092940 (bsearch.c)
 *     bsearch_s @ 0x180092A40 (bsearch_s.c)
 *     qsort @ 0x180093DA0 (qsort.c)
 *     qsort_s @ 0x180094140 (qsort_s.c)
 *     sprintf @ 0x180094510 (sprintf.c)
 *     vscan_fn @ 0x1800946EC (vscan_fn.c)
 *     strtoxlX @ 0x180095180 (strtoxlX.c)
 *     wcstoxlX @ 0x180095D8C (wcstoxlX.c)
 *     strtoxq @ 0x180096230 (strtoxq.c)
 *     _output_l @ 0x1800964A0 (_output_l.c)
 *     _woutput_l @ 0x180096E30 (_woutput_l.c)
 *     _input_l @ 0x180099400 (_input_l.c)
 *     _wctomb_s_l @ 0x180099CF4 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180099DC8 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x180099EA0 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009A01C (x64toa_s.c)
 *     xtoa_s @ 0x18009A150 (xtoa_s.c)
 *     x64tow_s @ 0x18009A31C (x64tow_s.c)
 *     xtow_s @ 0x18009A460 (xtow_s.c)
 *     _makepath_s @ 0x18009A5A0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18009A710 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18009A7B0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18009A820 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18009A8D0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18009A910 (_splitpath_s.c)
 *     _strnset_s @ 0x18009ABB0 (_strnset_s.c)
 *     _strset_s @ 0x18009AC40 (_strset_s.c)
 *     _wmakepath_s @ 0x18009ACA0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18009AE10 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18009B0D0 (memcpy_s.c)
 *     memmove_s @ 0x18009B170 (memmove_s.c)
 *     vsprintf_s @ 0x18009B200 (vsprintf_s.c)
 *     sscanf_s @ 0x18009B250 (sscanf_s.c)
 *     strcat_s @ 0x18009B2B0 (strcat_s.c)
 *     strcpy_s @ 0x18009B350 (strcpy_s.c)
 *     strncat_s @ 0x18009B3E0 (strncat_s.c)
 *     strncpy_s @ 0x18009B4F0 (strncpy_s.c)
 *     strtok_s @ 0x18009B5E0 (strtok_s.c)
 *     vswprintf_s @ 0x18009B780 (vswprintf_s.c)
 *     swscanf_s @ 0x18009B7E0 (swscanf_s.c)
 *     wcscat_s @ 0x18009B840 (wcscat_s.c)
 *     wcscpy_s @ 0x18009B8E0 (wcscpy_s.c)
 *     wcsncat_s @ 0x18009B970 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18009BA90 (wcsncpy_s.c)
 *     wcstok_s @ 0x18009BB90 (wcstok_s.c)
 *     _output_s @ 0x18009BCA0 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009C53C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18009C614 (_soutput_s.c)
 *     _input_s @ 0x18009CB7C (_input_s.c)
 *     _sinput_s @ 0x18009D4EC (_sinput_s.c)
 *     _swoutput_s @ 0x18009D554 (_swoutput_s.c)
 *     _woutput_s @ 0x18009D674 (_woutput_s.c)
 *     _swinput_s @ 0x18009E404 (_swinput_s.c)
 *     _winput_s @ 0x18009E4C4 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009EE9C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009EEE4 (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180006A90 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A4330 (RtlCaptureContext.c)
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
