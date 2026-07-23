/*
 * XREFs of sub_18008C6D8 @ 0x18008C6D8
 * Callers:
 *     _lfind @ 0x18008D4C0 (_lfind.c)
 *     _snprintf @ 0x18008D660 (_snprintf.c)
 *     _snwprintf @ 0x18008D710 (_snwprintf.c)
 *     sub_18008D880 @ 0x18008D880 (sub_18008D880.c)
 *     _strlwr_s @ 0x18008DBA0 (_strlwr_s.c)
 *     _strupr @ 0x18008DC90 (_strupr.c)
 *     _strupr_s @ 0x18008DCE0 (_strupr_s.c)
 *     swprintf @ 0x18008DD50 (swprintf.c)
 *     sub_18008DE2C @ 0x18008DE2C (sub_18008DE2C.c)
 *     sub_18008DE80 @ 0x18008DE80 (sub_18008DE80.c)
 *     sub_18008DF54 @ 0x18008DF54 (sub_18008DF54.c)
 *     sub_18008E01C @ 0x18008E01C (sub_18008E01C.c)
 *     sub_18008E0EC @ 0x18008E0EC (sub_18008E0EC.c)
 *     _wcslwr @ 0x18008E230 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008E290 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008E380 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008E410 (_wcsset_s.c)
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 *     _wcsupr_s @ 0x18008E770 (_wcsupr_s.c)
 *     bsearch @ 0x18008F220 (bsearch.c)
 *     bsearch_s @ 0x18008F320 (bsearch_s.c)
 *     qsort @ 0x180090640 (qsort.c)
 *     qsort_s @ 0x1800909D0 (qsort_s.c)
 *     sprintf @ 0x180090DA0 (sprintf.c)
 *     sub_180090F7C @ 0x180090F7C (sub_180090F7C.c)
 *     sub_180091A10 @ 0x180091A10 (sub_180091A10.c)
 *     sub_18009261C @ 0x18009261C (sub_18009261C.c)
 *     sub_180092AC0 @ 0x180092AC0 (sub_180092AC0.c)
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 *     sub_180095CA0 @ 0x180095CA0 (sub_180095CA0.c)
 *     sub_18009658C @ 0x18009658C (sub_18009658C.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 *     sub_180096740 @ 0x180096740 (sub_180096740.c)
 *     sub_1800968BC @ 0x1800968BC (sub_1800968BC.c)
 *     sub_1800969F0 @ 0x1800969F0 (sub_1800969F0.c)
 *     sub_180096BBC @ 0x180096BBC (sub_180096BBC.c)
 *     sub_180096D00 @ 0x180096D00 (sub_180096D00.c)
 *     _makepath_s @ 0x180096E40 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180096FB0 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180097050 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x1800970C0 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180097170 (_snwscanf_s.c)
 *     _splitpath_s @ 0x1800971B0 (_splitpath_s.c)
 *     _strnset_s @ 0x180097450 (_strnset_s.c)
 *     _strset_s @ 0x1800974E0 (_strset_s.c)
 *     _wmakepath_s @ 0x180097540 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x1800976B0 (_wsplitpath_s.c)
 *     memcpy_s @ 0x180097970 (memcpy_s.c)
 *     memmove_s @ 0x180097A10 (memmove_s.c)
 *     vsprintf_s @ 0x180097AA0 (vsprintf_s.c)
 *     sscanf_s @ 0x180097AF0 (sscanf_s.c)
 *     strcat_s @ 0x180097B50 (strcat_s.c)
 *     strcpy_s @ 0x180097BF0 (strcpy_s.c)
 *     strncat_s @ 0x180097C80 (strncat_s.c)
 *     strncpy_s @ 0x180097D90 (strncpy_s.c)
 *     strtok_s @ 0x180097E80 (strtok_s.c)
 *     vswprintf_s @ 0x180098020 (vswprintf_s.c)
 *     swscanf_s @ 0x180098080 (swscanf_s.c)
 *     wcscat_s @ 0x1800980E0 (wcscat_s.c)
 *     wcscpy_s @ 0x180098180 (wcscpy_s.c)
 *     wcsncat_s @ 0x180098210 (wcsncat_s.c)
 *     wcsncpy_s @ 0x180098330 (wcsncpy_s.c)
 *     wcstok_s @ 0x180098430 (wcstok_s.c)
 *     sub_180098540 @ 0x180098540 (sub_180098540.c)
 *     sub_180098DC0 @ 0x180098DC0 (sub_180098DC0.c)
 *     sub_180098E98 @ 0x180098E98 (sub_180098E98.c)
 *     sub_18009941C @ 0x18009941C (sub_18009941C.c)
 *     sub_180099D8C @ 0x180099D8C (sub_180099D8C.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 *     sub_180099F5C @ 0x180099F5C (sub_180099F5C.c)
 *     sub_18009AD10 @ 0x18009AD10 (sub_18009AD10.c)
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 *     sub_18009B7E4 @ 0x18009B7E4 (sub_18009B7E4.c)
 *     sub_18009B82C @ 0x18009B82C (sub_18009B82C.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A0730 (RtlCaptureContext.c)
 */

ULONG sub_18008C6D8()
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
