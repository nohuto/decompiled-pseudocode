/*
 * XREFs of QueryFontReg @ 0x1C00C2520
 * Callers:
 *     InitFNTCache @ 0x1C00C2290 (InitFNTCache.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00C25D8 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_BOOL8 __fastcall QueryFontReg(PCWSTR SourceString, _QWORD *a2, _DWORD *a3)
{
  NTSTATUS GreRegKey; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-60h] BYREF
  _QWORD KeyInformation[4]; // [rsp+40h] [rbp-58h] BYREF
  int v10; // [rsp+60h] [rbp-38h]

  *a3 = 0;
  KeyHandle = 0LL;
  GreRegKey = GetGreRegKey(&KeyHandle, 0x20019u, SourceString);
  if ( GreRegKey >= 0 )
  {
    GreRegKey = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( GreRegKey >= 0 )
    {
      *a3 = v10;
      *a2 = KeyInformation[0];
    }
    ZwClose(KeyHandle);
  }
  return GreRegKey >= 0;
}
