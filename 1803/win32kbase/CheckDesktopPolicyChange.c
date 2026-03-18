/*
 * XREFs of CheckDesktopPolicyChange @ 0x1C00A7E10
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(const UNICODE_STRING *a1)
{
  unsigned int v1; // edi
  void *v3; // rsi
  NTSTATUS v4; // ebx
  int v6; // eax
  void *v7; // rbx
  int v8; // eax
  int v9; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  _QWORD KeyInformation[3]; // [rsp+38h] [rbp-28h] BYREF

  v1 = 0;
  v9 = 4;
  KeyInformation[0] = 0LL;
  v3 = OpenCacheKeyEx(a1, 4u, 0x20019u, &v9);
  if ( v3 )
  {
    v4 = ZwQueryKey(v3, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(v3);
    if ( v4 < 0 )
      return 0LL;
    v6 = gdwPolicyFlags | 4;
  }
  else
  {
    v6 = gdwPolicyFlags & 0xFFFFFFFB;
  }
  gdwPolicyFlags = v6;
  if ( qword_1C01A6520 != KeyInformation[0] )
  {
    qword_1C01A6520 = KeyInformation[0];
    v1 = 1;
  }
  KeyInformation[0] = 0LL;
  v9 = 2;
  v7 = OpenCacheKeyEx(a1, 4u, 0x20019u, &v9);
  if ( v7 )
  {
    ZwQueryKey(v7, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(v7);
    v8 = gdwPolicyFlags | 2;
  }
  else
  {
    v8 = gdwPolicyFlags & 0xFFFFFFFD;
  }
  gdwPolicyFlags = v8;
  if ( qword_1C01A6528 != KeyInformation[0] )
  {
    qword_1C01A6528 = KeyInformation[0];
    return 1;
  }
  return v1;
}
