/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031FA44
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140174BD4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14031FB98 (OpenOrCreateKeyWithFlags.c)
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(
        ULONG a1,
        unsigned int a2,
        __int64 a3,
        HANDLE *a4)
{
  __int64 v6; // rcx
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 StringRoutine; // rbx
  __int64 v10; // rcx
  void *v12; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+58h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  ULONG v17; // [rsp+A0h] [rbp+30h] BYREF
  int v18; // [rsp+A4h] [rbp+34h]

  v18 = HIDWORD(a3);
  ResultLength = a1;
  v17 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v7 = OpenOrCreateKeyWithFlags(v6, a2, &DestinationString, a4, &v17);
  if ( v7 >= 0 && v17 == 2 )
  {
    v12 = 0LL;
    ResultLength = 0;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v8 = ZwQueryValueKey(*a4, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ResultLength && (v8 == -1073741789 || v8 == -2147483643) )
    {
      v7 = 0;
      StringRoutine = ExpAllocateStringRoutine(ResultLength);
      if ( StringRoutine )
      {
        if ( ZwQueryValueKey(
               *a4,
               &ValueName,
               KeyValuePartialInformation,
               (PVOID)StringRoutine,
               ResultLength,
               &ResultLength) >= 0
          && *(_DWORD *)(StringRoutine + 4) == 1 )
        {
          RtlInitUnicodeString(&v15, (PCWSTR)(StringRoutine + 12));
          if ( (int)OpenOrCreateKeyWithFlags(v10, a2, &v15, &v12, &v17) >= 0 )
          {
            ZwClose(*a4);
            *a4 = v12;
          }
        }
        ExFreePool((PVOID)StringRoutine);
      }
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v7;
}
