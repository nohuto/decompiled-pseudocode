/*
 * XREFs of InitScancodeMap @ 0x1C0060090
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     FastGetProfileValue @ 0x1C0060EF0 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C00616E0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

int InitScancodeMap()
{
  const WCHAR *v0; // rdi
  void *v1; // rbx
  NTSTATUS v2; // eax
  ULONG v3; // ebx
  const WCHAR *v4; // rdi
  void *v5; // rax
  void *v6; // rbx
  ULONG v7; // ebx
  void *v8; // rax
  __int64 v9; // rdi
  struct tagSCANCODEFLEXIBLEMAP *v10; // rdi
  ULONG Length; // [rsp+48h] [rbp-49h] BYREF
  int v13; // [rsp+4Ch] [rbp-45h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  __int64 KeyValueInformation; // [rsp+60h] [rbp-31h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-29h] BYREF
  _WORD v17[40]; // [rsp+78h] [rbp-19h] BYREF

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v0 = L"Scancode Map";
  DestinationString.Buffer = 0LL;
  KeyValueInformation = 0LL;
  Size[0] = 0LL;
  v13 = gdwPolicyFlags;
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v17[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v17);
    v0 = v17;
  }
  while ( 1 )
  {
    v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
    if ( !v1 )
      goto LABEL_10;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v0);
    v2 = ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v2 >= 0 )
    {
      Length = Size[0];
      memmove(0LL, (char *)Size + 4, LODWORD(Size[0]));
      ZwClose(v1);
      v3 = Length;
      goto LABEL_11;
    }
    if ( v2 == -2147483643 )
      break;
    if ( !v13 )
    {
      ZwClose(v1);
LABEL_10:
      v3 = 0;
      goto LABEL_11;
    }
    ZwClose(v1);
  }
  ZwClose(v1);
  v3 = Size[0];
LABEL_11:
  if ( v3 - 13 <= 0xFFF1 )
  {
    v8 = Win32AllocPoolZInit(v3 + 8LL, 1835234133LL);
    v9 = (__int64)v8;
    if ( v8 )
    {
      FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, v8, v3, 0);
      gpScancodeMap = v9;
    }
  }
  if ( gpFlexMap )
  {
    Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = L"Scancode Map Ex";
  DestinationString.Buffer = 0LL;
  KeyValueInformation = 0LL;
  Size[0] = 0LL;
  v13 = gdwPolicyFlags;
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v17[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v17);
    v4 = v17;
  }
  while ( 1 )
  {
    v5 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
    v6 = v5;
    if ( !v5 )
      goto LABEL_22;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v4);
    LODWORD(v5) = ZwQueryValueKey(
                    v6,
                    &DestinationString,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    Length,
                    &Length);
    if ( (int)v5 >= 0 )
    {
      Length = Size[0];
      memmove(0LL, (char *)Size + 4, LODWORD(Size[0]));
      LODWORD(v5) = ZwClose(v6);
      v7 = Length;
      goto LABEL_23;
    }
    if ( (_DWORD)v5 == -2147483643 )
      break;
    if ( !v13 )
    {
      if ( v6 )
        LODWORD(v5) = ZwClose(v6);
LABEL_22:
      v7 = 0;
      goto LABEL_23;
    }
    ZwClose(v6);
  }
  LODWORD(v5) = ZwClose(v6);
  v7 = Size[0];
LABEL_23:
  if ( v7 >= 0x10 && (v7 & 0xF) == 0 )
  {
    v5 = Win32AllocPoolZInit(v7, 1835234133LL);
    v10 = (struct tagSCANCODEFLEXIBLEMAP *)v5;
    if ( v5 )
    {
      LODWORD(v5) = FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, v5, v7, 0);
      gdwFlexMapSize = v7 >> 4;
      gpFlexMap = v10;
    }
  }
  return (int)v5;
}
