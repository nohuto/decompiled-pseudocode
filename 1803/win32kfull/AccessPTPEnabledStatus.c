/*
 * XREFs of AccessPTPEnabledStatus @ 0x1C0107BB0
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0107A6C (CheckPointerDeviceConfiguration.c)
 *     SetUserPTPEnabledPreference @ 0x1C019AE00 (SetUserPTPEnabledPreference.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00698B8 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringCopy @ 0x1C0069934 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall AccessPTPEnabledStatus(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  const wchar_t *v6; // rax
  __int64 v7; // r8
  __int16 v8; // di
  __int16 v9; // r10
  int v10; // r14d
  size_t v11; // r9
  char *v12; // r11
  ULONG Length[2]; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+28h] [rbp-D8h]
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  int Data; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  size_t pcchDest; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchDestLength; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *ppszDest; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v26; // [rsp+B4h] [rbp-4Ch]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  char v29; // [rsp+D0h] [rbp-30h] BYREF

  v3 = 0;
  Data = a1;
  KeyHandle = 0LL;
  v18 = 0;
  if ( a3 )
    *a3 = 1;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v29;
  if ( RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL)) >= 0
    && RtlUnicodeStringValidateDestWorker(
         &DestinationString,
         &ppszDest,
         &pcchDest,
         &pcchDestLength,
         *(const size_t *)Length,
         ResultLength) >= 0 )
  {
    v6 = L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status";
    v7 = 0x7FFFLL;
    v8 = pcchDestLength;
    v9 = 0;
    v10 = 0;
    v11 = pcchDest - pcchDestLength;
    if ( pcchDest == pcchDestLength )
      goto LABEL_25;
    v12 = (char *)ppszDest
        + 2 * pcchDestLength
        - (_QWORD)L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status";
    while ( v7 && *v6 )
    {
      *(const wchar_t *)((char *)v6 + (_QWORD)v12) = *v6;
      --v7;
      ++v6;
      ++v9;
      if ( !--v11 )
        goto LABEL_23;
    }
    if ( v11 )
      goto LABEL_12;
LABEL_23:
    if ( v7 && *v6 )
LABEL_25:
      v10 = -2147483643;
LABEL_12:
    DestinationString.Length = 2 * (v8 + v9);
    if ( v10 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Enabled");
        if ( a2 )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v18) < 0
            || v26 != 4
            || v27 != 4 )
          {
            goto LABEL_21;
          }
          if ( !v28 )
            *a3 = 0;
        }
        else if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u) < 0 )
        {
          goto LABEL_21;
        }
        v3 = 1;
LABEL_21:
        ZwClose(KeyHandle);
      }
    }
  }
  return v3;
}
