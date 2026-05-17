/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800E32D0
 * Callers:
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x18009D0B0 (NtQueryInformationFile.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile();
}
