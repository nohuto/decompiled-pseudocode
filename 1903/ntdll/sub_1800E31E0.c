/*
 * XREFs of sub_1800E31E0 @ 0x1800E31E0
 * Callers:
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009C900 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_1800E31E0(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwQueryInformationFile();
}
