/*
 * XREFs of sub_180110078 @ 0x180110078
 * Callers:
 *     sub_18002D010 @ 0x18002D010 (sub_18002D010.c)
 *     sub_18006CB44 @ 0x18006CB44 (sub_18006CB44.c)
 * Callees:
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_18010FEDC @ 0x18010FEDC (sub_18010FEDC.c)
 *     sub_18010FFE0 @ 0x18010FFE0 (sub_18010FFE0.c)
 */

__int64 __fastcall sub_180110078(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID DllHandle; // [rsp+30h] [rbp-A38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A30h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-A18h] BYREF
  unsigned __int16 v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)sub_18010FFE0(a1, SourceString, a3, v8)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandleEx(1u, (PWSTR)1, 0LL, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0LL, 0LL, &DestinationString, &DllHandle) >= 0) )
  {
    return sub_18010FEDC((__int64)DllHandle, v8);
  }
  return v3;
}
