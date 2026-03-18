/*
 * XREFs of GetNlsTablePath @ 0x1C0249584
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     StringCchCatW @ 0x1C0249738 (StringCchCatW.c)
 */

_BOOL8 __fastcall GetNlsTablePath(unsigned int a1, wchar_t *a2)
{
  BOOL v4; // ebx
  wchar_t *v5; // rdi
  __int64 v6; // r9
  wchar_t *v7; // rdx
  wchar_t v8; // ax
  wchar_t *v9; // rax
  ULONG Length; // [rsp+30h] [rbp-98h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-78h] BYREF
  wchar_t Dst[20]; // [rsp+80h] [rbp-48h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v5 = (wchar_t *)PALLOCMEM2(0x220uLL, 1936485959LL, 1);
    if ( v5 )
    {
      swprintf_s(Dst, 0x14uLL, L"%d", a1);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v5, Length, &Length) >= 0 )
      {
        v6 = 260LL;
        v7 = a2;
        do
        {
          if ( v6 == -2147483386 )
            break;
          v8 = *(wchar_t *)((char *)v7 + (char *)L"\\SystemRoot\\System32\\" - (char *)a2);
          if ( !v8 )
            break;
          *v7++ = v8;
          --v6;
        }
        while ( v6 );
        v9 = v7 - 1;
        if ( v6 )
          v9 = v7;
        LOBYTE(v4) = v6 != 0;
        *v9 = 0;
        if ( v6 )
          v4 = StringCchCatW(a2, (size_t)v7, v5 + 6) >= 0;
      }
      Win32FreePool(v5);
    }
    ZwClose(KeyHandle);
  }
  return v4;
}
