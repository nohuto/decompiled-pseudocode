/*
 * XREFs of CmRegUtilUcValueGetDword @ 0x1C01294F8
 * Callers:
 *     CmRegUtilWstrValueGetDword @ 0x1C01297D0 (CmRegUtilWstrValueGetDword.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmRegUtilUcValueGetDword(void *a1, _UNICODE_STRING *a2, __int64 a3, _DWORD *a4)
{
  int v5; // ebx
  NTSTATUS result; // eax
  ULONG v7; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0;
  result = ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v8, 0x10u, &v7);
  if ( result >= 0 )
  {
    if ( v8[1] == 4 )
      v5 = v8[3];
    else
      result = -1073741788;
  }
  *a4 = v5;
  return result;
}
