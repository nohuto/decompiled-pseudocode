/*
 * XREFs of QueryFontReg @ 0x1C0141720
 * Callers:
 *     InitFNTCache @ 0x1C0141490 (InitFNTCache.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C01417E8 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

_BOOL8 __fastcall QueryFontReg(PCWSTR SourceString, _QWORD *a2, _DWORD *a3)
{
  NTSTATUS GreRegKey; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-60h] BYREF
  _QWORD KeyInformation[6]; // [rsp+40h] [rbp-58h] BYREF

  memset(KeyInformation, 0, sizeof(KeyInformation));
  KeyHandle = 0LL;
  *a3 = 0;
  GreRegKey = GetGreRegKey(&KeyHandle, 0x20019u, SourceString);
  if ( GreRegKey >= 0 )
  {
    GreRegKey = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( GreRegKey >= 0 )
    {
      *a3 = KeyInformation[4];
      *a2 = KeyInformation[0];
    }
    ZwClose(KeyHandle);
  }
  return GreRegKey >= 0;
}
