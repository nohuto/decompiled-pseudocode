/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1C0061828
 * Callers:
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     CreateProfileUserName @ 0x1C0061790 (CreateProfileUserName.c)
 * Callees:
 *     GetProcessLuid @ 0x1C0061900 (GetProcessLuid.c)
 */

void InitPreviousUserString(void)
{
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF
  struct _LUID v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  GetProcessLuid(0LL, &v1);
  if ( v1 != luidPrevious )
  {
    luidPrevious = v1;
    if ( v1 == 999LL || RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    {
      RtlCopyUnicodeString(&PreviousUserString, &DefaultUserString);
    }
    else
    {
      RtlCopyUnicodeString(&PreviousUserString, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    RtlAppendUnicodeToString(&PreviousUserString, L"\\");
  }
}
