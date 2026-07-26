/*
 * XREFs of ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C01018CC
 * Callers:
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C0100980 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C001E47C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwGetECInstanceName(char *a1, int a2, struct _UNICODE_STRING *a3)
{
  char *v4; // r9
  int v5; // ebx
  bool v6; // zf
  __int64 result; // rax
  WCHAR SourceString[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( *a1 == 3 )
  {
    v4 = a1 + 808;
  }
  else if ( *a1 == 4 )
  {
    v4 = a1 + 352;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%wZ: EC %u", v4, a2);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = RtlCreateUnicodeString(a3, SourceString) == 0;
  result = 3221225626LL;
  if ( !v6 )
    return (unsigned int)v5;
  return result;
}
