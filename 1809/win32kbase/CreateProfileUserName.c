/*
 * XREFs of CreateProfileUserName @ 0x1C0046DA0
 * Callers:
 *     NtUserSetSysColors @ 0x1C0048D20 (NtUserSetSysColors.c)
 *     xxxSystemParametersInfo @ 0x1C00688C0 (xxxSystemParametersInfo.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0046E38 (-InitPreviousUserString@@YAXXZ.c)
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
