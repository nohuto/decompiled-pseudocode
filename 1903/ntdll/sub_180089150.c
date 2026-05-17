/*
 * XREFs of sub_180089150 @ 0x180089150
 * Callers:
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_1800692D0 @ 0x1800692D0 (sub_1800692D0.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     sub_1800891A4 @ 0x1800891A4 (sub_1800891A4.c)
 *     ZwRaiseHardError @ 0x18009F2F0 (ZwRaiseHardError.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_180089150(int a1)
{
  char v1; // al
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = dword_18015FAB0;
  v2 = a1;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1920,
      (unsigned int)"LdrpInitializationFailure",
      0,
      (__int64)"Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = dword_18015FAB0;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = sub_1800891A4(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !dword_180164F28 )
  {
    v5 = v2;
    return ZwRaiseHardError(3221225797LL, 1LL, 0LL, &v5, 1, &v4);
  }
  return result;
}
