/*
 * XREFs of QueryRegistryFontSubstituteListRoutine @ 0x1C037E910
 * Callers:
 *     <none>
 * Callees:
 *     vProcessEntry @ 0x1C0055E00 (vProcessEntry.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C0055F64 (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall QueryRegistryFontSubstituteListRoutine(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _OWORD v9[4]; // [rsp+20h] [rbp-E8h] BYREF
  wchar_t Str1[32]; // [rsp+60h] [rbp-A8h] BYREF
  char v11; // [rsp+A1h] [rbp-67h]
  wchar_t v12[32]; // [rsp+A2h] [rbp-66h] BYREF
  char v13; // [rsp+E3h] [rbp-25h]

  if ( (int)vProcessEntry(a3, (__int64)v12, 0LL) >= 0
    && (int)vProcessEntry(a1, (__int64)Str1, (char *)v9) >= 0
    && v11 == v13
    && v11 != 2 )
  {
    result = AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(v7, v6, a5, v9);
    if ( (int)result < 0 )
      return result;
    if ( !v11 )
      ++gcfsCharSetTable;
    if ( !gbShellFontCompatible && !_wcsicmp(Str1, L"MS Shell Dlg") && !_wcsicmp(v12, L"Microsoft Sans Serif") )
      gbShellFontCompatible = 1;
  }
  return 0LL;
}
