/*
 * XREFs of CreateProfileUserName @ 0x1C00A7F70
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C005C030 (xxxSystemParametersInfo.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C00B9CD0 (NtUserSetSysColors.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C003CB38 (-InitPreviousUserString@@YAXXZ.c)
 */

__int64 __fastcall CreateProfileUserName(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING *v3; // rdi

  result = Win32AllocPoolWithQuota(528LL, 0x6E707355u);
  v3 = (struct _UNICODE_STRING *)result;
  if ( result )
  {
    PushW32ThreadLock(result, a1, Win32FreePool);
    v3[32].Buffer = &v3->Length;
    v3[32].MaximumLength = 512;
    v3[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v3 + 32, &PreviousUserString);
    return (__int64)&v3[32];
  }
  return result;
}
