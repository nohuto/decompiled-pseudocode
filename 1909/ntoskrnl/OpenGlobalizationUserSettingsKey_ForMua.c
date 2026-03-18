/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x14033EFD8
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14017F0C8 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x1401C1070 (ZwQueryInformationToken.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AllocateMemory @ 0x14033EF8C (AllocateMemory.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14033F1E8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(ULONG a1, void *a2, HANDLE *a3, _DWORD *a4)
{
  __int64 v5; // rdi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 *Memory; // rsi
  NTSTATUS appended; // ebx
  unsigned __int8 v11; // al
  unsigned __int16 v12; // bx
  wchar_t *v13; // rdi
  UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = a2;
  ReturnLength = a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v5 = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v7 = 0;
  Memory = (__int64 *)AllocateMemory(0x54uLL);
  if ( Memory )
  {
    appended = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Memory, 0x54u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_25;
    v5 = *Memory;
  }
  else
  {
    appended = -1073741801;
  }
  if ( appended >= 0 )
  {
    v11 = *(_BYTE *)(v5 + 1);
    if ( v11 < 2u || v11 == 5 && *(_DWORD *)(v5 + 8) == 21 && *(_DWORD *)(v5 + 24) == 503 )
    {
      *a4 = 0;
      appended = -1073741514;
      v7 = 1;
    }
    if ( appended >= 0 )
    {
      appended = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v5, 1u);
      if ( appended >= 0 )
      {
        v12 = UnicodeString.Length + 62;
        v13 = (wchar_t *)AllocateMemory((unsigned __int16)(UnicodeString.Length + 62));
        if ( v13 )
        {
          Destination.Buffer = v13;
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v12;
          appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
            if ( appended >= 0 )
            {
              appended = RtlAppendUnicodeToString(&Destination, L"\\International");
              if ( appended >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
                {
                  *a4 = 1;
                  v7 = 1;
                }
                else
                {
                  ZwClose(KeyHandle);
                  *a4 = 2;
                  appended = ZwOpenKey(a3, 8u, &ObjectAttributes);
                }
              }
            }
          }
          ExFreeHeapPool((ULONG_PTR)v13);
        }
        else
        {
          appended = -1073741801;
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v7 )
      appended = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v8, a3);
  }
LABEL_25:
  if ( Memory )
    ExFreeHeapPool((ULONG_PTR)Memory);
  return (unsigned int)appended;
}
