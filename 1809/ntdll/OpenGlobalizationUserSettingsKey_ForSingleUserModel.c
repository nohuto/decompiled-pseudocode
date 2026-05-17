/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180116C88
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x180116E1C (OpenOrCreateKeyWithFlags.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(int a1, int a2, __int64 a3, int a4)
{
  int KeyWithFlags; // edi
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  UNICODE_STRING v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  KeyWithFlags = OpenOrCreateKeyWithFlags(a1, a2, (unsigned int)&DestinationString, a4, (__int64)&v9);
  if ( KeyWithFlags >= 0 && v9 == 2 )
  {
    v10 = 0LL;
    RtlInitUnicodeString(&v11, L"RedirectedKey");
    ZwQueryValueKey();
    return 0;
  }
  return (unsigned int)KeyWithFlags;
}
