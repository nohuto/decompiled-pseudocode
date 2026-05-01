/*
 * XREFs of ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x18015E14C
 * Callers:
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x18015E208 (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032084 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

int __fastcall CreateShellSessionKey(__int64 a1, HKEY *a2)
{
  DWORD CurrentProcessId; // eax
  int result; // eax
  DWORD pSessionId; // [rsp+50h] [rbp-C8h] BYREF
  DWORD dwDisposition[3]; // [rsp+54h] [rbp-C4h] BYREF
  WCHAR SubKey[80]; // [rsp+60h] [rbp-B8h] BYREF

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId);
  result = StringCchPrintfW(
             SubKey,
             75LL,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SessionInfo\\%d",
             pSessionId);
  if ( result >= 0 )
  {
    result = RegCreateKeyExW(HKEY_CURRENT_USER, SubKey, 0, 0LL, 1u, 4u, 0LL, a2, dwDisposition);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
